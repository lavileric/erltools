/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-1995                 */
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
    Value = strcmp(lexEl.string(),"language");
#line 207 "chunk.met"
    if (Value > 0) {
#line 207 "chunk.met"
        Value = strcmp(lexEl.string(),"struct");
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
                    Value = strcmp(lexEl.string(),"value");
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
                        if(!strcmp(lexEl.string(),"va_arg")) {
#line 207 "chunk.met"
                            return(VA_ARG) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(VALUE);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(VOID);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"try");
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
                        if(!strcmp(lexEl.string(),"typedef")) {
#line 207 "chunk.met"
                            return(TYPEDEF) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(UNION);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"template");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"throw")) {
#line 207 "chunk.met"
                            return(THROW) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"switch")) {
#line 207 "chunk.met"
                            return(SWITCH) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(TEMPLATE);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(TRY);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(UNSIGNED);
#line 207 "chunk.met"
        } else if (Value < 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"public");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"signed");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"static");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"sizeof")) {
#line 207 "chunk.met"
                            return(SIZEOF) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(STATIC);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"return");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"short")) {
#line 207 "chunk.met"
                            return(SHORT) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"register")) {
#line 207 "chunk.met"
                            return(REGISTER) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(RETURN);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(SIGNED);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"operator");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"private");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"protected")) {
#line 207 "chunk.met"
                            return(PROTECTED) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"parse")) {
#line 207 "chunk.met"
                            return(PARSE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(PRIVATE);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"new");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"nextl")) {
#line 207 "chunk.met"
                            return(NEXTL) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"long")) {
#line 207 "chunk.met"
                            return(LONG) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(NEW);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(OPERATOR);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(PUBLIC);
#line 207 "chunk.met"
        } else 
#line 207 "chunk.met"
            return(STRUCT);
#line 207 "chunk.met"
    } else if (Value < 0) {
#line 207 "chunk.met"
        Value = strcmp(lexEl.string(),"double");
#line 207 "chunk.met"
        if (Value > 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"foreach");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"in");
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
                    Value = strcmp(lexEl.string(),"goto");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"if")) {
#line 207 "chunk.met"
                            return(IF) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"friend")) {
#line 207 "chunk.met"
                            return(FRIEND) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(GOTO);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(IN);
#line 207 "chunk.met"
            } else if (Value < 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"float");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"forallsons");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"for")) {
#line 207 "chunk.met"
                            return(FOR) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(FORALLSONS);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"enum");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"extern")) {
#line 207 "chunk.met"
                            return(EXTERN) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"else")) {
#line 207 "chunk.met"
                            return(ELSE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(ENUM);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(FLOAT);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(FOREACH);
#line 207 "chunk.met"
        } else if (Value < 0) {
#line 207 "chunk.met"
            Value = strcmp(lexEl.string(),"char");
#line 207 "chunk.met"
            if (Value > 0) {
#line 207 "chunk.met"
                Value = strcmp(lexEl.string(),"default");
#line 207 "chunk.met"
                if (Value > 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"do");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        return(defaultValue);
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"delete")) {
#line 207 "chunk.met"
                            return(DELETE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(DO);
#line 207 "chunk.met"
                } else if (Value < 0) {
#line 207 "chunk.met"
                    Value = strcmp(lexEl.string(),"const");
#line 207 "chunk.met"
                    if (Value > 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"continue")) {
#line 207 "chunk.met"
                            return(CONTINUE) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else if (Value < 0) {
#line 207 "chunk.met"
                        if(!strcmp(lexEl.string(),"class")) {
#line 207 "chunk.met"
                            return(CLASS) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(CONST);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(DEFAULT);
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
                        if(!strcmp(lexEl.string(),"catch")) {
#line 207 "chunk.met"
                            return(CATCH) ;
#line 207 "chunk.met"
                        }
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
                    Value = strcmp(lexEl.string(),"+____------____");
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
                        if(!strcmp(lexEl.string(),"(")) {
#line 207 "chunk.met"
                            return(POUV) ;
#line 207 "chunk.met"
                        }
#line 207 "chunk.met"
                    } else 
#line 207 "chunk.met"
                        return(PLUS____TIRETIRETIRETIRETIRETIRE____);
#line 207 "chunk.met"
                } else 
#line 207 "chunk.met"
                    return(AUTO);
#line 207 "chunk.met"
            } else 
#line 207 "chunk.met"
                return(CHAR);
#line 207 "chunk.met"
        } else 
#line 207 "chunk.met"
            return(DOUBLE);
#line 207 "chunk.met"
    } else 
#line 207 "chunk.met"
        return(LANGUAGE);
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
#line 279 "chunk.met"
int chunk::Lex ()
#line 279 "chunk.met"
{
#line 279 "chunk.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 279 "chunk.met"
        FreePos(lastContextPos);
#line 279 "chunk.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 279 "chunk.met"
    if ( tokenAhead)
#line 279 "chunk.met"
        ExtUnputBuf();
#line 279 "chunk.met"
    #ifdef DUMP_COORD
#line 279 "chunk.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 279 "chunk.met"
    #endif
#line 279 "chunk.met"
    
#line 279 "chunk.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 279 "chunk.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 279 "chunk.met"
    tokenAhead = 0;
#line 279 "chunk.met"
    if(LexMeta() != -1){tokenAhead =1; return 1;}
#line 279 "chunk.met"
#line 282 "chunk.met"
    if (! (keepCarriage)){
#line 282 "chunk.met"
#line 283 "chunk.met"
#line 284 "chunk.met"
        ptStockBuf = -1;
#line 284 "chunk.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 284 "chunk.met"
            NextChar() ;
#line 284 "chunk.met"
        ptStockBuf = -1;
#line 284 "chunk.met"
        lexEl.Erase();
#line 284 "chunk.met"
        tokenAhead = 0;
#line 284 "chunk.met"
        oldLine=line,oldCol=col;
#line 284 "chunk.met"
        if ( !lexCallLex) {
#line 284 "chunk.met"
            PUT_COORD_CALL;
#line 284 "chunk.met"
        }
#line 284 "chunk.met"
#line 284 "chunk.met"
#line 284 "chunk.met"
    } else {
#line 284 "chunk.met"
#line 287 "chunk.met"
#line 288 "chunk.met"
        ptStockBuf = -1;
#line 288 "chunk.met"
        while ((c == '\t')||(c == ' ')||(c == ''))
#line 288 "chunk.met"
            NextChar() ;
#line 288 "chunk.met"
        ptStockBuf = -1;
#line 288 "chunk.met"
        lexEl.Erase();
#line 288 "chunk.met"
        tokenAhead = 0;
#line 288 "chunk.met"
        oldLine=line,oldCol=col;
#line 288 "chunk.met"
        if ( !lexCallLex) {
#line 288 "chunk.met"
            PUT_COORD_CALL;
#line 288 "chunk.met"
        }
#line 288 "chunk.met"
#line 288 "chunk.met"
    }
#line 288 "chunk.met"
#line 290 "chunk.met"
    int keepCurrCol = col ;
#line 290 "chunk.met"
    switch(c) {
#line 290 "chunk.met"
        case '*' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::ETOIEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '*' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    if (GetStringS("=",1)) {
#line 290 "chunk.met"
                        lexEl.Value = chunk::ETOIETOIEGAL;
#line 290 "chunk.met"
                        firstOnLine = 0;
#line 290 "chunk.met"
                        tokenAhead = 1;
#line 290 "chunk.met"
                        PUT_COORD_CALL;
#line 290 "chunk.met"
                        return(1);
#line 290 "chunk.met"
                    } else {
#line 290 "chunk.met"
                        UnputChar(1);
#line 290 "chunk.met"
                        goto _exitDumpToken107;
#line 290 "chunk.met"
                    }
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken107 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::ETOI;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '&' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::ETCOEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '&' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::ETCOETCO;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken110 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::ETCO;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '~' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::TILD;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '(' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::POUV;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case ')' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::PFER;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '+' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::PLUSEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '+' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::PLUSPLUS;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken116 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::PLUS;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '-' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::TIREEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '-' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::TIRETIRE;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '>' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    switch(c) {
#line 290 "chunk.met"
                        case '*' :
#line 290 "chunk.met"
                            NextChar();
#line 290 "chunk.met"
                            lexEl.Value = chunk::TIRESUPEETOI;
#line 290 "chunk.met"
                            firstOnLine = 0;
#line 290 "chunk.met"
                            tokenAhead = 1;
#line 290 "chunk.met"
                            PUT_COORD_CALL;
#line 290 "chunk.met"
                            return(1);
#line 290 "chunk.met"
                            break;
#line 290 "chunk.met"
                        _exitDumpToken122 :;
#line 290 "chunk.met"
                        default :
#line 290 "chunk.met"
                            lexEl.Value = chunk::TIRESUPE;
#line 290 "chunk.met"
                            firstOnLine = 0;
#line 290 "chunk.met"
                            tokenAhead = 1;
#line 290 "chunk.met"
                            PUT_COORD_CALL;
#line 290 "chunk.met"
                        
#line 290 "chunk.met"
                            return(1);
#line 290 "chunk.met"
                    }
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken119 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::TIRE;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case ':' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case ':' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::DPOIDPOI;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken124 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::DPOI;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case ',' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::VIRG;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '=' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::EGALEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken127 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::EGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '.' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '.' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    if (GetStringS(".",1)) {
#line 290 "chunk.met"
                        lexEl.Value = chunk::POINPOINPOIN;
#line 290 "chunk.met"
                        firstOnLine = 0;
#line 290 "chunk.met"
                        tokenAhead = 1;
#line 290 "chunk.met"
                        PUT_COORD_CALL;
#line 290 "chunk.met"
                        return(1);
#line 290 "chunk.met"
                    } else {
#line 290 "chunk.met"
                        UnputChar(1);
#line 290 "chunk.met"
                        goto _exitDumpToken129;
#line 290 "chunk.met"
                    }
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '*' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::POINETOI;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken129 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    UnputChar(1);
#line 290 "chunk.met"
                goto _exitDumpToken0;
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '%' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::POURCEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken132 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::POURC;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '<' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '<' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    switch(c) {
#line 290 "chunk.met"
                        case '=' :
#line 290 "chunk.met"
                            NextChar();
#line 290 "chunk.met"
                            lexEl.Value = chunk::INFEINFEEGAL;
#line 290 "chunk.met"
                            firstOnLine = 0;
#line 290 "chunk.met"
                            tokenAhead = 1;
#line 290 "chunk.met"
                            PUT_COORD_CALL;
#line 290 "chunk.met"
                            return(1);
#line 290 "chunk.met"
                            break;
#line 290 "chunk.met"
                        _exitDumpToken135 :;
#line 290 "chunk.met"
                        default :
#line 290 "chunk.met"
                            lexEl.Value = chunk::INFEINFE;
#line 290 "chunk.met"
                            firstOnLine = 0;
#line 290 "chunk.met"
                            tokenAhead = 1;
#line 290 "chunk.met"
                            PUT_COORD_CALL;
#line 290 "chunk.met"
                        
#line 290 "chunk.met"
                            return(1);
#line 290 "chunk.met"
                    }
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::INFEEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '>' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::INFESUPE;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case 'S' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    if ( c== 'E') {
#line 290 "chunk.met"
                        NextChar();
#line 290 "chunk.met"
                        if ( c== 'P') {
#line 290 "chunk.met"
                            NextChar();
#line 290 "chunk.met"
                            switch(c) {
#line 290 "chunk.met"
                                case 'A' :
#line 290 "chunk.met"
                                    NextChar();
#line 290 "chunk.met"
                                    if (GetStringS(">",1)) {
#line 290 "chunk.met"
                                        lexEl.Value = chunk::INFESEPASUPE;
#line 290 "chunk.met"
                                        firstOnLine = 0;
#line 290 "chunk.met"
                                        tokenAhead = 1;
#line 290 "chunk.met"
                                        PUT_COORD_CALL;
#line 290 "chunk.met"
                                        return(1);
#line 290 "chunk.met"
                                    } else {
#line 290 "chunk.met"
                                        UnputChar(1);
#line 290 "chunk.met"
                                        goto _exitDumpToken141;
#line 290 "chunk.met"
                                    }
#line 290 "chunk.met"
                                    break;
#line 290 "chunk.met"
                                case 'B' :
#line 290 "chunk.met"
                                    NextChar();
#line 290 "chunk.met"
                                    if (GetStringS(">",1)) {
#line 290 "chunk.met"
                                        lexEl.Value = chunk::INFESEPBSUPE;
#line 290 "chunk.met"
                                        firstOnLine = 0;
#line 290 "chunk.met"
                                        tokenAhead = 1;
#line 290 "chunk.met"
                                        PUT_COORD_CALL;
#line 290 "chunk.met"
                                        return(1);
#line 290 "chunk.met"
                                    } else {
#line 290 "chunk.met"
                                        UnputChar(1);
#line 290 "chunk.met"
                                        goto _exitDumpToken141;
#line 290 "chunk.met"
                                    }
#line 290 "chunk.met"
                                    break;
#line 290 "chunk.met"
                                case 'O' :
#line 290 "chunk.met"
                                    NextChar();
#line 290 "chunk.met"
                                    if (GetStringS(">",1)) {
#line 290 "chunk.met"
                                        lexEl.Value = chunk::INFESEPOSUPE;
#line 290 "chunk.met"
                                        firstOnLine = 0;
#line 290 "chunk.met"
                                        tokenAhead = 1;
#line 290 "chunk.met"
                                        PUT_COORD_CALL;
#line 290 "chunk.met"
                                        return(1);
#line 290 "chunk.met"
                                    } else {
#line 290 "chunk.met"
                                        UnputChar(1);
#line 290 "chunk.met"
                                        goto _exitDumpToken141;
#line 290 "chunk.met"
                                    }
#line 290 "chunk.met"
                                    break;
#line 290 "chunk.met"
                                _exitDumpToken141 :;
#line 290 "chunk.met"
                                default :
#line 290 "chunk.met"
                                    UnputChar(3);
#line 290 "chunk.met"
                                goto _exitDumpToken134;
#line 290 "chunk.met"
                            }
#line 290 "chunk.met"
                        } else {
#line 290 "chunk.met"
                            UnputChar(2);
#line 290 "chunk.met"
                            goto _exitDumpToken134;
#line 290 "chunk.met"
                        }
#line 290 "chunk.met"
                    } else {
#line 290 "chunk.met"
                        UnputChar(1);
#line 290 "chunk.met"
                        goto _exitDumpToken134;
#line 290 "chunk.met"
                    }
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken134 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::INFE;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '>' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '>' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    switch(c) {
#line 290 "chunk.met"
                        case '=' :
#line 290 "chunk.met"
                            NextChar();
#line 290 "chunk.met"
                            lexEl.Value = chunk::SUPESUPEEGAL;
#line 290 "chunk.met"
                            firstOnLine = 0;
#line 290 "chunk.met"
                            tokenAhead = 1;
#line 290 "chunk.met"
                            PUT_COORD_CALL;
#line 290 "chunk.met"
                            return(1);
#line 290 "chunk.met"
                            break;
#line 290 "chunk.met"
                        _exitDumpToken146 :;
#line 290 "chunk.met"
                        default :
#line 290 "chunk.met"
                            lexEl.Value = chunk::SUPESUPE;
#line 290 "chunk.met"
                            firstOnLine = 0;
#line 290 "chunk.met"
                            tokenAhead = 1;
#line 290 "chunk.met"
                            PUT_COORD_CALL;
#line 290 "chunk.met"
                        
#line 290 "chunk.met"
                            return(1);
#line 290 "chunk.met"
                    }
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::SUPEEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken145 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::SUPE;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '|' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::VBAREGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                case '|' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::VBARVBAR;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken149 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::VBAR;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '^' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::CHAPEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken152 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::CHAP;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '{' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '{' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::AOUVAOUV;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken154 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::AOUV;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '}' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '}' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::AFERAFER;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken156 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::AFER;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '?' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::INTE;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case ';' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::PVIR;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '[' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::COUV;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case ']' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::CFER;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '!' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            switch(c) {
#line 290 "chunk.met"
                case '=' :
#line 290 "chunk.met"
                    NextChar();
#line 290 "chunk.met"
                    lexEl.Value = chunk::EXCLEGAL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
                    break;
#line 290 "chunk.met"
                _exitDumpToken162 :;
#line 290 "chunk.met"
                default :
#line 290 "chunk.met"
                    lexEl.Value = chunk::EXCL;
#line 290 "chunk.met"
                    firstOnLine = 0;
#line 290 "chunk.met"
                    tokenAhead = 1;
#line 290 "chunk.met"
                    PUT_COORD_CALL;
#line 290 "chunk.met"
                
#line 290 "chunk.met"
                    return(1);
#line 290 "chunk.met"
            }
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        case '@' :
#line 290 "chunk.met"
            NextChar();
#line 290 "chunk.met"
            lexEl.Value = chunk::ARRO;
#line 290 "chunk.met"
            firstOnLine = 0;
#line 290 "chunk.met"
            tokenAhead = 1;
#line 290 "chunk.met"
            PUT_COORD_CALL;
#line 290 "chunk.met"
            return(1);
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
        _exitDumpToken0 :;
#line 290 "chunk.met"
        default :
#line 290 "chunk.met"
            break;
#line 290 "chunk.met"
    }
#line 290 "chunk.met"
    col = keepCurrCol ;
#line 290 "chunk.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 290 "chunk.met"
    lexEl.Erase();
#line 290 "chunk.met"
    tokenAhead = 0;
#line 290 "chunk.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 290 "chunk.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 290 "chunk.met"
#line 291 "chunk.met"
    switch (c) {
#line 291 "chunk.met"
#line 292 "chunk.met"
        case 'a' :
#line 292 "chunk.met"
        case 'b' :
#line 292 "chunk.met"
        case 'c' :
#line 292 "chunk.met"
        case 'd' :
#line 292 "chunk.met"
        case 'e' :
#line 292 "chunk.met"
        case 'f' :
#line 292 "chunk.met"
        case 'g' :
#line 292 "chunk.met"
        case 'h' :
#line 292 "chunk.met"
        case 'i' :
#line 292 "chunk.met"
        case 'j' :
#line 292 "chunk.met"
        case 'k' :
#line 292 "chunk.met"
        case 'l' :
#line 292 "chunk.met"
        case 'm' :
#line 292 "chunk.met"
        case 'n' :
#line 292 "chunk.met"
        case 'o' :
#line 292 "chunk.met"
        case 'p' :
#line 292 "chunk.met"
        case 'q' :
#line 292 "chunk.met"
        case 'r' :
#line 292 "chunk.met"
        case 's' :
#line 292 "chunk.met"
        case 't' :
#line 292 "chunk.met"
        case 'u' :
#line 292 "chunk.met"
        case 'v' :
#line 292 "chunk.met"
        case 'w' :
#line 292 "chunk.met"
        case 'x' :
#line 292 "chunk.met"
        case 'y' :
#line 292 "chunk.met"
        case 'z' :
#line 292 "chunk.met"
        case 'A' :
#line 292 "chunk.met"
        case 'B' :
#line 292 "chunk.met"
        case 'C' :
#line 292 "chunk.met"
        case 'D' :
#line 292 "chunk.met"
        case 'E' :
#line 292 "chunk.met"
        case 'F' :
#line 292 "chunk.met"
        case 'G' :
#line 292 "chunk.met"
        case 'H' :
#line 292 "chunk.met"
        case 'I' :
#line 292 "chunk.met"
        case 'J' :
#line 292 "chunk.met"
        case 'K' :
#line 292 "chunk.met"
        case 'L' :
#line 292 "chunk.met"
        case 'M' :
#line 292 "chunk.met"
        case 'N' :
#line 292 "chunk.met"
        case 'O' :
#line 292 "chunk.met"
        case 'P' :
#line 292 "chunk.met"
        case 'Q' :
#line 292 "chunk.met"
        case 'R' :
#line 292 "chunk.met"
        case 'S' :
#line 292 "chunk.met"
        case 'T' :
#line 292 "chunk.met"
        case 'U' :
#line 292 "chunk.met"
        case 'V' :
#line 292 "chunk.met"
        case 'W' :
#line 292 "chunk.met"
        case 'X' :
#line 292 "chunk.met"
        case 'Y' :
#line 292 "chunk.met"
        case 'Z' :
#line 292 "chunk.met"
        case '_' :
#line 292 "chunk.met"
#line 293 "chunk.met"
#line 295 "chunk.met"
            while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 295 "chunk.met"
#line 296 "chunk.met"
                {
#line 296 "chunk.met"
                    lexEl . AddChar(c);
#line 296 "chunk.met"
                    NextChar();
#line 296 "chunk.met"
                }
#line 296 "chunk.met"
            } 
#line 296 "chunk.met"
#line 297 "chunk.met"
            {
#line 297 "chunk.met"
                firstOnLine = 0 ; 
#line 297 "chunk.met"
                tokenAhead =1;
#line 297 "chunk.met"
                lexEl.Value = (SortKeyWord (IDENT));
#line 297 "chunk.met"
                PUT_COORD_CALL;
#line 297 "chunk.met"
                return(1);
#line 297 "chunk.met"
            }
#line 297 "chunk.met"
#line 297 "chunk.met"
            break ;
#line 297 "chunk.met"
#line 299 "chunk.met"
        case '"' :
#line 299 "chunk.met"
            NextChar();
#line 299 "chunk.met"
#line 301 "chunk.met"
            while (c != EOF) { 
#line 301 "chunk.met"
#line 303 "chunk.met"
                switch (c) {
#line 303 "chunk.met"
#line 304 "chunk.met"
                    case '"' :
#line 304 "chunk.met"
                        NextChar();
#line 304 "chunk.met"
#line 305 "chunk.met"
#line 306 "chunk.met"
                        {
#line 306 "chunk.met"
                            firstOnLine = 0 ; 
#line 306 "chunk.met"
                            tokenAhead =1;
#line 306 "chunk.met"
                            lexEl.Value=STRING;
#line 306 "chunk.met"
                            PUT_COORD_CALL;
#line 306 "chunk.met"
                            return(1);
#line 306 "chunk.met"
                        }
#line 306 "chunk.met"
#line 306 "chunk.met"
                        break ;
#line 306 "chunk.met"
#line 308 "chunk.met"
                    case '\\' :
#line 308 "chunk.met"
                        NextChar();
#line 308 "chunk.met"
#line 309 "chunk.met"
#line 310 "chunk.met"
                        {
#line 310 "chunk.met"
                            lexEl.AddString("\\");
#line 310 "chunk.met"
                        }
#line 310 "chunk.met"
#line 311 "chunk.met"
                        if (! (((c == '\r')))){
#line 311 "chunk.met"
#line 314 "chunk.met"
                            {
#line 314 "chunk.met"
                                lexEl . AddChar(c);
#line 314 "chunk.met"
                                NextChar();
#line 314 "chunk.met"
                            }
#line 314 "chunk.met"
                        } else {
#line 314 "chunk.met"
#line 317 "chunk.met"
                            if (!(c != EOF&& NextChar())) ;
#line 317 "chunk.met"
                        }
#line 317 "chunk.met"
#line 317 "chunk.met"
                        break ;
#line 317 "chunk.met"
#line 319 "chunk.met"
                    default : 
#line 319 "chunk.met"
                         if (c!= EOF) {
#line 319 "chunk.met"
#line 319 "chunk.met"
                            {
#line 319 "chunk.met"
                                lexEl . AddChar(c);
#line 319 "chunk.met"
                                NextChar();
#line 319 "chunk.met"
                            }
#line 319 "chunk.met"
                        }
#line 319 "chunk.met"
                        break ;
#line 319 "chunk.met"
                }
#line 319 "chunk.met"
            } 
#line 319 "chunk.met"
            break ;
#line 319 "chunk.met"
#line 321 "chunk.met"
        case '\'' :
#line 321 "chunk.met"
            NextChar();
#line 321 "chunk.met"
#line 323 "chunk.met"
            while (c != EOF) { 
#line 323 "chunk.met"
#line 325 "chunk.met"
                switch (c) {
#line 325 "chunk.met"
#line 326 "chunk.met"
                    case '\\' :
#line 326 "chunk.met"
                        NextChar();
#line 326 "chunk.met"
#line 327 "chunk.met"
#line 328 "chunk.met"
                        {
#line 328 "chunk.met"
                            lexEl.AddString("\\");
#line 328 "chunk.met"
                        }
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
#line 329 "chunk.met"
                        break ;
#line 329 "chunk.met"
#line 331 "chunk.met"
                    case '\'' :
#line 331 "chunk.met"
                        NextChar();
#line 331 "chunk.met"
#line 332 "chunk.met"
#line 333 "chunk.met"
                        {
#line 333 "chunk.met"
                            firstOnLine = 0 ; 
#line 333 "chunk.met"
                            tokenAhead =1;
#line 333 "chunk.met"
                            lexEl.Value=CHARACT;
#line 333 "chunk.met"
                            PUT_COORD_CALL;
#line 333 "chunk.met"
                            return(1);
#line 333 "chunk.met"
                        }
#line 333 "chunk.met"
#line 333 "chunk.met"
                        break ;
#line 333 "chunk.met"
#line 335 "chunk.met"
                    default : 
#line 335 "chunk.met"
                         if (c!= EOF) {
#line 335 "chunk.met"
#line 335 "chunk.met"
                            {
#line 335 "chunk.met"
                                lexEl . AddChar(c);
#line 335 "chunk.met"
                                NextChar();
#line 335 "chunk.met"
                            }
#line 335 "chunk.met"
                        }
#line 335 "chunk.met"
                        break ;
#line 335 "chunk.met"
                }
#line 335 "chunk.met"
            } 
#line 335 "chunk.met"
            break ;
#line 335 "chunk.met"
#line 337 "chunk.met"
        case '1' :
#line 337 "chunk.met"
        case '2' :
#line 337 "chunk.met"
        case '3' :
#line 337 "chunk.met"
        case '4' :
#line 337 "chunk.met"
        case '5' :
#line 337 "chunk.met"
        case '6' :
#line 337 "chunk.met"
        case '7' :
#line 337 "chunk.met"
        case '8' :
#line 337 "chunk.met"
        case '9' :
#line 337 "chunk.met"
#line 339 "chunk.met"
#line 341 "chunk.met"
            while ((('0' <= c && c <= '9'))) { 
#line 341 "chunk.met"
#line 342 "chunk.met"
                {
#line 342 "chunk.met"
                    lexEl . AddChar(c);
#line 342 "chunk.met"
                    NextChar();
#line 342 "chunk.met"
                }
#line 342 "chunk.met"
            } 
#line 342 "chunk.met"
#line 343 "chunk.met"
            switch (c) {
#line 343 "chunk.met"
#line 344 "chunk.met"
                case 'l' :
#line 344 "chunk.met"
                case 'L' :
#line 344 "chunk.met"
                    NextChar();
#line 344 "chunk.met"
#line 345 "chunk.met"
                    switch (c) {
#line 345 "chunk.met"
#line 346 "chunk.met"
                        case 'u' :
#line 346 "chunk.met"
                        case 'U' :
#line 346 "chunk.met"
                            NextChar();
#line 346 "chunk.met"
#line 346 "chunk.met"
                            {
#line 346 "chunk.met"
                                firstOnLine = 0 ; 
#line 346 "chunk.met"
                                tokenAhead =1;
#line 346 "chunk.met"
                                lexEl.Value=ULINTEGER;
#line 346 "chunk.met"
                                PUT_COORD_CALL;
#line 346 "chunk.met"
                                return(1);
#line 346 "chunk.met"
                            }
#line 346 "chunk.met"
                            break ;
#line 346 "chunk.met"
#line 347 "chunk.met"
                        default : 
#line 347 "chunk.met"
                             if (c!= EOF) {
#line 347 "chunk.met"
#line 347 "chunk.met"
                                {
#line 347 "chunk.met"
                                    firstOnLine = 0 ; 
#line 347 "chunk.met"
                                    tokenAhead =1;
#line 347 "chunk.met"
                                    lexEl.Value=LINTEGER;
#line 347 "chunk.met"
                                    PUT_COORD_CALL;
#line 347 "chunk.met"
                                    return(1);
#line 347 "chunk.met"
                                }
#line 347 "chunk.met"
                            }
#line 347 "chunk.met"
                            break ;
#line 347 "chunk.met"
                    }
#line 347 "chunk.met"
                    break ;
#line 347 "chunk.met"
#line 349 "chunk.met"
                case 'u' :
#line 349 "chunk.met"
                case 'U' :
#line 349 "chunk.met"
                    NextChar();
#line 349 "chunk.met"
#line 350 "chunk.met"
                    switch (c) {
#line 350 "chunk.met"
#line 351 "chunk.met"
                        case 'l' :
#line 351 "chunk.met"
                        case 'L' :
#line 351 "chunk.met"
                            NextChar();
#line 351 "chunk.met"
#line 351 "chunk.met"
                            {
#line 351 "chunk.met"
                                firstOnLine = 0 ; 
#line 351 "chunk.met"
                                tokenAhead =1;
#line 351 "chunk.met"
                                lexEl.Value=ULINTEGER;
#line 351 "chunk.met"
                                PUT_COORD_CALL;
#line 351 "chunk.met"
                                return(1);
#line 351 "chunk.met"
                            }
#line 351 "chunk.met"
                            break ;
#line 351 "chunk.met"
#line 352 "chunk.met"
                        default : 
#line 352 "chunk.met"
                             if (c!= EOF) {
#line 352 "chunk.met"
#line 352 "chunk.met"
                                {
#line 352 "chunk.met"
                                    firstOnLine = 0 ; 
#line 352 "chunk.met"
                                    tokenAhead =1;
#line 352 "chunk.met"
                                    lexEl.Value=UINTEGER;
#line 352 "chunk.met"
                                    PUT_COORD_CALL;
#line 352 "chunk.met"
                                    return(1);
#line 352 "chunk.met"
                                }
#line 352 "chunk.met"
                            }
#line 352 "chunk.met"
                            break ;
#line 352 "chunk.met"
                    }
#line 352 "chunk.met"
                    break ;
#line 352 "chunk.met"
#line 354 "chunk.met"
                case 'e' :
#line 354 "chunk.met"
                case 'E' :
#line 354 "chunk.met"
                    NextChar();
#line 354 "chunk.met"
#line 355 "chunk.met"
#line 356 "chunk.met"
                    {
#line 356 "chunk.met"
                        lexEl.AddString("e");
#line 356 "chunk.met"
                    }
#line 356 "chunk.met"
#line 357 "chunk.met"
                    if (((c == '+')||(c == '-'))){
#line 357 "chunk.met"
#line 358 "chunk.met"
                        {
#line 358 "chunk.met"
                            lexEl . AddChar(c);
#line 358 "chunk.met"
                            NextChar();
#line 358 "chunk.met"
                        }
#line 358 "chunk.met"
                    }
#line 358 "chunk.met"
#line 359 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 359 "chunk.met"
#line 360 "chunk.met"
                        {
#line 360 "chunk.met"
                            lexEl . AddChar(c);
#line 360 "chunk.met"
                            NextChar();
#line 360 "chunk.met"
                        }
#line 360 "chunk.met"
                    } 
#line 360 "chunk.met"
#line 361 "chunk.met"
                    switch (c) {
#line 361 "chunk.met"
#line 362 "chunk.met"
                        case 'f' :
#line 362 "chunk.met"
#line 362 "chunk.met"
                            {
#line 362 "chunk.met"
                                lexEl . AddChar(c);
#line 362 "chunk.met"
                                NextChar();
#line 362 "chunk.met"
                            }
#line 362 "chunk.met"
                            break ;
#line 362 "chunk.met"
#line 363 "chunk.met"
                        case 'F' :
#line 363 "chunk.met"
#line 363 "chunk.met"
                            {
#line 363 "chunk.met"
                                lexEl . AddChar(c);
#line 363 "chunk.met"
                                NextChar();
#line 363 "chunk.met"
                            }
#line 363 "chunk.met"
                            break ;
#line 363 "chunk.met"
#line 364 "chunk.met"
                        case 'l' :
#line 364 "chunk.met"
#line 364 "chunk.met"
                            {
#line 364 "chunk.met"
                                lexEl . AddChar(c);
#line 364 "chunk.met"
                                NextChar();
#line 364 "chunk.met"
                            }
#line 364 "chunk.met"
                            break ;
#line 364 "chunk.met"
#line 365 "chunk.met"
                        case 'L' :
#line 365 "chunk.met"
#line 365 "chunk.met"
                            {
#line 365 "chunk.met"
                                lexEl . AddChar(c);
#line 365 "chunk.met"
                                NextChar();
#line 365 "chunk.met"
                            }
#line 365 "chunk.met"
                            break ;
#line 365 "chunk.met"
                    }
#line 365 "chunk.met"
#line 367 "chunk.met"
                    {
#line 367 "chunk.met"
                        firstOnLine = 0 ; 
#line 367 "chunk.met"
                        tokenAhead =1;
#line 367 "chunk.met"
                        lexEl.Value=FLOAT;
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
                case '.' :
#line 369 "chunk.met"
#line 370 "chunk.met"
#line 371 "chunk.met"
                    {
#line 371 "chunk.met"
                        lexEl . AddChar(c);
#line 371 "chunk.met"
                        NextChar();
#line 371 "chunk.met"
                    }
#line 371 "chunk.met"
#line 372 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 372 "chunk.met"
#line 373 "chunk.met"
                        {
#line 373 "chunk.met"
                            lexEl . AddChar(c);
#line 373 "chunk.met"
                            NextChar();
#line 373 "chunk.met"
                        }
#line 373 "chunk.met"
                    } 
#line 373 "chunk.met"
#line 374 "chunk.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 374 "chunk.met"
#line 375 "chunk.met"
#line 376 "chunk.met"
                        {
#line 376 "chunk.met"
                            lexEl.AddString("e");
#line 376 "chunk.met"
                        }
#line 376 "chunk.met"
#line 377 "chunk.met"
                        if (((c == '+')||(c == '-'))){
#line 377 "chunk.met"
#line 378 "chunk.met"
                            {
#line 378 "chunk.met"
                                lexEl . AddChar(c);
#line 378 "chunk.met"
                                NextChar();
#line 378 "chunk.met"
                            }
#line 378 "chunk.met"
                        }
#line 378 "chunk.met"
#line 379 "chunk.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 379 "chunk.met"
#line 380 "chunk.met"
                            {
#line 380 "chunk.met"
                                lexEl . AddChar(c);
#line 380 "chunk.met"
                                NextChar();
#line 380 "chunk.met"
                            }
#line 380 "chunk.met"
                        } 
#line 380 "chunk.met"
#line 380 "chunk.met"
#line 380 "chunk.met"
                    }
#line 380 "chunk.met"
#line 382 "chunk.met"
                    switch (c) {
#line 382 "chunk.met"
#line 383 "chunk.met"
                        case 'f' :
#line 383 "chunk.met"
#line 383 "chunk.met"
                            {
#line 383 "chunk.met"
                                lexEl . AddChar(c);
#line 383 "chunk.met"
                                NextChar();
#line 383 "chunk.met"
                            }
#line 383 "chunk.met"
                            break ;
#line 383 "chunk.met"
#line 384 "chunk.met"
                        case 'F' :
#line 384 "chunk.met"
#line 384 "chunk.met"
                            {
#line 384 "chunk.met"
                                lexEl . AddChar(c);
#line 384 "chunk.met"
                                NextChar();
#line 384 "chunk.met"
                            }
#line 384 "chunk.met"
                            break ;
#line 384 "chunk.met"
#line 385 "chunk.met"
                        case 'l' :
#line 385 "chunk.met"
#line 385 "chunk.met"
                            {
#line 385 "chunk.met"
                                lexEl . AddChar(c);
#line 385 "chunk.met"
                                NextChar();
#line 385 "chunk.met"
                            }
#line 385 "chunk.met"
                            break ;
#line 385 "chunk.met"
#line 386 "chunk.met"
                        case 'L' :
#line 386 "chunk.met"
#line 386 "chunk.met"
                            {
#line 386 "chunk.met"
                                lexEl . AddChar(c);
#line 386 "chunk.met"
                                NextChar();
#line 386 "chunk.met"
                            }
#line 386 "chunk.met"
                            break ;
#line 386 "chunk.met"
                    }
#line 386 "chunk.met"
#line 388 "chunk.met"
                    {
#line 388 "chunk.met"
                        firstOnLine = 0 ; 
#line 388 "chunk.met"
                        tokenAhead =1;
#line 388 "chunk.met"
                        lexEl.Value=FLOAT;
#line 388 "chunk.met"
                        PUT_COORD_CALL;
#line 388 "chunk.met"
                        return(1);
#line 388 "chunk.met"
                    }
#line 388 "chunk.met"
#line 388 "chunk.met"
                    break ;
#line 388 "chunk.met"
#line 390 "chunk.met"
                default : 
#line 390 "chunk.met"
                     if (c!= EOF) {
#line 390 "chunk.met"
#line 390 "chunk.met"
                        {
#line 390 "chunk.met"
                            firstOnLine = 0 ; 
#line 390 "chunk.met"
                            tokenAhead =1;
#line 390 "chunk.met"
                            lexEl.Value=INTEGER;
#line 390 "chunk.met"
                            PUT_COORD_CALL;
#line 390 "chunk.met"
                            return(1);
#line 390 "chunk.met"
                        }
#line 390 "chunk.met"
                    }
#line 390 "chunk.met"
                    break ;
#line 390 "chunk.met"
            }
#line 390 "chunk.met"
#line 390 "chunk.met"
            break ;
#line 390 "chunk.met"
#line 393 "chunk.met"
        case '0' :
#line 393 "chunk.met"
            NextChar();
#line 393 "chunk.met"
#line 394 "chunk.met"
#line 395 "chunk.met"
            switch (c) {
#line 395 "chunk.met"
#line 396 "chunk.met"
                case 'x' :
#line 396 "chunk.met"
                case 'X' :
#line 396 "chunk.met"
                    NextChar();
#line 396 "chunk.met"
#line 397 "chunk.met"
#line 398 "chunk.met"
                    while ((('0' <= c && c <= '9')||('a' <= c && c <= 'f')||('A' <= c && c <= 'F'))) { 
#line 398 "chunk.met"
#line 399 "chunk.met"
                        {
#line 399 "chunk.met"
                            lexEl . AddChar(c);
#line 399 "chunk.met"
                            NextChar();
#line 399 "chunk.met"
                        }
#line 399 "chunk.met"
                    } 
#line 399 "chunk.met"
#line 400 "chunk.met"
                    switch (c) {
#line 400 "chunk.met"
#line 401 "chunk.met"
                        case 'l' :
#line 401 "chunk.met"
                        case 'L' :
#line 401 "chunk.met"
                            NextChar();
#line 401 "chunk.met"
#line 402 "chunk.met"
                            switch (c) {
#line 402 "chunk.met"
#line 403 "chunk.met"
                                case 'u' :
#line 403 "chunk.met"
                                case 'U' :
#line 403 "chunk.met"
                                    NextChar();
#line 403 "chunk.met"
#line 403 "chunk.met"
                                    {
#line 403 "chunk.met"
                                        firstOnLine = 0 ; 
#line 403 "chunk.met"
                                        tokenAhead =1;
#line 403 "chunk.met"
                                        lexEl.Value=ULHEXA;
#line 403 "chunk.met"
                                        PUT_COORD_CALL;
#line 403 "chunk.met"
                                        return(1);
#line 403 "chunk.met"
                                    }
#line 403 "chunk.met"
                                    break ;
#line 403 "chunk.met"
#line 404 "chunk.met"
                                default : 
#line 404 "chunk.met"
                                     if (c!= EOF) {
#line 404 "chunk.met"
#line 404 "chunk.met"
                                        {
#line 404 "chunk.met"
                                            firstOnLine = 0 ; 
#line 404 "chunk.met"
                                            tokenAhead =1;
#line 404 "chunk.met"
                                            lexEl.Value=LHEXA;
#line 404 "chunk.met"
                                            PUT_COORD_CALL;
#line 404 "chunk.met"
                                            return(1);
#line 404 "chunk.met"
                                        }
#line 404 "chunk.met"
                                    }
#line 404 "chunk.met"
                                    break ;
#line 404 "chunk.met"
                            }
#line 404 "chunk.met"
                            break ;
#line 404 "chunk.met"
#line 406 "chunk.met"
                        case 'u' :
#line 406 "chunk.met"
                        case 'U' :
#line 406 "chunk.met"
                            NextChar();
#line 406 "chunk.met"
#line 407 "chunk.met"
                            switch (c) {
#line 407 "chunk.met"
#line 408 "chunk.met"
                                case 'l' :
#line 408 "chunk.met"
                                case 'L' :
#line 408 "chunk.met"
                                    NextChar();
#line 408 "chunk.met"
#line 408 "chunk.met"
                                    {
#line 408 "chunk.met"
                                        firstOnLine = 0 ; 
#line 408 "chunk.met"
                                        tokenAhead =1;
#line 408 "chunk.met"
                                        lexEl.Value=ULHEXA;
#line 408 "chunk.met"
                                        PUT_COORD_CALL;
#line 408 "chunk.met"
                                        return(1);
#line 408 "chunk.met"
                                    }
#line 408 "chunk.met"
                                    break ;
#line 408 "chunk.met"
#line 409 "chunk.met"
                                default : 
#line 409 "chunk.met"
                                     if (c!= EOF) {
#line 409 "chunk.met"
#line 409 "chunk.met"
                                        {
#line 409 "chunk.met"
                                            firstOnLine = 0 ; 
#line 409 "chunk.met"
                                            tokenAhead =1;
#line 409 "chunk.met"
                                            lexEl.Value=UHEXA;
#line 409 "chunk.met"
                                            PUT_COORD_CALL;
#line 409 "chunk.met"
                                            return(1);
#line 409 "chunk.met"
                                        }
#line 409 "chunk.met"
                                    }
#line 409 "chunk.met"
                                    break ;
#line 409 "chunk.met"
                            }
#line 409 "chunk.met"
                            break ;
#line 409 "chunk.met"
#line 411 "chunk.met"
                        default : 
#line 411 "chunk.met"
                             if (c!= EOF) {
#line 411 "chunk.met"
#line 411 "chunk.met"
                                {
#line 411 "chunk.met"
                                    firstOnLine = 0 ; 
#line 411 "chunk.met"
                                    tokenAhead =1;
#line 411 "chunk.met"
                                    lexEl.Value=HEXA;
#line 411 "chunk.met"
                                    PUT_COORD_CALL;
#line 411 "chunk.met"
                                    return(1);
#line 411 "chunk.met"
                                }
#line 411 "chunk.met"
                            }
#line 411 "chunk.met"
                            break ;
#line 411 "chunk.met"
                    }
#line 411 "chunk.met"
#line 411 "chunk.met"
                    break ;
#line 411 "chunk.met"
#line 414 "chunk.met"
                case '0' :
#line 414 "chunk.met"
                case '1' :
#line 414 "chunk.met"
                case '2' :
#line 414 "chunk.met"
                case '3' :
#line 414 "chunk.met"
                case '4' :
#line 414 "chunk.met"
                case '5' :
#line 414 "chunk.met"
                case '6' :
#line 414 "chunk.met"
                case '7' :
#line 414 "chunk.met"
#line 415 "chunk.met"
#line 416 "chunk.met"
                    while ((('0' <= c && c <= '7'))) { 
#line 416 "chunk.met"
#line 417 "chunk.met"
                        {
#line 417 "chunk.met"
                            lexEl . AddChar(c);
#line 417 "chunk.met"
                            NextChar();
#line 417 "chunk.met"
                        }
#line 417 "chunk.met"
                    } 
#line 417 "chunk.met"
#line 418 "chunk.met"
                    switch (c) {
#line 418 "chunk.met"
#line 419 "chunk.met"
                        case 'l' :
#line 419 "chunk.met"
                        case 'L' :
#line 419 "chunk.met"
                            NextChar();
#line 419 "chunk.met"
#line 420 "chunk.met"
                            switch (c) {
#line 420 "chunk.met"
#line 421 "chunk.met"
                                case 'u' :
#line 421 "chunk.met"
                                case 'U' :
#line 421 "chunk.met"
                                    NextChar();
#line 421 "chunk.met"
#line 421 "chunk.met"
                                    {
#line 421 "chunk.met"
                                        firstOnLine = 0 ; 
#line 421 "chunk.met"
                                        tokenAhead =1;
#line 421 "chunk.met"
                                        lexEl.Value=ULOCTAL;
#line 421 "chunk.met"
                                        PUT_COORD_CALL;
#line 421 "chunk.met"
                                        return(1);
#line 421 "chunk.met"
                                    }
#line 421 "chunk.met"
                                    break ;
#line 421 "chunk.met"
#line 422 "chunk.met"
                                default : 
#line 422 "chunk.met"
                                     if (c!= EOF) {
#line 422 "chunk.met"
#line 422 "chunk.met"
                                        {
#line 422 "chunk.met"
                                            firstOnLine = 0 ; 
#line 422 "chunk.met"
                                            tokenAhead =1;
#line 422 "chunk.met"
                                            lexEl.Value=LOCTAL;
#line 422 "chunk.met"
                                            PUT_COORD_CALL;
#line 422 "chunk.met"
                                            return(1);
#line 422 "chunk.met"
                                        }
#line 422 "chunk.met"
                                    }
#line 422 "chunk.met"
                                    break ;
#line 422 "chunk.met"
                            }
#line 422 "chunk.met"
                            break ;
#line 422 "chunk.met"
#line 424 "chunk.met"
                        case 'u' :
#line 424 "chunk.met"
                        case 'U' :
#line 424 "chunk.met"
                            NextChar();
#line 424 "chunk.met"
#line 425 "chunk.met"
                            switch (c) {
#line 425 "chunk.met"
#line 426 "chunk.met"
                                case 'l' :
#line 426 "chunk.met"
                                case 'L' :
#line 426 "chunk.met"
                                    NextChar();
#line 426 "chunk.met"
#line 426 "chunk.met"
                                    {
#line 426 "chunk.met"
                                        firstOnLine = 0 ; 
#line 426 "chunk.met"
                                        tokenAhead =1;
#line 426 "chunk.met"
                                        lexEl.Value=ULOCTAL;
#line 426 "chunk.met"
                                        PUT_COORD_CALL;
#line 426 "chunk.met"
                                        return(1);
#line 426 "chunk.met"
                                    }
#line 426 "chunk.met"
                                    break ;
#line 426 "chunk.met"
#line 427 "chunk.met"
                                default : 
#line 427 "chunk.met"
                                     if (c!= EOF) {
#line 427 "chunk.met"
#line 427 "chunk.met"
                                        {
#line 427 "chunk.met"
                                            firstOnLine = 0 ; 
#line 427 "chunk.met"
                                            tokenAhead =1;
#line 427 "chunk.met"
                                            lexEl.Value=UOCTAL;
#line 427 "chunk.met"
                                            PUT_COORD_CALL;
#line 427 "chunk.met"
                                            return(1);
#line 427 "chunk.met"
                                        }
#line 427 "chunk.met"
                                    }
#line 427 "chunk.met"
                                    break ;
#line 427 "chunk.met"
                            }
#line 427 "chunk.met"
                            break ;
#line 427 "chunk.met"
#line 429 "chunk.met"
                        default : 
#line 429 "chunk.met"
                             if (c!= EOF) {
#line 429 "chunk.met"
#line 429 "chunk.met"
                                {
#line 429 "chunk.met"
                                    firstOnLine = 0 ; 
#line 429 "chunk.met"
                                    tokenAhead =1;
#line 429 "chunk.met"
                                    lexEl.Value=OCTAL;
#line 429 "chunk.met"
                                    PUT_COORD_CALL;
#line 429 "chunk.met"
                                    return(1);
#line 429 "chunk.met"
                                }
#line 429 "chunk.met"
                            }
#line 429 "chunk.met"
                            break ;
#line 429 "chunk.met"
                    }
#line 429 "chunk.met"
#line 429 "chunk.met"
                    break ;
#line 429 "chunk.met"
#line 432 "chunk.met"
                case '.' :
#line 432 "chunk.met"
#line 433 "chunk.met"
#line 434 "chunk.met"
                    {
#line 434 "chunk.met"
                        lexEl.AddString("0");
#line 434 "chunk.met"
                    }
#line 434 "chunk.met"
#line 435 "chunk.met"
                    {
#line 435 "chunk.met"
                        lexEl . AddChar(c);
#line 435 "chunk.met"
                        NextChar();
#line 435 "chunk.met"
                    }
#line 435 "chunk.met"
#line 436 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 436 "chunk.met"
#line 437 "chunk.met"
                        {
#line 437 "chunk.met"
                            lexEl . AddChar(c);
#line 437 "chunk.met"
                            NextChar();
#line 437 "chunk.met"
                        }
#line 437 "chunk.met"
                    } 
#line 437 "chunk.met"
#line 438 "chunk.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 438 "chunk.met"
#line 439 "chunk.met"
#line 440 "chunk.met"
                        {
#line 440 "chunk.met"
                            lexEl.AddString("e");
#line 440 "chunk.met"
                        }
#line 440 "chunk.met"
#line 441 "chunk.met"
                        if (((c == '+')||(c == '-'))){
#line 441 "chunk.met"
#line 442 "chunk.met"
                            {
#line 442 "chunk.met"
                                lexEl . AddChar(c);
#line 442 "chunk.met"
                                NextChar();
#line 442 "chunk.met"
                            }
#line 442 "chunk.met"
                        }
#line 442 "chunk.met"
#line 443 "chunk.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 443 "chunk.met"
#line 444 "chunk.met"
                            {
#line 444 "chunk.met"
                                lexEl . AddChar(c);
#line 444 "chunk.met"
                                NextChar();
#line 444 "chunk.met"
                            }
#line 444 "chunk.met"
                        } 
#line 444 "chunk.met"
#line 444 "chunk.met"
#line 444 "chunk.met"
                    }
#line 444 "chunk.met"
#line 446 "chunk.met"
                    switch (c) {
#line 446 "chunk.met"
#line 447 "chunk.met"
                        case 'f' :
#line 447 "chunk.met"
#line 447 "chunk.met"
                            {
#line 447 "chunk.met"
                                lexEl . AddChar(c);
#line 447 "chunk.met"
                                NextChar();
#line 447 "chunk.met"
                            }
#line 447 "chunk.met"
                            break ;
#line 447 "chunk.met"
#line 448 "chunk.met"
                        case 'F' :
#line 448 "chunk.met"
#line 448 "chunk.met"
                            {
#line 448 "chunk.met"
                                lexEl . AddChar(c);
#line 448 "chunk.met"
                                NextChar();
#line 448 "chunk.met"
                            }
#line 448 "chunk.met"
                            break ;
#line 448 "chunk.met"
#line 449 "chunk.met"
                        case 'l' :
#line 449 "chunk.met"
#line 449 "chunk.met"
                            {
#line 449 "chunk.met"
                                lexEl . AddChar(c);
#line 449 "chunk.met"
                                NextChar();
#line 449 "chunk.met"
                            }
#line 449 "chunk.met"
                            break ;
#line 449 "chunk.met"
#line 450 "chunk.met"
                        case 'L' :
#line 450 "chunk.met"
#line 450 "chunk.met"
                            {
#line 450 "chunk.met"
                                lexEl . AddChar(c);
#line 450 "chunk.met"
                                NextChar();
#line 450 "chunk.met"
                            }
#line 450 "chunk.met"
                            break ;
#line 450 "chunk.met"
                    }
#line 450 "chunk.met"
#line 452 "chunk.met"
                    {
#line 452 "chunk.met"
                        firstOnLine = 0 ; 
#line 452 "chunk.met"
                        tokenAhead =1;
#line 452 "chunk.met"
                        lexEl.Value=FLOAT;
#line 452 "chunk.met"
                        PUT_COORD_CALL;
#line 452 "chunk.met"
                        return(1);
#line 452 "chunk.met"
                    }
#line 452 "chunk.met"
#line 452 "chunk.met"
                    break ;
#line 452 "chunk.met"
#line 456 "chunk.met"
                default : 
#line 456 "chunk.met"
                     if (c!= EOF) {
#line 456 "chunk.met"
#line 455 "chunk.met"
#line 456 "chunk.met"
                        {
#line 456 "chunk.met"
                            lexEl.AddString("0");
#line 456 "chunk.met"
                        }
#line 456 "chunk.met"
#line 457 "chunk.met"
                        switch (c) {
#line 457 "chunk.met"
#line 458 "chunk.met"
                            case 'l' :
#line 458 "chunk.met"
                            case 'L' :
#line 458 "chunk.met"
                                NextChar();
#line 458 "chunk.met"
#line 459 "chunk.met"
                                switch (c) {
#line 459 "chunk.met"
#line 460 "chunk.met"
                                    case 'u' :
#line 460 "chunk.met"
                                    case 'U' :
#line 460 "chunk.met"
                                        NextChar();
#line 460 "chunk.met"
#line 460 "chunk.met"
                                        {
#line 460 "chunk.met"
                                            firstOnLine = 0 ; 
#line 460 "chunk.met"
                                            tokenAhead =1;
#line 460 "chunk.met"
                                            lexEl.Value=ULINTEGER;
#line 460 "chunk.met"
                                            PUT_COORD_CALL;
#line 460 "chunk.met"
                                            return(1);
#line 460 "chunk.met"
                                        }
#line 460 "chunk.met"
                                        break ;
#line 460 "chunk.met"
#line 461 "chunk.met"
                                    default : 
#line 461 "chunk.met"
                                         if (c!= EOF) {
#line 461 "chunk.met"
#line 461 "chunk.met"
                                            {
#line 461 "chunk.met"
                                                firstOnLine = 0 ; 
#line 461 "chunk.met"
                                                tokenAhead =1;
#line 461 "chunk.met"
                                                lexEl.Value=LINTEGER;
#line 461 "chunk.met"
                                                PUT_COORD_CALL;
#line 461 "chunk.met"
                                                return(1);
#line 461 "chunk.met"
                                            }
#line 461 "chunk.met"
                                        }
#line 461 "chunk.met"
                                        break ;
#line 461 "chunk.met"
                                }
#line 461 "chunk.met"
                                break ;
#line 461 "chunk.met"
#line 463 "chunk.met"
                            case 'u' :
#line 463 "chunk.met"
                            case 'U' :
#line 463 "chunk.met"
                                NextChar();
#line 463 "chunk.met"
#line 464 "chunk.met"
                                switch (c) {
#line 464 "chunk.met"
#line 465 "chunk.met"
                                    case 'l' :
#line 465 "chunk.met"
                                    case 'L' :
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
                                            lexEl.Value=ULINTEGER;
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
                                                lexEl.Value=UINTEGER;
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
                                break ;
#line 466 "chunk.met"
#line 468 "chunk.met"
                            default : 
#line 468 "chunk.met"
                                 if (c!= EOF) {
#line 468 "chunk.met"
#line 468 "chunk.met"
                                    {
#line 468 "chunk.met"
                                        firstOnLine = 0 ; 
#line 468 "chunk.met"
                                        tokenAhead =1;
#line 468 "chunk.met"
                                        lexEl.Value=INTEGER;
#line 468 "chunk.met"
                                        PUT_COORD_CALL;
#line 468 "chunk.met"
                                        return(1);
#line 468 "chunk.met"
                                    }
#line 468 "chunk.met"
                                }
#line 468 "chunk.met"
                                break ;
#line 468 "chunk.met"
                        }
#line 468 "chunk.met"
#line 468 "chunk.met"
                    }
#line 468 "chunk.met"
                    break ;
#line 468 "chunk.met"
            }
#line 468 "chunk.met"
#line 468 "chunk.met"
            break ;
#line 468 "chunk.met"
#line 473 "chunk.met"
        case '#' :
#line 473 "chunk.met"
            NextChar();
#line 473 "chunk.met"
#line 474 "chunk.met"
#line 475 "chunk.met"
            while (((c == ' ')||(c == '\t'))) { 
#line 475 "chunk.met"
#line 476 "chunk.met"
                if (!(c != EOF&& NextChar())) ;
#line 476 "chunk.met"
            } 
#line 476 "chunk.met"
#line 477 "chunk.met"
#line 478 "chunk.met"
            if((GetString("include",1)&& NextChar())){
#line 478 "chunk.met"
#line 478 "chunk.met"
                {
#line 478 "chunk.met"
                    firstOnLine = 0 ; 
#line 478 "chunk.met"
                    tokenAhead =1;
#line 478 "chunk.met"
                    lexEl.Value=INCLUDE_DIR;
#line 478 "chunk.met"
                    PUT_COORD_CALL;
#line 478 "chunk.met"
                    return(1);
#line 478 "chunk.met"
                }
#line 478 "chunk.met"
            } else 
#line 478 "chunk.met"
#line 479 "chunk.met"
            if((GetString("ifdef",1)&& NextChar())){
#line 479 "chunk.met"
#line 479 "chunk.met"
                {
#line 479 "chunk.met"
                    firstOnLine = 0 ; 
#line 479 "chunk.met"
                    tokenAhead =1;
#line 479 "chunk.met"
                    lexEl.Value=IFDEF_DIR;
#line 479 "chunk.met"
                    PUT_COORD_CALL;
#line 479 "chunk.met"
                    return(1);
#line 479 "chunk.met"
                }
#line 479 "chunk.met"
            } else 
#line 479 "chunk.met"
#line 480 "chunk.met"
            if((GetString("ifndef",1)&& NextChar())){
#line 480 "chunk.met"
#line 480 "chunk.met"
                {
#line 480 "chunk.met"
                    firstOnLine = 0 ; 
#line 480 "chunk.met"
                    tokenAhead =1;
#line 480 "chunk.met"
                    lexEl.Value=IFNDEF_DIR;
#line 480 "chunk.met"
                    PUT_COORD_CALL;
#line 480 "chunk.met"
                    return(1);
#line 480 "chunk.met"
                }
#line 480 "chunk.met"
            } else 
#line 480 "chunk.met"
#line 481 "chunk.met"
            if((GetString("if",1)&& NextChar())){
#line 481 "chunk.met"
#line 481 "chunk.met"
                {
#line 481 "chunk.met"
                    firstOnLine = 0 ; 
#line 481 "chunk.met"
                    tokenAhead =1;
#line 481 "chunk.met"
                    lexEl.Value=IF_DIR;
#line 481 "chunk.met"
                    PUT_COORD_CALL;
#line 481 "chunk.met"
                    return(1);
#line 481 "chunk.met"
                }
#line 481 "chunk.met"
            } else 
#line 481 "chunk.met"
#line 482 "chunk.met"
            if((GetString("else",1)&& NextChar())){
#line 482 "chunk.met"
#line 482 "chunk.met"
                {
#line 482 "chunk.met"
                    firstOnLine = 0 ; 
#line 482 "chunk.met"
                    tokenAhead =1;
#line 482 "chunk.met"
                    lexEl.Value=ELSE_DIR;
#line 482 "chunk.met"
                    PUT_COORD_CALL;
#line 482 "chunk.met"
                    return(1);
#line 482 "chunk.met"
                }
#line 482 "chunk.met"
            } else 
#line 482 "chunk.met"
#line 483 "chunk.met"
            if((GetString("elif",1)&& NextChar())){
#line 483 "chunk.met"
#line 483 "chunk.met"
                {
#line 483 "chunk.met"
                    firstOnLine = 0 ; 
#line 483 "chunk.met"
                    tokenAhead =1;
#line 483 "chunk.met"
                    lexEl.Value=ELIF_DIR;
#line 483 "chunk.met"
                    PUT_COORD_CALL;
#line 483 "chunk.met"
                    return(1);
#line 483 "chunk.met"
                }
#line 483 "chunk.met"
            } else 
#line 483 "chunk.met"
#line 484 "chunk.met"
            if((GetString("endif",1)&& NextChar())){
#line 484 "chunk.met"
#line 484 "chunk.met"
                {
#line 484 "chunk.met"
                    firstOnLine = 0 ; 
#line 484 "chunk.met"
                    tokenAhead =1;
#line 484 "chunk.met"
                    lexEl.Value=ENDIF_DIR;
#line 484 "chunk.met"
                    PUT_COORD_CALL;
#line 484 "chunk.met"
                    return(1);
#line 484 "chunk.met"
                }
#line 484 "chunk.met"
            } else 
#line 484 "chunk.met"
#line 485 "chunk.met"
            if((GetString("line",1)&& NextChar())){
#line 485 "chunk.met"
#line 485 "chunk.met"
                {
#line 485 "chunk.met"
                    firstOnLine = 0 ; 
#line 485 "chunk.met"
                    tokenAhead =1;
#line 485 "chunk.met"
                    lexEl.Value=LINE_DIR;
#line 485 "chunk.met"
                    PUT_COORD_CALL;
#line 485 "chunk.met"
                    return(1);
#line 485 "chunk.met"
                }
#line 485 "chunk.met"
            } else 
#line 485 "chunk.met"
#line 486 "chunk.met"
            if((GetString("pragma",1)&& NextChar())){
#line 486 "chunk.met"
#line 486 "chunk.met"
                {
#line 486 "chunk.met"
                    firstOnLine = 0 ; 
#line 486 "chunk.met"
                    tokenAhead =1;
#line 486 "chunk.met"
                    lexEl.Value=PRAGMA_DIR;
#line 486 "chunk.met"
                    PUT_COORD_CALL;
#line 486 "chunk.met"
                    return(1);
#line 486 "chunk.met"
                }
#line 486 "chunk.met"
            } else 
#line 486 "chunk.met"
#line 487 "chunk.met"
            if((GetString("error",1)&& NextChar())){
#line 487 "chunk.met"
#line 487 "chunk.met"
                {
#line 487 "chunk.met"
                    firstOnLine = 0 ; 
#line 487 "chunk.met"
                    tokenAhead =1;
#line 487 "chunk.met"
                    lexEl.Value=ERROR_DIR;
#line 487 "chunk.met"
                    PUT_COORD_CALL;
#line 487 "chunk.met"
                    return(1);
#line 487 "chunk.met"
                }
#line 487 "chunk.met"
            } else 
#line 487 "chunk.met"
#line 488 "chunk.met"
            if((GetString("define",1)&& NextChar())){
#line 488 "chunk.met"
#line 488 "chunk.met"
                {
#line 488 "chunk.met"
                    firstOnLine = 0 ; 
#line 488 "chunk.met"
                    tokenAhead =1;
#line 488 "chunk.met"
                    lexEl.Value=DEFINE_DIR;
#line 488 "chunk.met"
                    PUT_COORD_CALL;
#line 488 "chunk.met"
                    return(1);
#line 488 "chunk.met"
                }
#line 488 "chunk.met"
            } else 
#line 488 "chunk.met"
#line 489 "chunk.met"
            if((GetString("undef",1)&& NextChar())){
#line 489 "chunk.met"
#line 489 "chunk.met"
                {
#line 489 "chunk.met"
                    firstOnLine = 0 ; 
#line 489 "chunk.met"
                    tokenAhead =1;
#line 489 "chunk.met"
                    lexEl.Value=UNDEF_DIR;
#line 489 "chunk.met"
                    PUT_COORD_CALL;
#line 489 "chunk.met"
                    return(1);
#line 489 "chunk.met"
                }
#line 489 "chunk.met"
            } else 
#line 489 "chunk.met"
             ;
#line 489 "chunk.met"
#line 489 "chunk.met"
            break ;
#line 489 "chunk.met"
#line 492 "chunk.met"
        case '\r' :
#line 492 "chunk.met"
        case '\n' :
#line 492 "chunk.met"
            NextChar();
#line 492 "chunk.met"
#line 492 "chunk.met"
            {
#line 492 "chunk.met"
                firstOnLine = 0 ; 
#line 492 "chunk.met"
                tokenAhead =1;
#line 492 "chunk.met"
                lexEl.Value=CARRIAGE_RETURN;
#line 492 "chunk.met"
                firstOnLine = 1 ; 
#line 492 "chunk.met"
                PUT_COORD_CALL;
#line 492 "chunk.met"
                return(1);
#line 492 "chunk.met"
            }
#line 492 "chunk.met"
            break ;
#line 492 "chunk.met"
#line 493 "chunk.met"
        case '/' :
#line 493 "chunk.met"
            NextChar();
#line 493 "chunk.met"
#line 494 "chunk.met"
#line 495 "chunk.met"
            if (((c == '='))){
#line 495 "chunk.met"
#line 496 "chunk.met"
#line 497 "chunk.met"
                if (!(c != EOF&& NextChar())) ;
#line 497 "chunk.met"
#line 498 "chunk.met"
                {
#line 498 "chunk.met"
                    firstOnLine = 0 ; 
#line 498 "chunk.met"
                    tokenAhead =1;
#line 498 "chunk.met"
                    lexEl.Value=SLASEGAL;
#line 498 "chunk.met"
                    PUT_COORD_CALL;
#line 498 "chunk.met"
                    return(1);
#line 498 "chunk.met"
                }
#line 498 "chunk.met"
#line 498 "chunk.met"
#line 498 "chunk.met"
            } else {
#line 498 "chunk.met"
#line 501 "chunk.met"
                {
#line 501 "chunk.met"
                    firstOnLine = 0 ; 
#line 501 "chunk.met"
                    tokenAhead =1;
#line 501 "chunk.met"
                    lexEl.Value=SLAS;
#line 501 "chunk.met"
                    PUT_COORD_CALL;
#line 501 "chunk.met"
                    return(1);
#line 501 "chunk.met"
                }
#line 501 "chunk.met"
            }
#line 501 "chunk.met"
#line 501 "chunk.met"
            break ;
#line 501 "chunk.met"
#line 503 "chunk.met"
        case '.' :
#line 503 "chunk.met"
#line 504 "chunk.met"
#line 505 "chunk.met"
            {
#line 505 "chunk.met"
                lexEl . AddChar(c);
#line 505 "chunk.met"
                NextChar();
#line 505 "chunk.met"
            }
#line 505 "chunk.met"
#line 506 "chunk.met"
            if ((('0' <= c && c <= '9'))){
#line 506 "chunk.met"
#line 507 "chunk.met"
#line 508 "chunk.met"
                while ((('0' <= c && c <= '9'))) { 
#line 508 "chunk.met"
#line 509 "chunk.met"
                    {
#line 509 "chunk.met"
                        lexEl . AddChar(c);
#line 509 "chunk.met"
                        NextChar();
#line 509 "chunk.met"
                    }
#line 509 "chunk.met"
                } 
#line 509 "chunk.met"
#line 510 "chunk.met"
                if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 510 "chunk.met"
#line 511 "chunk.met"
#line 512 "chunk.met"
                    {
#line 512 "chunk.met"
                        lexEl.AddString("e");
#line 512 "chunk.met"
                    }
#line 512 "chunk.met"
#line 513 "chunk.met"
                    if (((c == '+')||(c == '-'))){
#line 513 "chunk.met"
#line 514 "chunk.met"
                        {
#line 514 "chunk.met"
                            lexEl . AddChar(c);
#line 514 "chunk.met"
                            NextChar();
#line 514 "chunk.met"
                        }
#line 514 "chunk.met"
                    }
#line 514 "chunk.met"
#line 515 "chunk.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 515 "chunk.met"
#line 516 "chunk.met"
                        {
#line 516 "chunk.met"
                            lexEl . AddChar(c);
#line 516 "chunk.met"
                            NextChar();
#line 516 "chunk.met"
                        }
#line 516 "chunk.met"
                    } 
#line 516 "chunk.met"
#line 516 "chunk.met"
#line 516 "chunk.met"
                }
#line 516 "chunk.met"
#line 518 "chunk.met"
                switch (c) {
#line 518 "chunk.met"
#line 519 "chunk.met"
                    case 'f' :
#line 519 "chunk.met"
#line 519 "chunk.met"
                        {
#line 519 "chunk.met"
                            lexEl . AddChar(c);
#line 519 "chunk.met"
                            NextChar();
#line 519 "chunk.met"
                        }
#line 519 "chunk.met"
                        break ;
#line 519 "chunk.met"
#line 520 "chunk.met"
                    case 'F' :
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
                    case 'l' :
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
                    case 'L' :
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
                }
#line 522 "chunk.met"
#line 524 "chunk.met"
                {
#line 524 "chunk.met"
                    firstOnLine = 0 ; 
#line 524 "chunk.met"
                    tokenAhead =1;
#line 524 "chunk.met"
                    lexEl.Value=FLOAT;
#line 524 "chunk.met"
                    PUT_COORD_CALL;
#line 524 "chunk.met"
                    return(1);
#line 524 "chunk.met"
                }
#line 524 "chunk.met"
#line 524 "chunk.met"
#line 524 "chunk.met"
            } else {
#line 524 "chunk.met"
#line 527 "chunk.met"
#line 528 "chunk.met"
                {
#line 528 "chunk.met"
                    firstOnLine = 0 ; 
#line 528 "chunk.met"
                    tokenAhead =1;
#line 528 "chunk.met"
                    lexEl.Value=POINT;
#line 528 "chunk.met"
                    PUT_COORD_CALL;
#line 528 "chunk.met"
                    return(1);
#line 528 "chunk.met"
                }
#line 528 "chunk.met"
#line 528 "chunk.met"
            }
#line 528 "chunk.met"
#line 528 "chunk.met"
            break ;
#line 528 "chunk.met"
    }
#line 528 "chunk.met"
#line 528 "chunk.met"
#line 531 "chunk.met"
    line = oldLine;
#line 531 "chunk.met"
    LEX_EXIT(0,"")
#line 531 "chunk.met"
    lexEl.Value = -1 ;
#line 531 "chunk.met"
    return -1 ; 
#line 531 "chunk.met"
}
#line 531 "chunk.met"

#line 531 "chunk.met"
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
    if ( tokenAhead)
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
                                }
#line 53 "chunk.met"
                                break ;
#line 53 "chunk.met"
                        }
#line 53 "chunk.met"
                    } 
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
#line 85 "chunk.met"
                            } else {
#line 85 "chunk.met"
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
                            }
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
                        } else 
#line 96 "chunk.met"
                         ;
#line 96 "chunk.met"
                    } 
#line 96 "chunk.met"
#line 99 "chunk.met"
                    } 
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
#line 107 "chunk.met"
    if ( lexCallLex) {PUT_COORD_AFTER_COMMENTS_CALL;
#line 107 "chunk.met"
    }line = oldLine;
#line 107 "chunk.met"
    LEX_EXIT(0,"")
#line 107 "chunk.met"
    lexEl.Value = -1 ;
#line 107 "chunk.met"
    return -1 ; 
#line 107 "chunk.met"
}
#line 107 "chunk.met"

#line 107 "chunk.met"
/* 
-- 0 -- bidon
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
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
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 7 -- arg_declarator
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 8 -- arg_typ_declarator
    META
    POUV
-- 9 -- arg_typ_list
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 10 -- asm_declaration
    META
    ASM
-- 11 -- assignment_end
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
-- 12 -- assignment_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 13 -- base_specifier
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 14 -- base_specifier_elem
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 15 -- bit_field_decl
    META
    IDENT
-- 16 -- cast_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 17 -- cast_expression_value
    META
    POUV
-- 18 -- catch_unit
    META
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 19 -- catch_unit_ansi
    META
    CATCH
-- 20 -- class_declaration
    META
    STRUCT
    UNION
    CLASS
-- 21 -- comment_eater
    ALWAYS
-- 22 -- complete_class_name
    META
    IDENT
    DPOIDPOI
-- 23 -- compound_statement
    META
    AOUV
-- 24 -- conditional_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 25 -- const_or_volatile
    META
    VOLATILE
    CONST
-- 26 -- constan
    META
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
-- 27 -- ctor_initializer
    ALWAYS
-- 28 -- data_decl_exotic
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
-- 29 -- data_decl_sc_decl
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 30 -- data_decl_sc_ty_decl
    META
    IDENT
    FLOAT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 31 -- data_declaration
    ALWAYS
-- 32 -- data_declaration_for
    META
    IDENT
    FLOAT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 33 -- data_declaration_strict
    ALWAYS
-- 34 -- deallocation_expression
    META
    DELETE
-- 35 -- declarator
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 36 -- declarator_follow
    ALWAYS
-- 37 -- declarator_list
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 38 -- declarator_list_init
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 39 -- declarator_value
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 40 -- define_dir
    META
    DEFINE_DIR
-- 41 -- directive
    META
    INCLUDE_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
-- 42 -- end_pragma
    META
    PRAGMA_DIR
-- 43 -- enum_val
    META
    IDENT
-- 44 -- equality_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 45 -- exception
    META
    TRY_UPPER
-- 46 -- exception_ansi
    META
    TRY
-- 47 -- exception_list
    META
    THROW
-- 48 -- exclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 49 -- expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 50 -- expression_for
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 51 -- ext_all
    ALWAYS
-- 52 -- ext_all_ext
    ALWAYS
-- 53 -- ext_all_no_linkage
    ALWAYS
-- 54 -- ext_data_decl_sc_ty
    META
    IDENT
    FLOAT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 55 -- ext_data_decl_simp
    ALWAYS
-- 56 -- ext_data_declaration
    ALWAYS
-- 57 -- ext_decl_dir
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
-- 58 -- ext_decl_if_dir
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 59 -- ext_decl_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 60 -- func_declaration
    META
    IDENT
    FLOAT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
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
-- 61 -- func_declarator
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ETOI
    ETCO
    TILD
    OPERATOR
-- 62 -- ident_mul
    META
    IDENT
    DPOIDPOI
-- 63 -- include_dir
    META
    INCLUDE_DIR
-- 64 -- inclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 65 -- initializer
    ALWAYS
-- 66 -- inside_declaration
    ALWAYS
-- 67 -- inside_declaration1
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 68 -- inside_declaration2
    META
    IDENT
-- 69 -- label_beg
    META
    IDENT
-- 70 -- linkage_specification
    META
    EXTERN
-- 71 -- logical_and_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 72 -- logical_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 73 -- long_short_int_char
    META
    INT
    CHAR
    LONG
    SHORT
-- 74 -- macro
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
-- 75 -- macro_extended
    ALWAYS
-- 76 -- main_entry
    ALWAYS
-- 77 -- member_declarator
    META
    IDENT
    DPOIDPOI
-- 78 -- message_map
    META
    BEGIN_MESSAGE_MAP
-- 79 -- multiplicative_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 80 -- new_1
    META
    POUV
-- 81 -- new_2
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
    POUV
-- 82 -- new_declarator
    ALWAYS
-- 83 -- new_type_name
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 84 -- operator_function_name
    META
    OPERATOR
-- 85 -- other_config
    META
    PRAGMA_CONTENT
-- 86 -- parameter_list
    META
    POUV
-- 87 -- parameter_list_extended
    META
    POUV
-- 88 -- parametrized_class
    META
    IDENT
-- 89 -- pm_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 90 -- postfix_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 91 -- pretty::parse_entry
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 92 -- primary_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    TILD
    OPERATOR
    POUV
    VA_ARG
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 93 -- program
    ALWAYS
-- 94 -- protect_declare
    META
    PRIVATE
    PROTECTED
    PUBLIC
-- 95 -- ptr_operator
    META
    IDENT
    DPOIDPOI
    ETOI
    ETCO
-- 96 -- qualified_name
    META
    IDENT
    TILD
-- 97 -- qualified_name_elem
    META
    DPOIDPOI
-- 98 -- quick_prog
    ALWAYS
-- 99 -- quick_prog_elem
    ALWAYS
-- 100 -- range_in_liste
    META
    IDENT
-- 101 -- range_modifier
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
-- 102 -- range_modifier_function
    META
    INLINE
    VIRTUAL
    FRIEND
    CONST
-- 103 -- range_modifier_ident
    ALWAYS
-- 104 -- range_pragma
    META
    PRAGMA_RANGE
-- 105 -- relational_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 106 -- sc_specifier
    ALWAYS
-- 107 -- shift_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 108 -- simple_type
    META
    IDENT
    FLOAT
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 109 -- simple_type_name
    META
    IDENT
    FLOAT
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 110 -- sizeof_type
    META
    POUV
-- 111 -- stat_all
    ALWAYS
-- 112 -- stat_dir
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
-- 113 -- stat_if_dir
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 114 -- stat_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 115 -- statement
    META
    GOTO
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    ARRO
    AOUVAOUV
    INFESEPASUPE
    INFESEPBSUPE
    INFESEPOSUPE
    FOREACH
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 116 -- string_list
    META
    STRING
-- 117 -- switch_elem
    META
    CASE
    DEFAULT
-- 118 -- switch_list
    META
    AOUV
-- 119 -- type_and_declarator
    META
    IDENT
    FLOAT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 120 -- type_descr
    META
    IDENT
-- 121 -- type_name
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 122 -- type_specifier
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 123 -- type_specifier_without_param
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 124 -- typedef_and_declarator
    META
    IDENT
    FLOAT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    DOUBLE
    INT
    CHAR
    VOID
    DPOIDPOI
    LONG
    SIGNED
    UNSIGNED
    SHORT
-- 125 -- unary_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 126 -- cplus::assignment_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 127 -- cplus::cast_expression_value
    META
    POUV
-- 128 -- cplus::exclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 129 -- cplus::expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 130 -- cplus::main_entry
    ALWAYS
-- 131 -- cplus::multiplicative_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 132 -- cplus::postfix_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 133 -- cplus::primary_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    TILD
    OPERATOR
    POUV
    VA_ARG
-- 134 -- cplus::relational_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 135 -- cplus::shift_expression
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 136 -- cplus::statement
    META
    GOTO
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 137 -- old
    ALWAYS
-- 138 -- prog
    META
    LANGUAGE
-- 139 -- take_follow
    META
    INFE
    INFESUPE
-- 140 -- take_follow_list
    ALWAYS
-- 141 -- take_follow_super
    META
    IDENT
    STRING
    CHARACT
    ULINTEGER
    LINTEGER
    UINTEGER
    FLOAT
    INTEGER
    ULHEXA
    LHEXA
    UHEXA
    HEXA
    ULOCTAL
    LOCTAL
    UOCTAL
    OCTAL
    DOUBLE
    INT
    CHAR
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
    POINPOINPOIN
    INFE
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 142 -- chopb::main_entry
    META
    LANGUAGE
-- 143 -- chunk_piece
    ALWAYS
-- 144 -- find_func
    ALWAYS
-- 145 -- nothing
    ALWAYS
-- 146 -- quick_compound
    META
    CARRIAGE_RETURN
    AOUV
*/

signed char *chunk::_tokenArray [147] = {
    (signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\360\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\001\010\000\000\000\000\300\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\001\010\000\000\000\000\300\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\070\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\160\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\100\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\374\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\370\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\374\007\000\017\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\374\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\374\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\340\007\000\017\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\340\007\000\017\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\340\007\000\017\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\340\007\000\017\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\201\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\374\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\217\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\006\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\374\377\377\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\340\007\000\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\223\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\370\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\014\000\002\004\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\000\000\014\000\002\004\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\300\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\340\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\200\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\000\200\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\000\200\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\217\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\006\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\100\377\377\000\000\000\000\000\000\000\000\200\377\377\377\377\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\376\017\000\000"
    ,(signed char *) "\020\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\060\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\374\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\101\000\000\000\000\000\000\000\000\340\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\014\000\002\004\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\000\000\014\000\002\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\100\377\377\000\000\000\000\000\000\000\000\200\377\377\377\377\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\377\377\000\000\000\000\000\000\000\000\200\377\017\000\376\007\000\000\000\040\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\020\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
};
typedef int (chunk::*(DEF_FUNC_TOKEN_ARRAY [147]))() ;
DEF_FUNC_TOKEN_ARRAY chunk::_tokenFuncArray = {
    /*bidon                          */(&chunk::Lex),
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */(&chunk::Lex),
    /*alloc_expression               */(&chunk::Lex),
    /*allocation_expression          */(&chunk::Lex),
    /*and_expression                 */(&chunk::Lex),
    /*arg_declarator                 */(&chunk::Lex),
    /*arg_typ_declarator             */(&chunk::Lex),
    /*arg_typ_list                   */(&chunk::Lex),
    /*asm_declaration                */(&chunk::Lex),
    /*assignment_end                 */(&chunk::Lex),
    /*assignment_expression          */(&chunk::Lex),
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
    /*data_decl_sc_ty_decl           */(&chunk::Lex),
    /*data_declaration               */0,
    /*data_declaration_for           */(&chunk::Lex),
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
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */(&chunk::Lex),
    /*ext_decl_if_dir                */(&chunk::Lex),
    /*ext_decl_ifdef_dir             */(&chunk::Lex),
    /*func_declaration               */(&chunk::Lex),
    /*func_declarator                */(&chunk::Lex),
    /*ident_mul                      */(&chunk::Lex),
    /*include_dir                    */(&chunk::Lex),
    /*inclusive_or_expression        */(&chunk::Lex),
    /*initializer                    */0,
    /*inside_declaration             */0,
    /*inside_declaration1            */(&chunk::Lex),
    /*inside_declaration2            */(&chunk::Lex),
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
    /*new_1                          */(&chunk::Lex),
    /*new_2                          */(&chunk::Lex),
    /*new_declarator                 */0,
    /*new_type_name                  */(&chunk::Lex),
    /*operator_function_name         */(&chunk::Lex),
    /*other_config                   */(&chunk::LexPragma),
    /*parameter_list                 */(&chunk::Lex),
    /*parameter_list_extended        */(&chunk::Lex),
    /*parametrized_class             */(&chunk::Lex),
    /*pm_expression                  */(&chunk::Lex),
    /*postfix_expression             */(&chunk::Lex),
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
    /*stat_if_dir                    */(&chunk::Lex),
    /*stat_ifdef_dir                 */(&chunk::Lex),
    /*statement                      */(&chunk::Lex),
    /*string_list                    */(&chunk::Lex),
    /*switch_elem                    */(&chunk::Lex),
    /*switch_list                    */(&chunk::Lex),
    /*type_and_declarator            */(&chunk::Lex),
    /*type_descr                     */(&chunk::Lex),
    /*type_name                      */(&chunk::Lex),
    /*type_specifier                 */(&chunk::Lex),
    /*type_specifier_without_param   */(&chunk::Lex),
    /*typedef_and_declarator         */(&chunk::Lex),
    /*unary_expression               */(&chunk::Lex),
    /*cplus::assignment_expression   */(&chunk::Lex),
    /*cplus::cast_expression_value   */(&chunk::Lex),
    /*cplus::exclusive_or_expression */(&chunk::Lex),
    /*cplus::expression              */(&chunk::Lex),
    /*cplus::main_entry              */0,
    /*cplus::multiplicative_expression*/(&chunk::Lex),
    /*cplus::postfix_expression      */(&chunk::Lex),
    /*cplus::primary_expression      */(&chunk::Lex),
    /*cplus::relational_expression   */(&chunk::Lex),
    /*cplus::shift_expression        */(&chunk::Lex),
    /*cplus::statement               */(&chunk::Lex),
    /*old                            */0,
    /*prog                           */(&chunk::Lex),
    /*take_follow                    */(&chunk::Lex),
    /*take_follow_list               */0,
    /*take_follow_super              */(&chunk::Lex),
    /*chopb::main_entry              */(&chunk::Lex),
    /*chunk_piece                    */0,
    /*find_func                      */0,
    /*nothing                        */0,
    /*quick_compound                 */(&chunk::Lex)
};
int chunk::_tokenNbFuncArray [147] = {
    /*bidon                          */1,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */1,
    /*alloc_expression               */1,
    /*allocation_expression          */1,
    /*and_expression                 */1,
    /*arg_declarator                 */1,
    /*arg_typ_declarator             */1,
    /*arg_typ_list                   */1,
    /*asm_declaration                */1,
    /*assignment_end                 */1,
    /*assignment_expression          */1,
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
    /*data_decl_sc_ty_decl           */1,
    /*data_declaration               */0,
    /*data_declaration_for           */1,
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
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */1,
    /*ext_decl_if_dir                */1,
    /*ext_decl_ifdef_dir             */1,
    /*func_declaration               */1,
    /*func_declarator                */1,
    /*ident_mul                      */1,
    /*include_dir                    */1,
    /*inclusive_or_expression        */1,
    /*initializer                    */0,
    /*inside_declaration             */0,
    /*inside_declaration1            */1,
    /*inside_declaration2            */1,
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
    /*new_1                          */1,
    /*new_2                          */1,
    /*new_declarator                 */0,
    /*new_type_name                  */1,
    /*operator_function_name         */1,
    /*other_config                   */8,
    /*parameter_list                 */1,
    /*parameter_list_extended        */1,
    /*parametrized_class             */1,
    /*pm_expression                  */1,
    /*postfix_expression             */1,
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
    /*stat_if_dir                    */1,
    /*stat_ifdef_dir                 */1,
    /*statement                      */1,
    /*string_list                    */1,
    /*switch_elem                    */1,
    /*switch_list                    */1,
    /*type_and_declarator            */1,
    /*type_descr                     */1,
    /*type_name                      */1,
    /*type_specifier                 */1,
    /*type_specifier_without_param   */1,
    /*typedef_and_declarator         */1,
    /*unary_expression               */1,
    /*cplus::assignment_expression   */1,
    /*cplus::cast_expression_value   */1,
    /*cplus::exclusive_or_expression */1,
    /*cplus::expression              */1,
    /*cplus::main_entry              */0,
    /*cplus::multiplicative_expression*/1,
    /*cplus::postfix_expression      */1,
    /*cplus::primary_expression      */1,
    /*cplus::relational_expression   */1,
    /*cplus::shift_expression        */1,
    /*cplus::statement               */1,
    /*old                            */0,
    /*prog                           */1,
    /*take_follow                    */1,
    /*take_follow_list               */0,
    /*take_follow_super              */1,
    /*chopb::main_entry              */1,
    /*chunk_piece                    */0,
    /*find_func                      */0,
    /*nothing                        */0,
    /*quick_compound                 */1
};
int _arityNode_chunk[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                           , 0 , 1 , 1 , 1 , 1 , 1 , -1 , -1 , -1 , -1 , 1
                           , 1 , -1 , -1 , -1 , 1 , -1 , -1 , -1 , 1 , 1 , 3
                           , 3 , 3 , -1 , -1 , -1 , 2 , -1 , -1 , 3 , -1 , -1
                           , -1 , -1 , 1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , 2 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2
                           , -1 , -1 , 4 , -1 , -1 , 1 , 0 , -1 , 1 , -1 , -1
                           , -1 , -1 , -1 , -1 , 1 , 0 , 0 , 2 , -1 , 4 , 3
                           , -1 , 1 , 2 , 2 , 2 , -1 , -1 , -1 , -1 , 2 , -1
                           , -1 , -1 , -1 , 3 , 2 , 2 , 1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2 , -1
                           , 2 , 2 , 1 , 1 , 1 , 1 , -1 , 1 , 2 , 2 , -1
                           , 1 , 2 , 2 , 2 , 2 , 3 , 0 , -1 , 2 , 2 , 2
                           , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2
                           , -1 , 2 , 0 , 2 , -1 , 1 , -1 , -1 , 2 , 1 , -1
                           , 3 , 2 , 1 , 1 , 1 , 2 , 1 , 3 , 3 , -1 , -1
                           , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , -1
                           , -1 , 2 , 2 , 2 , 2 , 1 , -1 , 2 , 1 , 1 , 2
                           , 0 , 9 , -1 , 2 , 1 , 2 , 1 , -1 , 2 , -1 , 2
                           , 0 , 1 , 1 , 0 , 2 , 1 , -1 , 2 , 2 , 2 , 2
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2 , 2 , 2 , 2
                           , 2 , 2 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2
                           , 2 , 2 , 0 , 0 , 1 , 1 , 1 , -1 , 1 , 2 , 1
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , -1 , -1 , 1 , -1
                           , -1 , -1 , -1 , -1 , 1 , -1 , -1 , -1 , -1 , 3 , -1
                           , 1 , -1 , 1 , -1 , -1 , 2 , 2 , 1 , 0 , 1 , 2
                           , 0 , 2 , 1 , -1 , 0 , 0 , 0 , 1 , 1 , 1 , 1
 };

    
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
        AddConstVal("chunk::TOP", 341);
        AddConstVal("chunk::NODE_LIST", 340);
        AddConstVal("chunk::NODE_TREE", 339);
        AddConstVal("chunk::SPACE", 338);
        AddConstVal("chunk::SEP_OMIT", 337);
        AddConstVal("chunk::SEP_BEFORE", 336);
        AddConstVal("chunk::SEP_AFTER", 335);
        AddConstVal("chunk::AFERAFER", 334);
        AddConstVal("chunk::ALINEA", 333);
        AddConstVal("chunk::CHOP_DEF", 332);
        AddConstVal("chunk::NIL", 331);
        AddConstVal("chunk::IN_LANG", 330);
        AddConstVal("chunk::NEXT", 329);
        AddConstVal("chunk::DEF_IDENT", 328);
        AddConstVal("chunk::BOX", 327);
        AddConstVal("chunk::EXPO", 326);
        AddConstVal("chunk::EXPO_AFF", 325);
        AddConstVal("chunk::ETOIETOIEGAL", 324);
        AddConstVal("chunk::IN", 323);
        AddConstVal("chunk::PARSE", 322);
        AddConstVal("chunk::NEXTL", 321);
        AddConstVal("chunk::VALUE", 320);
        AddConstVal("chunk::INFESUPE", 319);
        AddConstVal("chunk::FOREACH", 318);
        AddConstVal("chunk::INFESEPOSUPE", 317);
        AddConstVal("chunk::INFESEPBSUPE", 316);
        AddConstVal("chunk::INFESEPASUPE", 315);
        AddConstVal("chunk::AOUVAOUV", 314);
        AddConstVal("chunk::ARRO", 313);
        AddConstVal("chunk::NL_BEG", 312);
        AddConstVal("chunk::TAB_BEG", 311);
        AddConstVal("chunk::SPACE_BEG", 310);
        AddConstVal("chunk::MAKETREE_SUP", 309);
        AddConstVal("chunk::MAKETREE_INF", 308);
        AddConstVal("chunk::PARSE_ELEM", 307);
        AddConstVal("chunk::SIMP_ETOI", 306);
        AddConstVal("chunk::ETOI_ETOI", 305);
        AddConstVal("chunk::BDECR", 304);
        AddConstVal("chunk::BINCR", 303);
        AddConstVal("chunk::ADDR", 302);
        AddConstVal("chunk::NOT", 301);
        AddConstVal("chunk::LNEG", 300);
        AddConstVal("chunk::POS", 299);
        AddConstVal("chunk::NEG", 298);
        AddConstVal("chunk::STRING_LIST", 297);
        AddConstVal("chunk::LABEL", 296);
        AddConstVal("chunk::THROW_ANSI", 295);
        AddConstVal("chunk::ELSE", 294);
        AddConstVal("chunk::TUNSIGNED", 293);
        AddConstVal("chunk::TSIGNED", 292);
        AddConstVal("chunk::TIDENT", 291);
        AddConstVal("chunk::TFLOAT", 290);
        AddConstVal("chunk::TDOUBLE", 289);
        AddConstVal("chunk::RSHI", 288);
        AddConstVal("chunk::LSHI", 287);
        AddConstVal("chunk::LT", 286);
        AddConstVal("chunk::GT", 285);
        AddConstVal("chunk::GEQU", 284);
        AddConstVal("chunk::LEQU", 283);
        AddConstVal("chunk::PROTECT_MEMB", 282);
        AddConstVal("chunk::LANGUAGE", 281);
        AddConstVal("chunk::EXP", 280);
        AddConstVal("chunk::ADECR", 279);
        AddConstVal("chunk::AINCR", 278);
        AddConstVal("chunk::ARROW", 277);
        AddConstVal("chunk::REF", 276);
        AddConstVal("chunk::EXP_ARRAY", 275);
        AddConstVal("chunk::EXP_LIST", 274);
        AddConstVal("chunk::ARROW_MEMB", 273);
        AddConstVal("chunk::DOT_MEMB", 272);
        AddConstVal("chunk::POINETOI", 271);
        AddConstVal("chunk::TIRESUPEETOI", 270);
        AddConstVal("chunk::TIRESUPE", 269);
        AddConstVal("chunk::SUPESUPE", 268);
        AddConstVal("chunk::INFEINFE", 267);
        AddConstVal("chunk::SUPEEGAL", 266);
        AddConstVal("chunk::INFEEGAL", 265);
        AddConstVal("chunk::NEW_DECLARATOR", 264);
        AddConstVal("chunk::REM", 263);
        AddConstVal("chunk::DIV", 262);
        AddConstVal("chunk::MUL", 261);
        AddConstVal("chunk::POURC", 260);
        AddConstVal("chunk::MESSAGE_MAP", 259);
        AddConstVal("chunk::MACRO", 258);
        AddConstVal("chunk::TCHAR", 257);
        AddConstVal("chunk::TSHORT", 256);
        AddConstVal("chunk::TLONG", 255);
        AddConstVal("chunk::TINT", 254);
        AddConstVal("chunk::OR", 253);
        AddConstVal("chunk::VBARVBAR", 252);
        AddConstVal("chunk::AND", 251);
        AddConstVal("chunk::ETCOETCO", 250);
        AddConstVal("chunk::COMPOUND_EXT", 249);
        AddConstVal("chunk::EXTERNAL", 248);
        AddConstVal("chunk::INITIALIZER", 247);
        AddConstVal("chunk::LOR", 246);
        AddConstVal("chunk::VBAR", 245);
        AddConstVal("chunk::FUNC", 244);
        AddConstVal("chunk::STAT_VOID", 243);
        AddConstVal("chunk::TEMPLATE_DECL", 242);
        AddConstVal("chunk::CLASS_PARAM", 241);
        AddConstVal("chunk::EXP_SEQ", 240);
        AddConstVal("chunk::LXOR", 239);
        AddConstVal("chunk::CHAP", 238);
        AddConstVal("chunk::EXCEPTION_LIST", 237);
        AddConstVal("chunk::EXCEPTION_ANSI", 236);
        AddConstVal("chunk::EXCEPTION", 235);
        AddConstVal("chunk::NEQU", 234);
        AddConstVal("chunk::EQU", 233);
        AddConstVal("chunk::EXCLEGAL", 232);
        AddConstVal("chunk::EGALEGAL", 231);
        AddConstVal("chunk::PRAGMA", 230);
        AddConstVal("chunk::INDENT_FUNCTION_TYPE", 229);
        AddConstVal("chunk::COMMENT_PLUS", 228);
        AddConstVal("chunk::COMMENT_END", 227);
        AddConstVal("chunk::COMMENT_MIDDLE", 226);
        AddConstVal("chunk::COMMENT_START", 225);
        AddConstVal("chunk::MARGIN_VALUE", 224);
        AddConstVal("chunk::BRACE_ALIGN_VALUE", 223);
        AddConstVal("chunk::ASSIGN_ALIGN", 222);
        AddConstVal("chunk::SINGLE_SWITCH_INDENT_VALUE", 221);
        AddConstVal("chunk::SIMPLIFY_VALUE", 220);
        AddConstVal("chunk::SIMPLIFY", 219);
        AddConstVal("chunk::MODE_VALUE", 218);
        AddConstVal("chunk::TAB_VALUE", 217);
        AddConstVal("chunk::CONFIG", 216);
        AddConstVal("chunk::NO_PRETTY", 215);
        AddConstVal("chunk::ERROR", 214);
        AddConstVal("chunk::UNDEF", 213);
        AddConstVal("chunk::TYP_AFF_CALL", 212);
        AddConstVal("chunk::MEMBER_DECLARATOR", 211);
        AddConstVal("chunk::TYP_ARRAY", 210);
        AddConstVal("chunk::CFER", 209);
        AddConstVal("chunk::COUV", 208);
        AddConstVal("chunk::FOR_DECLARATION", 207);
        AddConstVal("chunk::DECLARATION", 206);
        AddConstVal("chunk::CTOR_INITIALIZER", 205);
        AddConstVal("chunk::CTOR_INIT", 204);
        AddConstVal("chunk::IUN", 203);
        AddConstVal("chunk::IUNLONG", 202);
        AddConstVal("chunk::ILONG", 201);
        AddConstVal("chunk::RANGE_MODIFIER", 200);
        AddConstVal("chunk::COND_AFF", 199);
        AddConstVal("chunk::INTE", 198);
        AddConstVal("chunk::COMPOUND", 197);
        AddConstVal("chunk::PARAM_TYPE", 196);
        AddConstVal("chunk::SUPE", 195);
        AddConstVal("chunk::INFE", 194);
        AddConstVal("chunk::CLASS_DECL", 193);
        AddConstVal("chunk::AFER", 192);
        AddConstVal("chunk::CATCH_ANSI", 191);
        AddConstVal("chunk::EXCEPT_ANSI_ALL", 190);
        AddConstVal("chunk::CAST", 189);
        AddConstVal("chunk::DPOI", 188);
        AddConstVal("chunk::TYP_BIT", 187);
        AddConstVal("chunk::PROTECT", 186);
        AddConstVal("chunk::BASE_LIST", 185);
        AddConstVal("chunk::XOR_AFF", 184);
        AddConstVal("chunk::OR_AFF", 183);
        AddConstVal("chunk::AND_AFF", 182);
        AddConstVal("chunk::RSH_AFF", 181);
        AddConstVal("chunk::LSH_AFF", 180);
        AddConstVal("chunk::MIN_AFF", 179);
        AddConstVal("chunk::PLU_AFF", 178);
        AddConstVal("chunk::REM_AFF", 177);
        AddConstVal("chunk::DIV_AFF", 176);
        AddConstVal("chunk::MUL_AFF", 175);
        AddConstVal("chunk::AFF", 174);
        AddConstVal("chunk::POINPOINPOIN", 173);
        AddConstVal("chunk::VAR_LIST", 172);
        AddConstVal("chunk::TYP_LIST", 171);
        AddConstVal("chunk::TYP_AFF", 170);
        AddConstVal("chunk::ABST_DECLARATOR", 169);
        AddConstVal("chunk::DECLARATOR", 168);
        AddConstVal("chunk::LAND", 167);
        AddConstVal("chunk::INIT_NEW", 166);
        AddConstVal("chunk::VIRG", 165);
        AddConstVal("chunk::QUALIFIED", 164);
        AddConstVal("chunk::MINUS", 163);
        AddConstVal("chunk::TYP", 162);
        AddConstVal("chunk::PFER", 161);
        AddConstVal("chunk::DESTRUCT", 160);
        AddConstVal("chunk::TYP_REF", 159);
        AddConstVal("chunk::TYP_ADDR", 158);
        AddConstVal("chunk::DEFAULT", 157);
        AddConstVal("chunk::CASE", 156);
        AddConstVal("chunk::TYPEDEF", 155);
        AddConstVal("chunk::TEMPLATE", 154);
        AddConstVal("chunk::CATCH", 153);
        AddConstVal("chunk::PUBLIC", 152);
        AddConstVal("chunk::PROTECTED", 151);
        AddConstVal("chunk::PRIVATE", 150);
        AddConstVal("chunk::CHAPEGAL", 149);
        AddConstVal("chunk::VBAREGAL", 148);
        AddConstVal("chunk::ETCOEGAL", 147);
        AddConstVal("chunk::SUPESUPEEGAL", 146);
        AddConstVal("chunk::INFEINFEEGAL", 145);
        AddConstVal("chunk::TIREEGAL", 144);
        AddConstVal("chunk::PLUSEGAL", 143);
        AddConstVal("chunk::POURCEGAL", 142);
        AddConstVal("chunk::ETOIEGAL", 141);
        AddConstVal("chunk::EGAL", 140);
        AddConstVal("chunk::ASM", 139);
        AddConstVal("chunk::VA_ARG", 138);
        AddConstVal("chunk::DELETE", 137);
        AddConstVal("chunk::NEW", 136);
        AddConstVal("chunk::SIZEOF", 135);
        AddConstVal("chunk::TIRETIRE", 134);
        AddConstVal("chunk::PLUSPLUS", 133);
        AddConstVal("chunk::EXCL", 132);
        AddConstVal("chunk::PLUS", 131);
        AddConstVal("chunk::TIRE", 130);
        AddConstVal("chunk::POUV", 129);
        AddConstVal("chunk::TRY", 128);
        AddConstVal("chunk::THROW", 127);
        AddConstVal("chunk::FORALLSONS", 126);
        AddConstVal("chunk::WHILE", 125);
        AddConstVal("chunk::SWITCH", 124);
        AddConstVal("chunk::RETURN", 123);
        AddConstVal("chunk::PVIR", 122);
        AddConstVal("chunk::IF", 121);
        AddConstVal("chunk::FOR", 120);
        AddConstVal("chunk::AOUV", 119);
        AddConstVal("chunk::DO", 118);
        AddConstVal("chunk::CONTINUE", 117);
        AddConstVal("chunk::BREAK", 116);
        AddConstVal("chunk::OPERATOR", 115);
        AddConstVal("chunk::TILD", 114);
        AddConstVal("chunk::ETCO", 113);
        AddConstVal("chunk::ETOI", 112);
        AddConstVal("chunk::SHORT", 111);
        AddConstVal("chunk::UNSIGNED", 110);
        AddConstVal("chunk::SIGNED", 109);
        AddConstVal("chunk::LONG", 108);
        AddConstVal("chunk::DPOIDPOI", 107);
        AddConstVal("chunk::VOID", 106);
        AddConstVal("chunk::CHAR", 105);
        AddConstVal("chunk::INT", 104);
        AddConstVal("chunk::DOUBLE", 103);
        AddConstVal("chunk::CLASS", 102);
        AddConstVal("chunk::UNION", 101);
        AddConstVal("chunk::STRUCT", 100);
        AddConstVal("chunk::ENUM", 99);
        AddConstVal("chunk::CONST", 98);
        AddConstVal("chunk::FRIEND", 97);
        AddConstVal("chunk::VIRTUAL", 96);
        AddConstVal("chunk::INLINE", 95);
        AddConstVal("chunk::VOLATILE", 94);
        AddConstVal("chunk::REGISTER", 93);
        AddConstVal("chunk::EXTERN", 92);
        AddConstVal("chunk::STATIC", 91);
        AddConstVal("chunk::AUTO", 90);
        AddConstVal("chunk::FUNC_SPEC", 89);
        AddConstVal("chunk::TRY_UPPER", 88);
        AddConstVal("chunk::END_CATCH", 87);
        AddConstVal("chunk::END_CATCH_ALL", 86);
        AddConstVal("chunk::AND_CATCH", 85);
        AddConstVal("chunk::CATCH_UPPER", 84);
        AddConstVal("chunk::CATCH_ALL", 83);
        AddConstVal("chunk::END_MESSAGE_MAP", 82);
        AddConstVal("chunk::BEGIN_MESSAGE_MAP", 81);
        AddConstVal("chunk::DECLARE_MESSAGE_MAP", 80);
        AddConstVal("chunk::IMPLEMENT_SERIAL", 79);
        AddConstVal("chunk::IMPLEMENT_DYNCREATE", 78);
        AddConstVal("chunk::IMPLEMENT_DYNAMIC", 77);
        AddConstVal("chunk::DECLARE_SERIAL", 76);
        AddConstVal("chunk::DECLARE_DYNAMIC", 75);
        AddConstVal("chunk::PUSH_FUNCTION", 74);
        AddConstVal("chunk::PUSH_ARGUMENT", 73);
        AddConstVal("chunk::UNDEF_CONTENT", 72);
        AddConstVal("chunk::SMALL_PRAGMA_CONTENT", 71);
        AddConstVal("chunk::PRAGMA_CONTENT", 70);
        AddConstVal("chunk::PRAGMA_INDENT_FUNCTION_TYPE", 69);
        AddConstVal("chunk::PRAGMA_COMMENT_PLUS", 68);
        AddConstVal("chunk::PRAGMA_COMMENT_END", 67);
        AddConstVal("chunk::PRAGMA_COMMENT_MIDDLE", 66);
        AddConstVal("chunk::PRAGMA_COMMENT_START", 65);
        AddConstVal("chunk::PRAGMA_MARGIN", 64);
        AddConstVal("chunk::PRAGMA_ASSIGN_ALIGN", 63);
        AddConstVal("chunk::PRAGMA_SINGLE_SWITCH_INDENT", 62);
        AddConstVal("chunk::PRAGMA_SIMPLIFY", 61);
        AddConstVal("chunk::PRAGMA_BRACE_ALIGN", 60);
        AddConstVal("chunk::PRAGMA_MODE", 59);
        AddConstVal("chunk::PRAGMA_RANGE", 58);
        AddConstVal("chunk::PRAGMA_TAB", 57);
        AddConstVal("chunk::PRAGMA_CONFIG", 56);
        AddConstVal("chunk::PRAGMA_NOPRETTY", 55);
        AddConstVal("chunk::PRAGMA_PRETTY", 54);
        AddConstVal("chunk::INCLUDE_LOCAL", 53);
        AddConstVal("chunk::INCLUDE_SYS", 52);
        AddConstVal("chunk::END_LINE", 51);
        AddConstVal("chunk::DEFINE_NAME", 50);
        AddConstVal("chunk::DEFINED_NOT_CONTINUED", 49);
        AddConstVal("chunk::DEFINED_CONTINUED", 48);
        AddConstVal("chunk::POINT", 47);
        AddConstVal("chunk::SLAS", 46);
        AddConstVal("chunk::SLASEGAL", 45);
        AddConstVal("chunk::CARRIAGE_RETURN", 44);
        AddConstVal("chunk::UNDEF_DIR", 43);
        AddConstVal("chunk::DEFINE_DIR", 42);
        AddConstVal("chunk::ERROR_DIR", 41);
        AddConstVal("chunk::PRAGMA_DIR", 40);
        AddConstVal("chunk::LINE_DIR", 39);
        AddConstVal("chunk::ENDIF_DIR", 38);
        AddConstVal("chunk::ELIF_DIR", 37);
        AddConstVal("chunk::ELSE_DIR", 36);
        AddConstVal("chunk::IF_DIR", 35);
        AddConstVal("chunk::IFNDEF_DIR", 34);
        AddConstVal("chunk::IFDEF_DIR", 33);
        AddConstVal("chunk::INCLUDE_DIR", 32);
        AddConstVal("chunk::OCTAL", 31);
        AddConstVal("chunk::UOCTAL", 30);
        AddConstVal("chunk::LOCTAL", 29);
        AddConstVal("chunk::ULOCTAL", 28);
        AddConstVal("chunk::HEXA", 27);
        AddConstVal("chunk::UHEXA", 26);
        AddConstVal("chunk::LHEXA", 25);
        AddConstVal("chunk::ULHEXA", 24);
        AddConstVal("chunk::INTEGER", 23);
        AddConstVal("chunk::FLOAT", 22);
        AddConstVal("chunk::UINTEGER", 21);
        AddConstVal("chunk::LINTEGER", 20);
        AddConstVal("chunk::ULINTEGER", 19);
        AddConstVal("chunk::CHARACT", 18);
        AddConstVal("chunk::STRING", 17);
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
        AddLang("chunk",_arityNode_chunk,listConst_chunk,bri_parse_entry_chunk,341,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
