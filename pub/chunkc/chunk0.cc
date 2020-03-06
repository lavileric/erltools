/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chunk.h"



#line 207 "chunk.met"

#line 207 "chunk.met"
int chunk::SortKeyWord (int defaultValue)
#line 207 "chunk.met"
{
#line 207 "chunk.met"
    register int Value;
#line 207 "chunk.met"
    Value = strcmp(lexEl.string(),"long");
#line 207 "chunk.met"
    if (Value > 0) {
#line 207 "chunk.met"
        Value = strcmp(lexEl.string(),"switch");
#line 207 "chunk.met"
        if (Value > 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"unsigned");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"void");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"while");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"volatile")) {
#line 207 "chunk.met"
                            return(VOLATILE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(WHILE);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"va_arg");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"virtual")) {
#line 207 "chunk.met"
                            return(VIRTUAL) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"using")) {
#line 207 "chunk.met"
                            return(USING) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(VA_ARG);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(VOID);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"typedef");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"union");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"typename")) {
#line 207 "chunk.met"
                            return(TYPENAME) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(UNION);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"throw");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"try")) {
#line 207 "chunk.met"
                            return(TRY) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"template")) {
#line 207 "chunk.met"
                            return(TEMPLATE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(THROW);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(TYPEDEF);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(UNSIGNED);
#line 207 "chunk.met"
        } else if (Value < 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"register");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"sizeof");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"struct");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"static")) {
#line 207 "chunk.met"
                            return(STATIC) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(STRUCT);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"short");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"signed")) {
#line 207 "chunk.met"
                            return(SIGNED) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"return")) {
#line 207 "chunk.met"
                            return(RETURN) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(SHORT);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(SIZEOF);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"private");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"public");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"protected")) {
#line 207 "chunk.met"
                            return(PROTECTED) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(PUBLIC);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"new");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"operator")) {
#line 207 "chunk.met"
                            return(OPERATOR) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"namespace")) {
#line 207 "chunk.met"
                            return(NAMESPACE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(NEW);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(PRIVATE);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(REGISTER);
#line 207 "chunk.met"
        } else 
#line 207 "chunk.met"
            return(SWITCH);
#line 207 "chunk.met"
    } else if (Value < 0) {
#line 207 "chunk.met"
        Value = strcmp(lexEl.string(),"delete");
#line 207 "chunk.met"
        if (Value > 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"for");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"if");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"int");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"inline")) {
#line 207 "chunk.met"
                            return(INLINE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(INT);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"friend");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"goto")) {
#line 207 "chunk.met"
                            return(GOTO) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"forallsons")) {
#line 207 "chunk.met"
                            return(FORALLSONS) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(FRIEND);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(IF);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"enum");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"float");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"extern")) {
#line 207 "chunk.met"
                            return(EXTERN) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(FLOAT);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"double");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"else")) {
#line 207 "chunk.met"
                            return(ELSE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"do")) {
#line 207 "chunk.met"
                            return(DO) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(DOUBLE);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(ENUM);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(FOR);
#line 207 "chunk.met"
        } else if (Value < 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"catch");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"continue");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"default");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"decltype")) {
#line 207 "chunk.met"
                            return(DECLTYPE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(DEFAULT);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"class");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"const")) {
#line 207 "chunk.met"
                            return(CONST) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"char")) {
#line 207 "chunk.met"
                            return(CHAR) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(CLASS);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(CONTINUE);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"auto");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"case");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"break")) {
#line 207 "chunk.met"
                            return(BREAK) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(CASE);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"__attribute__");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"asm")) {
#line 207 "chunk.met"
                            return(ASM) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"+____------____")) {
#line 207 "chunk.met"
                            return(PLUS____TIRETIRETIRETIRETIRETIRE____) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(__ATTRIBUTE__);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(AUTO);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(CATCH);
#line 207 "chunk.met"
        } else 
#line 207 "chunk.met"
            return(DELETE);
#line 207 "chunk.met"
    } else 
#line 207 "chunk.met"
        return(LONG);
#line 207 "chunk.met"
    return(defaultValue);
#line 207 "chunk.met"
}
#line 207 "chunk.met"

#line 207 "chunk.met"
int chunk::UpSortKeyWord(int value) 
#line 207 "chunk.met"
{
#line 207 "chunk.met"
    register char * ptSource=lexEl.string();
#line 207 "chunk.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 207 "chunk.met"
    return SortKeyWord (value);
#line 207 "chunk.met"
}
#line 207 "chunk.met"
#line 303 "chunk.met"
int chunk::Lex ()
#line 303 "chunk.met"
{
#line 303 "chunk.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 303 "chunk.met"
        FreePos(lastContextPos);
#line 303 "chunk.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 303 "chunk.met"
    if ( tokenAhead && tokenAhead != -1)
#line 303 "chunk.met"
        ExtUnputBuf();
#line 303 "chunk.met"
    #ifdef DUMP_COORD
#line 303 "chunk.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 303 "chunk.met"
    #endif
#line 303 "chunk.met"
    
#line 303 "chunk.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 303 "chunk.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 303 "chunk.met"
    tokenAhead = 0;
#line 303 "chunk.met"
    if(LexMeta() != -1){tokenAhead =1; return 1;}
#line 303 "chunk.met"
#line 306 "chunk.met"
    if (! (keepCarriage)){
#line 306 "chunk.met"
#line 307 "chunk.met"
#line 308 "chunk.met"
        ptStockBuf = -1;
#line 308 "chunk.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 308 "chunk.met"
            NextChar() ;
#line 308 "chunk.met"
        ptStockBuf = -1;
#line 308 "chunk.met"
        lexEl.Erase();
#line 308 "chunk.met"
        tokenAhead = 0;
#line 308 "chunk.met"
        oldLine=line,oldCol=col;
#line 308 "chunk.met"
        if ( !lexCallLex) {
#line 308 "chunk.met"
            PUT_COORD_CALL;
#line 308 "chunk.met"
        }
#line 308 "chunk.met"
#line 308 "chunk.met"
#line 308 "chunk.met"
    } else {
#line 308 "chunk.met"
#line 311 "chunk.met"
        if (! (keepAll)){
#line 311 "chunk.met"
#line 312 "chunk.met"
#line 313 "chunk.met"
            ptStockBuf = -1;
#line 313 "chunk.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 313 "chunk.met"
                NextChar() ;
#line 313 "chunk.met"
            ptStockBuf = -1;
#line 313 "chunk.met"
            lexEl.Erase();
#line 313 "chunk.met"
            tokenAhead = 0;
#line 313 "chunk.met"
            oldLine=line,oldCol=col;
#line 313 "chunk.met"
            if ( !lexCallLex) {
#line 313 "chunk.met"
                PUT_COORD_CALL;
#line 313 "chunk.met"
            }
#line 313 "chunk.met"
#line 313 "chunk.met"
#line 313 "chunk.met"
        } else {
#line 313 "chunk.met"
#line 316 "chunk.met"
            ptStockBuf = -1;
#line 316 "chunk.met"
            lexEl.Erase();
#line 316 "chunk.met"
            tokenAhead = 0;
#line 316 "chunk.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 316 "chunk.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 316 "chunk.met"
        }
#line 316 "chunk.met"
    }
#line 316 "chunk.met"
#line 317 "chunk.met"
    int keepCurrCol = col ;
#line 317 "chunk.met"
    switch(c) {
#line 317 "chunk.met"
        case '*' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::ETOIEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken50 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::ETOI;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '&' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::ETCOEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '&' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::ETCOETCO;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken52 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::ETCO;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '~' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::TILD;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '(' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::POUV;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case ')' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::PFER;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '+' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::PLUSEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '+' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::PLUSPLUS;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken58 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::PLUS;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '-' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::TIREEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '-' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::TIRETIRE;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '>' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    switch(c) {
#line 317 "chunk.met"
                        case '*' :
#line 317 "chunk.met"
                            NextChar();
#line 317 "chunk.met"
                            lexEl.Value = chunk::TIRESUPEETOI;
#line 317 "chunk.met"
                            firstOnLine = 0;
#line 317 "chunk.met"
                            tokenAhead = 1;
#line 317 "chunk.met"
                            PUT_COORD_CALL;
#line 317 "chunk.met"
                            return(1);
#line 317 "chunk.met"
                            break;
#line 317 "chunk.met"
                        _exitDumpToken64 :;
#line 317 "chunk.met"
                        default :
#line 317 "chunk.met"
                            lexEl.Value = chunk::TIRESUPE;
#line 317 "chunk.met"
                            firstOnLine = 0;
#line 317 "chunk.met"
                            tokenAhead = 1;
#line 317 "chunk.met"
                            PUT_COORD_CALL;
#line 317 "chunk.met"
                        
#line 317 "chunk.met"
                            return(1);
#line 317 "chunk.met"
                    }
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken61 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::TIRE;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case ':' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case ':' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::DPOIDPOI;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken66 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::DPOI;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case ',' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::VIRG;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '.' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '.' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    if (GetStringS(".",1)) {
#line 317 "chunk.met"
                        lexEl.Value = chunk::POINPOINPOIN;
#line 317 "chunk.met"
                        firstOnLine = 0;
#line 317 "chunk.met"
                        tokenAhead = 1;
#line 317 "chunk.met"
                        PUT_COORD_CALL;
#line 317 "chunk.met"
                        return(1);
#line 317 "chunk.met"
                    } else {
#line 317 "chunk.met"
                        UnputChar(1);
#line 317 "chunk.met"
                        goto _exitDumpToken69;
#line 317 "chunk.met"
                    }
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '*' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::POINETOI;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken69 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    UnputChar(1);
#line 317 "chunk.met"
                goto _exitDumpToken0;
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '=' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::EGALEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken72 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::EGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '%' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::POURCEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken74 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::POURC;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '<' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '<' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    switch(c) {
#line 317 "chunk.met"
                        case '=' :
#line 317 "chunk.met"
                            NextChar();
#line 317 "chunk.met"
                            lexEl.Value = chunk::INFEINFEEGAL;
#line 317 "chunk.met"
                            firstOnLine = 0;
#line 317 "chunk.met"
                            tokenAhead = 1;
#line 317 "chunk.met"
                            PUT_COORD_CALL;
#line 317 "chunk.met"
                            return(1);
#line 317 "chunk.met"
                            break;
#line 317 "chunk.met"
                        _exitDumpToken77 :;
#line 317 "chunk.met"
                        default :
#line 317 "chunk.met"
                            lexEl.Value = chunk::INFEINFE;
#line 317 "chunk.met"
                            firstOnLine = 0;
#line 317 "chunk.met"
                            tokenAhead = 1;
#line 317 "chunk.met"
                            PUT_COORD_CALL;
#line 317 "chunk.met"
                        
#line 317 "chunk.met"
                            return(1);
#line 317 "chunk.met"
                    }
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::INFEEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken76 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::INFE;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '>' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '>' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    switch(c) {
#line 317 "chunk.met"
                        case '=' :
#line 317 "chunk.met"
                            NextChar();
#line 317 "chunk.met"
                            lexEl.Value = chunk::SUPESUPEEGAL;
#line 317 "chunk.met"
                            firstOnLine = 0;
#line 317 "chunk.met"
                            tokenAhead = 1;
#line 317 "chunk.met"
                            PUT_COORD_CALL;
#line 317 "chunk.met"
                            return(1);
#line 317 "chunk.met"
                            break;
#line 317 "chunk.met"
                        _exitDumpToken81 :;
#line 317 "chunk.met"
                        default :
#line 317 "chunk.met"
                            lexEl.Value = chunk::SUPESUPE;
#line 317 "chunk.met"
                            firstOnLine = 0;
#line 317 "chunk.met"
                            tokenAhead = 1;
#line 317 "chunk.met"
                            PUT_COORD_CALL;
#line 317 "chunk.met"
                        
#line 317 "chunk.met"
                            return(1);
#line 317 "chunk.met"
                    }
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::SUPEEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken80 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::SUPE;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '|' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::VBAREGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                case '|' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::VBARVBAR;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken84 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::VBAR;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '^' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::CHAPEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken87 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::CHAP;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '{' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::AOUV;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '}' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::AFER;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '?' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::INTE;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case ';' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::PVIR;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '[' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::COUV;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case ']' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            lexEl.Value = chunk::CFER;
#line 317 "chunk.met"
            firstOnLine = 0;
#line 317 "chunk.met"
            tokenAhead = 1;
#line 317 "chunk.met"
            PUT_COORD_CALL;
#line 317 "chunk.met"
            return(1);
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '!' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            switch(c) {
#line 317 "chunk.met"
                case '=' :
#line 317 "chunk.met"
                    NextChar();
#line 317 "chunk.met"
                    lexEl.Value = chunk::EXCLEGAL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
                    break;
#line 317 "chunk.met"
                _exitDumpToken95 :;
#line 317 "chunk.met"
                default :
#line 317 "chunk.met"
                    lexEl.Value = chunk::EXCL;
#line 317 "chunk.met"
                    firstOnLine = 0;
#line 317 "chunk.met"
                    tokenAhead = 1;
#line 317 "chunk.met"
                    PUT_COORD_CALL;
#line 317 "chunk.met"
                
#line 317 "chunk.met"
                    return(1);
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        case '_' :
#line 317 "chunk.met"
            NextChar();
#line 317 "chunk.met"
            if (GetStringS("_extension__",1)) {
#line 317 "chunk.met"
                lexEl.Value = chunk::__EXTENSION__;
#line 317 "chunk.met"
                firstOnLine = 0;
#line 317 "chunk.met"
                tokenAhead = 1;
#line 317 "chunk.met"
                PUT_COORD_CALL;
#line 317 "chunk.met"
                return(1);
#line 317 "chunk.met"
            } else {
#line 317 "chunk.met"
                UnputChar(1);
#line 317 "chunk.met"
                goto _exitDumpToken0;
#line 317 "chunk.met"
            }
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
        _exitDumpToken0 :;
#line 317 "chunk.met"
        default :
#line 317 "chunk.met"
            break;
#line 317 "chunk.met"
    }
#line 317 "chunk.met"
    col = keepCurrCol ;
#line 317 "chunk.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 317 "chunk.met"
    lexEl.Erase();
#line 317 "chunk.met"
    tokenAhead = 0;
#line 317 "chunk.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 317 "chunk.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 317 "chunk.met"
#line 318 "chunk.met"
    switch (c) {
#line 318 "chunk.met"
#line 319 "chunk.met"
        case 'a' :
#line 319 "chunk.met"
        case 'b' :
#line 319 "chunk.met"
        case 'c' :
#line 319 "chunk.met"
        case 'd' :
#line 319 "chunk.met"
        case 'e' :
#line 319 "chunk.met"
        case 'f' :
#line 319 "chunk.met"
        case 'g' :
#line 319 "chunk.met"
        case 'h' :
#line 319 "chunk.met"
        case 'i' :
#line 319 "chunk.met"
        case 'j' :
#line 319 "chunk.met"
        case 'k' :
#line 319 "chunk.met"
        case 'l' :
#line 319 "chunk.met"
        case 'm' :
#line 319 "chunk.met"
        case 'n' :
#line 319 "chunk.met"
        case 'o' :
#line 319 "chunk.met"
        case 'p' :
#line 319 "chunk.met"
        case 'q' :
#line 319 "chunk.met"
        case 'r' :
#line 319 "chunk.met"
        case 's' :
#line 319 "chunk.met"
        case 't' :
#line 319 "chunk.met"
        case 'u' :
#line 319 "chunk.met"
        case 'v' :
#line 319 "chunk.met"
        case 'w' :
#line 319 "chunk.met"
        case 'x' :
#line 319 "chunk.met"
        case 'y' :
#line 319 "chunk.met"
        case 'z' :
#line 319 "chunk.met"
        case 'A' :
#line 319 "chunk.met"
        case 'B' :
#line 319 "chunk.met"
        case 'C' :
#line 319 "chunk.met"
        case 'D' :
#line 319 "chunk.met"
        case 'E' :
#line 319 "chunk.met"
        case 'F' :
#line 319 "chunk.met"
        case 'G' :
#line 319 "chunk.met"
        case 'H' :
#line 319 "chunk.met"
        case 'I' :
#line 319 "chunk.met"
        case 'J' :
#line 319 "chunk.met"
        case 'K' :
#line 319 "chunk.met"
        case 'L' :
#line 319 "chunk.met"
        case 'M' :
#line 319 "chunk.met"
        case 'N' :
#line 319 "chunk.met"
        case 'O' :
#line 319 "chunk.met"
        case 'P' :
#line 319 "chunk.met"
        case 'Q' :
#line 319 "chunk.met"
        case 'R' :
#line 319 "chunk.met"
        case 'S' :
#line 319 "chunk.met"
        case 'T' :
#line 319 "chunk.met"
        case 'U' :
#line 319 "chunk.met"
        case 'V' :
#line 319 "chunk.met"
        case 'W' :
#line 319 "chunk.met"
        case 'X' :
#line 319 "chunk.met"
        case 'Y' :
#line 319 "chunk.met"
        case 'Z' :
#line 319 "chunk.met"
        case '_' :
#line 319 "chunk.met"
#line 320 "chunk.met"
#line 322 "chunk.met"
            while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 322 "chunk.met"
#line 323 "chunk.met"
                {
#line 323 "chunk.met"
                    lexEl . AddChar(c);
#line 323 "chunk.met"
                    NextChar();
#line 323 "chunk.met"
                }
#line 323 "chunk.met"
            } 
#line 323 "chunk.met"
#line 324 "chunk.met"
            {
#line 324 "chunk.met"
                firstOnLine = 0 ; 
#line 324 "chunk.met"
                tokenAhead =1;
#line 324 "chunk.met"
                lexEl.Value = (SortKeyWord (IDENT));
#line 324 "chunk.met"
                PUT_COORD_CALL;
#line 324 "chunk.met"
                return(1);
#line 324 "chunk.met"
            }
#line 324 "chunk.met"
#line 324 "chunk.met"
            break ;
#line 324 "chunk.met"
#line 326 "chunk.met"
        case '"' :
#line 326 "chunk.met"
#line 327 "chunk.met"
            if (noString){
#line 327 "chunk.met"
#line 328 "chunk.met"
#line 329 "chunk.met"
                {
#line 329 "chunk.met"
                    lexEl . AddChar(c);
#line 329 "chunk.met"
                    NextChar();
#line 329 "chunk.met"
                }
#line 329 "chunk.met"
#line 330 "chunk.met"
                {
#line 330 "chunk.met"
                    firstOnLine = 0 ; 
#line 330 "chunk.met"
                    tokenAhead =1;
#line 330 "chunk.met"
                    lexEl.Value=DQUOTE;
#line 330 "chunk.met"
                    PUT_COORD_CALL;
#line 330 "chunk.met"
                    return(1);
#line 330 "chunk.met"
                }
#line 330 "chunk.met"
#line 330 "chunk.met"
#line 330 "chunk.met"
            } else {
#line 330 "chunk.met"
#line 333 "chunk.met"
#line 334 "chunk.met"
                if (!(((c == '"'))&& NextChar())) ;
#line 334 "chunk.met"
#line 336 "chunk.met"
                while (c != EOF) { 
#line 336 "chunk.met"
#line 338 "chunk.met"
                    switch (c) {
#line 338 "chunk.met"
#line 339 "chunk.met"
                        case '\r' :
#line 339 "chunk.met"
                        case '\n' :
#line 339 "chunk.met"
#line 339 "chunk.met"
                            {
#line 339 "chunk.met"
                                firstOnLine = 0 ; 
#line 339 "chunk.met"
                                tokenAhead =1;
#line 339 "chunk.met"
                                lexEl.Value=STRING;
#line 339 "chunk.met"
                                PUT_COORD_CALL;
#line 339 "chunk.met"
                                return(1);
#line 339 "chunk.met"
                            }
#line 339 "chunk.met"
                            break ;
#line 339 "chunk.met"
#line 340 "chunk.met"
                        case '"' :
#line 340 "chunk.met"
                            NextChar();
#line 340 "chunk.met"
#line 340 "chunk.met"
                            {
#line 340 "chunk.met"
                                firstOnLine = 0 ; 
#line 340 "chunk.met"
                                tokenAhead =1;
#line 340 "chunk.met"
                                lexEl.Value=STRING;
#line 340 "chunk.met"
                                PUT_COORD_CALL;
#line 340 "chunk.met"
                                return(1);
#line 340 "chunk.met"
                            }
#line 340 "chunk.met"
                            break ;
#line 340 "chunk.met"
#line 341 "chunk.met"
                        case '\\' :
#line 341 "chunk.met"
                            NextChar();
#line 341 "chunk.met"
#line 342 "chunk.met"
#line 343 "chunk.met"
                            {
#line 343 "chunk.met"
                                lexEl.AddString("\\");
#line 343 "chunk.met"
                            }
#line 343 "chunk.met"
#line 344 "chunk.met"
                            if (! (((c == '\r')))){
#line 344 "chunk.met"
#line 347 "chunk.met"
                                {
#line 347 "chunk.met"
                                    lexEl . AddChar(c);
#line 347 "chunk.met"
                                    NextChar();
#line 347 "chunk.met"
                                }
#line 347 "chunk.met"
                            } else {
#line 347 "chunk.met"
#line 350 "chunk.met"
                                if (!(c != EOF&& NextChar())) ;
#line 350 "chunk.met"
                            }
#line 350 "chunk.met"
#line 350 "chunk.met"
                            break ;
#line 350 "chunk.met"
#line 352 "chunk.met"
                        default : 
#line 352 "chunk.met"
                             if (c!= EOF) {
#line 352 "chunk.met"
#line 352 "chunk.met"
                                {
#line 352 "chunk.met"
                                    lexEl . AddChar(c);
#line 352 "chunk.met"
                                    NextChar();
#line 352 "chunk.met"
                                }
#line 352 "chunk.met"
                            }
#line 352 "chunk.met"
                            break ;
#line 352 "chunk.met"
                    }
#line 352 "chunk.met"
                } 
#line 352 "chunk.met"
#line 352 "chunk.met"
            }
#line 352 "chunk.met"
            break ;
#line 352 "chunk.met"
#line 355 "chunk.met"
        case '\'' :
#line 355 "chunk.met"
            NextChar();
#line 355 "chunk.met"
#line 357 "chunk.met"
            while (c != EOF) { 
#line 357 "chunk.met"
#line 359 "chunk.met"
                switch (c) {
#line 359 "chunk.met"
#line 360 "chunk.met"
                    case '\\' :
#line 360 "chunk.met"
                        NextChar();
#line 360 "chunk.met"
#line 361 "chunk.met"
#line 362 "chunk.met"
                        {
#line 362 "chunk.met"
                            lexEl.AddString("\\");
#line 362 "chunk.met"
                        }
#line 362 "chunk.met"
#line 363 "chunk.met"
                        {
#line 363 "chunk.met"
                            lexEl . AddChar(c);
#line 363 "chunk.met"
                            NextChar();
#line 363 "chunk.met"
                        }
#line 363 "chunk.met"
#line 363 "chunk.met"
                        break ;
#line 363 "chunk.met"
#line 365 "chunk.met"
                    case '\'' :
#line 365 "chunk.met"
                        NextChar();
#line 365 "chunk.met"
#line 366 "chunk.met"
#line 367 "chunk.met"
                        {
#line 367 "chunk.met"
                            firstOnLine = 0 ; 
#line 367 "chunk.met"
                            tokenAhead =1;
#line 367 "chunk.met"
                            lexEl.Value=CHARACT;
#line 367 "chunk.met"
                            PUT_COORD_CALL;
#line 367 "chunk.met"
                            return(1);
#line 367 "chunk.met"
                        }
#line 367 "chunk.met"
#line 367 "chunk.met"
                        break ;
#line 367 "chunk.met"
#line 369 "chunk.met"
                    default : 
#line 369 "chunk.met"
                         if (c!= EOF) {
#line 369 "chunk.met"
#line 369 "chunk.met"
                            {
#line 369 "chunk.met"
                                lexEl . AddChar(c);
#line 369 "chunk.met"
                                NextChar();
#line 369 "chunk.met"
                            }
#line 369 "chunk.met"
                        }
#line 369 "chunk.met"
                        break ;
#line 369 "chunk.met"
                }
#line 369 "chunk.met"
            } 
#line 369 "chunk.met"
            break ;
#line 369 "chunk.met"
#line 371 "chunk.met"
        case '1' :
#line 371 "chunk.met"
        case '2' :
#line 371 "chunk.met"
        case '3' :
#line 371 "chunk.met"
        case '4' :
#line 371 "chunk.met"
        case '5' :
#line 371 "chunk.met"
        case '6' :
#line 371 "chunk.met"
        case '7' :
#line 371 "chunk.met"
        case '8' :
#line 371 "chunk.met"
        case '9' :
#line 371 "chunk.met"
#line 373 "chunk.met"
#line 375 "chunk.met"
            while ((('0' <= c && c <= '9'))) { 
#line 375 "chunk.met"
#line 376 "chunk.met"
                {
#line 376 "chunk.met"
                    lexEl . AddChar(c);
#line 376 "chunk.met"
                    NextChar();
#line 376 "chunk.met"
                }
#line 376 "chunk.met"
            } 
#line 376 "chunk.met"
#line 377 "chunk.met"
            switch (c) {
#line 377 "chunk.met"
#line 378 "chunk.met"
                case 'l' :
#line 378 "chunk.met"
                case 'L' :
#line 378 "chunk.met"
                    NextChar();
#line 378 "chunk.met"
#line 379 "chunk.met"
                    switch (c) {
#line 379 "chunk.met"
#line 380 "chunk.met"
                        case 'u' :
#line 380 "chunk.met"
                        case 'U' :
#line 380 "chunk.met"
                            NextChar();
#line 380 "chunk.met"
#line 380 "chunk.met"
                            {
#line 380 "chunk.met"
                                firstOnLine = 0 ; 
#line 380 "chunk.met"
                                tokenAhead =1;
#line 380 "chunk.met"
                                lexEl.Value=ULINTEGER;
#line 380 "chunk.met"
                                PUT_COORD_CALL;
#line 380 "chunk.met"
                                return(1);
#line 380 "chunk.met"
                            }
#line 380 "chunk.met"
                            break ;
#line 380 "chunk.met"
#line 381 "chunk.met"
                        case 'L' :
#line 381 "chunk.met"
                        case 'l' :
#line 381 "chunk.met"
                            NextChar();
#line 381 "chunk.met"
#line 382 "chunk.met"
#line 383 "chunk.met"
                            switch (c) {
#line 383 "chunk.met"
#line 384 "chunk.met"
                                case 'u' :
#line 384 "chunk.met"
                                case 'U' :
#line 384 "chunk.met"
                                    NextChar();
#line 384 "chunk.met"
#line 384 "chunk.met"
                                    {
#line 384 "chunk.met"
                                        firstOnLine = 0 ; 
#line 384 "chunk.met"
                                        tokenAhead =1;
#line 384 "chunk.met"
                                        lexEl.Value=ULLINTEGER;
#line 384 "chunk.met"
                                        PUT_COORD_CALL;
#line 384 "chunk.met"
                                        return(1);
#line 384 "chunk.met"
                                    }
#line 384 "chunk.met"
                                    break ;
#line 384 "chunk.met"
#line 385 "chunk.met"
                                default : 
#line 385 "chunk.met"
                                     if (c!= EOF) {
#line 385 "chunk.met"
#line 385 "chunk.met"
                                        {
#line 385 "chunk.met"
                                            firstOnLine = 0 ; 
#line 385 "chunk.met"
                                            tokenAhead =1;
#line 385 "chunk.met"
                                            lexEl.Value=LLINTEGER;
#line 385 "chunk.met"
                                            PUT_COORD_CALL;
#line 385 "chunk.met"
                                            return(1);
#line 385 "chunk.met"
                                        }
#line 385 "chunk.met"
                                    }
#line 385 "chunk.met"
                                    break ;
#line 385 "chunk.met"
                            }
#line 385 "chunk.met"
#line 385 "chunk.met"
                            break ;
#line 385 "chunk.met"
#line 388 "chunk.met"
                        default : 
#line 388 "chunk.met"
                             if (c!= EOF) {
#line 388 "chunk.met"
#line 388 "chunk.met"
                                {
#line 388 "chunk.met"
                                    firstOnLine = 0 ; 
#line 388 "chunk.met"
                                    tokenAhead =1;
#line 388 "chunk.met"
                                    lexEl.Value=LINTEGER;
#line 388 "chunk.met"
                                    PUT_COORD_CALL;
#line 388 "chunk.met"
                                    return(1);
#line 388 "chunk.met"
                                }
#line 388 "chunk.met"
                            }
#line 388 "chunk.met"
                            break ;
#line 388 "chunk.met"
                    }
#line 388 "chunk.met"
                    break ;
#line 388 "chunk.met"
#line 390 "chunk.met"
                case 'u' :
#line 390 "chunk.met"
                case 'U' :
#line 390 "chunk.met"
                    NextChar();
#line 390 "chunk.met"
#line 391 "chunk.met"
                    switch (c) {
#line 391 "chunk.met"
#line 392 "chunk.met"
                        case 'l' :
#line 392 "chunk.met"
                        case 'L' :
#line 392 "chunk.met"
                            NextChar();
#line 392 "chunk.met"
#line 393 "chunk.met"
#line 394 "chunk.met"
                            switch (c) {
#line 394 "chunk.met"
#line 395 "chunk.met"
                                case 'L' :
#line 395 "chunk.met"
                                case 'l' :
#line 395 "chunk.met"
                                    NextChar();
#line 395 "chunk.met"
#line 395 "chunk.met"
                                    {
#line 395 "chunk.met"
                                        firstOnLine = 0 ; 
#line 395 "chunk.met"
                                        tokenAhead =1;
#line 395 "chunk.met"
                                        lexEl.Value=ULLINTEGER;
#line 395 "chunk.met"
                                        PUT_COORD_CALL;
#line 395 "chunk.met"
                                        return(1);
#line 395 "chunk.met"
                                    }
#line 395 "chunk.met"
                                    break ;
#line 395 "chunk.met"
#line 396 "chunk.met"
                                default : 
#line 396 "chunk.met"
                                     if (c!= EOF) {
#line 396 "chunk.met"
#line 396 "chunk.met"
                                        {
#line 396 "chunk.met"
                                            firstOnLine = 0 ; 
#line 396 "chunk.met"
                                            tokenAhead =1;
#line 396 "chunk.met"
                                            lexEl.Value=ULINTEGER;
#line 396 "chunk.met"
                                            PUT_COORD_CALL;
#line 396 "chunk.met"
                                            return(1);
#line 396 "chunk.met"
                                        }
#line 396 "chunk.met"
                                    }
#line 396 "chunk.met"
                                    break ;
#line 396 "chunk.met"
                            }
#line 396 "chunk.met"
#line 396 "chunk.met"
                            break ;
#line 396 "chunk.met"
#line 399 "chunk.met"
                        default : 
#line 399 "chunk.met"
                             if (c!= EOF) {
#line 399 "chunk.met"
#line 399 "chunk.met"
                                {
#line 399 "chunk.met"
                                    firstOnLine = 0 ; 
#line 399 "chunk.met"
                                    tokenAhead =1;
#line 399 "chunk.met"
                                    lexEl.Value=UINTEGER;
#line 399 "chunk.met"
                                    PUT_COORD_CALL;
#line 399 "chunk.met"
                                    return(1);
#line 399 "chunk.met"
                                }
#line 399 "chunk.met"
                            }
#line 399 "chunk.met"
                            break ;
#line 399 "chunk.met"
                    }
#line 399 "chunk.met"
                    break ;
#line 399 "chunk.met"
#line 401 "chunk.met"
                case 'e' :
#line 401 "chunk.met"
                case 'E' :
#line 401 "chunk.met"
                    NextChar();
#line 401 "chunk.met"
#line 402 "chunk.met"
#line 403 "chunk.met"
                    {
#line 403 "chunk.met"
                        lexEl.AddString("e");
#line 403 "chunk.met"
                    }
#line 403 "chunk.met"
#line 404 "chunk.met"
                    if (((c == '+')||(c == '-'))){
#line 404 "chunk.met"
#line 405 "chunk.met"
                        {
#line 405 "chunk.met"
                            lexEl . AddChar(c);
#line 405 "chunk.met"
                            NextChar();
#line 405 "chunk.met"
                        }
#line 405 "chunk.met"
                    }
#line 405 "chunk.met"
#line 406 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 406 "chunk.met"
#line 407 "chunk.met"
                        {
#line 407 "chunk.met"
                            lexEl . AddChar(c);
#line 407 "chunk.met"
                            NextChar();
#line 407 "chunk.met"
                        }
#line 407 "chunk.met"
                    } 
#line 407 "chunk.met"
#line 408 "chunk.met"
                    switch (c) {
#line 408 "chunk.met"
#line 409 "chunk.met"
                        case 'f' :
#line 409 "chunk.met"
#line 409 "chunk.met"
                            {
#line 409 "chunk.met"
                                lexEl . AddChar(c);
#line 409 "chunk.met"
                                NextChar();
#line 409 "chunk.met"
                            }
#line 409 "chunk.met"
                            break ;
#line 409 "chunk.met"
#line 410 "chunk.met"
                        case 'F' :
#line 410 "chunk.met"
#line 410 "chunk.met"
                            {
#line 410 "chunk.met"
                                lexEl . AddChar(c);
#line 410 "chunk.met"
                                NextChar();
#line 410 "chunk.met"
                            }
#line 410 "chunk.met"
                            break ;
#line 410 "chunk.met"
#line 411 "chunk.met"
                        case 'l' :
#line 411 "chunk.met"
#line 411 "chunk.met"
                            {
#line 411 "chunk.met"
                                lexEl . AddChar(c);
#line 411 "chunk.met"
                                NextChar();
#line 411 "chunk.met"
                            }
#line 411 "chunk.met"
                            break ;
#line 411 "chunk.met"
#line 412 "chunk.met"
                        case 'L' :
#line 412 "chunk.met"
#line 412 "chunk.met"
                            {
#line 412 "chunk.met"
                                lexEl . AddChar(c);
#line 412 "chunk.met"
                                NextChar();
#line 412 "chunk.met"
                            }
#line 412 "chunk.met"
                            break ;
#line 412 "chunk.met"
                    }
#line 412 "chunk.met"
#line 414 "chunk.met"
                    {
#line 414 "chunk.met"
                        firstOnLine = 0 ; 
#line 414 "chunk.met"
                        tokenAhead =1;
#line 414 "chunk.met"
                        lexEl.Value=FLOATVAL;
#line 414 "chunk.met"
                        PUT_COORD_CALL;
#line 414 "chunk.met"
                        return(1);
#line 414 "chunk.met"
                    }
#line 414 "chunk.met"
#line 414 "chunk.met"
                    break ;
#line 414 "chunk.met"
#line 416 "chunk.met"
                case '.' :
#line 416 "chunk.met"
#line 417 "chunk.met"
#line 418 "chunk.met"
                    {
#line 418 "chunk.met"
                        lexEl . AddChar(c);
#line 418 "chunk.met"
                        NextChar();
#line 418 "chunk.met"
                    }
#line 418 "chunk.met"
#line 419 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 419 "chunk.met"
#line 420 "chunk.met"
                        {
#line 420 "chunk.met"
                            lexEl . AddChar(c);
#line 420 "chunk.met"
                            NextChar();
#line 420 "chunk.met"
                        }
#line 420 "chunk.met"
                    } 
#line 420 "chunk.met"
#line 421 "chunk.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 421 "chunk.met"
#line 422 "chunk.met"
#line 423 "chunk.met"
                        {
#line 423 "chunk.met"
                            lexEl.AddString("e");
#line 423 "chunk.met"
                        }
#line 423 "chunk.met"
#line 424 "chunk.met"
                        if (((c == '+')||(c == '-'))){
#line 424 "chunk.met"
#line 425 "chunk.met"
                            {
#line 425 "chunk.met"
                                lexEl . AddChar(c);
#line 425 "chunk.met"
                                NextChar();
#line 425 "chunk.met"
                            }
#line 425 "chunk.met"
                        }
#line 425 "chunk.met"
#line 426 "chunk.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 426 "chunk.met"
#line 427 "chunk.met"
                            {
#line 427 "chunk.met"
                                lexEl . AddChar(c);
#line 427 "chunk.met"
                                NextChar();
#line 427 "chunk.met"
                            }
#line 427 "chunk.met"
                        } 
#line 427 "chunk.met"
#line 427 "chunk.met"
#line 427 "chunk.met"
                    }
#line 427 "chunk.met"
#line 429 "chunk.met"
                    switch (c) {
#line 429 "chunk.met"
#line 430 "chunk.met"
                        case 'f' :
#line 430 "chunk.met"
#line 430 "chunk.met"
                            {
#line 430 "chunk.met"
                                lexEl . AddChar(c);
#line 430 "chunk.met"
                                NextChar();
#line 430 "chunk.met"
                            }
#line 430 "chunk.met"
                            break ;
#line 430 "chunk.met"
#line 431 "chunk.met"
                        case 'F' :
#line 431 "chunk.met"
#line 431 "chunk.met"
                            {
#line 431 "chunk.met"
                                lexEl . AddChar(c);
#line 431 "chunk.met"
                                NextChar();
#line 431 "chunk.met"
                            }
#line 431 "chunk.met"
                            break ;
#line 431 "chunk.met"
#line 432 "chunk.met"
                        case 'l' :
#line 432 "chunk.met"
#line 432 "chunk.met"
                            {
#line 432 "chunk.met"
                                lexEl . AddChar(c);
#line 432 "chunk.met"
                                NextChar();
#line 432 "chunk.met"
                            }
#line 432 "chunk.met"
                            break ;
#line 432 "chunk.met"
#line 433 "chunk.met"
                        case 'L' :
#line 433 "chunk.met"
#line 433 "chunk.met"
                            {
#line 433 "chunk.met"
                                lexEl . AddChar(c);
#line 433 "chunk.met"
                                NextChar();
#line 433 "chunk.met"
                            }
#line 433 "chunk.met"
                            break ;
#line 433 "chunk.met"
                    }
#line 433 "chunk.met"
#line 435 "chunk.met"
                    {
#line 435 "chunk.met"
                        firstOnLine = 0 ; 
#line 435 "chunk.met"
                        tokenAhead =1;
#line 435 "chunk.met"
                        lexEl.Value=FLOATVAL;
#line 435 "chunk.met"
                        PUT_COORD_CALL;
#line 435 "chunk.met"
                        return(1);
#line 435 "chunk.met"
                    }
#line 435 "chunk.met"
#line 435 "chunk.met"
                    break ;
#line 435 "chunk.met"
#line 437 "chunk.met"
                default : 
#line 437 "chunk.met"
                     if (c!= EOF) {
#line 437 "chunk.met"
#line 437 "chunk.met"
                        {
#line 437 "chunk.met"
                            firstOnLine = 0 ; 
#line 437 "chunk.met"
                            tokenAhead =1;
#line 437 "chunk.met"
                            lexEl.Value=INTEGER;
#line 437 "chunk.met"
                            PUT_COORD_CALL;
#line 437 "chunk.met"
                            return(1);
#line 437 "chunk.met"
                        }
#line 437 "chunk.met"
                    }
#line 437 "chunk.met"
                    break ;
#line 437 "chunk.met"
            }
#line 437 "chunk.met"
#line 437 "chunk.met"
            break ;
#line 437 "chunk.met"
#line 440 "chunk.met"
        case '0' :
#line 440 "chunk.met"
            NextChar();
#line 440 "chunk.met"
#line 441 "chunk.met"
#line 442 "chunk.met"
            switch (c) {
#line 442 "chunk.met"
#line 443 "chunk.met"
                case 'x' :
#line 443 "chunk.met"
                case 'X' :
#line 443 "chunk.met"
                    NextChar();
#line 443 "chunk.met"
#line 444 "chunk.met"
#line 445 "chunk.met"
                    while ((('0' <= c && c <= '9')||('a' <= c && c <= 'f')||('A' <= c && c <= 'F'))) { 
#line 445 "chunk.met"
#line 446 "chunk.met"
                        {
#line 446 "chunk.met"
                            lexEl . AddChar(c);
#line 446 "chunk.met"
                            NextChar();
#line 446 "chunk.met"
                        }
#line 446 "chunk.met"
                    } 
#line 446 "chunk.met"
#line 447 "chunk.met"
                    switch (c) {
#line 447 "chunk.met"
#line 448 "chunk.met"
                        case 'l' :
#line 448 "chunk.met"
                        case 'L' :
#line 448 "chunk.met"
                            NextChar();
#line 448 "chunk.met"
#line 449 "chunk.met"
                            switch (c) {
#line 449 "chunk.met"
#line 450 "chunk.met"
                                case 'u' :
#line 450 "chunk.met"
                                case 'U' :
#line 450 "chunk.met"
                                    NextChar();
#line 450 "chunk.met"
#line 450 "chunk.met"
                                    {
#line 450 "chunk.met"
                                        firstOnLine = 0 ; 
#line 450 "chunk.met"
                                        tokenAhead =1;
#line 450 "chunk.met"
                                        lexEl.Value=ULHEXA;
#line 450 "chunk.met"
                                        PUT_COORD_CALL;
#line 450 "chunk.met"
                                        return(1);
#line 450 "chunk.met"
                                    }
#line 450 "chunk.met"
                                    break ;
#line 450 "chunk.met"
#line 451 "chunk.met"
                                case 'L' :
#line 451 "chunk.met"
                                case 'l' :
#line 451 "chunk.met"
                                    NextChar();
#line 451 "chunk.met"
#line 452 "chunk.met"
#line 453 "chunk.met"
                                    switch (c) {
#line 453 "chunk.met"
#line 454 "chunk.met"
                                        case 'u' :
#line 454 "chunk.met"
                                        case 'U' :
#line 454 "chunk.met"
                                            NextChar();
#line 454 "chunk.met"
#line 454 "chunk.met"
                                            {
#line 454 "chunk.met"
                                                firstOnLine = 0 ; 
#line 454 "chunk.met"
                                                tokenAhead =1;
#line 454 "chunk.met"
                                                lexEl.Value=ULLHEXA;
#line 454 "chunk.met"
                                                PUT_COORD_CALL;
#line 454 "chunk.met"
                                                return(1);
#line 454 "chunk.met"
                                            }
#line 454 "chunk.met"
                                            break ;
#line 454 "chunk.met"
#line 455 "chunk.met"
                                        default : 
#line 455 "chunk.met"
                                             if (c!= EOF) {
#line 455 "chunk.met"
#line 455 "chunk.met"
                                                {
#line 455 "chunk.met"
                                                    firstOnLine = 0 ; 
#line 455 "chunk.met"
                                                    tokenAhead =1;
#line 455 "chunk.met"
                                                    lexEl.Value=LLHEXA;
#line 455 "chunk.met"
                                                    PUT_COORD_CALL;
#line 455 "chunk.met"
                                                    return(1);
#line 455 "chunk.met"
                                                }
#line 455 "chunk.met"
                                            }
#line 455 "chunk.met"
                                            break ;
#line 455 "chunk.met"
                                    }
#line 455 "chunk.met"
#line 455 "chunk.met"
                                    break ;
#line 455 "chunk.met"
#line 458 "chunk.met"
                                default : 
#line 458 "chunk.met"
                                     if (c!= EOF) {
#line 458 "chunk.met"
#line 458 "chunk.met"
                                        {
#line 458 "chunk.met"
                                            firstOnLine = 0 ; 
#line 458 "chunk.met"
                                            tokenAhead =1;
#line 458 "chunk.met"
                                            lexEl.Value=LHEXA;
#line 458 "chunk.met"
                                            PUT_COORD_CALL;
#line 458 "chunk.met"
                                            return(1);
#line 458 "chunk.met"
                                        }
#line 458 "chunk.met"
                                    }
#line 458 "chunk.met"
                                    break ;
#line 458 "chunk.met"
                            }
#line 458 "chunk.met"
                            break ;
#line 458 "chunk.met"
#line 460 "chunk.met"
                        case 'u' :
#line 460 "chunk.met"
                        case 'U' :
#line 460 "chunk.met"
                            NextChar();
#line 460 "chunk.met"
#line 461 "chunk.met"
                            switch (c) {
#line 461 "chunk.met"
#line 462 "chunk.met"
                                case 'l' :
#line 462 "chunk.met"
                                case 'L' :
#line 462 "chunk.met"
                                    NextChar();
#line 462 "chunk.met"
#line 463 "chunk.met"
#line 464 "chunk.met"
                                    switch (c) {
#line 464 "chunk.met"
#line 465 "chunk.met"
                                        case 'L' :
#line 465 "chunk.met"
                                        case 'l' :
#line 465 "chunk.met"
                                            NextChar();
#line 465 "chunk.met"
#line 465 "chunk.met"
                                            {
#line 465 "chunk.met"
                                                firstOnLine = 0 ; 
#line 465 "chunk.met"
                                                tokenAhead =1;
#line 465 "chunk.met"
                                                lexEl.Value=ULLHEXA;
#line 465 "chunk.met"
                                                PUT_COORD_CALL;
#line 465 "chunk.met"
                                                return(1);
#line 465 "chunk.met"
                                            }
#line 465 "chunk.met"
                                            break ;
#line 465 "chunk.met"
#line 466 "chunk.met"
                                        default : 
#line 466 "chunk.met"
                                             if (c!= EOF) {
#line 466 "chunk.met"
#line 466 "chunk.met"
                                                {
#line 466 "chunk.met"
                                                    firstOnLine = 0 ; 
#line 466 "chunk.met"
                                                    tokenAhead =1;
#line 466 "chunk.met"
                                                    lexEl.Value=ULHEXA;
#line 466 "chunk.met"
                                                    PUT_COORD_CALL;
#line 466 "chunk.met"
                                                    return(1);
#line 466 "chunk.met"
                                                }
#line 466 "chunk.met"
                                            }
#line 466 "chunk.met"
                                            break ;
#line 466 "chunk.met"
                                    }
#line 466 "chunk.met"
#line 466 "chunk.met"
                                    break ;
#line 466 "chunk.met"
#line 469 "chunk.met"
                                default : 
#line 469 "chunk.met"
                                     if (c!= EOF) {
#line 469 "chunk.met"
#line 469 "chunk.met"
                                        {
#line 469 "chunk.met"
                                            firstOnLine = 0 ; 
#line 469 "chunk.met"
                                            tokenAhead =1;
#line 469 "chunk.met"
                                            lexEl.Value=UHEXA;
#line 469 "chunk.met"
                                            PUT_COORD_CALL;
#line 469 "chunk.met"
                                            return(1);
#line 469 "chunk.met"
                                        }
#line 469 "chunk.met"
                                    }
#line 469 "chunk.met"
                                    break ;
#line 469 "chunk.met"
                            }
#line 469 "chunk.met"
                            break ;
#line 469 "chunk.met"
#line 471 "chunk.met"
                        default : 
#line 471 "chunk.met"
                             if (c!= EOF) {
#line 471 "chunk.met"
#line 471 "chunk.met"
                                {
#line 471 "chunk.met"
                                    firstOnLine = 0 ; 
#line 471 "chunk.met"
                                    tokenAhead =1;
#line 471 "chunk.met"
                                    lexEl.Value=HEXA;
#line 471 "chunk.met"
                                    PUT_COORD_CALL;
#line 471 "chunk.met"
                                    return(1);
#line 471 "chunk.met"
                                }
#line 471 "chunk.met"
                            }
#line 471 "chunk.met"
                            break ;
#line 471 "chunk.met"
                    }
#line 471 "chunk.met"
#line 471 "chunk.met"
                    break ;
#line 471 "chunk.met"
#line 474 "chunk.met"
                case '0' :
#line 474 "chunk.met"
                case '1' :
#line 474 "chunk.met"
                case '2' :
#line 474 "chunk.met"
                case '3' :
#line 474 "chunk.met"
                case '4' :
#line 474 "chunk.met"
                case '5' :
#line 474 "chunk.met"
                case '6' :
#line 474 "chunk.met"
                case '7' :
#line 474 "chunk.met"
#line 475 "chunk.met"
#line 476 "chunk.met"
                    while ((('0' <= c && c <= '7'))) { 
#line 476 "chunk.met"
#line 477 "chunk.met"
                        {
#line 477 "chunk.met"
                            lexEl . AddChar(c);
#line 477 "chunk.met"
                            NextChar();
#line 477 "chunk.met"
                        }
#line 477 "chunk.met"
                    } 
#line 477 "chunk.met"
#line 478 "chunk.met"
                    switch (c) {
#line 478 "chunk.met"
#line 479 "chunk.met"
                        case 'l' :
#line 479 "chunk.met"
                        case 'L' :
#line 479 "chunk.met"
                            NextChar();
#line 479 "chunk.met"
#line 480 "chunk.met"
                            switch (c) {
#line 480 "chunk.met"
#line 481 "chunk.met"
                                case 'L' :
#line 481 "chunk.met"
                                case 'l' :
#line 481 "chunk.met"
                                    NextChar();
#line 481 "chunk.met"
#line 482 "chunk.met"
#line 483 "chunk.met"
                                    switch (c) {
#line 483 "chunk.met"
#line 484 "chunk.met"
                                        case 'u' :
#line 484 "chunk.met"
                                        case 'U' :
#line 484 "chunk.met"
                                            NextChar();
#line 484 "chunk.met"
#line 484 "chunk.met"
                                            {
#line 484 "chunk.met"
                                                firstOnLine = 0 ; 
#line 484 "chunk.met"
                                                tokenAhead =1;
#line 484 "chunk.met"
                                                lexEl.Value=ULLOCTAL;
#line 484 "chunk.met"
                                                PUT_COORD_CALL;
#line 484 "chunk.met"
                                                return(1);
#line 484 "chunk.met"
                                            }
#line 484 "chunk.met"
                                            break ;
#line 484 "chunk.met"
#line 485 "chunk.met"
                                        default : 
#line 485 "chunk.met"
                                             if (c!= EOF) {
#line 485 "chunk.met"
#line 485 "chunk.met"
                                                {
#line 485 "chunk.met"
                                                    firstOnLine = 0 ; 
#line 485 "chunk.met"
                                                    tokenAhead =1;
#line 485 "chunk.met"
                                                    lexEl.Value=LLOCTAL;
#line 485 "chunk.met"
                                                    PUT_COORD_CALL;
#line 485 "chunk.met"
                                                    return(1);
#line 485 "chunk.met"
                                                }
#line 485 "chunk.met"
                                            }
#line 485 "chunk.met"
                                            break ;
#line 485 "chunk.met"
                                    }
#line 485 "chunk.met"
#line 485 "chunk.met"
                                    break ;
#line 485 "chunk.met"
#line 488 "chunk.met"
                                case 'u' :
#line 488 "chunk.met"
                                case 'U' :
#line 488 "chunk.met"
                                    NextChar();
#line 488 "chunk.met"
#line 488 "chunk.met"
                                    {
#line 488 "chunk.met"
                                        firstOnLine = 0 ; 
#line 488 "chunk.met"
                                        tokenAhead =1;
#line 488 "chunk.met"
                                        lexEl.Value=ULOCTAL;
#line 488 "chunk.met"
                                        PUT_COORD_CALL;
#line 488 "chunk.met"
                                        return(1);
#line 488 "chunk.met"
                                    }
#line 488 "chunk.met"
                                    break ;
#line 488 "chunk.met"
#line 489 "chunk.met"
                                default : 
#line 489 "chunk.met"
                                     if (c!= EOF) {
#line 489 "chunk.met"
#line 489 "chunk.met"
                                        {
#line 489 "chunk.met"
                                            firstOnLine = 0 ; 
#line 489 "chunk.met"
                                            tokenAhead =1;
#line 489 "chunk.met"
                                            lexEl.Value=LOCTAL;
#line 489 "chunk.met"
                                            PUT_COORD_CALL;
#line 489 "chunk.met"
                                            return(1);
#line 489 "chunk.met"
                                        }
#line 489 "chunk.met"
                                    }
#line 489 "chunk.met"
                                    break ;
#line 489 "chunk.met"
                            }
#line 489 "chunk.met"
                            break ;
#line 489 "chunk.met"
#line 491 "chunk.met"
                        case 'u' :
#line 491 "chunk.met"
                        case 'U' :
#line 491 "chunk.met"
                            NextChar();
#line 491 "chunk.met"
#line 492 "chunk.met"
                            switch (c) {
#line 492 "chunk.met"
#line 493 "chunk.met"
                                case 'l' :
#line 493 "chunk.met"
                                case 'L' :
#line 493 "chunk.met"
                                    NextChar();
#line 493 "chunk.met"
#line 494 "chunk.met"
#line 495 "chunk.met"
                                    switch (c) {
#line 495 "chunk.met"
#line 496 "chunk.met"
                                        case 'L' :
#line 496 "chunk.met"
                                        case 'l' :
#line 496 "chunk.met"
                                            NextChar();
#line 496 "chunk.met"
#line 496 "chunk.met"
                                            {
#line 496 "chunk.met"
                                                firstOnLine = 0 ; 
#line 496 "chunk.met"
                                                tokenAhead =1;
#line 496 "chunk.met"
                                                lexEl.Value=ULLOCTAL;
#line 496 "chunk.met"
                                                PUT_COORD_CALL;
#line 496 "chunk.met"
                                                return(1);
#line 496 "chunk.met"
                                            }
#line 496 "chunk.met"
                                            break ;
#line 496 "chunk.met"
#line 497 "chunk.met"
                                        default : 
#line 497 "chunk.met"
                                             if (c!= EOF) {
#line 497 "chunk.met"
#line 497 "chunk.met"
                                                {
#line 497 "chunk.met"
                                                    firstOnLine = 0 ; 
#line 497 "chunk.met"
                                                    tokenAhead =1;
#line 497 "chunk.met"
                                                    lexEl.Value=ULOCTAL;
#line 497 "chunk.met"
                                                    PUT_COORD_CALL;
#line 497 "chunk.met"
                                                    return(1);
#line 497 "chunk.met"
                                                }
#line 497 "chunk.met"
                                            }
#line 497 "chunk.met"
                                            break ;
#line 497 "chunk.met"
                                    }
#line 497 "chunk.met"
#line 497 "chunk.met"
                                    break ;
#line 497 "chunk.met"
#line 500 "chunk.met"
                                default : 
#line 500 "chunk.met"
                                     if (c!= EOF) {
#line 500 "chunk.met"
#line 500 "chunk.met"
                                        {
#line 500 "chunk.met"
                                            firstOnLine = 0 ; 
#line 500 "chunk.met"
                                            tokenAhead =1;
#line 500 "chunk.met"
                                            lexEl.Value=UOCTAL;
#line 500 "chunk.met"
                                            PUT_COORD_CALL;
#line 500 "chunk.met"
                                            return(1);
#line 500 "chunk.met"
                                        }
#line 500 "chunk.met"
                                    }
#line 500 "chunk.met"
                                    break ;
#line 500 "chunk.met"
                            }
#line 500 "chunk.met"
                            break ;
#line 500 "chunk.met"
#line 502 "chunk.met"
                        default : 
#line 502 "chunk.met"
                             if (c!= EOF) {
#line 502 "chunk.met"
#line 502 "chunk.met"
                                {
#line 502 "chunk.met"
                                    firstOnLine = 0 ; 
#line 502 "chunk.met"
                                    tokenAhead =1;
#line 502 "chunk.met"
                                    lexEl.Value=OCTAL;
#line 502 "chunk.met"
                                    PUT_COORD_CALL;
#line 502 "chunk.met"
                                    return(1);
#line 502 "chunk.met"
                                }
#line 502 "chunk.met"
                            }
#line 502 "chunk.met"
                            break ;
#line 502 "chunk.met"
                    }
#line 502 "chunk.met"
#line 502 "chunk.met"
                    break ;
#line 502 "chunk.met"
#line 505 "chunk.met"
                case '.' :
#line 505 "chunk.met"
#line 506 "chunk.met"
#line 507 "chunk.met"
                    {
#line 507 "chunk.met"
                        lexEl.AddString("0");
#line 507 "chunk.met"
                    }
#line 507 "chunk.met"
#line 508 "chunk.met"
                    {
#line 508 "chunk.met"
                        lexEl . AddChar(c);
#line 508 "chunk.met"
                        NextChar();
#line 508 "chunk.met"
                    }
#line 508 "chunk.met"
#line 509 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 509 "chunk.met"
#line 510 "chunk.met"
                        {
#line 510 "chunk.met"
                            lexEl . AddChar(c);
#line 510 "chunk.met"
                            NextChar();
#line 510 "chunk.met"
                        }
#line 510 "chunk.met"
                    } 
#line 510 "chunk.met"
#line 511 "chunk.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 511 "chunk.met"
#line 512 "chunk.met"
#line 513 "chunk.met"
                        {
#line 513 "chunk.met"
                            lexEl.AddString("e");
#line 513 "chunk.met"
                        }
#line 513 "chunk.met"
#line 514 "chunk.met"
                        if (((c == '+')||(c == '-'))){
#line 514 "chunk.met"
#line 515 "chunk.met"
                            {
#line 515 "chunk.met"
                                lexEl . AddChar(c);
#line 515 "chunk.met"
                                NextChar();
#line 515 "chunk.met"
                            }
#line 515 "chunk.met"
                        }
#line 515 "chunk.met"
#line 516 "chunk.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 516 "chunk.met"
#line 517 "chunk.met"
                            {
#line 517 "chunk.met"
                                lexEl . AddChar(c);
#line 517 "chunk.met"
                                NextChar();
#line 517 "chunk.met"
                            }
#line 517 "chunk.met"
                        } 
#line 517 "chunk.met"
#line 517 "chunk.met"
#line 517 "chunk.met"
                    }
#line 517 "chunk.met"
#line 519 "chunk.met"
                    switch (c) {
#line 519 "chunk.met"
#line 520 "chunk.met"
                        case 'f' :
#line 520 "chunk.met"
#line 520 "chunk.met"
                            {
#line 520 "chunk.met"
                                lexEl . AddChar(c);
#line 520 "chunk.met"
                                NextChar();
#line 520 "chunk.met"
                            }
#line 520 "chunk.met"
                            break ;
#line 520 "chunk.met"
#line 521 "chunk.met"
                        case 'F' :
#line 521 "chunk.met"
#line 521 "chunk.met"
                            {
#line 521 "chunk.met"
                                lexEl . AddChar(c);
#line 521 "chunk.met"
                                NextChar();
#line 521 "chunk.met"
                            }
#line 521 "chunk.met"
                            break ;
#line 521 "chunk.met"
#line 522 "chunk.met"
                        case 'l' :
#line 522 "chunk.met"
#line 522 "chunk.met"
                            {
#line 522 "chunk.met"
                                lexEl . AddChar(c);
#line 522 "chunk.met"
                                NextChar();
#line 522 "chunk.met"
                            }
#line 522 "chunk.met"
                            break ;
#line 522 "chunk.met"
#line 523 "chunk.met"
                        case 'L' :
#line 523 "chunk.met"
#line 523 "chunk.met"
                            {
#line 523 "chunk.met"
                                lexEl . AddChar(c);
#line 523 "chunk.met"
                                NextChar();
#line 523 "chunk.met"
                            }
#line 523 "chunk.met"
                            break ;
#line 523 "chunk.met"
                    }
#line 523 "chunk.met"
#line 525 "chunk.met"
                    {
#line 525 "chunk.met"
                        firstOnLine = 0 ; 
#line 525 "chunk.met"
                        tokenAhead =1;
#line 525 "chunk.met"
                        lexEl.Value=FLOATVAL;
#line 525 "chunk.met"
                        PUT_COORD_CALL;
#line 525 "chunk.met"
                        return(1);
#line 525 "chunk.met"
                    }
#line 525 "chunk.met"
#line 525 "chunk.met"
                    break ;
#line 525 "chunk.met"
#line 529 "chunk.met"
                default : 
#line 529 "chunk.met"
                     if (c!= EOF) {
#line 529 "chunk.met"
#line 528 "chunk.met"
#line 529 "chunk.met"
                        {
#line 529 "chunk.met"
                            lexEl.AddString("0");
#line 529 "chunk.met"
                        }
#line 529 "chunk.met"
#line 530 "chunk.met"
                        switch (c) {
#line 530 "chunk.met"
#line 531 "chunk.met"
                            case 'l' :
#line 531 "chunk.met"
                            case 'L' :
#line 531 "chunk.met"
                                NextChar();
#line 531 "chunk.met"
#line 532 "chunk.met"
                                switch (c) {
#line 532 "chunk.met"
#line 533 "chunk.met"
                                    case 'u' :
#line 533 "chunk.met"
                                    case 'U' :
#line 533 "chunk.met"
                                        NextChar();
#line 533 "chunk.met"
#line 533 "chunk.met"
                                        {
#line 533 "chunk.met"
                                            firstOnLine = 0 ; 
#line 533 "chunk.met"
                                            tokenAhead =1;
#line 533 "chunk.met"
                                            lexEl.Value=ULINTEGER;
#line 533 "chunk.met"
                                            PUT_COORD_CALL;
#line 533 "chunk.met"
                                            return(1);
#line 533 "chunk.met"
                                        }
#line 533 "chunk.met"
                                        break ;
#line 533 "chunk.met"
#line 534 "chunk.met"
                                    default : 
#line 534 "chunk.met"
                                         if (c!= EOF) {
#line 534 "chunk.met"
#line 534 "chunk.met"
                                            {
#line 534 "chunk.met"
                                                firstOnLine = 0 ; 
#line 534 "chunk.met"
                                                tokenAhead =1;
#line 534 "chunk.met"
                                                lexEl.Value=LINTEGER;
#line 534 "chunk.met"
                                                PUT_COORD_CALL;
#line 534 "chunk.met"
                                                return(1);
#line 534 "chunk.met"
                                            }
#line 534 "chunk.met"
                                        }
#line 534 "chunk.met"
                                        break ;
#line 534 "chunk.met"
                                }
#line 534 "chunk.met"
                                break ;
#line 534 "chunk.met"
#line 536 "chunk.met"
                            case 'u' :
#line 536 "chunk.met"
                            case 'U' :
#line 536 "chunk.met"
                                NextChar();
#line 536 "chunk.met"
#line 537 "chunk.met"
                                switch (c) {
#line 537 "chunk.met"
#line 538 "chunk.met"
                                    case 'l' :
#line 538 "chunk.met"
                                    case 'L' :
#line 538 "chunk.met"
                                        NextChar();
#line 538 "chunk.met"
#line 538 "chunk.met"
                                        {
#line 538 "chunk.met"
                                            firstOnLine = 0 ; 
#line 538 "chunk.met"
                                            tokenAhead =1;
#line 538 "chunk.met"
                                            lexEl.Value=ULINTEGER;
#line 538 "chunk.met"
                                            PUT_COORD_CALL;
#line 538 "chunk.met"
                                            return(1);
#line 538 "chunk.met"
                                        }
#line 538 "chunk.met"
                                        break ;
#line 538 "chunk.met"
#line 539 "chunk.met"
                                    default : 
#line 539 "chunk.met"
                                         if (c!= EOF) {
#line 539 "chunk.met"
#line 539 "chunk.met"
                                            {
#line 539 "chunk.met"
                                                firstOnLine = 0 ; 
#line 539 "chunk.met"
                                                tokenAhead =1;
#line 539 "chunk.met"
                                                lexEl.Value=UINTEGER;
#line 539 "chunk.met"
                                                PUT_COORD_CALL;
#line 539 "chunk.met"
                                                return(1);
#line 539 "chunk.met"
                                            }
#line 539 "chunk.met"
                                        }
#line 539 "chunk.met"
                                        break ;
#line 539 "chunk.met"
                                }
#line 539 "chunk.met"
                                break ;
#line 539 "chunk.met"
#line 541 "chunk.met"
                            default : 
#line 541 "chunk.met"
                                 if (c!= EOF) {
#line 541 "chunk.met"
#line 541 "chunk.met"
                                    {
#line 541 "chunk.met"
                                        firstOnLine = 0 ; 
#line 541 "chunk.met"
                                        tokenAhead =1;
#line 541 "chunk.met"
                                        lexEl.Value=INTEGER;
#line 541 "chunk.met"
                                        PUT_COORD_CALL;
#line 541 "chunk.met"
                                        return(1);
#line 541 "chunk.met"
                                    }
#line 541 "chunk.met"
                                }
#line 541 "chunk.met"
                                break ;
#line 541 "chunk.met"
                        }
#line 541 "chunk.met"
#line 541 "chunk.met"
                    }
#line 541 "chunk.met"
                    break ;
#line 541 "chunk.met"
            }
#line 541 "chunk.met"
#line 541 "chunk.met"
            break ;
#line 541 "chunk.met"
#line 546 "chunk.met"
        case '#' :
#line 546 "chunk.met"
            NextChar();
#line 546 "chunk.met"
#line 547 "chunk.met"
#line 548 "chunk.met"
            while (((c == ' ')||(c == '\t'))) { 
#line 548 "chunk.met"
#line 549 "chunk.met"
                if (!(c != EOF&& NextChar())) ;
#line 549 "chunk.met"
            } 
#line 549 "chunk.met"
#line 550 "chunk.met"
#line 551 "chunk.met"
            if((GetString("include",1)&& NextChar())){
#line 551 "chunk.met"
#line 551 "chunk.met"
                {
#line 551 "chunk.met"
                    firstOnLine = 0 ; 
#line 551 "chunk.met"
                    tokenAhead =1;
#line 551 "chunk.met"
                    lexEl.Value=INCLUDE_DIR;
#line 551 "chunk.met"
                    PUT_COORD_CALL;
#line 551 "chunk.met"
                    return(1);
#line 551 "chunk.met"
                }
#line 551 "chunk.met"
            } else 
#line 551 "chunk.met"
#line 552 "chunk.met"
            if((GetString("ifdef",1)&& NextChar())){
#line 552 "chunk.met"
#line 552 "chunk.met"
                {
#line 552 "chunk.met"
                    firstOnLine = 0 ; 
#line 552 "chunk.met"
                    tokenAhead =1;
#line 552 "chunk.met"
                    lexEl.Value=IFDEF_DIR;
#line 552 "chunk.met"
                    PUT_COORD_CALL;
#line 552 "chunk.met"
                    return(1);
#line 552 "chunk.met"
                }
#line 552 "chunk.met"
            } else 
#line 552 "chunk.met"
#line 553 "chunk.met"
            if((GetString("ifndef",1)&& NextChar())){
#line 553 "chunk.met"
#line 553 "chunk.met"
                {
#line 553 "chunk.met"
                    firstOnLine = 0 ; 
#line 553 "chunk.met"
                    tokenAhead =1;
#line 553 "chunk.met"
                    lexEl.Value=IFNDEF_DIR;
#line 553 "chunk.met"
                    PUT_COORD_CALL;
#line 553 "chunk.met"
                    return(1);
#line 553 "chunk.met"
                }
#line 553 "chunk.met"
            } else 
#line 553 "chunk.met"
#line 554 "chunk.met"
            if((GetString("if",1)&& NextChar())){
#line 554 "chunk.met"
#line 554 "chunk.met"
                {
#line 554 "chunk.met"
                    firstOnLine = 0 ; 
#line 554 "chunk.met"
                    tokenAhead =1;
#line 554 "chunk.met"
                    lexEl.Value=IF_DIR;
#line 554 "chunk.met"
                    PUT_COORD_CALL;
#line 554 "chunk.met"
                    return(1);
#line 554 "chunk.met"
                }
#line 554 "chunk.met"
            } else 
#line 554 "chunk.met"
#line 555 "chunk.met"
            if((GetString("else",1)&& NextChar())){
#line 555 "chunk.met"
#line 555 "chunk.met"
                {
#line 555 "chunk.met"
                    firstOnLine = 0 ; 
#line 555 "chunk.met"
                    tokenAhead =1;
#line 555 "chunk.met"
                    lexEl.Value=ELSE_DIR;
#line 555 "chunk.met"
                    PUT_COORD_CALL;
#line 555 "chunk.met"
                    return(1);
#line 555 "chunk.met"
                }
#line 555 "chunk.met"
            } else 
#line 555 "chunk.met"
#line 556 "chunk.met"
            if((GetString("elif",1)&& NextChar())){
#line 556 "chunk.met"
#line 556 "chunk.met"
                {
#line 556 "chunk.met"
                    firstOnLine = 0 ; 
#line 556 "chunk.met"
                    tokenAhead =1;
#line 556 "chunk.met"
                    lexEl.Value=ELIF_DIR;
#line 556 "chunk.met"
                    PUT_COORD_CALL;
#line 556 "chunk.met"
                    return(1);
#line 556 "chunk.met"
                }
#line 556 "chunk.met"
            } else 
#line 556 "chunk.met"
#line 557 "chunk.met"
            if((GetString("endif",1)&& NextChar())){
#line 557 "chunk.met"
#line 557 "chunk.met"
                {
#line 557 "chunk.met"
                    firstOnLine = 0 ; 
#line 557 "chunk.met"
                    tokenAhead =1;
#line 557 "chunk.met"
                    lexEl.Value=ENDIF_DIR;
#line 557 "chunk.met"
                    PUT_COORD_CALL;
#line 557 "chunk.met"
                    return(1);
#line 557 "chunk.met"
                }
#line 557 "chunk.met"
            } else 
#line 557 "chunk.met"
#line 558 "chunk.met"
            if((GetString("line",1)&& NextChar())){
#line 558 "chunk.met"
#line 558 "chunk.met"
                {
#line 558 "chunk.met"
                    firstOnLine = 0 ; 
#line 558 "chunk.met"
                    tokenAhead =1;
#line 558 "chunk.met"
                    lexEl.Value=LINE_DIR;
#line 558 "chunk.met"
                    PUT_COORD_CALL;
#line 558 "chunk.met"
                    return(1);
#line 558 "chunk.met"
                }
#line 558 "chunk.met"
            } else 
#line 558 "chunk.met"
#line 559 "chunk.met"
            if((GetString("pragma",1)&& NextChar())){
#line 559 "chunk.met"
#line 559 "chunk.met"
                {
#line 559 "chunk.met"
                    firstOnLine = 0 ; 
#line 559 "chunk.met"
                    tokenAhead =1;
#line 559 "chunk.met"
                    lexEl.Value=PRAGMA_DIR;
#line 559 "chunk.met"
                    PUT_COORD_CALL;
#line 559 "chunk.met"
                    return(1);
#line 559 "chunk.met"
                }
#line 559 "chunk.met"
            } else 
#line 559 "chunk.met"
#line 560 "chunk.met"
            if((GetString("error",1)&& NextChar())){
#line 560 "chunk.met"
#line 560 "chunk.met"
                {
#line 560 "chunk.met"
                    firstOnLine = 0 ; 
#line 560 "chunk.met"
                    tokenAhead =1;
#line 560 "chunk.met"
                    lexEl.Value=ERROR_DIR;
#line 560 "chunk.met"
                    PUT_COORD_CALL;
#line 560 "chunk.met"
                    return(1);
#line 560 "chunk.met"
                }
#line 560 "chunk.met"
            } else 
#line 560 "chunk.met"
#line 561 "chunk.met"
            if((GetString("define",1)&& NextChar())){
#line 561 "chunk.met"
#line 561 "chunk.met"
                {
#line 561 "chunk.met"
                    firstOnLine = 0 ; 
#line 561 "chunk.met"
                    tokenAhead =1;
#line 561 "chunk.met"
                    lexEl.Value=DEFINE_DIR;
#line 561 "chunk.met"
                    PUT_COORD_CALL;
#line 561 "chunk.met"
                    return(1);
#line 561 "chunk.met"
                }
#line 561 "chunk.met"
            } else 
#line 561 "chunk.met"
#line 562 "chunk.met"
            if((GetString("undef",1)&& NextChar())){
#line 562 "chunk.met"
#line 562 "chunk.met"
                {
#line 562 "chunk.met"
                    firstOnLine = 0 ; 
#line 562 "chunk.met"
                    tokenAhead =1;
#line 562 "chunk.met"
                    lexEl.Value=UNDEF_DIR;
#line 562 "chunk.met"
                    PUT_COORD_CALL;
#line 562 "chunk.met"
                    return(1);
#line 562 "chunk.met"
                }
#line 562 "chunk.met"
            } else 
#line 562 "chunk.met"
#line 563 "chunk.met"
            if(((('0' <= c && c <= '9')))){
#line 563 "chunk.met"
#line 563 "chunk.met"
                {
#line 563 "chunk.met"
                    firstOnLine = 0 ; 
#line 563 "chunk.met"
                    tokenAhead =1;
#line 563 "chunk.met"
                    lexEl.Value=LINE_REFERENCE_DIR;
#line 563 "chunk.met"
                    PUT_COORD_CALL;
#line 563 "chunk.met"
                    return(1);
#line 563 "chunk.met"
                }
#line 563 "chunk.met"
            } else 
#line 563 "chunk.met"
             ;
#line 563 "chunk.met"
#line 563 "chunk.met"
            break ;
#line 563 "chunk.met"
#line 566 "chunk.met"
        case '\r' :
#line 566 "chunk.met"
        case '\n' :
#line 566 "chunk.met"
            NextChar();
#line 566 "chunk.met"
#line 566 "chunk.met"
            {
#line 566 "chunk.met"
                firstOnLine = 0 ; 
#line 566 "chunk.met"
                tokenAhead =1;
#line 566 "chunk.met"
                lexEl.Value=CARRIAGE_RETURN;
#line 566 "chunk.met"
                firstOnLine = 1 ; 
#line 566 "chunk.met"
                PUT_COORD_CALL;
#line 566 "chunk.met"
                return(1);
#line 566 "chunk.met"
            }
#line 566 "chunk.met"
            break ;
#line 566 "chunk.met"
#line 567 "chunk.met"
        case '/' :
#line 567 "chunk.met"
            NextChar();
#line 567 "chunk.met"
#line 568 "chunk.met"
#line 569 "chunk.met"
            if (((c == '='))){
#line 569 "chunk.met"
#line 570 "chunk.met"
#line 571 "chunk.met"
                if (!(c != EOF&& NextChar())) ;
#line 571 "chunk.met"
#line 572 "chunk.met"
                {
#line 572 "chunk.met"
                    firstOnLine = 0 ; 
#line 572 "chunk.met"
                    tokenAhead =1;
#line 572 "chunk.met"
                    lexEl.Value=SLASEGAL;
#line 572 "chunk.met"
                    PUT_COORD_CALL;
#line 572 "chunk.met"
                    return(1);
#line 572 "chunk.met"
                }
#line 572 "chunk.met"
#line 572 "chunk.met"
#line 572 "chunk.met"
            } else {
#line 572 "chunk.met"
#line 575 "chunk.met"
                {
#line 575 "chunk.met"
                    firstOnLine = 0 ; 
#line 575 "chunk.met"
                    tokenAhead =1;
#line 575 "chunk.met"
                    lexEl.Value=SLAS;
#line 575 "chunk.met"
                    PUT_COORD_CALL;
#line 575 "chunk.met"
                    return(1);
#line 575 "chunk.met"
                }
#line 575 "chunk.met"
            }
#line 575 "chunk.met"
#line 575 "chunk.met"
            break ;
#line 575 "chunk.met"
#line 577 "chunk.met"
        case '.' :
#line 577 "chunk.met"
#line 578 "chunk.met"
#line 579 "chunk.met"
            {
#line 579 "chunk.met"
                lexEl . AddChar(c);
#line 579 "chunk.met"
                NextChar();
#line 579 "chunk.met"
            }
#line 579 "chunk.met"
#line 580 "chunk.met"
            if ((('0' <= c && c <= '9'))){
#line 580 "chunk.met"
#line 581 "chunk.met"
#line 582 "chunk.met"
                while ((('0' <= c && c <= '9'))) { 
#line 582 "chunk.met"
#line 583 "chunk.met"
                    {
#line 583 "chunk.met"
                        lexEl . AddChar(c);
#line 583 "chunk.met"
                        NextChar();
#line 583 "chunk.met"
                    }
#line 583 "chunk.met"
                } 
#line 583 "chunk.met"
#line 584 "chunk.met"
                if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 584 "chunk.met"
#line 585 "chunk.met"
#line 586 "chunk.met"
                    {
#line 586 "chunk.met"
                        lexEl.AddString("e");
#line 586 "chunk.met"
                    }
#line 586 "chunk.met"
#line 587 "chunk.met"
                    if (((c == '+')||(c == '-'))){
#line 587 "chunk.met"
#line 588 "chunk.met"
                        {
#line 588 "chunk.met"
                            lexEl . AddChar(c);
#line 588 "chunk.met"
                            NextChar();
#line 588 "chunk.met"
                        }
#line 588 "chunk.met"
                    }
#line 588 "chunk.met"
#line 589 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 589 "chunk.met"
#line 590 "chunk.met"
                        {
#line 590 "chunk.met"
                            lexEl . AddChar(c);
#line 590 "chunk.met"
                            NextChar();
#line 590 "chunk.met"
                        }
#line 590 "chunk.met"
                    } 
#line 590 "chunk.met"
#line 590 "chunk.met"
#line 590 "chunk.met"
                }
#line 590 "chunk.met"
#line 592 "chunk.met"
                switch (c) {
#line 592 "chunk.met"
#line 593 "chunk.met"
                    case 'f' :
#line 593 "chunk.met"
#line 593 "chunk.met"
                        {
#line 593 "chunk.met"
                            lexEl . AddChar(c);
#line 593 "chunk.met"
                            NextChar();
#line 593 "chunk.met"
                        }
#line 593 "chunk.met"
                        break ;
#line 593 "chunk.met"
#line 594 "chunk.met"
                    case 'F' :
#line 594 "chunk.met"
#line 594 "chunk.met"
                        {
#line 594 "chunk.met"
                            lexEl . AddChar(c);
#line 594 "chunk.met"
                            NextChar();
#line 594 "chunk.met"
                        }
#line 594 "chunk.met"
                        break ;
#line 594 "chunk.met"
#line 595 "chunk.met"
                    case 'l' :
#line 595 "chunk.met"
#line 595 "chunk.met"
                        {
#line 595 "chunk.met"
                            lexEl . AddChar(c);
#line 595 "chunk.met"
                            NextChar();
#line 595 "chunk.met"
                        }
#line 595 "chunk.met"
                        break ;
#line 595 "chunk.met"
#line 596 "chunk.met"
                    case 'L' :
#line 596 "chunk.met"
#line 596 "chunk.met"
                        {
#line 596 "chunk.met"
                            lexEl . AddChar(c);
#line 596 "chunk.met"
                            NextChar();
#line 596 "chunk.met"
                        }
#line 596 "chunk.met"
                        break ;
#line 596 "chunk.met"
                }
#line 596 "chunk.met"
#line 598 "chunk.met"
                {
#line 598 "chunk.met"
                    firstOnLine = 0 ; 
#line 598 "chunk.met"
                    tokenAhead =1;
#line 598 "chunk.met"
                    lexEl.Value=FLOATVAL;
#line 598 "chunk.met"
                    PUT_COORD_CALL;
#line 598 "chunk.met"
                    return(1);
#line 598 "chunk.met"
                }
#line 598 "chunk.met"
#line 598 "chunk.met"
#line 598 "chunk.met"
            } else {
#line 598 "chunk.met"
#line 601 "chunk.met"
#line 602 "chunk.met"
                {
#line 602 "chunk.met"
                    firstOnLine = 0 ; 
#line 602 "chunk.met"
                    tokenAhead =1;
#line 602 "chunk.met"
                    lexEl.Value=POINT;
#line 602 "chunk.met"
                    PUT_COORD_CALL;
#line 602 "chunk.met"
                    return(1);
#line 602 "chunk.met"
                }
#line 602 "chunk.met"
#line 602 "chunk.met"
            }
#line 602 "chunk.met"
#line 602 "chunk.met"
            break ;
#line 602 "chunk.met"
    }
#line 602 "chunk.met"
#line 602 "chunk.met"
#line 605 "chunk.met"
    line = oldLine;
#line 605 "chunk.met"
    LEX_EXIT(0,"")
#line 605 "chunk.met"
    lexEl.Value = -1 ;
#line 605 "chunk.met"
    return -1 ; 
#line 605 "chunk.met"
}
#line 605 "chunk.met"

#line 605 "chunk.met"
#line 9 "chunk.met"
int chunk::LexComment ()
#line 9 "chunk.met"
{
#line 9 "chunk.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 9 "chunk.met"
        FreePos(lastContextPos);
#line 9 "chunk.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 9 "chunk.met"
    if ( tokenAhead && tokenAhead != -1)
#line 9 "chunk.met"
        ExtUnputBuf();
#line 9 "chunk.met"
    #ifdef DUMP_COORD
#line 9 "chunk.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 9 "chunk.met"
    #endif
#line 9 "chunk.met"
    
#line 9 "chunk.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 9 "chunk.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 9 "chunk.met"
#line 12 "chunk.met"
    if (((! (keepCarriage)) && 
#line 12 "chunk.met"
        (! (keepAll))) || 
#line 12 "chunk.met"
       (takeCarriageComment)){
#line 12 "chunk.met"
#line 14 "chunk.met"
#line 15 "chunk.met"
        ptStockBuf = -1;
#line 15 "chunk.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n'))
#line 15 "chunk.met"
            NextChar() ;
#line 15 "chunk.met"
        ptStockBuf = -1;
#line 15 "chunk.met"
        lexEl.Erase();
#line 15 "chunk.met"
        tokenAhead = 0;
#line 15 "chunk.met"
        oldLine=line,oldCol=col;
#line 15 "chunk.met"
        if ( !lexCallLex) {
#line 15 "chunk.met"
            PUT_COORD_CALL;
#line 15 "chunk.met"
        }
#line 15 "chunk.met"
#line 15 "chunk.met"
#line 15 "chunk.met"
    } else {
#line 15 "chunk.met"
#line 18 "chunk.met"
        if (! (keepAll)){
#line 18 "chunk.met"
#line 19 "chunk.met"
#line 20 "chunk.met"
            ptStockBuf = -1;
#line 20 "chunk.met"
            while ((c == '\t')||(c == ' '))
#line 20 "chunk.met"
                NextChar() ;
#line 20 "chunk.met"
            ptStockBuf = -1;
#line 20 "chunk.met"
            lexEl.Erase();
#line 20 "chunk.met"
            tokenAhead = 0;
#line 20 "chunk.met"
            oldLine=line,oldCol=col;
#line 20 "chunk.met"
            if ( !lexCallLex) {
#line 20 "chunk.met"
                PUT_COORD_CALL;
#line 20 "chunk.met"
            }
#line 20 "chunk.met"
#line 20 "chunk.met"
#line 20 "chunk.met"
        } else {
#line 20 "chunk.met"
#line 23 "chunk.met"
            ptStockBuf = -1;
#line 23 "chunk.met"
            lexEl.Erase();
#line 23 "chunk.met"
            tokenAhead = 0;
#line 23 "chunk.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 23 "chunk.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 23 "chunk.met"
        }
#line 23 "chunk.met"
    }
#line 23 "chunk.met"
#line 24 "chunk.met"
    switch (c) {
#line 24 "chunk.met"
#line 25 "chunk.met"
        case '/' :
#line 25 "chunk.met"
            NextChar();
#line 25 "chunk.met"
#line 27 "chunk.met"
            switch (c) {
#line 27 "chunk.met"
#line 29 "chunk.met"
                case '/' :
#line 29 "chunk.met"
#line 30 "chunk.met"
#line 33 "chunk.met"
                                            if(!lexcommentCallLex && line > oldLastLine)
#line 33 "chunk.met"
                                                                         comment_start=line;
#line 33 "chunk.met"
                                        
#line 33 "chunk.met"
#line 38 "chunk.met"
                    begin_comment ();
#line 38 "chunk.met"
#line 39 "chunk.met"
                    {
#line 39 "chunk.met"
                        lexEl . AddChar(c);
#line 39 "chunk.met"
                        NextChar();
#line 39 "chunk.met"
                    }
#line 39 "chunk.met"
#line 40 "chunk.met"
                    while (c != EOF) { 
#line 40 "chunk.met"
#line 41 "chunk.met"
                        switch (c) {
#line 41 "chunk.met"
#line 42 "chunk.met"
                            case '\r' :
#line 42 "chunk.met"
                            case '\n' :
#line 42 "chunk.met"
#line 43 "chunk.met"
#line 44 "chunk.met"
                                {
#line 44 "chunk.met"
                                    store_comment_line(lexEl.length());
#line 44 "chunk.met"
                                    lexEl.Erase();
#line 44 "chunk.met"
                                    ptStockBuf = -1 ;
#line 44 "chunk.met"
                                }
#line 44 "chunk.met"
#line 45 "chunk.met"
                                    if (comment_start)
#line 45 "chunk.met"
                                                                               lexcommentCallLex = 1;
#line 45 "chunk.met"
                                  
#line 45 "chunk.met"
#line 49 "chunk.met"
                                {
#line 49 "chunk.met"
                                    firstOnLine = 0 ; 
#line 49 "chunk.met"
                                    tokenAhead =2;
#line 49 "chunk.met"
                                     tokenAhead = 0 ; 
#line 49 "chunk.met"
                                     lexCallLex = 1 ; 
#line 49 "chunk.met"
                                    return _Tak(LexComment)();
#line 49 "chunk.met"
                                }
#line 49 "chunk.met"
#line 49 "chunk.met"
                                break ;
#line 49 "chunk.met"
#line 53 "chunk.met"
                            default : 
#line 53 "chunk.met"
                                 if (c!= EOF) {
#line 53 "chunk.met"
#line 52 "chunk.met"
#line 53 "chunk.met"
                                    {
#line 53 "chunk.met"
                                        lexEl . AddChar(c);
#line 53 "chunk.met"
                                        NextChar();
#line 53 "chunk.met"
                                    }
#line 53 "chunk.met"
#line 53 "chunk.met"
                                }
#line 53 "chunk.met"
                                break ;
#line 53 "chunk.met"
                        }
#line 53 "chunk.met"
                    } 
#line 53 "chunk.met"
#line 53 "chunk.met"
                    break ;
#line 53 "chunk.met"
#line 57 "chunk.met"
                case '*' :
#line 57 "chunk.met"
                    NextChar();
#line 57 "chunk.met"
#line 58 "chunk.met"
#line 59 "chunk.met"
                     {int level = 0; 
#line 59 "chunk.met"
#line 62 "chunk.met"
                                            if(!lexcommentCallLex && line > oldLastLine)
#line 62 "chunk.met"
                                                                         comment_start=line;
#line 62 "chunk.met"
                                        
#line 62 "chunk.met"
#line 67 "chunk.met"
                    begin_comment ();
#line 67 "chunk.met"
#line 68 "chunk.met"
                    while (c != EOF) { 
#line 68 "chunk.met"
#line 69 "chunk.met"
#line 70 "chunk.met"
                        if((GetString("/*",1)&& NextChar())){
#line 70 "chunk.met"
#line 71 "chunk.met"
#line 72 "chunk.met"
                             level ++; 
#line 72 "chunk.met"
#line 73 "chunk.met"
                            {
#line 73 "chunk.met"
                                lexEl.AddString("/*");
#line 73 "chunk.met"
                            }
#line 73 "chunk.met"
#line 73 "chunk.met"
                        } else 
#line 73 "chunk.met"
#line 75 "chunk.met"
                        if((GetString("*/",1)&& NextChar())){
#line 75 "chunk.met"
#line 76 "chunk.met"
#line 77 "chunk.met"
                            if (!level ){
#line 77 "chunk.met"
#line 78 "chunk.met"
#line 79 "chunk.met"
                                {
#line 79 "chunk.met"
                                    store_comment_line(lexEl.length());
#line 79 "chunk.met"
                                    lexEl.Erase();
#line 79 "chunk.met"
                                    ptStockBuf = -1 ;
#line 79 "chunk.met"
                                }
#line 79 "chunk.met"
#line 80 "chunk.met"
                                    if (comment_start)
#line 80 "chunk.met"
                                                                               lexcommentCallLex = 1;
#line 80 "chunk.met"
                                  
#line 80 "chunk.met"
#line 84 "chunk.met"
                                {
#line 84 "chunk.met"
                                    firstOnLine = 0 ; 
#line 84 "chunk.met"
                                    tokenAhead =2;
#line 84 "chunk.met"
                                     tokenAhead = 0 ; 
#line 84 "chunk.met"
                                     lexCallLex = 1 ; 
#line 84 "chunk.met"
                                    return _Tak(LexComment)();
#line 84 "chunk.met"
                                }
#line 84 "chunk.met"
#line 84 "chunk.met"
#line 84 "chunk.met"
                            } else {
#line 84 "chunk.met"
#line 87 "chunk.met"
#line 88 "chunk.met"
                                 level --;
#line 88 "chunk.met"
#line 89 "chunk.met"
                                {
#line 89 "chunk.met"
                                    lexEl.AddString("*/");
#line 89 "chunk.met"
                                }
#line 89 "chunk.met"
#line 89 "chunk.met"
                            }
#line 89 "chunk.met"
#line 89 "chunk.met"
                        } else 
#line 89 "chunk.met"
#line 92 "chunk.met"
                        if((((c == '\n'))&& NextChar())){
#line 92 "chunk.met"
#line 92 "chunk.met"
                            {
#line 92 "chunk.met"
                                store_comment_line(lexEl.length());
#line 92 "chunk.met"
                                lexEl.Erase();
#line 92 "chunk.met"
                                ptStockBuf = -1 ;
#line 92 "chunk.met"
                            }
#line 92 "chunk.met"
                        } else 
#line 92 "chunk.met"
#line 93 "chunk.met"
                        if((((c == '\r'))&& NextChar())){
#line 93 "chunk.met"
#line 93 "chunk.met"
                        } else 
#line 93 "chunk.met"
#line 96 "chunk.met"
                        if((c != EOF)){
#line 96 "chunk.met"
#line 95 "chunk.met"
#line 96 "chunk.met"
                            {
#line 96 "chunk.met"
                                lexEl . AddChar(c);
#line 96 "chunk.met"
                                NextChar();
#line 96 "chunk.met"
                            }
#line 96 "chunk.met"
#line 96 "chunk.met"
                        } else 
#line 96 "chunk.met"
                         ;
#line 96 "chunk.met"
                    } 
#line 96 "chunk.met"
#line 99 "chunk.met"
                    } 
#line 99 "chunk.met"
#line 99 "chunk.met"
                    break ;
#line 99 "chunk.met"
#line 103 "chunk.met"
                default : 
#line 103 "chunk.met"
                     if (c!= EOF) {
#line 103 "chunk.met"
#line 102 "chunk.met"
#line 103 "chunk.met"
                        if(ptStockBuf > -1) UnputBuf ();
#line 103 "chunk.met"
                        lexEl.Erase();
#line 103 "chunk.met"
                        tokenAhead = 0;
#line 103 "chunk.met"
                        if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 103 "chunk.met"
                        lastContextPos = (PFILE_POSITION) 0 ;
#line 103 "chunk.met"
#line 103 "chunk.met"
                    }
#line 103 "chunk.met"
                    break ;
#line 103 "chunk.met"
            }
#line 103 "chunk.met"
            break ;
#line 103 "chunk.met"
    }
#line 103 "chunk.met"
#line 103 "chunk.met"
#line 106 "chunk.met"
    if ( lexCallLex) {PUT_COORD_AFTER_COMMENTS_CALL;
#line 106 "chunk.met"
    }line = oldLine;
#line 106 "chunk.met"
    LEX_EXIT(0,"")
#line 106 "chunk.met"
    lexEl.Value = -1 ;
#line 106 "chunk.met"
    return -1 ; 
#line 106 "chunk.met"
}
#line 106 "chunk.met"

#line 106 "chunk.met"
/* 
-- 0 -- bidon
    ALWAYS
-- 1 -- parse_entry
    ALWAYS
-- 2 -- abstract_declarator
    ALWAYS
-- 3 -- additive_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 4 -- alloc_expression
    META
    DPOIDPOI
    NEW
    DELETE
-- 5 -- allocation_expression
    META
    NEW
-- 6 -- and_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 7 -- arg_declarator
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 8 -- arg_declarator_base
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 9 -- arg_declarator_followed
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 10 -- arg_declarator_type
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 11 -- arg_typ_declarator
    META
    POUV
-- 12 -- arg_typ_list
    ALWAYS
-- 13 -- asm_declaration
    META
    ASM
-- 14 -- assignment_end
    META
    SLASEGAL
    EGAL
    ETOIEGAL
    POURCEGAL
    PLUSEGAL
    TIREEGAL
    INFEINFEEGAL
    SUPESUPEEGAL
    ETCOEGAL
    VBAREGAL
    CHAPEGAL
-- 15 -- assignment_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 16 -- attribute_call
    META
    __ATTRIBUTE__
-- 17 -- base_specifier
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 18 -- base_specifier_elem
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 19 -- bit_field_decl
    META
    IDENT
    DPOI
-- 20 -- cast_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 21 -- cast_expression_value
    META
    POUV
-- 22 -- catch_unit
    META
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 23 -- catch_unit_ansi
    META
    CATCH
-- 24 -- class_declaration
    META
    STRUCT
    UNION
    CLASS
-- 25 -- comment_eater
    ALWAYS
-- 26 -- complete_class_name
    META
    IDENT
    DPOIDPOI
-- 27 -- compound_statement
    META
    AOUV
-- 28 -- conditional_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 29 -- const_or_volatile
    META
    VOLATILE
    CONST
-- 30 -- constan
    META
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
-- 31 -- ctor_initializer
    ALWAYS
-- 32 -- data_decl_exotic
    META
    DECLARE_DYNAMIC
    DECLARE_SERIAL
    IMPLEMENT_DYNAMIC
    IMPLEMENT_DYNCREATE
    IMPLEMENT_SERIAL
    DECLARE_MESSAGE_MAP
    BEGIN_MESSAGE_MAP
    END_MESSAGE_MAP
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 33 -- data_decl_sc_decl
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 34 -- data_decl_sc_decl_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 35 -- data_decl_sc_decl_short
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 36 -- data_decl_sc_ty_decl
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 37 -- data_decl_sc_ty_decl_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 38 -- data_decl_sc_ty_decl_short
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 39 -- data_declaration
    ALWAYS
-- 40 -- data_declaration_for
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 41 -- data_declaration_for_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 42 -- data_declaration_for_short
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 43 -- data_declaration_strict
    ALWAYS
-- 44 -- deallocation_expression
    META
    DELETE
-- 45 -- declarator
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 46 -- declarator_follow
    ALWAYS
-- 47 -- declarator_list
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 48 -- declarator_list_init
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 49 -- declarator_value
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 50 -- define_dir
    META
    DEFINE_DIR
-- 51 -- directive
    META
    INCLUDE_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
-- 52 -- end_pragma
    META
    PRAGMA_DIR
-- 53 -- end_pragma_managed
    META
    PRAGMA_DIR
-- 54 -- enum_declarator
    META
    ENUM
-- 55 -- enum_val
    META
    IDENT
-- 56 -- equality_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 57 -- exception
    META
    TRY_UPPER
-- 58 -- exception_ansi
    META
    TRY
-- 59 -- exception_list
    META
    THROW
-- 60 -- exclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 61 -- expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 62 -- expression_for
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 63 -- ext_all
    ALWAYS
-- 64 -- ext_all_ext
    ALWAYS
-- 65 -- ext_all_no_linkage
    ALWAYS
-- 66 -- ext_data_decl_sc_ty
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 67 -- ext_data_decl_sc_ty_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 68 -- ext_data_decl_sc_ty_short
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 69 -- ext_data_decl_simp
    ALWAYS
-- 70 -- ext_data_declaration
    ALWAYS
-- 71 -- ext_decl_dir
    META
    INCLUDE_DIR
    IFDEF_DIR
    IFNDEF_DIR
    IF_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
-- 72 -- ext_decl_if_dir
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 73 -- ext_decl_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 74 -- for_statement
    META
    POUV
-- 75 -- func_declaration
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
-- 76 -- func_declarator
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
-- 77 -- ident_mul
    META
    IDENT
    DPOIDPOI
-- 78 -- include_dir
    META
    INCLUDE_DIR
-- 79 -- inclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 80 -- initializer
    ALWAYS
-- 81 -- inline_namespace
    META
    INLINE
-- 82 -- inside_declaration
    ALWAYS
-- 83 -- inside_declaration1
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 84 -- inside_declaration2
    META
    IDENT
    DPOI
-- 85 -- inside_declaration_extension
    ALWAYS
-- 86 -- label_beg
    META
    IDENT
-- 87 -- linkage_specification
    META
    EXTERN
-- 88 -- logical_and_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 89 -- logical_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 90 -- long_short_int_char
    META
    INT
    CHAR
    LONG
    SHORT
-- 91 -- macro
    META
    DECLARE_DYNAMIC
    DECLARE_SERIAL
    IMPLEMENT_DYNAMIC
    IMPLEMENT_DYNCREATE
    IMPLEMENT_SERIAL
    DECLARE_MESSAGE_MAP
    BEGIN_MESSAGE_MAP
    END_MESSAGE_MAP
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 92 -- macro_extended
    ALWAYS
-- 93 -- main_entry
    ALWAYS
-- 94 -- member_declarator
    META
    IDENT
    DPOIDPOI
-- 95 -- message_map
    META
    BEGIN_MESSAGE_MAP
-- 96 -- multiplicative_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 97 -- name_space
    META
    NAMESPACE
    USING
-- 98 -- new_1
    META
    POUV
-- 99 -- new_2
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    POUV
-- 100 -- new_declarator
    ALWAYS
-- 101 -- new_type_name
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 102 -- none_statement
    ALWAYS
-- 103 -- operator_function_name
    META
    OPERATOR
-- 104 -- other_config
    META
    PRAGMA_CONTENT
-- 105 -- parameter_list
    META
    POUV
-- 106 -- parameter_list_extended
    META
    POUV
-- 107 -- pm_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 108 -- postfix_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    TILD
    OPERATOR
    POUV
    VA_ARG
-- 109 -- pretty::bidon
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 110 -- pretty::parse_entry
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 111 -- primary_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    TILD
    OPERATOR
    POUV
    VA_ARG
-- 112 -- program
    ALWAYS
-- 113 -- protect_declare
    META
    PRIVATE
    PROTECTED
    PUBLIC
-- 114 -- ptr_operator
    META
    IDENT
    DPOIDPOI
    ETOI
    ETCO
-- 115 -- qualified_name
    META
    IDENT
    TILD
-- 116 -- qualified_name_elem
    META
    DPOIDPOI
-- 117 -- quick_prog
    ALWAYS
-- 118 -- quick_prog_elem
    ALWAYS
-- 119 -- range_in_liste
    META
    IDENT
-- 120 -- range_modifier
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
-- 121 -- range_modifier_function
    META
    INLINE
    VIRTUAL
    FRIEND
    CONST
-- 122 -- range_modifier_ident
    ALWAYS
-- 123 -- range_pragma
    META
    PRAGMA_RANGE
-- 124 -- relational_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 125 -- sc_specifier
    ALWAYS
-- 126 -- shift_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 127 -- simple_type
    META
    IDENT
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 128 -- simple_type_name
    META
    IDENT
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 129 -- sizeof_type
    META
    POUV
-- 130 -- stat_all
    ALWAYS
-- 131 -- stat_dir
    META
    INCLUDE_DIR
    IFDEF_DIR
    IFNDEF_DIR
    IF_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
-- 132 -- stat_dir_switch
    META
    INCLUDE_DIR
    IFDEF_DIR
    IFNDEF_DIR
    IF_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
-- 133 -- stat_if_dir
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 134 -- stat_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 135 -- statement
    META
    GOTO
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    BREAK
    CONTINUE
    DO
    AOUV
    FOR
    IF
    PVIR
    RETURN
    SWITCH
    WHILE
    FORALLSONS
    THROW
    TRY
    CASE
    DEFAULT
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 136 -- statement_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 137 -- string_list
    META
    STRING
-- 138 -- switch_elem
    META
    INCLUDE_DIR
    IFDEF_DIR
    IFNDEF_DIR
    IF_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
    CASE
    DEFAULT
-- 139 -- switch_list
    META
    AOUV
-- 140 -- template_type
    META
    INFE
-- 141 -- type_and_declarator
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 142 -- type_descr
    META
    IDENT
-- 143 -- type_name
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 144 -- type_specifier
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 145 -- type_specifier_without_param
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 146 -- typedef_and_declarator
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 147 -- unary_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
    INTEGER
    ULHEXA
    ULLHEXA
    LLHEXA
    LHEXA
    UHEXA
    HEXA
    ULLOCTAL
    LLOCTAL
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    INT
    CHAR
    FLOAT
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
    TIRE
    PLUS
    EXCL
    PLUSPLUS
    TIRETIRE
    SIZEOF
    NEW
    DELETE
    VA_ARG
-- 148 -- chunk_piece
    ALWAYS
-- 149 -- cplus::main_entry
    ALWAYS
-- 150 -- find_func
    ALWAYS
-- 151 -- nothing
    ALWAYS
-- 152 -- quick_compound
    META
    CARRIAGE_RETURN
    AOUV
*/

signed char *chunk::_tokenArray [153] = {
    (signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\200\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\004\000\001\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\004\000\001\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\160\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\300\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\200\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\370\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\360\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\340\001\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\300\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\377\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\340\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\060\022\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\360\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\237\001\000\001\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\200\001\000\001\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\141\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\036\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\376\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\376\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\377\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\300\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\376\377\001\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
};
typedef int (chunk::*(DEF_FUNC_TOKEN_ARRAY [153]))() ;
DEF_FUNC_TOKEN_ARRAY chunk::_tokenFuncArray = {
    /*bidon                          */0,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */(&chunk::Lex),
    /*alloc_expression               */(&chunk::Lex),
    /*allocation_expression          */(&chunk::Lex),
    /*and_expression                 */(&chunk::Lex),
    /*arg_declarator                 */(&chunk::Lex),
    /*arg_declarator_base            */(&chunk::Lex),
    /*arg_declarator_followed        */(&chunk::Lex),
    /*arg_declarator_type            */(&chunk::Lex),
    /*arg_typ_declarator             */(&chunk::Lex),
    /*arg_typ_list                   */0,
    /*asm_declaration                */(&chunk::Lex),
    /*assignment_end                 */(&chunk::Lex),
    /*assignment_expression          */(&chunk::Lex),
    /*attribute_call                 */(&chunk::Lex),
    /*base_specifier                 */(&chunk::Lex),
    /*base_specifier_elem            */(&chunk::Lex),
    /*bit_field_decl                 */(&chunk::Lex),
    /*cast_expression                */(&chunk::Lex),
    /*cast_expression_value          */(&chunk::Lex),
    /*catch_unit                     */(&chunk::specific),
    /*catch_unit_ansi                */(&chunk::Lex),
    /*class_declaration              */(&chunk::Lex),
    /*comment_eater                  */0,
    /*complete_class_name            */(&chunk::Lex),
    /*compound_statement             */(&chunk::Lex),
    /*conditional_expression         */(&chunk::Lex),
    /*const_or_volatile              */(&chunk::Lex),
    /*constan                        */(&chunk::Lex),
    /*ctor_initializer               */0,
    /*data_decl_exotic               */(&chunk::specific),
    /*data_decl_sc_decl              */(&chunk::Lex),
    /*data_decl_sc_decl_full         */(&chunk::Lex),
    /*data_decl_sc_decl_short        */(&chunk::Lex),
    /*data_decl_sc_ty_decl           */(&chunk::Lex),
    /*data_decl_sc_ty_decl_full      */(&chunk::Lex),
    /*data_decl_sc_ty_decl_short     */(&chunk::Lex),
    /*data_declaration               */0,
    /*data_declaration_for           */(&chunk::Lex),
    /*data_declaration_for_full      */(&chunk::Lex),
    /*data_declaration_for_short     */(&chunk::Lex),
    /*data_declaration_strict        */0,
    /*deallocation_expression        */(&chunk::Lex),
    /*declarator                     */(&chunk::Lex),
    /*declarator_follow              */0,
    /*declarator_list                */(&chunk::Lex),
    /*declarator_list_init           */(&chunk::Lex),
    /*declarator_value               */(&chunk::Lex),
    /*define_dir                     */(&chunk::Lex),
    /*directive                      */(&chunk::Lex),
    /*end_pragma                     */(&chunk::Lex),
    /*end_pragma_managed             */(&chunk::Lex),
    /*enum_declarator                */(&chunk::Lex),
    /*enum_val                       */(&chunk::Lex),
    /*equality_expression            */(&chunk::Lex),
    /*exception                      */(&chunk::specific),
    /*exception_ansi                 */(&chunk::Lex),
    /*exception_list                 */(&chunk::Lex),
    /*exclusive_or_expression        */(&chunk::Lex),
    /*expression                     */(&chunk::Lex),
    /*expression_for                 */(&chunk::Lex),
    /*ext_all                        */0,
    /*ext_all_ext                    */0,
    /*ext_all_no_linkage             */0,
    /*ext_data_decl_sc_ty            */(&chunk::Lex),
    /*ext_data_decl_sc_ty_full       */(&chunk::Lex),
    /*ext_data_decl_sc_ty_short      */(&chunk::Lex),
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */(&chunk::Lex),
    /*ext_decl_if_dir                */(&chunk::Lex),
    /*ext_decl_ifdef_dir             */(&chunk::Lex),
    /*for_statement                  */(&chunk::Lex),
    /*func_declaration               */(&chunk::Lex),
    /*func_declarator                */(&chunk::Lex),
    /*ident_mul                      */(&chunk::Lex),
    /*include_dir                    */(&chunk::Lex),
    /*inclusive_or_expression        */(&chunk::Lex),
    /*initializer                    */0,
    /*inline_namespace               */(&chunk::Lex),
    /*inside_declaration             */0,
    /*inside_declaration1            */(&chunk::Lex),
    /*inside_declaration2            */(&chunk::Lex),
    /*inside_declaration_extension   */0,
    /*label_beg                      */(&chunk::Lex),
    /*linkage_specification          */(&chunk::Lex),
    /*logical_and_expression         */(&chunk::Lex),
    /*logical_or_expression          */(&chunk::Lex),
    /*long_short_int_char            */(&chunk::Lex),
    /*macro                          */(&chunk::specific),
    /*macro_extended                 */0,
    /*main_entry                     */0,
    /*member_declarator              */(&chunk::Lex),
    /*message_map                    */(&chunk::specific),
    /*multiplicative_expression      */(&chunk::Lex),
    /*name_space                     */(&chunk::Lex),
    /*new_1                          */(&chunk::Lex),
    /*new_2                          */(&chunk::Lex),
    /*new_declarator                 */0,
    /*new_type_name                  */(&chunk::Lex),
    /*none_statement                 */0,
    /*operator_function_name         */(&chunk::Lex),
    /*other_config                   */(&chunk::LexPragma),
    /*parameter_list                 */(&chunk::Lex),
    /*parameter_list_extended        */(&chunk::Lex),
    /*pm_expression                  */(&chunk::Lex),
    /*postfix_expression             */(&chunk::Lex),
    /*pretty::bidon                  */(&chunk::Lex),
    /*pretty::parse_entry            */(&chunk::Lex),
    /*primary_expression             */(&chunk::Lex),
    /*program                        */0,
    /*protect_declare                */(&chunk::Lex),
    /*ptr_operator                   */(&chunk::Lex),
    /*qualified_name                 */(&chunk::Lex),
    /*qualified_name_elem            */(&chunk::Lex),
    /*quick_prog                     */0,
    /*quick_prog_elem                */0,
    /*range_in_liste                 */(&chunk::Lex),
    /*range_modifier                 */(&chunk::Lex),
    /*range_modifier_function        */(&chunk::Lex),
    /*range_modifier_ident           */0,
    /*range_pragma                   */(&chunk::LexPragma),
    /*relational_expression          */(&chunk::Lex),
    /*sc_specifier                   */0,
    /*shift_expression               */(&chunk::Lex),
    /*simple_type                    */(&chunk::Lex),
    /*simple_type_name               */(&chunk::Lex),
    /*sizeof_type                    */(&chunk::Lex),
    /*stat_all                       */0,
    /*stat_dir                       */(&chunk::Lex),
    /*stat_dir_switch                */(&chunk::Lex),
    /*stat_if_dir                    */(&chunk::Lex),
    /*stat_ifdef_dir                 */(&chunk::Lex),
    /*statement                      */(&chunk::Lex),
    /*statement_expression           */(&chunk::Lex),
    /*string_list                    */(&chunk::Lex),
    /*switch_elem                    */(&chunk::Lex),
    /*switch_list                    */(&chunk::Lex),
    /*template_type                  */(&chunk::Lex),
    /*type_and_declarator            */(&chunk::Lex),
    /*type_descr                     */(&chunk::Lex),
    /*type_name                      */(&chunk::Lex),
    /*type_specifier                 */(&chunk::Lex),
    /*type_specifier_without_param   */(&chunk::Lex),
    /*typedef_and_declarator         */(&chunk::Lex),
    /*unary_expression               */(&chunk::Lex),
    /*chunk_piece                    */0,
    /*cplus::main_entry              */0,
    /*find_func                      */0,
    /*nothing                        */0,
    /*quick_compound                 */(&chunk::Lex)
};
int chunk::_tokenNbFuncArray [153] = {
    /*bidon                          */0,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */1,
    /*alloc_expression               */1,
    /*allocation_expression          */1,
    /*and_expression                 */1,
    /*arg_declarator                 */1,
    /*arg_declarator_base            */1,
    /*arg_declarator_followed        */1,
    /*arg_declarator_type            */1,
    /*arg_typ_declarator             */1,
    /*arg_typ_list                   */0,
    /*asm_declaration                */1,
    /*assignment_end                 */1,
    /*assignment_expression          */1,
    /*attribute_call                 */1,
    /*base_specifier                 */1,
    /*base_specifier_elem            */1,
    /*bit_field_decl                 */1,
    /*cast_expression                */1,
    /*cast_expression_value          */1,
    /*catch_unit                     */13,
    /*catch_unit_ansi                */1,
    /*class_declaration              */1,
    /*comment_eater                  */0,
    /*complete_class_name            */1,
    /*compound_statement             */1,
    /*conditional_expression         */1,
    /*const_or_volatile              */1,
    /*constan                        */1,
    /*ctor_initializer               */0,
    /*data_decl_exotic               */13,
    /*data_decl_sc_decl              */1,
    /*data_decl_sc_decl_full         */1,
    /*data_decl_sc_decl_short        */1,
    /*data_decl_sc_ty_decl           */1,
    /*data_decl_sc_ty_decl_full      */1,
    /*data_decl_sc_ty_decl_short     */1,
    /*data_declaration               */0,
    /*data_declaration_for           */1,
    /*data_declaration_for_full      */1,
    /*data_declaration_for_short     */1,
    /*data_declaration_strict        */0,
    /*deallocation_expression        */1,
    /*declarator                     */1,
    /*declarator_follow              */0,
    /*declarator_list                */1,
    /*declarator_list_init           */1,
    /*declarator_value               */1,
    /*define_dir                     */1,
    /*directive                      */1,
    /*end_pragma                     */1,
    /*end_pragma_managed             */1,
    /*enum_declarator                */1,
    /*enum_val                       */1,
    /*equality_expression            */1,
    /*exception                      */13,
    /*exception_ansi                 */1,
    /*exception_list                 */1,
    /*exclusive_or_expression        */1,
    /*expression                     */1,
    /*expression_for                 */1,
    /*ext_all                        */0,
    /*ext_all_ext                    */0,
    /*ext_all_no_linkage             */0,
    /*ext_data_decl_sc_ty            */1,
    /*ext_data_decl_sc_ty_full       */1,
    /*ext_data_decl_sc_ty_short      */1,
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */1,
    /*ext_decl_if_dir                */1,
    /*ext_decl_ifdef_dir             */1,
    /*for_statement                  */1,
    /*func_declaration               */1,
    /*func_declarator                */1,
    /*ident_mul                      */1,
    /*include_dir                    */1,
    /*inclusive_or_expression        */1,
    /*initializer                    */0,
    /*inline_namespace               */1,
    /*inside_declaration             */0,
    /*inside_declaration1            */1,
    /*inside_declaration2            */1,
    /*inside_declaration_extension   */0,
    /*label_beg                      */1,
    /*linkage_specification          */1,
    /*logical_and_expression         */1,
    /*logical_or_expression          */1,
    /*long_short_int_char            */1,
    /*macro                          */13,
    /*macro_extended                 */0,
    /*main_entry                     */0,
    /*member_declarator              */1,
    /*message_map                    */13,
    /*multiplicative_expression      */1,
    /*name_space                     */1,
    /*new_1                          */1,
    /*new_2                          */1,
    /*new_declarator                 */0,
    /*new_type_name                  */1,
    /*none_statement                 */0,
    /*operator_function_name         */1,
    /*other_config                   */8,
    /*parameter_list                 */1,
    /*parameter_list_extended        */1,
    /*pm_expression                  */1,
    /*postfix_expression             */1,
    /*pretty::bidon                  */1,
    /*pretty::parse_entry            */1,
    /*primary_expression             */1,
    /*program                        */0,
    /*protect_declare                */1,
    /*ptr_operator                   */1,
    /*qualified_name                 */1,
    /*qualified_name_elem            */1,
    /*quick_prog                     */0,
    /*quick_prog_elem                */0,
    /*range_in_liste                 */1,
    /*range_modifier                 */1,
    /*range_modifier_function        */1,
    /*range_modifier_ident           */0,
    /*range_pragma                   */8,
    /*relational_expression          */1,
    /*sc_specifier                   */0,
    /*shift_expression               */1,
    /*simple_type                    */1,
    /*simple_type_name               */1,
    /*sizeof_type                    */1,
    /*stat_all                       */0,
    /*stat_dir                       */1,
    /*stat_dir_switch                */1,
    /*stat_if_dir                    */1,
    /*stat_ifdef_dir                 */1,
    /*statement                      */1,
    /*statement_expression           */1,
    /*string_list                    */1,
    /*switch_elem                    */1,
    /*switch_list                    */1,
    /*template_type                  */1,
    /*type_and_declarator            */1,
    /*type_descr                     */1,
    /*type_name                      */1,
    /*type_specifier                 */1,
    /*type_specifier_without_param   */1,
    /*typedef_and_declarator         */1,
    /*unary_expression               */1,
    /*chunk_piece                    */0,
    /*cplus::main_entry              */0,
    /*find_func                      */0,
    /*nothing                        */0,
    /*quick_compound                 */1
};
int _arityNode_chunk[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                           , 0 , 1 , 1 , 1 , 1 , -1 , 1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , 1 , -1 , -1 , -1 , -1 , -1 , 1 , -1
                           , -1 , -1 , -1 , -1 , 1 , 1 , 3 , 3 , 3 , -1 , -1
                           , -1 , 2 , -1 , -1 , 3 , -1 , 3 , -1 , -1 , -1 , 1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , 2 , 0 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , 2 , -1 , -1 , 4 , 1
                           , -1 , -1 , -1 , 1 , 1 , 0 , -1 , 1 , -1 , -1 , -1
                           , -1 , -1 , -1 , 1 , 1 , 1 , 2 , -1 , 4 , 3 , -1
                           , 1 , 2 , 2 , 2 , -1 , -1 , 2 , 1 , -1 , -1 , 2
                           , -1 , -1 , -1 , -1 , 4 , 2 , 2 , 1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , 2 , 3 , 1 , -1 , 1 , 1 , 1 , -1 , 1 , 2 , 2
                           , -1 , 1 , 2 , -1 , 2 , 2 , 2 , 4 , 0 , 2 , 2
                           , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 1
                           , 2 , 2 , 2 , 0 , 2 , -1 , 1 , 1 , -1 , 3 , 2
                           , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 3 , 3 , -1
                           , -1 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 1 , 1 , 1 , 1 , -1 , -1 , 2 , 2 , 2 , 2
                           , 1 , -1 , 2 , 1 , -1 , 1 , -1 , 2 , 2 , 0 , -1
                           , 1 , 2 , 9 , -1 , 2 , 1 , 1 , 2 , 1 , -1 , 2
                           , -1 , 2 , 0 , 1 , 1 , 0 , 2 , 1 , -1 , 2 , 2
                           , 2 , 2 , 2 , 2 , 0 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 1
                           , 2 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2
                           , 1 , 1 , 0 , 0 , 1 , 1 , -1 , 1 , 2 , 1 , 2
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 };

    
STRINGELEM * listConst_chunk;
PPTREE bri_parse_entry_chunk(int error_free) {
return chunk() . parse_entry (error_free);
}

int chunk::init = 0 ;

void chunk::InitConst()
{
    if (!chunk::init) {
        chunk::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("chunk::TOP", 349);
        AddConstVal("chunk::BDECR", 348);
        AddConstVal("chunk::BINCR", 347);
        AddConstVal("chunk::ADDR", 346);
        AddConstVal("chunk::NOT", 345);
        AddConstVal("chunk::LNEG", 344);
        AddConstVal("chunk::POS", 343);
        AddConstVal("chunk::NEG", 342);
        AddConstVal("chunk::PARAM_TYPE", 341);
        AddConstVal("chunk::STRING_LIST", 340);
        AddConstVal("chunk::LABEL", 339);
        AddConstVal("chunk::THROW_ANSI", 338);
        AddConstVal("chunk::ELSE", 337);
        AddConstVal("chunk::TUNSIGNED", 336);
        AddConstVal("chunk::TSIGNED", 335);
        AddConstVal("chunk::TFLOAT", 334);
        AddConstVal("chunk::TDOUBLE", 333);
        AddConstVal("chunk::DECL_TYPE", 332);
        AddConstVal("chunk::TIDENT", 331);
        AddConstVal("chunk::RSHI", 330);
        AddConstVal("chunk::LSHI", 329);
        AddConstVal("chunk::LT", 328);
        AddConstVal("chunk::GT", 327);
        AddConstVal("chunk::GEQU", 326);
        AddConstVal("chunk::LEQU", 325);
        AddConstVal("chunk::SPACE_ARROW", 324);
        AddConstVal("chunk::TAB_DIRECTIVE", 323);
        AddConstVal("chunk::ENUM_PARAMETERS_UNDER", 322);
        AddConstVal("chunk::ENUM_VERT_VALUE", 321);
        AddConstVal("chunk::PROTECT_MEMB", 320);
        AddConstVal("chunk::LANGUAGE", 319);
        AddConstVal("chunk::EXP", 318);
        AddConstVal("chunk::ADECR", 317);
        AddConstVal("chunk::AINCR", 316);
        AddConstVal("chunk::ARROW", 315);
        AddConstVal("chunk::REF", 314);
        AddConstVal("chunk::EXP_ARRAY", 313);
        AddConstVal("chunk::EXP_LIST", 312);
        AddConstVal("chunk::ARROW_MEMB", 311);
        AddConstVal("chunk::DOT_MEMB", 310);
        AddConstVal("chunk::POINETOI", 309);
        AddConstVal("chunk::TIRESUPEETOI", 308);
        AddConstVal("chunk::TIRESUPE", 307);
        AddConstVal("chunk::SUPESUPE", 306);
        AddConstVal("chunk::INFEINFE", 305);
        AddConstVal("chunk::SUPEEGAL", 304);
        AddConstVal("chunk::INFEEGAL", 303);
        AddConstVal("chunk::NONE", 302);
        AddConstVal("chunk::NEW_DECLARATOR", 301);
        AddConstVal("chunk::USING_NAMESPACE", 300);
        AddConstVal("chunk::NAMESPACE_ALIAS", 299);
        AddConstVal("chunk::REM", 298);
        AddConstVal("chunk::DIV", 297);
        AddConstVal("chunk::MUL", 296);
        AddConstVal("chunk::POURC", 295);
        AddConstVal("chunk::MESSAGE_MAP", 294);
        AddConstVal("chunk::MACRO", 293);
        AddConstVal("chunk::TCHAR", 292);
        AddConstVal("chunk::TSHORT", 291);
        AddConstVal("chunk::TLONG", 290);
        AddConstVal("chunk::TINT", 289);
        AddConstVal("chunk::OR", 288);
        AddConstVal("chunk::VBARVBAR", 287);
        AddConstVal("chunk::AND", 286);
        AddConstVal("chunk::ETCOETCO", 285);
        AddConstVal("chunk::COMPOUND_EXT", 284);
        AddConstVal("chunk::EXTERNAL", 283);
        AddConstVal("chunk::INLINE_NAMESPACE", 282);
        AddConstVal("chunk::INITIALIZER", 281);
        AddConstVal("chunk::LOR", 280);
        AddConstVal("chunk::VBAR", 279);
        AddConstVal("chunk::FUNC", 278);
        AddConstVal("chunk::ALL_OF", 277);
        AddConstVal("chunk::EXTENSION", 276);
        AddConstVal("chunk::__EXTENSION__", 275);
        AddConstVal("chunk::STAT_VOID", 274);
        AddConstVal("chunk::TYPEDEF", 273);
        AddConstVal("chunk::TEMPLATE_DECL", 272);
        AddConstVal("chunk::SUPE", 271);
        AddConstVal("chunk::CLASS_PARAM", 270);
        AddConstVal("chunk::TEMPLATE", 269);
        AddConstVal("chunk::EXP_SEQ", 268);
        AddConstVal("chunk::LXOR", 267);
        AddConstVal("chunk::CHAP", 266);
        AddConstVal("chunk::EXCEPTION_LIST", 265);
        AddConstVal("chunk::EXCEPTION_ANSI", 264);
        AddConstVal("chunk::EXCEPTION", 263);
        AddConstVal("chunk::NEQU", 262);
        AddConstVal("chunk::EQU", 261);
        AddConstVal("chunk::EXCLEGAL", 260);
        AddConstVal("chunk::EGALEGAL", 259);
        AddConstVal("chunk::PRAGMA", 258);
        AddConstVal("chunk::PARAMETERS", 257);
        AddConstVal("chunk::FUNC_HEADER", 256);
        AddConstVal("chunk::INDENT_FUNCTION_TYPE", 255);
        AddConstVal("chunk::COMMENT_PLUS", 254);
        AddConstVal("chunk::COMMENT_END", 253);
        AddConstVal("chunk::COMMENT_MIDDLE", 252);
        AddConstVal("chunk::COMMENT_START", 251);
        AddConstVal("chunk::MARGIN_VALUE", 250);
        AddConstVal("chunk::BRACE_ALIGN_VALUE", 249);
        AddConstVal("chunk::DECL_ALIGN", 248);
        AddConstVal("chunk::ASSIGN_ALIGN", 247);
        AddConstVal("chunk::SINGLE_SWITCH_INDENT_VALUE", 246);
        AddConstVal("chunk::SIMPLIFY_VALUE", 245);
        AddConstVal("chunk::SIMPLIFY", 244);
        AddConstVal("chunk::MODE_VALUE", 243);
        AddConstVal("chunk::TAB_VALUE", 242);
        AddConstVal("chunk::CONFIG", 241);
        AddConstVal("chunk::NOT_MANAGED", 240);
        AddConstVal("chunk::NO_PRETTY", 239);
        AddConstVal("chunk::ALINE", 238);
        AddConstVal("chunk::ERROR", 237);
        AddConstVal("chunk::UNDEF", 236);
        AddConstVal("chunk::TYP_AFF_CALL", 235);
        AddConstVal("chunk::MEMBER_DECLARATOR", 234);
        AddConstVal("chunk::TYP_ARRAY", 233);
        AddConstVal("chunk::CFER", 232);
        AddConstVal("chunk::COUV", 231);
        AddConstVal("chunk::FOR_DECLARATION", 230);
        AddConstVal("chunk::DECLARATION", 229);
        AddConstVal("chunk::CTOR_INITIALIZER", 228);
        AddConstVal("chunk::CTOR_INIT", 227);
        AddConstVal("chunk::LONGLONG", 226);
        AddConstVal("chunk::IUNLONGLONG", 225);
        AddConstVal("chunk::IUNLONG", 224);
        AddConstVal("chunk::IUN", 223);
        AddConstVal("chunk::ILONGLONG", 222);
        AddConstVal("chunk::ILONG", 221);
        AddConstVal("chunk::RANGE_MODIFIER", 220);
        AddConstVal("chunk::COND_AFF", 219);
        AddConstVal("chunk::INTE", 218);
        AddConstVal("chunk::COMPOUND", 217);
        AddConstVal("chunk::CLASS_DECL", 216);
        AddConstVal("chunk::AFER", 215);
        AddConstVal("chunk::CATCH_ANSI", 214);
        AddConstVal("chunk::EXCEPT_ANSI_ALL", 213);
        AddConstVal("chunk::CAST", 212);
        AddConstVal("chunk::TYP_BIT", 211);
        AddConstVal("chunk::PROTECT", 210);
        AddConstVal("chunk::BASE_LIST", 209);
        AddConstVal("chunk::ATTRIBUTE_CALL", 208);
        AddConstVal("chunk::XOR_AFF", 207);
        AddConstVal("chunk::OR_AFF", 206);
        AddConstVal("chunk::AND_AFF", 205);
        AddConstVal("chunk::RSH_AFF", 204);
        AddConstVal("chunk::LSH_AFF", 203);
        AddConstVal("chunk::MIN_AFF", 202);
        AddConstVal("chunk::PLU_AFF", 201);
        AddConstVal("chunk::REM_AFF", 200);
        AddConstVal("chunk::DIV_AFF", 199);
        AddConstVal("chunk::MUL_AFF", 198);
        AddConstVal("chunk::AFF", 197);
        AddConstVal("chunk::VAR_LIST", 196);
        AddConstVal("chunk::TYP_LIST", 195);
        AddConstVal("chunk::TYP_AFF", 194);
        AddConstVal("chunk::ABST_DECLARATOR", 193);
        AddConstVal("chunk::DECLARATOR", 192);
        AddConstVal("chunk::POINPOINPOIN", 191);
        AddConstVal("chunk::LAND", 190);
        AddConstVal("chunk::INIT_NEW", 189);
        AddConstVal("chunk::VIRG", 188);
        AddConstVal("chunk::QUALIFIED", 187);
        AddConstVal("chunk::MINUS", 186);
        AddConstVal("chunk::TYP", 185);
        AddConstVal("chunk::PFER", 184);
        AddConstVal("chunk::DESTRUCT", 183);
        AddConstVal("chunk::TYP_REF", 182);
        AddConstVal("chunk::TYP_ADDR", 181);
        AddConstVal("chunk::INFE", 180);
        AddConstVal("chunk::USING", 179);
        AddConstVal("chunk::NAMESPACE", 178);
        AddConstVal("chunk::CATCH", 177);
        AddConstVal("chunk::DPOI", 176);
        AddConstVal("chunk::PUBLIC", 175);
        AddConstVal("chunk::PROTECTED", 174);
        AddConstVal("chunk::PRIVATE", 173);
        AddConstVal("chunk::CHAPEGAL", 172);
        AddConstVal("chunk::VBAREGAL", 171);
        AddConstVal("chunk::ETCOEGAL", 170);
        AddConstVal("chunk::SUPESUPEEGAL", 169);
        AddConstVal("chunk::INFEINFEEGAL", 168);
        AddConstVal("chunk::TIREEGAL", 167);
        AddConstVal("chunk::PLUSEGAL", 166);
        AddConstVal("chunk::POURCEGAL", 165);
        AddConstVal("chunk::ETOIEGAL", 164);
        AddConstVal("chunk::EGAL", 163);
        AddConstVal("chunk::ASM", 162);
        AddConstVal("chunk::VA_ARG", 161);
        AddConstVal("chunk::DELETE", 160);
        AddConstVal("chunk::NEW", 159);
        AddConstVal("chunk::SIZEOF", 158);
        AddConstVal("chunk::TIRETIRE", 157);
        AddConstVal("chunk::PLUSPLUS", 156);
        AddConstVal("chunk::EXCL", 155);
        AddConstVal("chunk::PLUS", 154);
        AddConstVal("chunk::TIRE", 153);
        AddConstVal("chunk::POUV", 152);
        AddConstVal("chunk::DEFAULT", 151);
        AddConstVal("chunk::CASE", 150);
        AddConstVal("chunk::TRY", 149);
        AddConstVal("chunk::THROW", 148);
        AddConstVal("chunk::FORALLSONS", 147);
        AddConstVal("chunk::WHILE", 146);
        AddConstVal("chunk::SWITCH", 145);
        AddConstVal("chunk::RETURN", 144);
        AddConstVal("chunk::PVIR", 143);
        AddConstVal("chunk::IF", 142);
        AddConstVal("chunk::FOR", 141);
        AddConstVal("chunk::AOUV", 140);
        AddConstVal("chunk::DO", 139);
        AddConstVal("chunk::CONTINUE", 138);
        AddConstVal("chunk::BREAK", 137);
        AddConstVal("chunk::OPERATOR", 136);
        AddConstVal("chunk::TILD", 135);
        AddConstVal("chunk::ETCO", 134);
        AddConstVal("chunk::ETOI", 133);
        AddConstVal("chunk::SHORT", 132);
        AddConstVal("chunk::UNSIGNED", 131);
        AddConstVal("chunk::SIGNED", 130);
        AddConstVal("chunk::LONG", 129);
        AddConstVal("chunk::DPOIDPOI", 128);
        AddConstVal("chunk::VOID", 127);
        AddConstVal("chunk::FLOAT", 126);
        AddConstVal("chunk::CHAR", 125);
        AddConstVal("chunk::INT", 124);
        AddConstVal("chunk::DOUBLE", 123);
        AddConstVal("chunk::DECLTYPE", 122);
        AddConstVal("chunk::TYPENAME", 121);
        AddConstVal("chunk::CLASS", 120);
        AddConstVal("chunk::UNION", 119);
        AddConstVal("chunk::STRUCT", 118);
        AddConstVal("chunk::ENUM", 117);
        AddConstVal("chunk::CONST", 116);
        AddConstVal("chunk::FRIEND", 115);
        AddConstVal("chunk::VIRTUAL", 114);
        AddConstVal("chunk::INLINE", 113);
        AddConstVal("chunk::__ATTRIBUTE__", 112);
        AddConstVal("chunk::VOLATILE", 111);
        AddConstVal("chunk::REGISTER", 110);
        AddConstVal("chunk::EXTERN", 109);
        AddConstVal("chunk::STATIC", 108);
        AddConstVal("chunk::AUTO", 107);
        AddConstVal("chunk::FUNC_SPEC", 106);
        AddConstVal("chunk::TRY_UPPER", 105);
        AddConstVal("chunk::END_CATCH", 104);
        AddConstVal("chunk::END_CATCH_ALL", 103);
        AddConstVal("chunk::AND_CATCH", 102);
        AddConstVal("chunk::CATCH_UPPER", 101);
        AddConstVal("chunk::CATCH_ALL", 100);
        AddConstVal("chunk::END_MESSAGE_MAP", 99);
        AddConstVal("chunk::BEGIN_MESSAGE_MAP", 98);
        AddConstVal("chunk::DECLARE_MESSAGE_MAP", 97);
        AddConstVal("chunk::IMPLEMENT_SERIAL", 96);
        AddConstVal("chunk::IMPLEMENT_DYNCREATE", 95);
        AddConstVal("chunk::IMPLEMENT_DYNAMIC", 94);
        AddConstVal("chunk::DECLARE_SERIAL", 93);
        AddConstVal("chunk::DECLARE_DYNAMIC", 92);
        AddConstVal("chunk::PUSH_FUNCTION", 91);
        AddConstVal("chunk::PUSH_ARGUMENT", 90);
        AddConstVal("chunk::UNDEF_CONTENT", 89);
        AddConstVal("chunk::SMALL_PRAGMA_CONTENT", 88);
        AddConstVal("chunk::PRAGMA_CONTENT", 87);
        AddConstVal("chunk::PRAGMA_ENUM_VERT", 86);
        AddConstVal("chunk::PRAGMA_SPACE_ARROW", 85);
        AddConstVal("chunk::PRAGMA_PARAMETERS", 84);
        AddConstVal("chunk::PRAGMA_PARAMETERS_UNDER", 83);
        AddConstVal("chunk::PRAGMA_FUNC_HEADER", 82);
        AddConstVal("chunk::PRAGMA_INDENT_FUNCTION_TYPE", 81);
        AddConstVal("chunk::PRAGMA_COMMENT_PLUS", 80);
        AddConstVal("chunk::PRAGMA_COMMENT_END", 79);
        AddConstVal("chunk::PRAGMA_COMMENT_MIDDLE", 78);
        AddConstVal("chunk::PRAGMA_COMMENT_START", 77);
        AddConstVal("chunk::PRAGMA_MARGIN", 76);
        AddConstVal("chunk::PRAGMA_DECL_ALIGN", 75);
        AddConstVal("chunk::PRAGMA_ASSIGN_ALIGN", 74);
        AddConstVal("chunk::PRAGMA_SINGLE_SWITCH_INDENT", 73);
        AddConstVal("chunk::PRAGMA_SIMPLIFY", 72);
        AddConstVal("chunk::PRAGMA_BRACE_ALIGN", 71);
        AddConstVal("chunk::PRAGMA_MODE", 70);
        AddConstVal("chunk::PRAGMA_RANGE", 69);
        AddConstVal("chunk::PRAGMA_TAB", 68);
        AddConstVal("chunk::PRAGMA_TAB_DIRECTIVE", 67);
        AddConstVal("chunk::PRAGMA_CONFIG", 66);
        AddConstVal("chunk::PRAGMA_NOT_MANAGED", 65);
        AddConstVal("chunk::PRAGMA_MANAGED", 64);
        AddConstVal("chunk::PRAGMA_NOPRETTY", 63);
        AddConstVal("chunk::PRAGMA_PRETTY", 62);
        AddConstVal("chunk::INCLUDE_LOCAL", 61);
        AddConstVal("chunk::INCLUDE_SYS", 60);
        AddConstVal("chunk::END_LINE", 59);
        AddConstVal("chunk::DEFINE_NAME", 58);
        AddConstVal("chunk::DEFINED_NOT_CONTINUED", 57);
        AddConstVal("chunk::DEFINED_CONTINUED", 56);
        AddConstVal("chunk::POINT", 55);
        AddConstVal("chunk::SLAS", 54);
        AddConstVal("chunk::SLASEGAL", 53);
        AddConstVal("chunk::CARRIAGE_RETURN", 52);
        AddConstVal("chunk::LINE_REFERENCE_DIR", 51);
        AddConstVal("chunk::UNDEF_DIR", 50);
        AddConstVal("chunk::DEFINE_DIR", 49);
        AddConstVal("chunk::ERROR_DIR", 48);
        AddConstVal("chunk::PRAGMA_DIR", 47);
        AddConstVal("chunk::LINE_DIR", 46);
        AddConstVal("chunk::ENDIF_DIR", 45);
        AddConstVal("chunk::ELIF_DIR", 44);
        AddConstVal("chunk::ELSE_DIR", 43);
        AddConstVal("chunk::IF_DIR", 42);
        AddConstVal("chunk::IFNDEF_DIR", 41);
        AddConstVal("chunk::IFDEF_DIR", 40);
        AddConstVal("chunk::INCLUDE_DIR", 39);
        AddConstVal("chunk::OCTAL", 38);
        AddConstVal("chunk::UOCTAL", 37);
        AddConstVal("chunk::LOCTAL", 36);
        AddConstVal("chunk::ULOCTAL", 35);
        AddConstVal("chunk::LLOCTAL", 34);
        AddConstVal("chunk::ULLOCTAL", 33);
        AddConstVal("chunk::HEXA", 32);
        AddConstVal("chunk::UHEXA", 31);
        AddConstVal("chunk::LHEXA", 30);
        AddConstVal("chunk::LLHEXA", 29);
        AddConstVal("chunk::ULLHEXA", 28);
        AddConstVal("chunk::ULHEXA", 27);
        AddConstVal("chunk::INTEGER", 26);
        AddConstVal("chunk::FLOATVAL", 25);
        AddConstVal("chunk::UINTEGER", 24);
        AddConstVal("chunk::LINTEGER", 23);
        AddConstVal("chunk::LLINTEGER", 22);
        AddConstVal("chunk::ULLINTEGER", 21);
        AddConstVal("chunk::ULINTEGER", 20);
        AddConstVal("chunk::CHARACT", 19);
        AddConstVal("chunk::STRING", 18);
        AddConstVal("chunk::DQUOTE", 17);
        AddConstVal("chunk::IDENT", 16);
        AddConstVal("chunk::GOTO_REL", 15);
        AddConstVal("chunk::GOTO", 14);
        AddConstVal("chunk::STR", 13);
        AddConstVal("chunk::UNMARK", 12);
        AddConstVal("chunk::MARK", 11);
        AddConstVal("chunk::TAB_VIRT", 10);
        AddConstVal("chunk::TAB", 9);
        AddConstVal("chunk::NEWLINE", 8);
        AddConstVal("chunk::ATTRIBUTS", 7);
        AddConstVal("chunk::PLUS____TIRETIRETIRETIRETIRETIRE____", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_chunk = listConst;
        listConst = inter;
        AddLang("chunk",_arityNode_chunk,listConst_chunk,bri_parse_entry_chunk,349,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
