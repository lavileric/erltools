/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"



#line 2795 "cplus.met"

#line 2795 "cplus.met"
int cplus::SortKeyWord (int defaultValue)
#line 2795 "cplus.met"
{
#line 2795 "cplus.met"
    register int Value;
#line 2795 "cplus.met"
    Value = strcmp(lexEl.string(),"namespace");
#line 2795 "cplus.met"
    if (Value > 0) {
#line 2795 "cplus.met"
        Value = strcmp(lexEl.string(),"template");
#line 2795 "cplus.met"
        if (Value > 0) {
#line 2795 "cplus.met"
            Value = strcmp(lexEl.string(),"using");
#line 2795 "cplus.met"
            if (Value > 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"void");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"while");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"volatile")) {
#line 2795 "cplus.met"
                            return(VOLATILE) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(WHILE);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"virtual");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"va_arg")) {
#line 2795 "cplus.met"
                            return(VA_ARG) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(VIRTUAL);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(VOID);
#line 2795 "cplus.met"
            } else if (Value < 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"typename");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"unsigned");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"union")) {
#line 2795 "cplus.met"
                            return(UNION) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(UNSIGNED);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"try");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"typedef")) {
#line 2795 "cplus.met"
                            return(TYPEDEF) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"throw")) {
#line 2795 "cplus.met"
                            return(THROW) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(TRY);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(TYPENAME);
#line 2795 "cplus.met"
            } else 
#line 2795 "cplus.met"
                return(USING);
#line 2795 "cplus.met"
        } else if (Value < 0) {
#line 2795 "cplus.met"
            Value = strcmp(lexEl.string(),"return");
#line 2795 "cplus.met"
            if (Value > 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"static");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"switch");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"struct")) {
#line 2795 "cplus.met"
                            return(STRUCT) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(SWITCH);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"signed");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"sizeof")) {
#line 2795 "cplus.met"
                            return(SIZEOF) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"short")) {
#line 2795 "cplus.met"
                            return(SHORT) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(SIGNED);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(STATIC);
#line 2795 "cplus.met"
            } else if (Value < 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"protected");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"register");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"public")) {
#line 2795 "cplus.met"
                            return(PUBLIC) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(REGISTER);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"operator");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"private")) {
#line 2795 "cplus.met"
                            return(PRIVATE) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"new")) {
#line 2795 "cplus.met"
                            return(NEW) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(OPERATOR);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(PROTECTED);
#line 2795 "cplus.met"
            } else 
#line 2795 "cplus.met"
                return(RETURN);
#line 2795 "cplus.met"
        } else 
#line 2795 "cplus.met"
            return(TEMPLATE);
#line 2795 "cplus.met"
    } else if (Value < 0) {
#line 2795 "cplus.met"
        Value = strcmp(lexEl.string(),"double");
#line 2795 "cplus.met"
        if (Value > 0) {
#line 2795 "cplus.met"
            Value = strcmp(lexEl.string(),"friend");
#line 2795 "cplus.met"
            if (Value > 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"inline");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"long");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"int")) {
#line 2795 "cplus.met"
                            return(INT) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(LONG);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"if");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"goto")) {
#line 2795 "cplus.met"
                            return(GOTO) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(IF);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(INLINE);
#line 2795 "cplus.met"
            } else if (Value < 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"float");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"forallsons");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"for")) {
#line 2795 "cplus.met"
                            return(FOR) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(FORALLSONS);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"enum");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"extern")) {
#line 2795 "cplus.met"
                            return(EXTERN) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"else")) {
#line 2795 "cplus.met"
                            return(ELSE) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(ENUM);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(FLOAT);
#line 2795 "cplus.met"
            } else 
#line 2795 "cplus.met"
                return(FRIEND);
#line 2795 "cplus.met"
        } else if (Value < 0) {
#line 2795 "cplus.met"
            Value = strcmp(lexEl.string(),"char");
#line 2795 "cplus.met"
            if (Value > 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"default");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"do");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"delete")) {
#line 2795 "cplus.met"
                            return(DELETE) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(DO);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"const");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"continue")) {
#line 2795 "cplus.met"
                            return(CONTINUE) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"class")) {
#line 2795 "cplus.met"
                            return(CLASS) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(CONST);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(DEFAULT);
#line 2795 "cplus.met"
            } else if (Value < 0) {
#line 2795 "cplus.met"
                Value = strcmp(lexEl.string(),"break");
#line 2795 "cplus.met"
                if (Value > 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"catch");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        return(defaultValue);
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"case")) {
#line 2795 "cplus.met"
                            return(CASE) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(CATCH);
#line 2795 "cplus.met"
                } else if (Value < 0) {
#line 2795 "cplus.met"
                    Value = strcmp(lexEl.string(),"asm");
#line 2795 "cplus.met"
                    if (Value > 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"auto")) {
#line 2795 "cplus.met"
                            return(AUTO) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else if (Value < 0) {
#line 2795 "cplus.met"
                        if(!strcmp(lexEl.string(),"+____------____")) {
#line 2795 "cplus.met"
                            return(PLUS____TIRETIRETIRETIRETIRETIRE____) ;
#line 2795 "cplus.met"
                        }
#line 2795 "cplus.met"
                    } else 
#line 2795 "cplus.met"
                        return(ASM);
#line 2795 "cplus.met"
                } else 
#line 2795 "cplus.met"
                    return(BREAK);
#line 2795 "cplus.met"
            } else 
#line 2795 "cplus.met"
                return(CHAR);
#line 2795 "cplus.met"
        } else 
#line 2795 "cplus.met"
            return(DOUBLE);
#line 2795 "cplus.met"
    } else 
#line 2795 "cplus.met"
        return(NAMESPACE);
#line 2795 "cplus.met"
    return(defaultValue);
#line 2795 "cplus.met"
}
#line 2795 "cplus.met"

#line 2795 "cplus.met"
int cplus::UpSortKeyWord(int value) 
#line 2795 "cplus.met"
{
#line 2795 "cplus.met"
    register char * ptSource=lexEl.string();
#line 2795 "cplus.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 2795 "cplus.met"
    return SortKeyWord (value);
#line 2795 "cplus.met"
}
#line 2795 "cplus.met"
#line 303 "cplus.met"
int cplus::Lex ()
#line 303 "cplus.met"
{
#line 303 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 303 "cplus.met"
        FreePos(lastContextPos);
#line 303 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 303 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 303 "cplus.met"
        ExtUnputBuf();
#line 303 "cplus.met"
    #ifdef DUMP_COORD
#line 303 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 303 "cplus.met"
    #endif
#line 303 "cplus.met"
    
#line 303 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 303 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 303 "cplus.met"
    tokenAhead = 0;
#line 303 "cplus.met"
    if(LexMeta() != -1){tokenAhead =1; return 1;}
#line 303 "cplus.met"
#line 306 "cplus.met"
    if (! (keepCarriage)){
#line 306 "cplus.met"
#line 307 "cplus.met"
#line 308 "cplus.met"
        ptStockBuf = -1;
#line 308 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 308 "cplus.met"
            NextChar() ;
#line 308 "cplus.met"
        ptStockBuf = -1;
#line 308 "cplus.met"
        lexEl.Erase();
#line 308 "cplus.met"
        tokenAhead = 0;
#line 308 "cplus.met"
        oldLine=line,oldCol=col;
#line 308 "cplus.met"
        if ( !lexCallLex) {
#line 308 "cplus.met"
            PUT_COORD_CALL;
#line 308 "cplus.met"
        }
#line 308 "cplus.met"
#line 308 "cplus.met"
#line 308 "cplus.met"
    } else {
#line 308 "cplus.met"
#line 311 "cplus.met"
        if (! (keepAll)){
#line 311 "cplus.met"
#line 312 "cplus.met"
#line 313 "cplus.met"
            ptStockBuf = -1;
#line 313 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 313 "cplus.met"
                NextChar() ;
#line 313 "cplus.met"
            ptStockBuf = -1;
#line 313 "cplus.met"
            lexEl.Erase();
#line 313 "cplus.met"
            tokenAhead = 0;
#line 313 "cplus.met"
            oldLine=line,oldCol=col;
#line 313 "cplus.met"
            if ( !lexCallLex) {
#line 313 "cplus.met"
                PUT_COORD_CALL;
#line 313 "cplus.met"
            }
#line 313 "cplus.met"
#line 313 "cplus.met"
#line 313 "cplus.met"
        } else {
#line 313 "cplus.met"
#line 316 "cplus.met"
            ptStockBuf = -1;
#line 316 "cplus.met"
            lexEl.Erase();
#line 316 "cplus.met"
            tokenAhead = 0;
#line 316 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 316 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 316 "cplus.met"
        }
#line 316 "cplus.met"
    }
#line 316 "cplus.met"
#line 317 "cplus.met"
    int keepCurrCol = col ;
#line 317 "cplus.met"
    switch(c) {
#line 317 "cplus.met"
        case '*' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::ETOIEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken2 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::ETOI;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '&' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::ETCOEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '&' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::ETCOETCO;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken4 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::ETCO;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '~' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::TILD;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '(' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::POUV;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case ')' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::PFER;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '+' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::PLUSEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '+' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::PLUSPLUS;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken10 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::PLUS;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '-' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::TIREEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '-' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::TIRETIRE;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '>' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    switch(c) {
#line 317 "cplus.met"
                        case '*' :
#line 317 "cplus.met"
                            NextChar();
#line 317 "cplus.met"
                            lexEl.Value = cplus::TIRESUPEETOI;
#line 317 "cplus.met"
                            firstOnLine = 0;
#line 317 "cplus.met"
                            tokenAhead = 1;
#line 317 "cplus.met"
                            PUT_COORD_CALL;
#line 317 "cplus.met"
                            return(1);
#line 317 "cplus.met"
                            break;
#line 317 "cplus.met"
                        _exitDumpToken16 :;
#line 317 "cplus.met"
                        default :
#line 317 "cplus.met"
                            lexEl.Value = cplus::TIRESUPE;
#line 317 "cplus.met"
                            firstOnLine = 0;
#line 317 "cplus.met"
                            tokenAhead = 1;
#line 317 "cplus.met"
                            PUT_COORD_CALL;
#line 317 "cplus.met"
                        
#line 317 "cplus.met"
                            return(1);
#line 317 "cplus.met"
                    }
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken13 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::TIRE;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case ':' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case ':' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::DPOIDPOI;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken18 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::DPOI;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case ',' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::VIRG;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '.' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '.' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    if (GetStringS(".",1)) {
#line 317 "cplus.met"
                        lexEl.Value = cplus::POINPOINPOIN;
#line 317 "cplus.met"
                        firstOnLine = 0;
#line 317 "cplus.met"
                        tokenAhead = 1;
#line 317 "cplus.met"
                        PUT_COORD_CALL;
#line 317 "cplus.met"
                        return(1);
#line 317 "cplus.met"
                    } else {
#line 317 "cplus.met"
                        UnputChar(1);
#line 317 "cplus.met"
                        goto _exitDumpToken21;
#line 317 "cplus.met"
                    }
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '*' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::POINETOI;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken21 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    UnputChar(1);
#line 317 "cplus.met"
                goto _exitDumpToken0;
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '=' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::EGALEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken24 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::EGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '%' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::POURCEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken26 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::POURC;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '<' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '<' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    switch(c) {
#line 317 "cplus.met"
                        case '=' :
#line 317 "cplus.met"
                            NextChar();
#line 317 "cplus.met"
                            lexEl.Value = cplus::INFEINFEEGAL;
#line 317 "cplus.met"
                            firstOnLine = 0;
#line 317 "cplus.met"
                            tokenAhead = 1;
#line 317 "cplus.met"
                            PUT_COORD_CALL;
#line 317 "cplus.met"
                            return(1);
#line 317 "cplus.met"
                            break;
#line 317 "cplus.met"
                        _exitDumpToken29 :;
#line 317 "cplus.met"
                        default :
#line 317 "cplus.met"
                            lexEl.Value = cplus::INFEINFE;
#line 317 "cplus.met"
                            firstOnLine = 0;
#line 317 "cplus.met"
                            tokenAhead = 1;
#line 317 "cplus.met"
                            PUT_COORD_CALL;
#line 317 "cplus.met"
                        
#line 317 "cplus.met"
                            return(1);
#line 317 "cplus.met"
                    }
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::INFEEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken28 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::INFE;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '>' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '>' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    switch(c) {
#line 317 "cplus.met"
                        case '=' :
#line 317 "cplus.met"
                            NextChar();
#line 317 "cplus.met"
                            lexEl.Value = cplus::SUPESUPEEGAL;
#line 317 "cplus.met"
                            firstOnLine = 0;
#line 317 "cplus.met"
                            tokenAhead = 1;
#line 317 "cplus.met"
                            PUT_COORD_CALL;
#line 317 "cplus.met"
                            return(1);
#line 317 "cplus.met"
                            break;
#line 317 "cplus.met"
                        _exitDumpToken33 :;
#line 317 "cplus.met"
                        default :
#line 317 "cplus.met"
                            lexEl.Value = cplus::SUPESUPE;
#line 317 "cplus.met"
                            firstOnLine = 0;
#line 317 "cplus.met"
                            tokenAhead = 1;
#line 317 "cplus.met"
                            PUT_COORD_CALL;
#line 317 "cplus.met"
                        
#line 317 "cplus.met"
                            return(1);
#line 317 "cplus.met"
                    }
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::SUPEEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken32 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::SUPE;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '|' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::VBAREGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                case '|' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::VBARVBAR;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken36 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::VBAR;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '^' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::CHAPEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken39 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::CHAP;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '{' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::AOUV;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '}' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::AFER;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '?' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::INTE;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case ';' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::PVIR;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '[' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::COUV;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case ']' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            lexEl.Value = cplus::CFER;
#line 317 "cplus.met"
            firstOnLine = 0;
#line 317 "cplus.met"
            tokenAhead = 1;
#line 317 "cplus.met"
            PUT_COORD_CALL;
#line 317 "cplus.met"
            return(1);
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        case '!' :
#line 317 "cplus.met"
            NextChar();
#line 317 "cplus.met"
            switch(c) {
#line 317 "cplus.met"
                case '=' :
#line 317 "cplus.met"
                    NextChar();
#line 317 "cplus.met"
                    lexEl.Value = cplus::EXCLEGAL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
                    break;
#line 317 "cplus.met"
                _exitDumpToken47 :;
#line 317 "cplus.met"
                default :
#line 317 "cplus.met"
                    lexEl.Value = cplus::EXCL;
#line 317 "cplus.met"
                    firstOnLine = 0;
#line 317 "cplus.met"
                    tokenAhead = 1;
#line 317 "cplus.met"
                    PUT_COORD_CALL;
#line 317 "cplus.met"
                
#line 317 "cplus.met"
                    return(1);
#line 317 "cplus.met"
            }
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
        _exitDumpToken0 :;
#line 317 "cplus.met"
        default :
#line 317 "cplus.met"
            break;
#line 317 "cplus.met"
    }
#line 317 "cplus.met"
    col = keepCurrCol ;
#line 317 "cplus.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 317 "cplus.met"
    lexEl.Erase();
#line 317 "cplus.met"
    tokenAhead = 0;
#line 317 "cplus.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 317 "cplus.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 317 "cplus.met"
#line 318 "cplus.met"
    switch (c) {
#line 318 "cplus.met"
#line 319 "cplus.met"
        case 'a' :
#line 319 "cplus.met"
        case 'b' :
#line 319 "cplus.met"
        case 'c' :
#line 319 "cplus.met"
        case 'd' :
#line 319 "cplus.met"
        case 'e' :
#line 319 "cplus.met"
        case 'f' :
#line 319 "cplus.met"
        case 'g' :
#line 319 "cplus.met"
        case 'h' :
#line 319 "cplus.met"
        case 'i' :
#line 319 "cplus.met"
        case 'j' :
#line 319 "cplus.met"
        case 'k' :
#line 319 "cplus.met"
        case 'l' :
#line 319 "cplus.met"
        case 'm' :
#line 319 "cplus.met"
        case 'n' :
#line 319 "cplus.met"
        case 'o' :
#line 319 "cplus.met"
        case 'p' :
#line 319 "cplus.met"
        case 'q' :
#line 319 "cplus.met"
        case 'r' :
#line 319 "cplus.met"
        case 's' :
#line 319 "cplus.met"
        case 't' :
#line 319 "cplus.met"
        case 'u' :
#line 319 "cplus.met"
        case 'v' :
#line 319 "cplus.met"
        case 'w' :
#line 319 "cplus.met"
        case 'x' :
#line 319 "cplus.met"
        case 'y' :
#line 319 "cplus.met"
        case 'z' :
#line 319 "cplus.met"
        case 'A' :
#line 319 "cplus.met"
        case 'B' :
#line 319 "cplus.met"
        case 'C' :
#line 319 "cplus.met"
        case 'D' :
#line 319 "cplus.met"
        case 'E' :
#line 319 "cplus.met"
        case 'F' :
#line 319 "cplus.met"
        case 'G' :
#line 319 "cplus.met"
        case 'H' :
#line 319 "cplus.met"
        case 'I' :
#line 319 "cplus.met"
        case 'J' :
#line 319 "cplus.met"
        case 'K' :
#line 319 "cplus.met"
        case 'L' :
#line 319 "cplus.met"
        case 'M' :
#line 319 "cplus.met"
        case 'N' :
#line 319 "cplus.met"
        case 'O' :
#line 319 "cplus.met"
        case 'P' :
#line 319 "cplus.met"
        case 'Q' :
#line 319 "cplus.met"
        case 'R' :
#line 319 "cplus.met"
        case 'S' :
#line 319 "cplus.met"
        case 'T' :
#line 319 "cplus.met"
        case 'U' :
#line 319 "cplus.met"
        case 'V' :
#line 319 "cplus.met"
        case 'W' :
#line 319 "cplus.met"
        case 'X' :
#line 319 "cplus.met"
        case 'Y' :
#line 319 "cplus.met"
        case 'Z' :
#line 319 "cplus.met"
        case '_' :
#line 319 "cplus.met"
#line 320 "cplus.met"
#line 322 "cplus.met"
            while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 322 "cplus.met"
#line 323 "cplus.met"
                {
#line 323 "cplus.met"
                    lexEl . AddChar(c);
#line 323 "cplus.met"
                    NextChar();
#line 323 "cplus.met"
                }
#line 323 "cplus.met"
            } 
#line 323 "cplus.met"
#line 324 "cplus.met"
            {
#line 324 "cplus.met"
                firstOnLine = 0 ; 
#line 324 "cplus.met"
                tokenAhead =1;
#line 324 "cplus.met"
                lexEl.Value = (SortKeyWord (IDENT));
#line 324 "cplus.met"
                PUT_COORD_CALL;
#line 324 "cplus.met"
                return(1);
#line 324 "cplus.met"
            }
#line 324 "cplus.met"
#line 324 "cplus.met"
            break ;
#line 324 "cplus.met"
#line 326 "cplus.met"
        case '"' :
#line 326 "cplus.met"
#line 327 "cplus.met"
            if (noString){
#line 327 "cplus.met"
#line 328 "cplus.met"
#line 329 "cplus.met"
                {
#line 329 "cplus.met"
                    lexEl . AddChar(c);
#line 329 "cplus.met"
                    NextChar();
#line 329 "cplus.met"
                }
#line 329 "cplus.met"
#line 330 "cplus.met"
                {
#line 330 "cplus.met"
                    firstOnLine = 0 ; 
#line 330 "cplus.met"
                    tokenAhead =1;
#line 330 "cplus.met"
                    lexEl.Value=DQUOTE;
#line 330 "cplus.met"
                    PUT_COORD_CALL;
#line 330 "cplus.met"
                    return(1);
#line 330 "cplus.met"
                }
#line 330 "cplus.met"
#line 330 "cplus.met"
#line 330 "cplus.met"
            } else {
#line 330 "cplus.met"
#line 333 "cplus.met"
#line 334 "cplus.met"
                if (!(((c == '"'))&& NextChar())) ;
#line 334 "cplus.met"
#line 336 "cplus.met"
                while (c != EOF) { 
#line 336 "cplus.met"
#line 338 "cplus.met"
                    switch (c) {
#line 338 "cplus.met"
#line 339 "cplus.met"
                        case '\r' :
#line 339 "cplus.met"
                        case '\n' :
#line 339 "cplus.met"
#line 339 "cplus.met"
                            {
#line 339 "cplus.met"
                                firstOnLine = 0 ; 
#line 339 "cplus.met"
                                tokenAhead =1;
#line 339 "cplus.met"
                                lexEl.Value=STRING;
#line 339 "cplus.met"
                                PUT_COORD_CALL;
#line 339 "cplus.met"
                                return(1);
#line 339 "cplus.met"
                            }
#line 339 "cplus.met"
                            break ;
#line 339 "cplus.met"
#line 340 "cplus.met"
                        case '"' :
#line 340 "cplus.met"
                            NextChar();
#line 340 "cplus.met"
#line 340 "cplus.met"
                            {
#line 340 "cplus.met"
                                firstOnLine = 0 ; 
#line 340 "cplus.met"
                                tokenAhead =1;
#line 340 "cplus.met"
                                lexEl.Value=STRING;
#line 340 "cplus.met"
                                PUT_COORD_CALL;
#line 340 "cplus.met"
                                return(1);
#line 340 "cplus.met"
                            }
#line 340 "cplus.met"
                            break ;
#line 340 "cplus.met"
#line 341 "cplus.met"
                        case '\\' :
#line 341 "cplus.met"
                            NextChar();
#line 341 "cplus.met"
#line 342 "cplus.met"
#line 343 "cplus.met"
                            {
#line 343 "cplus.met"
                                lexEl.AddString("\\");
#line 343 "cplus.met"
                            }
#line 343 "cplus.met"
#line 344 "cplus.met"
                            if (! (((c == '\r')))){
#line 344 "cplus.met"
#line 347 "cplus.met"
                                {
#line 347 "cplus.met"
                                    lexEl . AddChar(c);
#line 347 "cplus.met"
                                    NextChar();
#line 347 "cplus.met"
                                }
#line 347 "cplus.met"
                            } else {
#line 347 "cplus.met"
#line 350 "cplus.met"
                                if (!(c != EOF&& NextChar())) ;
#line 350 "cplus.met"
                            }
#line 350 "cplus.met"
#line 350 "cplus.met"
                            break ;
#line 350 "cplus.met"
#line 352 "cplus.met"
                        default : 
#line 352 "cplus.met"
                             if (c!= EOF) {
#line 352 "cplus.met"
#line 352 "cplus.met"
                                {
#line 352 "cplus.met"
                                    lexEl . AddChar(c);
#line 352 "cplus.met"
                                    NextChar();
#line 352 "cplus.met"
                                }
#line 352 "cplus.met"
                            }
#line 352 "cplus.met"
                            break ;
#line 352 "cplus.met"
                    }
#line 352 "cplus.met"
                } 
#line 352 "cplus.met"
#line 352 "cplus.met"
            }
#line 352 "cplus.met"
            break ;
#line 352 "cplus.met"
#line 355 "cplus.met"
        case '\'' :
#line 355 "cplus.met"
            NextChar();
#line 355 "cplus.met"
#line 357 "cplus.met"
            while (c != EOF) { 
#line 357 "cplus.met"
#line 359 "cplus.met"
                switch (c) {
#line 359 "cplus.met"
#line 360 "cplus.met"
                    case '\\' :
#line 360 "cplus.met"
                        NextChar();
#line 360 "cplus.met"
#line 361 "cplus.met"
#line 362 "cplus.met"
                        {
#line 362 "cplus.met"
                            lexEl.AddString("\\");
#line 362 "cplus.met"
                        }
#line 362 "cplus.met"
#line 363 "cplus.met"
                        {
#line 363 "cplus.met"
                            lexEl . AddChar(c);
#line 363 "cplus.met"
                            NextChar();
#line 363 "cplus.met"
                        }
#line 363 "cplus.met"
#line 363 "cplus.met"
                        break ;
#line 363 "cplus.met"
#line 365 "cplus.met"
                    case '\'' :
#line 365 "cplus.met"
                        NextChar();
#line 365 "cplus.met"
#line 366 "cplus.met"
#line 367 "cplus.met"
                        {
#line 367 "cplus.met"
                            firstOnLine = 0 ; 
#line 367 "cplus.met"
                            tokenAhead =1;
#line 367 "cplus.met"
                            lexEl.Value=CHARACT;
#line 367 "cplus.met"
                            PUT_COORD_CALL;
#line 367 "cplus.met"
                            return(1);
#line 367 "cplus.met"
                        }
#line 367 "cplus.met"
#line 367 "cplus.met"
                        break ;
#line 367 "cplus.met"
#line 369 "cplus.met"
                    default : 
#line 369 "cplus.met"
                         if (c!= EOF) {
#line 369 "cplus.met"
#line 369 "cplus.met"
                            {
#line 369 "cplus.met"
                                lexEl . AddChar(c);
#line 369 "cplus.met"
                                NextChar();
#line 369 "cplus.met"
                            }
#line 369 "cplus.met"
                        }
#line 369 "cplus.met"
                        break ;
#line 369 "cplus.met"
                }
#line 369 "cplus.met"
            } 
#line 369 "cplus.met"
            break ;
#line 369 "cplus.met"
#line 371 "cplus.met"
        case '1' :
#line 371 "cplus.met"
        case '2' :
#line 371 "cplus.met"
        case '3' :
#line 371 "cplus.met"
        case '4' :
#line 371 "cplus.met"
        case '5' :
#line 371 "cplus.met"
        case '6' :
#line 371 "cplus.met"
        case '7' :
#line 371 "cplus.met"
        case '8' :
#line 371 "cplus.met"
        case '9' :
#line 371 "cplus.met"
#line 373 "cplus.met"
#line 375 "cplus.met"
            while ((('0' <= c && c <= '9'))) { 
#line 375 "cplus.met"
#line 376 "cplus.met"
                {
#line 376 "cplus.met"
                    lexEl . AddChar(c);
#line 376 "cplus.met"
                    NextChar();
#line 376 "cplus.met"
                }
#line 376 "cplus.met"
            } 
#line 376 "cplus.met"
#line 377 "cplus.met"
            switch (c) {
#line 377 "cplus.met"
#line 378 "cplus.met"
                case 'l' :
#line 378 "cplus.met"
                case 'L' :
#line 378 "cplus.met"
                    NextChar();
#line 378 "cplus.met"
#line 379 "cplus.met"
                    switch (c) {
#line 379 "cplus.met"
#line 380 "cplus.met"
                        case 'u' :
#line 380 "cplus.met"
                        case 'U' :
#line 380 "cplus.met"
                            NextChar();
#line 380 "cplus.met"
#line 380 "cplus.met"
                            {
#line 380 "cplus.met"
                                firstOnLine = 0 ; 
#line 380 "cplus.met"
                                tokenAhead =1;
#line 380 "cplus.met"
                                lexEl.Value=ULINTEGER;
#line 380 "cplus.met"
                                PUT_COORD_CALL;
#line 380 "cplus.met"
                                return(1);
#line 380 "cplus.met"
                            }
#line 380 "cplus.met"
                            break ;
#line 380 "cplus.met"
#line 381 "cplus.met"
                        case 'L' :
#line 381 "cplus.met"
                        case 'l' :
#line 381 "cplus.met"
                            NextChar();
#line 381 "cplus.met"
#line 382 "cplus.met"
#line 383 "cplus.met"
                            switch (c) {
#line 383 "cplus.met"
#line 384 "cplus.met"
                                case 'u' :
#line 384 "cplus.met"
                                case 'U' :
#line 384 "cplus.met"
                                    NextChar();
#line 384 "cplus.met"
#line 384 "cplus.met"
                                    {
#line 384 "cplus.met"
                                        firstOnLine = 0 ; 
#line 384 "cplus.met"
                                        tokenAhead =1;
#line 384 "cplus.met"
                                        lexEl.Value=ULLINTEGER;
#line 384 "cplus.met"
                                        PUT_COORD_CALL;
#line 384 "cplus.met"
                                        return(1);
#line 384 "cplus.met"
                                    }
#line 384 "cplus.met"
                                    break ;
#line 384 "cplus.met"
#line 385 "cplus.met"
                                default : 
#line 385 "cplus.met"
                                     if (c!= EOF) {
#line 385 "cplus.met"
#line 385 "cplus.met"
                                        {
#line 385 "cplus.met"
                                            firstOnLine = 0 ; 
#line 385 "cplus.met"
                                            tokenAhead =1;
#line 385 "cplus.met"
                                            lexEl.Value=LLINTEGER;
#line 385 "cplus.met"
                                            PUT_COORD_CALL;
#line 385 "cplus.met"
                                            return(1);
#line 385 "cplus.met"
                                        }
#line 385 "cplus.met"
                                    }
#line 385 "cplus.met"
                                    break ;
#line 385 "cplus.met"
                            }
#line 385 "cplus.met"
#line 385 "cplus.met"
                            break ;
#line 385 "cplus.met"
#line 388 "cplus.met"
                        default : 
#line 388 "cplus.met"
                             if (c!= EOF) {
#line 388 "cplus.met"
#line 388 "cplus.met"
                                {
#line 388 "cplus.met"
                                    firstOnLine = 0 ; 
#line 388 "cplus.met"
                                    tokenAhead =1;
#line 388 "cplus.met"
                                    lexEl.Value=LINTEGER;
#line 388 "cplus.met"
                                    PUT_COORD_CALL;
#line 388 "cplus.met"
                                    return(1);
#line 388 "cplus.met"
                                }
#line 388 "cplus.met"
                            }
#line 388 "cplus.met"
                            break ;
#line 388 "cplus.met"
                    }
#line 388 "cplus.met"
                    break ;
#line 388 "cplus.met"
#line 390 "cplus.met"
                case 'u' :
#line 390 "cplus.met"
                case 'U' :
#line 390 "cplus.met"
                    NextChar();
#line 390 "cplus.met"
#line 391 "cplus.met"
                    switch (c) {
#line 391 "cplus.met"
#line 392 "cplus.met"
                        case 'l' :
#line 392 "cplus.met"
                        case 'L' :
#line 392 "cplus.met"
                            NextChar();
#line 392 "cplus.met"
#line 393 "cplus.met"
#line 394 "cplus.met"
                            switch (c) {
#line 394 "cplus.met"
#line 395 "cplus.met"
                                case 'L' :
#line 395 "cplus.met"
                                case 'l' :
#line 395 "cplus.met"
                                    NextChar();
#line 395 "cplus.met"
#line 395 "cplus.met"
                                    {
#line 395 "cplus.met"
                                        firstOnLine = 0 ; 
#line 395 "cplus.met"
                                        tokenAhead =1;
#line 395 "cplus.met"
                                        lexEl.Value=ULLINTEGER;
#line 395 "cplus.met"
                                        PUT_COORD_CALL;
#line 395 "cplus.met"
                                        return(1);
#line 395 "cplus.met"
                                    }
#line 395 "cplus.met"
                                    break ;
#line 395 "cplus.met"
#line 396 "cplus.met"
                                default : 
#line 396 "cplus.met"
                                     if (c!= EOF) {
#line 396 "cplus.met"
#line 396 "cplus.met"
                                        {
#line 396 "cplus.met"
                                            firstOnLine = 0 ; 
#line 396 "cplus.met"
                                            tokenAhead =1;
#line 396 "cplus.met"
                                            lexEl.Value=ULINTEGER;
#line 396 "cplus.met"
                                            PUT_COORD_CALL;
#line 396 "cplus.met"
                                            return(1);
#line 396 "cplus.met"
                                        }
#line 396 "cplus.met"
                                    }
#line 396 "cplus.met"
                                    break ;
#line 396 "cplus.met"
                            }
#line 396 "cplus.met"
#line 396 "cplus.met"
                            break ;
#line 396 "cplus.met"
#line 399 "cplus.met"
                        default : 
#line 399 "cplus.met"
                             if (c!= EOF) {
#line 399 "cplus.met"
#line 399 "cplus.met"
                                {
#line 399 "cplus.met"
                                    firstOnLine = 0 ; 
#line 399 "cplus.met"
                                    tokenAhead =1;
#line 399 "cplus.met"
                                    lexEl.Value=UINTEGER;
#line 399 "cplus.met"
                                    PUT_COORD_CALL;
#line 399 "cplus.met"
                                    return(1);
#line 399 "cplus.met"
                                }
#line 399 "cplus.met"
                            }
#line 399 "cplus.met"
                            break ;
#line 399 "cplus.met"
                    }
#line 399 "cplus.met"
                    break ;
#line 399 "cplus.met"
#line 401 "cplus.met"
                case 'e' :
#line 401 "cplus.met"
                case 'E' :
#line 401 "cplus.met"
                    NextChar();
#line 401 "cplus.met"
#line 402 "cplus.met"
#line 403 "cplus.met"
                    {
#line 403 "cplus.met"
                        lexEl.AddString("e");
#line 403 "cplus.met"
                    }
#line 403 "cplus.met"
#line 404 "cplus.met"
                    if (((c == '+')||(c == '-'))){
#line 404 "cplus.met"
#line 405 "cplus.met"
                        {
#line 405 "cplus.met"
                            lexEl . AddChar(c);
#line 405 "cplus.met"
                            NextChar();
#line 405 "cplus.met"
                        }
#line 405 "cplus.met"
                    }
#line 405 "cplus.met"
#line 406 "cplus.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 406 "cplus.met"
#line 407 "cplus.met"
                        {
#line 407 "cplus.met"
                            lexEl . AddChar(c);
#line 407 "cplus.met"
                            NextChar();
#line 407 "cplus.met"
                        }
#line 407 "cplus.met"
                    } 
#line 407 "cplus.met"
#line 408 "cplus.met"
                    switch (c) {
#line 408 "cplus.met"
#line 409 "cplus.met"
                        case 'f' :
#line 409 "cplus.met"
#line 409 "cplus.met"
                            {
#line 409 "cplus.met"
                                lexEl . AddChar(c);
#line 409 "cplus.met"
                                NextChar();
#line 409 "cplus.met"
                            }
#line 409 "cplus.met"
                            break ;
#line 409 "cplus.met"
#line 410 "cplus.met"
                        case 'F' :
#line 410 "cplus.met"
#line 410 "cplus.met"
                            {
#line 410 "cplus.met"
                                lexEl . AddChar(c);
#line 410 "cplus.met"
                                NextChar();
#line 410 "cplus.met"
                            }
#line 410 "cplus.met"
                            break ;
#line 410 "cplus.met"
#line 411 "cplus.met"
                        case 'l' :
#line 411 "cplus.met"
#line 411 "cplus.met"
                            {
#line 411 "cplus.met"
                                lexEl . AddChar(c);
#line 411 "cplus.met"
                                NextChar();
#line 411 "cplus.met"
                            }
#line 411 "cplus.met"
                            break ;
#line 411 "cplus.met"
#line 412 "cplus.met"
                        case 'L' :
#line 412 "cplus.met"
#line 412 "cplus.met"
                            {
#line 412 "cplus.met"
                                lexEl . AddChar(c);
#line 412 "cplus.met"
                                NextChar();
#line 412 "cplus.met"
                            }
#line 412 "cplus.met"
                            break ;
#line 412 "cplus.met"
                    }
#line 412 "cplus.met"
#line 414 "cplus.met"
                    {
#line 414 "cplus.met"
                        firstOnLine = 0 ; 
#line 414 "cplus.met"
                        tokenAhead =1;
#line 414 "cplus.met"
                        lexEl.Value=FLOATVAL;
#line 414 "cplus.met"
                        PUT_COORD_CALL;
#line 414 "cplus.met"
                        return(1);
#line 414 "cplus.met"
                    }
#line 414 "cplus.met"
#line 414 "cplus.met"
                    break ;
#line 414 "cplus.met"
#line 416 "cplus.met"
                case '.' :
#line 416 "cplus.met"
#line 417 "cplus.met"
#line 418 "cplus.met"
                    {
#line 418 "cplus.met"
                        lexEl . AddChar(c);
#line 418 "cplus.met"
                        NextChar();
#line 418 "cplus.met"
                    }
#line 418 "cplus.met"
#line 419 "cplus.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 419 "cplus.met"
#line 420 "cplus.met"
                        {
#line 420 "cplus.met"
                            lexEl . AddChar(c);
#line 420 "cplus.met"
                            NextChar();
#line 420 "cplus.met"
                        }
#line 420 "cplus.met"
                    } 
#line 420 "cplus.met"
#line 421 "cplus.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 421 "cplus.met"
#line 422 "cplus.met"
#line 423 "cplus.met"
                        {
#line 423 "cplus.met"
                            lexEl.AddString("e");
#line 423 "cplus.met"
                        }
#line 423 "cplus.met"
#line 424 "cplus.met"
                        if (((c == '+')||(c == '-'))){
#line 424 "cplus.met"
#line 425 "cplus.met"
                            {
#line 425 "cplus.met"
                                lexEl . AddChar(c);
#line 425 "cplus.met"
                                NextChar();
#line 425 "cplus.met"
                            }
#line 425 "cplus.met"
                        }
#line 425 "cplus.met"
#line 426 "cplus.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 426 "cplus.met"
#line 427 "cplus.met"
                            {
#line 427 "cplus.met"
                                lexEl . AddChar(c);
#line 427 "cplus.met"
                                NextChar();
#line 427 "cplus.met"
                            }
#line 427 "cplus.met"
                        } 
#line 427 "cplus.met"
#line 427 "cplus.met"
#line 427 "cplus.met"
                    }
#line 427 "cplus.met"
#line 429 "cplus.met"
                    switch (c) {
#line 429 "cplus.met"
#line 430 "cplus.met"
                        case 'f' :
#line 430 "cplus.met"
#line 430 "cplus.met"
                            {
#line 430 "cplus.met"
                                lexEl . AddChar(c);
#line 430 "cplus.met"
                                NextChar();
#line 430 "cplus.met"
                            }
#line 430 "cplus.met"
                            break ;
#line 430 "cplus.met"
#line 431 "cplus.met"
                        case 'F' :
#line 431 "cplus.met"
#line 431 "cplus.met"
                            {
#line 431 "cplus.met"
                                lexEl . AddChar(c);
#line 431 "cplus.met"
                                NextChar();
#line 431 "cplus.met"
                            }
#line 431 "cplus.met"
                            break ;
#line 431 "cplus.met"
#line 432 "cplus.met"
                        case 'l' :
#line 432 "cplus.met"
#line 432 "cplus.met"
                            {
#line 432 "cplus.met"
                                lexEl . AddChar(c);
#line 432 "cplus.met"
                                NextChar();
#line 432 "cplus.met"
                            }
#line 432 "cplus.met"
                            break ;
#line 432 "cplus.met"
#line 433 "cplus.met"
                        case 'L' :
#line 433 "cplus.met"
#line 433 "cplus.met"
                            {
#line 433 "cplus.met"
                                lexEl . AddChar(c);
#line 433 "cplus.met"
                                NextChar();
#line 433 "cplus.met"
                            }
#line 433 "cplus.met"
                            break ;
#line 433 "cplus.met"
                    }
#line 433 "cplus.met"
#line 435 "cplus.met"
                    {
#line 435 "cplus.met"
                        firstOnLine = 0 ; 
#line 435 "cplus.met"
                        tokenAhead =1;
#line 435 "cplus.met"
                        lexEl.Value=FLOATVAL;
#line 435 "cplus.met"
                        PUT_COORD_CALL;
#line 435 "cplus.met"
                        return(1);
#line 435 "cplus.met"
                    }
#line 435 "cplus.met"
#line 435 "cplus.met"
                    break ;
#line 435 "cplus.met"
#line 437 "cplus.met"
                default : 
#line 437 "cplus.met"
                     if (c!= EOF) {
#line 437 "cplus.met"
#line 437 "cplus.met"
                        {
#line 437 "cplus.met"
                            firstOnLine = 0 ; 
#line 437 "cplus.met"
                            tokenAhead =1;
#line 437 "cplus.met"
                            lexEl.Value=INTEGER;
#line 437 "cplus.met"
                            PUT_COORD_CALL;
#line 437 "cplus.met"
                            return(1);
#line 437 "cplus.met"
                        }
#line 437 "cplus.met"
                    }
#line 437 "cplus.met"
                    break ;
#line 437 "cplus.met"
            }
#line 437 "cplus.met"
#line 437 "cplus.met"
            break ;
#line 437 "cplus.met"
#line 440 "cplus.met"
        case '0' :
#line 440 "cplus.met"
            NextChar();
#line 440 "cplus.met"
#line 441 "cplus.met"
#line 442 "cplus.met"
            switch (c) {
#line 442 "cplus.met"
#line 443 "cplus.met"
                case 'x' :
#line 443 "cplus.met"
                case 'X' :
#line 443 "cplus.met"
                    NextChar();
#line 443 "cplus.met"
#line 444 "cplus.met"
#line 445 "cplus.met"
                    while ((('0' <= c && c <= '9')||('a' <= c && c <= 'f')||('A' <= c && c <= 'F'))) { 
#line 445 "cplus.met"
#line 446 "cplus.met"
                        {
#line 446 "cplus.met"
                            lexEl . AddChar(c);
#line 446 "cplus.met"
                            NextChar();
#line 446 "cplus.met"
                        }
#line 446 "cplus.met"
                    } 
#line 446 "cplus.met"
#line 447 "cplus.met"
                    switch (c) {
#line 447 "cplus.met"
#line 448 "cplus.met"
                        case 'l' :
#line 448 "cplus.met"
                        case 'L' :
#line 448 "cplus.met"
                            NextChar();
#line 448 "cplus.met"
#line 449 "cplus.met"
                            switch (c) {
#line 449 "cplus.met"
#line 450 "cplus.met"
                                case 'u' :
#line 450 "cplus.met"
                                case 'U' :
#line 450 "cplus.met"
                                    NextChar();
#line 450 "cplus.met"
#line 450 "cplus.met"
                                    {
#line 450 "cplus.met"
                                        firstOnLine = 0 ; 
#line 450 "cplus.met"
                                        tokenAhead =1;
#line 450 "cplus.met"
                                        lexEl.Value=ULHEXA;
#line 450 "cplus.met"
                                        PUT_COORD_CALL;
#line 450 "cplus.met"
                                        return(1);
#line 450 "cplus.met"
                                    }
#line 450 "cplus.met"
                                    break ;
#line 450 "cplus.met"
#line 451 "cplus.met"
                                case 'L' :
#line 451 "cplus.met"
                                case 'l' :
#line 451 "cplus.met"
                                    NextChar();
#line 451 "cplus.met"
#line 452 "cplus.met"
#line 453 "cplus.met"
                                    switch (c) {
#line 453 "cplus.met"
#line 454 "cplus.met"
                                        case 'u' :
#line 454 "cplus.met"
                                        case 'U' :
#line 454 "cplus.met"
                                            NextChar();
#line 454 "cplus.met"
#line 454 "cplus.met"
                                            {
#line 454 "cplus.met"
                                                firstOnLine = 0 ; 
#line 454 "cplus.met"
                                                tokenAhead =1;
#line 454 "cplus.met"
                                                lexEl.Value=ULLHEXA;
#line 454 "cplus.met"
                                                PUT_COORD_CALL;
#line 454 "cplus.met"
                                                return(1);
#line 454 "cplus.met"
                                            }
#line 454 "cplus.met"
                                            break ;
#line 454 "cplus.met"
#line 455 "cplus.met"
                                        default : 
#line 455 "cplus.met"
                                             if (c!= EOF) {
#line 455 "cplus.met"
#line 455 "cplus.met"
                                                {
#line 455 "cplus.met"
                                                    firstOnLine = 0 ; 
#line 455 "cplus.met"
                                                    tokenAhead =1;
#line 455 "cplus.met"
                                                    lexEl.Value=LLHEXA;
#line 455 "cplus.met"
                                                    PUT_COORD_CALL;
#line 455 "cplus.met"
                                                    return(1);
#line 455 "cplus.met"
                                                }
#line 455 "cplus.met"
                                            }
#line 455 "cplus.met"
                                            break ;
#line 455 "cplus.met"
                                    }
#line 455 "cplus.met"
#line 455 "cplus.met"
                                    break ;
#line 455 "cplus.met"
#line 458 "cplus.met"
                                default : 
#line 458 "cplus.met"
                                     if (c!= EOF) {
#line 458 "cplus.met"
#line 458 "cplus.met"
                                        {
#line 458 "cplus.met"
                                            firstOnLine = 0 ; 
#line 458 "cplus.met"
                                            tokenAhead =1;
#line 458 "cplus.met"
                                            lexEl.Value=LHEXA;
#line 458 "cplus.met"
                                            PUT_COORD_CALL;
#line 458 "cplus.met"
                                            return(1);
#line 458 "cplus.met"
                                        }
#line 458 "cplus.met"
                                    }
#line 458 "cplus.met"
                                    break ;
#line 458 "cplus.met"
                            }
#line 458 "cplus.met"
                            break ;
#line 458 "cplus.met"
#line 460 "cplus.met"
                        case 'u' :
#line 460 "cplus.met"
                        case 'U' :
#line 460 "cplus.met"
                            NextChar();
#line 460 "cplus.met"
#line 461 "cplus.met"
                            switch (c) {
#line 461 "cplus.met"
#line 462 "cplus.met"
                                case 'l' :
#line 462 "cplus.met"
                                case 'L' :
#line 462 "cplus.met"
                                    NextChar();
#line 462 "cplus.met"
#line 463 "cplus.met"
#line 464 "cplus.met"
                                    switch (c) {
#line 464 "cplus.met"
#line 465 "cplus.met"
                                        case 'L' :
#line 465 "cplus.met"
                                        case 'l' :
#line 465 "cplus.met"
                                            NextChar();
#line 465 "cplus.met"
#line 465 "cplus.met"
                                            {
#line 465 "cplus.met"
                                                firstOnLine = 0 ; 
#line 465 "cplus.met"
                                                tokenAhead =1;
#line 465 "cplus.met"
                                                lexEl.Value=ULLHEXA;
#line 465 "cplus.met"
                                                PUT_COORD_CALL;
#line 465 "cplus.met"
                                                return(1);
#line 465 "cplus.met"
                                            }
#line 465 "cplus.met"
                                            break ;
#line 465 "cplus.met"
#line 466 "cplus.met"
                                        default : 
#line 466 "cplus.met"
                                             if (c!= EOF) {
#line 466 "cplus.met"
#line 466 "cplus.met"
                                                {
#line 466 "cplus.met"
                                                    firstOnLine = 0 ; 
#line 466 "cplus.met"
                                                    tokenAhead =1;
#line 466 "cplus.met"
                                                    lexEl.Value=ULHEXA;
#line 466 "cplus.met"
                                                    PUT_COORD_CALL;
#line 466 "cplus.met"
                                                    return(1);
#line 466 "cplus.met"
                                                }
#line 466 "cplus.met"
                                            }
#line 466 "cplus.met"
                                            break ;
#line 466 "cplus.met"
                                    }
#line 466 "cplus.met"
#line 466 "cplus.met"
                                    break ;
#line 466 "cplus.met"
#line 469 "cplus.met"
                                default : 
#line 469 "cplus.met"
                                     if (c!= EOF) {
#line 469 "cplus.met"
#line 469 "cplus.met"
                                        {
#line 469 "cplus.met"
                                            firstOnLine = 0 ; 
#line 469 "cplus.met"
                                            tokenAhead =1;
#line 469 "cplus.met"
                                            lexEl.Value=UHEXA;
#line 469 "cplus.met"
                                            PUT_COORD_CALL;
#line 469 "cplus.met"
                                            return(1);
#line 469 "cplus.met"
                                        }
#line 469 "cplus.met"
                                    }
#line 469 "cplus.met"
                                    break ;
#line 469 "cplus.met"
                            }
#line 469 "cplus.met"
                            break ;
#line 469 "cplus.met"
#line 471 "cplus.met"
                        default : 
#line 471 "cplus.met"
                             if (c!= EOF) {
#line 471 "cplus.met"
#line 471 "cplus.met"
                                {
#line 471 "cplus.met"
                                    firstOnLine = 0 ; 
#line 471 "cplus.met"
                                    tokenAhead =1;
#line 471 "cplus.met"
                                    lexEl.Value=HEXA;
#line 471 "cplus.met"
                                    PUT_COORD_CALL;
#line 471 "cplus.met"
                                    return(1);
#line 471 "cplus.met"
                                }
#line 471 "cplus.met"
                            }
#line 471 "cplus.met"
                            break ;
#line 471 "cplus.met"
                    }
#line 471 "cplus.met"
#line 471 "cplus.met"
                    break ;
#line 471 "cplus.met"
#line 474 "cplus.met"
                case '0' :
#line 474 "cplus.met"
                case '1' :
#line 474 "cplus.met"
                case '2' :
#line 474 "cplus.met"
                case '3' :
#line 474 "cplus.met"
                case '4' :
#line 474 "cplus.met"
                case '5' :
#line 474 "cplus.met"
                case '6' :
#line 474 "cplus.met"
                case '7' :
#line 474 "cplus.met"
#line 475 "cplus.met"
#line 476 "cplus.met"
                    while ((('0' <= c && c <= '7'))) { 
#line 476 "cplus.met"
#line 477 "cplus.met"
                        {
#line 477 "cplus.met"
                            lexEl . AddChar(c);
#line 477 "cplus.met"
                            NextChar();
#line 477 "cplus.met"
                        }
#line 477 "cplus.met"
                    } 
#line 477 "cplus.met"
#line 478 "cplus.met"
                    switch (c) {
#line 478 "cplus.met"
#line 479 "cplus.met"
                        case 'l' :
#line 479 "cplus.met"
                        case 'L' :
#line 479 "cplus.met"
                            NextChar();
#line 479 "cplus.met"
#line 480 "cplus.met"
                            switch (c) {
#line 480 "cplus.met"
#line 481 "cplus.met"
                                case 'L' :
#line 481 "cplus.met"
                                case 'l' :
#line 481 "cplus.met"
                                    NextChar();
#line 481 "cplus.met"
#line 482 "cplus.met"
#line 483 "cplus.met"
                                    switch (c) {
#line 483 "cplus.met"
#line 484 "cplus.met"
                                        case 'u' :
#line 484 "cplus.met"
                                        case 'U' :
#line 484 "cplus.met"
                                            NextChar();
#line 484 "cplus.met"
#line 484 "cplus.met"
                                            {
#line 484 "cplus.met"
                                                firstOnLine = 0 ; 
#line 484 "cplus.met"
                                                tokenAhead =1;
#line 484 "cplus.met"
                                                lexEl.Value=ULLOCTAL;
#line 484 "cplus.met"
                                                PUT_COORD_CALL;
#line 484 "cplus.met"
                                                return(1);
#line 484 "cplus.met"
                                            }
#line 484 "cplus.met"
                                            break ;
#line 484 "cplus.met"
#line 485 "cplus.met"
                                        default : 
#line 485 "cplus.met"
                                             if (c!= EOF) {
#line 485 "cplus.met"
#line 485 "cplus.met"
                                                {
#line 485 "cplus.met"
                                                    firstOnLine = 0 ; 
#line 485 "cplus.met"
                                                    tokenAhead =1;
#line 485 "cplus.met"
                                                    lexEl.Value=LLOCTAL;
#line 485 "cplus.met"
                                                    PUT_COORD_CALL;
#line 485 "cplus.met"
                                                    return(1);
#line 485 "cplus.met"
                                                }
#line 485 "cplus.met"
                                            }
#line 485 "cplus.met"
                                            break ;
#line 485 "cplus.met"
                                    }
#line 485 "cplus.met"
#line 485 "cplus.met"
                                    break ;
#line 485 "cplus.met"
#line 488 "cplus.met"
                                case 'u' :
#line 488 "cplus.met"
                                case 'U' :
#line 488 "cplus.met"
                                    NextChar();
#line 488 "cplus.met"
#line 488 "cplus.met"
                                    {
#line 488 "cplus.met"
                                        firstOnLine = 0 ; 
#line 488 "cplus.met"
                                        tokenAhead =1;
#line 488 "cplus.met"
                                        lexEl.Value=ULOCTAL;
#line 488 "cplus.met"
                                        PUT_COORD_CALL;
#line 488 "cplus.met"
                                        return(1);
#line 488 "cplus.met"
                                    }
#line 488 "cplus.met"
                                    break ;
#line 488 "cplus.met"
#line 489 "cplus.met"
                                default : 
#line 489 "cplus.met"
                                     if (c!= EOF) {
#line 489 "cplus.met"
#line 489 "cplus.met"
                                        {
#line 489 "cplus.met"
                                            firstOnLine = 0 ; 
#line 489 "cplus.met"
                                            tokenAhead =1;
#line 489 "cplus.met"
                                            lexEl.Value=LOCTAL;
#line 489 "cplus.met"
                                            PUT_COORD_CALL;
#line 489 "cplus.met"
                                            return(1);
#line 489 "cplus.met"
                                        }
#line 489 "cplus.met"
                                    }
#line 489 "cplus.met"
                                    break ;
#line 489 "cplus.met"
                            }
#line 489 "cplus.met"
                            break ;
#line 489 "cplus.met"
#line 491 "cplus.met"
                        case 'u' :
#line 491 "cplus.met"
                        case 'U' :
#line 491 "cplus.met"
                            NextChar();
#line 491 "cplus.met"
#line 492 "cplus.met"
                            switch (c) {
#line 492 "cplus.met"
#line 493 "cplus.met"
                                case 'l' :
#line 493 "cplus.met"
                                case 'L' :
#line 493 "cplus.met"
                                    NextChar();
#line 493 "cplus.met"
#line 494 "cplus.met"
#line 495 "cplus.met"
                                    switch (c) {
#line 495 "cplus.met"
#line 496 "cplus.met"
                                        case 'L' :
#line 496 "cplus.met"
                                        case 'l' :
#line 496 "cplus.met"
                                            NextChar();
#line 496 "cplus.met"
#line 496 "cplus.met"
                                            {
#line 496 "cplus.met"
                                                firstOnLine = 0 ; 
#line 496 "cplus.met"
                                                tokenAhead =1;
#line 496 "cplus.met"
                                                lexEl.Value=ULLOCTAL;
#line 496 "cplus.met"
                                                PUT_COORD_CALL;
#line 496 "cplus.met"
                                                return(1);
#line 496 "cplus.met"
                                            }
#line 496 "cplus.met"
                                            break ;
#line 496 "cplus.met"
#line 497 "cplus.met"
                                        default : 
#line 497 "cplus.met"
                                             if (c!= EOF) {
#line 497 "cplus.met"
#line 497 "cplus.met"
                                                {
#line 497 "cplus.met"
                                                    firstOnLine = 0 ; 
#line 497 "cplus.met"
                                                    tokenAhead =1;
#line 497 "cplus.met"
                                                    lexEl.Value=ULOCTAL;
#line 497 "cplus.met"
                                                    PUT_COORD_CALL;
#line 497 "cplus.met"
                                                    return(1);
#line 497 "cplus.met"
                                                }
#line 497 "cplus.met"
                                            }
#line 497 "cplus.met"
                                            break ;
#line 497 "cplus.met"
                                    }
#line 497 "cplus.met"
#line 497 "cplus.met"
                                    break ;
#line 497 "cplus.met"
#line 500 "cplus.met"
                                default : 
#line 500 "cplus.met"
                                     if (c!= EOF) {
#line 500 "cplus.met"
#line 500 "cplus.met"
                                        {
#line 500 "cplus.met"
                                            firstOnLine = 0 ; 
#line 500 "cplus.met"
                                            tokenAhead =1;
#line 500 "cplus.met"
                                            lexEl.Value=UOCTAL;
#line 500 "cplus.met"
                                            PUT_COORD_CALL;
#line 500 "cplus.met"
                                            return(1);
#line 500 "cplus.met"
                                        }
#line 500 "cplus.met"
                                    }
#line 500 "cplus.met"
                                    break ;
#line 500 "cplus.met"
                            }
#line 500 "cplus.met"
                            break ;
#line 500 "cplus.met"
#line 502 "cplus.met"
                        default : 
#line 502 "cplus.met"
                             if (c!= EOF) {
#line 502 "cplus.met"
#line 502 "cplus.met"
                                {
#line 502 "cplus.met"
                                    firstOnLine = 0 ; 
#line 502 "cplus.met"
                                    tokenAhead =1;
#line 502 "cplus.met"
                                    lexEl.Value=OCTAL;
#line 502 "cplus.met"
                                    PUT_COORD_CALL;
#line 502 "cplus.met"
                                    return(1);
#line 502 "cplus.met"
                                }
#line 502 "cplus.met"
                            }
#line 502 "cplus.met"
                            break ;
#line 502 "cplus.met"
                    }
#line 502 "cplus.met"
#line 502 "cplus.met"
                    break ;
#line 502 "cplus.met"
#line 505 "cplus.met"
                case '.' :
#line 505 "cplus.met"
#line 506 "cplus.met"
#line 507 "cplus.met"
                    {
#line 507 "cplus.met"
                        lexEl.AddString("0");
#line 507 "cplus.met"
                    }
#line 507 "cplus.met"
#line 508 "cplus.met"
                    {
#line 508 "cplus.met"
                        lexEl . AddChar(c);
#line 508 "cplus.met"
                        NextChar();
#line 508 "cplus.met"
                    }
#line 508 "cplus.met"
#line 509 "cplus.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 509 "cplus.met"
#line 510 "cplus.met"
                        {
#line 510 "cplus.met"
                            lexEl . AddChar(c);
#line 510 "cplus.met"
                            NextChar();
#line 510 "cplus.met"
                        }
#line 510 "cplus.met"
                    } 
#line 510 "cplus.met"
#line 511 "cplus.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 511 "cplus.met"
#line 512 "cplus.met"
#line 513 "cplus.met"
                        {
#line 513 "cplus.met"
                            lexEl.AddString("e");
#line 513 "cplus.met"
                        }
#line 513 "cplus.met"
#line 514 "cplus.met"
                        if (((c == '+')||(c == '-'))){
#line 514 "cplus.met"
#line 515 "cplus.met"
                            {
#line 515 "cplus.met"
                                lexEl . AddChar(c);
#line 515 "cplus.met"
                                NextChar();
#line 515 "cplus.met"
                            }
#line 515 "cplus.met"
                        }
#line 515 "cplus.met"
#line 516 "cplus.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 516 "cplus.met"
#line 517 "cplus.met"
                            {
#line 517 "cplus.met"
                                lexEl . AddChar(c);
#line 517 "cplus.met"
                                NextChar();
#line 517 "cplus.met"
                            }
#line 517 "cplus.met"
                        } 
#line 517 "cplus.met"
#line 517 "cplus.met"
#line 517 "cplus.met"
                    }
#line 517 "cplus.met"
#line 519 "cplus.met"
                    switch (c) {
#line 519 "cplus.met"
#line 520 "cplus.met"
                        case 'f' :
#line 520 "cplus.met"
#line 520 "cplus.met"
                            {
#line 520 "cplus.met"
                                lexEl . AddChar(c);
#line 520 "cplus.met"
                                NextChar();
#line 520 "cplus.met"
                            }
#line 520 "cplus.met"
                            break ;
#line 520 "cplus.met"
#line 521 "cplus.met"
                        case 'F' :
#line 521 "cplus.met"
#line 521 "cplus.met"
                            {
#line 521 "cplus.met"
                                lexEl . AddChar(c);
#line 521 "cplus.met"
                                NextChar();
#line 521 "cplus.met"
                            }
#line 521 "cplus.met"
                            break ;
#line 521 "cplus.met"
#line 522 "cplus.met"
                        case 'l' :
#line 522 "cplus.met"
#line 522 "cplus.met"
                            {
#line 522 "cplus.met"
                                lexEl . AddChar(c);
#line 522 "cplus.met"
                                NextChar();
#line 522 "cplus.met"
                            }
#line 522 "cplus.met"
                            break ;
#line 522 "cplus.met"
#line 523 "cplus.met"
                        case 'L' :
#line 523 "cplus.met"
#line 523 "cplus.met"
                            {
#line 523 "cplus.met"
                                lexEl . AddChar(c);
#line 523 "cplus.met"
                                NextChar();
#line 523 "cplus.met"
                            }
#line 523 "cplus.met"
                            break ;
#line 523 "cplus.met"
                    }
#line 523 "cplus.met"
#line 525 "cplus.met"
                    {
#line 525 "cplus.met"
                        firstOnLine = 0 ; 
#line 525 "cplus.met"
                        tokenAhead =1;
#line 525 "cplus.met"
                        lexEl.Value=FLOATVAL;
#line 525 "cplus.met"
                        PUT_COORD_CALL;
#line 525 "cplus.met"
                        return(1);
#line 525 "cplus.met"
                    }
#line 525 "cplus.met"
#line 525 "cplus.met"
                    break ;
#line 525 "cplus.met"
#line 529 "cplus.met"
                default : 
#line 529 "cplus.met"
                     if (c!= EOF) {
#line 529 "cplus.met"
#line 528 "cplus.met"
#line 529 "cplus.met"
                        {
#line 529 "cplus.met"
                            lexEl.AddString("0");
#line 529 "cplus.met"
                        }
#line 529 "cplus.met"
#line 530 "cplus.met"
                        switch (c) {
#line 530 "cplus.met"
#line 531 "cplus.met"
                            case 'l' :
#line 531 "cplus.met"
                            case 'L' :
#line 531 "cplus.met"
                                NextChar();
#line 531 "cplus.met"
#line 532 "cplus.met"
                                switch (c) {
#line 532 "cplus.met"
#line 533 "cplus.met"
                                    case 'u' :
#line 533 "cplus.met"
                                    case 'U' :
#line 533 "cplus.met"
                                        NextChar();
#line 533 "cplus.met"
#line 533 "cplus.met"
                                        {
#line 533 "cplus.met"
                                            firstOnLine = 0 ; 
#line 533 "cplus.met"
                                            tokenAhead =1;
#line 533 "cplus.met"
                                            lexEl.Value=ULINTEGER;
#line 533 "cplus.met"
                                            PUT_COORD_CALL;
#line 533 "cplus.met"
                                            return(1);
#line 533 "cplus.met"
                                        }
#line 533 "cplus.met"
                                        break ;
#line 533 "cplus.met"
#line 534 "cplus.met"
                                    default : 
#line 534 "cplus.met"
                                         if (c!= EOF) {
#line 534 "cplus.met"
#line 534 "cplus.met"
                                            {
#line 534 "cplus.met"
                                                firstOnLine = 0 ; 
#line 534 "cplus.met"
                                                tokenAhead =1;
#line 534 "cplus.met"
                                                lexEl.Value=LINTEGER;
#line 534 "cplus.met"
                                                PUT_COORD_CALL;
#line 534 "cplus.met"
                                                return(1);
#line 534 "cplus.met"
                                            }
#line 534 "cplus.met"
                                        }
#line 534 "cplus.met"
                                        break ;
#line 534 "cplus.met"
                                }
#line 534 "cplus.met"
                                break ;
#line 534 "cplus.met"
#line 536 "cplus.met"
                            case 'u' :
#line 536 "cplus.met"
                            case 'U' :
#line 536 "cplus.met"
                                NextChar();
#line 536 "cplus.met"
#line 537 "cplus.met"
                                switch (c) {
#line 537 "cplus.met"
#line 538 "cplus.met"
                                    case 'l' :
#line 538 "cplus.met"
                                    case 'L' :
#line 538 "cplus.met"
                                        NextChar();
#line 538 "cplus.met"
#line 538 "cplus.met"
                                        {
#line 538 "cplus.met"
                                            firstOnLine = 0 ; 
#line 538 "cplus.met"
                                            tokenAhead =1;
#line 538 "cplus.met"
                                            lexEl.Value=ULINTEGER;
#line 538 "cplus.met"
                                            PUT_COORD_CALL;
#line 538 "cplus.met"
                                            return(1);
#line 538 "cplus.met"
                                        }
#line 538 "cplus.met"
                                        break ;
#line 538 "cplus.met"
#line 539 "cplus.met"
                                    default : 
#line 539 "cplus.met"
                                         if (c!= EOF) {
#line 539 "cplus.met"
#line 539 "cplus.met"
                                            {
#line 539 "cplus.met"
                                                firstOnLine = 0 ; 
#line 539 "cplus.met"
                                                tokenAhead =1;
#line 539 "cplus.met"
                                                lexEl.Value=UINTEGER;
#line 539 "cplus.met"
                                                PUT_COORD_CALL;
#line 539 "cplus.met"
                                                return(1);
#line 539 "cplus.met"
                                            }
#line 539 "cplus.met"
                                        }
#line 539 "cplus.met"
                                        break ;
#line 539 "cplus.met"
                                }
#line 539 "cplus.met"
                                break ;
#line 539 "cplus.met"
#line 541 "cplus.met"
                            default : 
#line 541 "cplus.met"
                                 if (c!= EOF) {
#line 541 "cplus.met"
#line 541 "cplus.met"
                                    {
#line 541 "cplus.met"
                                        firstOnLine = 0 ; 
#line 541 "cplus.met"
                                        tokenAhead =1;
#line 541 "cplus.met"
                                        lexEl.Value=INTEGER;
#line 541 "cplus.met"
                                        PUT_COORD_CALL;
#line 541 "cplus.met"
                                        return(1);
#line 541 "cplus.met"
                                    }
#line 541 "cplus.met"
                                }
#line 541 "cplus.met"
                                break ;
#line 541 "cplus.met"
                        }
#line 541 "cplus.met"
#line 541 "cplus.met"
                    }
#line 541 "cplus.met"
                    break ;
#line 541 "cplus.met"
            }
#line 541 "cplus.met"
#line 541 "cplus.met"
            break ;
#line 541 "cplus.met"
#line 546 "cplus.met"
        case '#' :
#line 546 "cplus.met"
            NextChar();
#line 546 "cplus.met"
#line 547 "cplus.met"
#line 548 "cplus.met"
            while (((c == ' ')||(c == '\t'))) { 
#line 548 "cplus.met"
#line 549 "cplus.met"
                if (!(c != EOF&& NextChar())) ;
#line 549 "cplus.met"
            } 
#line 549 "cplus.met"
#line 550 "cplus.met"
#line 551 "cplus.met"
            if((GetString("include",1)&& NextChar())){
#line 551 "cplus.met"
#line 551 "cplus.met"
                {
#line 551 "cplus.met"
                    firstOnLine = 0 ; 
#line 551 "cplus.met"
                    tokenAhead =1;
#line 551 "cplus.met"
                    lexEl.Value=INCLUDE_DIR;
#line 551 "cplus.met"
                    PUT_COORD_CALL;
#line 551 "cplus.met"
                    return(1);
#line 551 "cplus.met"
                }
#line 551 "cplus.met"
            } else 
#line 551 "cplus.met"
#line 552 "cplus.met"
            if((GetString("ifdef",1)&& NextChar())){
#line 552 "cplus.met"
#line 552 "cplus.met"
                {
#line 552 "cplus.met"
                    firstOnLine = 0 ; 
#line 552 "cplus.met"
                    tokenAhead =1;
#line 552 "cplus.met"
                    lexEl.Value=IFDEF_DIR;
#line 552 "cplus.met"
                    PUT_COORD_CALL;
#line 552 "cplus.met"
                    return(1);
#line 552 "cplus.met"
                }
#line 552 "cplus.met"
            } else 
#line 552 "cplus.met"
#line 553 "cplus.met"
            if((GetString("ifndef",1)&& NextChar())){
#line 553 "cplus.met"
#line 553 "cplus.met"
                {
#line 553 "cplus.met"
                    firstOnLine = 0 ; 
#line 553 "cplus.met"
                    tokenAhead =1;
#line 553 "cplus.met"
                    lexEl.Value=IFNDEF_DIR;
#line 553 "cplus.met"
                    PUT_COORD_CALL;
#line 553 "cplus.met"
                    return(1);
#line 553 "cplus.met"
                }
#line 553 "cplus.met"
            } else 
#line 553 "cplus.met"
#line 554 "cplus.met"
            if((GetString("if",1)&& NextChar())){
#line 554 "cplus.met"
#line 554 "cplus.met"
                {
#line 554 "cplus.met"
                    firstOnLine = 0 ; 
#line 554 "cplus.met"
                    tokenAhead =1;
#line 554 "cplus.met"
                    lexEl.Value=IF_DIR;
#line 554 "cplus.met"
                    PUT_COORD_CALL;
#line 554 "cplus.met"
                    return(1);
#line 554 "cplus.met"
                }
#line 554 "cplus.met"
            } else 
#line 554 "cplus.met"
#line 555 "cplus.met"
            if((GetString("else",1)&& NextChar())){
#line 555 "cplus.met"
#line 555 "cplus.met"
                {
#line 555 "cplus.met"
                    firstOnLine = 0 ; 
#line 555 "cplus.met"
                    tokenAhead =1;
#line 555 "cplus.met"
                    lexEl.Value=ELSE_DIR;
#line 555 "cplus.met"
                    PUT_COORD_CALL;
#line 555 "cplus.met"
                    return(1);
#line 555 "cplus.met"
                }
#line 555 "cplus.met"
            } else 
#line 555 "cplus.met"
#line 556 "cplus.met"
            if((GetString("elif",1)&& NextChar())){
#line 556 "cplus.met"
#line 556 "cplus.met"
                {
#line 556 "cplus.met"
                    firstOnLine = 0 ; 
#line 556 "cplus.met"
                    tokenAhead =1;
#line 556 "cplus.met"
                    lexEl.Value=ELIF_DIR;
#line 556 "cplus.met"
                    PUT_COORD_CALL;
#line 556 "cplus.met"
                    return(1);
#line 556 "cplus.met"
                }
#line 556 "cplus.met"
            } else 
#line 556 "cplus.met"
#line 557 "cplus.met"
            if((GetString("endif",1)&& NextChar())){
#line 557 "cplus.met"
#line 557 "cplus.met"
                {
#line 557 "cplus.met"
                    firstOnLine = 0 ; 
#line 557 "cplus.met"
                    tokenAhead =1;
#line 557 "cplus.met"
                    lexEl.Value=ENDIF_DIR;
#line 557 "cplus.met"
                    PUT_COORD_CALL;
#line 557 "cplus.met"
                    return(1);
#line 557 "cplus.met"
                }
#line 557 "cplus.met"
            } else 
#line 557 "cplus.met"
#line 558 "cplus.met"
            if((GetString("line",1)&& NextChar())){
#line 558 "cplus.met"
#line 558 "cplus.met"
                {
#line 558 "cplus.met"
                    firstOnLine = 0 ; 
#line 558 "cplus.met"
                    tokenAhead =1;
#line 558 "cplus.met"
                    lexEl.Value=LINE_DIR;
#line 558 "cplus.met"
                    PUT_COORD_CALL;
#line 558 "cplus.met"
                    return(1);
#line 558 "cplus.met"
                }
#line 558 "cplus.met"
            } else 
#line 558 "cplus.met"
#line 559 "cplus.met"
            if((GetString("pragma",1)&& NextChar())){
#line 559 "cplus.met"
#line 559 "cplus.met"
                {
#line 559 "cplus.met"
                    firstOnLine = 0 ; 
#line 559 "cplus.met"
                    tokenAhead =1;
#line 559 "cplus.met"
                    lexEl.Value=PRAGMA_DIR;
#line 559 "cplus.met"
                    PUT_COORD_CALL;
#line 559 "cplus.met"
                    return(1);
#line 559 "cplus.met"
                }
#line 559 "cplus.met"
            } else 
#line 559 "cplus.met"
#line 560 "cplus.met"
            if((GetString("error",1)&& NextChar())){
#line 560 "cplus.met"
#line 560 "cplus.met"
                {
#line 560 "cplus.met"
                    firstOnLine = 0 ; 
#line 560 "cplus.met"
                    tokenAhead =1;
#line 560 "cplus.met"
                    lexEl.Value=ERROR_DIR;
#line 560 "cplus.met"
                    PUT_COORD_CALL;
#line 560 "cplus.met"
                    return(1);
#line 560 "cplus.met"
                }
#line 560 "cplus.met"
            } else 
#line 560 "cplus.met"
#line 561 "cplus.met"
            if((GetString("define",1)&& NextChar())){
#line 561 "cplus.met"
#line 561 "cplus.met"
                {
#line 561 "cplus.met"
                    firstOnLine = 0 ; 
#line 561 "cplus.met"
                    tokenAhead =1;
#line 561 "cplus.met"
                    lexEl.Value=DEFINE_DIR;
#line 561 "cplus.met"
                    PUT_COORD_CALL;
#line 561 "cplus.met"
                    return(1);
#line 561 "cplus.met"
                }
#line 561 "cplus.met"
            } else 
#line 561 "cplus.met"
#line 562 "cplus.met"
            if((GetString("undef",1)&& NextChar())){
#line 562 "cplus.met"
#line 562 "cplus.met"
                {
#line 562 "cplus.met"
                    firstOnLine = 0 ; 
#line 562 "cplus.met"
                    tokenAhead =1;
#line 562 "cplus.met"
                    lexEl.Value=UNDEF_DIR;
#line 562 "cplus.met"
                    PUT_COORD_CALL;
#line 562 "cplus.met"
                    return(1);
#line 562 "cplus.met"
                }
#line 562 "cplus.met"
            } else 
#line 562 "cplus.met"
             ;
#line 562 "cplus.met"
#line 562 "cplus.met"
            break ;
#line 562 "cplus.met"
#line 565 "cplus.met"
        case '\r' :
#line 565 "cplus.met"
        case '\n' :
#line 565 "cplus.met"
            NextChar();
#line 565 "cplus.met"
#line 565 "cplus.met"
            {
#line 565 "cplus.met"
                firstOnLine = 0 ; 
#line 565 "cplus.met"
                tokenAhead =1;
#line 565 "cplus.met"
                lexEl.Value=CARRIAGE_RETURN;
#line 565 "cplus.met"
                firstOnLine = 1 ; 
#line 565 "cplus.met"
                PUT_COORD_CALL;
#line 565 "cplus.met"
                return(1);
#line 565 "cplus.met"
            }
#line 565 "cplus.met"
            break ;
#line 565 "cplus.met"
#line 566 "cplus.met"
        case '/' :
#line 566 "cplus.met"
            NextChar();
#line 566 "cplus.met"
#line 567 "cplus.met"
#line 568 "cplus.met"
            if (((c == '='))){
#line 568 "cplus.met"
#line 569 "cplus.met"
#line 570 "cplus.met"
                if (!(c != EOF&& NextChar())) ;
#line 570 "cplus.met"
#line 571 "cplus.met"
                {
#line 571 "cplus.met"
                    firstOnLine = 0 ; 
#line 571 "cplus.met"
                    tokenAhead =1;
#line 571 "cplus.met"
                    lexEl.Value=SLASEGAL;
#line 571 "cplus.met"
                    PUT_COORD_CALL;
#line 571 "cplus.met"
                    return(1);
#line 571 "cplus.met"
                }
#line 571 "cplus.met"
#line 571 "cplus.met"
#line 571 "cplus.met"
            } else {
#line 571 "cplus.met"
#line 574 "cplus.met"
                {
#line 574 "cplus.met"
                    firstOnLine = 0 ; 
#line 574 "cplus.met"
                    tokenAhead =1;
#line 574 "cplus.met"
                    lexEl.Value=SLAS;
#line 574 "cplus.met"
                    PUT_COORD_CALL;
#line 574 "cplus.met"
                    return(1);
#line 574 "cplus.met"
                }
#line 574 "cplus.met"
            }
#line 574 "cplus.met"
#line 574 "cplus.met"
            break ;
#line 574 "cplus.met"
#line 576 "cplus.met"
        case '.' :
#line 576 "cplus.met"
#line 577 "cplus.met"
#line 578 "cplus.met"
            {
#line 578 "cplus.met"
                lexEl . AddChar(c);
#line 578 "cplus.met"
                NextChar();
#line 578 "cplus.met"
            }
#line 578 "cplus.met"
#line 579 "cplus.met"
            if ((('0' <= c && c <= '9'))){
#line 579 "cplus.met"
#line 580 "cplus.met"
#line 581 "cplus.met"
                while ((('0' <= c && c <= '9'))) { 
#line 581 "cplus.met"
#line 582 "cplus.met"
                    {
#line 582 "cplus.met"
                        lexEl . AddChar(c);
#line 582 "cplus.met"
                        NextChar();
#line 582 "cplus.met"
                    }
#line 582 "cplus.met"
                } 
#line 582 "cplus.met"
#line 583 "cplus.met"
                if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 583 "cplus.met"
#line 584 "cplus.met"
#line 585 "cplus.met"
                    {
#line 585 "cplus.met"
                        lexEl.AddString("e");
#line 585 "cplus.met"
                    }
#line 585 "cplus.met"
#line 586 "cplus.met"
                    if (((c == '+')||(c == '-'))){
#line 586 "cplus.met"
#line 587 "cplus.met"
                        {
#line 587 "cplus.met"
                            lexEl . AddChar(c);
#line 587 "cplus.met"
                            NextChar();
#line 587 "cplus.met"
                        }
#line 587 "cplus.met"
                    }
#line 587 "cplus.met"
#line 588 "cplus.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 588 "cplus.met"
#line 589 "cplus.met"
                        {
#line 589 "cplus.met"
                            lexEl . AddChar(c);
#line 589 "cplus.met"
                            NextChar();
#line 589 "cplus.met"
                        }
#line 589 "cplus.met"
                    } 
#line 589 "cplus.met"
#line 589 "cplus.met"
#line 589 "cplus.met"
                }
#line 589 "cplus.met"
#line 591 "cplus.met"
                switch (c) {
#line 591 "cplus.met"
#line 592 "cplus.met"
                    case 'f' :
#line 592 "cplus.met"
#line 592 "cplus.met"
                        {
#line 592 "cplus.met"
                            lexEl . AddChar(c);
#line 592 "cplus.met"
                            NextChar();
#line 592 "cplus.met"
                        }
#line 592 "cplus.met"
                        break ;
#line 592 "cplus.met"
#line 593 "cplus.met"
                    case 'F' :
#line 593 "cplus.met"
#line 593 "cplus.met"
                        {
#line 593 "cplus.met"
                            lexEl . AddChar(c);
#line 593 "cplus.met"
                            NextChar();
#line 593 "cplus.met"
                        }
#line 593 "cplus.met"
                        break ;
#line 593 "cplus.met"
#line 594 "cplus.met"
                    case 'l' :
#line 594 "cplus.met"
#line 594 "cplus.met"
                        {
#line 594 "cplus.met"
                            lexEl . AddChar(c);
#line 594 "cplus.met"
                            NextChar();
#line 594 "cplus.met"
                        }
#line 594 "cplus.met"
                        break ;
#line 594 "cplus.met"
#line 595 "cplus.met"
                    case 'L' :
#line 595 "cplus.met"
#line 595 "cplus.met"
                        {
#line 595 "cplus.met"
                            lexEl . AddChar(c);
#line 595 "cplus.met"
                            NextChar();
#line 595 "cplus.met"
                        }
#line 595 "cplus.met"
                        break ;
#line 595 "cplus.met"
                }
#line 595 "cplus.met"
#line 597 "cplus.met"
                {
#line 597 "cplus.met"
                    firstOnLine = 0 ; 
#line 597 "cplus.met"
                    tokenAhead =1;
#line 597 "cplus.met"
                    lexEl.Value=FLOATVAL;
#line 597 "cplus.met"
                    PUT_COORD_CALL;
#line 597 "cplus.met"
                    return(1);
#line 597 "cplus.met"
                }
#line 597 "cplus.met"
#line 597 "cplus.met"
#line 597 "cplus.met"
            } else {
#line 597 "cplus.met"
#line 600 "cplus.met"
#line 601 "cplus.met"
                {
#line 601 "cplus.met"
                    firstOnLine = 0 ; 
#line 601 "cplus.met"
                    tokenAhead =1;
#line 601 "cplus.met"
                    lexEl.Value=POINT;
#line 601 "cplus.met"
                    PUT_COORD_CALL;
#line 601 "cplus.met"
                    return(1);
#line 601 "cplus.met"
                }
#line 601 "cplus.met"
#line 601 "cplus.met"
            }
#line 601 "cplus.met"
#line 601 "cplus.met"
            break ;
#line 601 "cplus.met"
    }
#line 601 "cplus.met"
#line 601 "cplus.met"
#line 604 "cplus.met"
    line = oldLine;
#line 604 "cplus.met"
    LEX_EXIT(0,"")
#line 604 "cplus.met"
    lexEl.Value = -1 ;
#line 604 "cplus.met"
    return -1 ; 
#line 604 "cplus.met"
}
#line 604 "cplus.met"

#line 604 "cplus.met"
#line 162 "cplus.met"
int cplus::LexComment ()
#line 162 "cplus.met"
{
#line 162 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 162 "cplus.met"
        FreePos(lastContextPos);
#line 162 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 162 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 162 "cplus.met"
        ExtUnputBuf();
#line 162 "cplus.met"
    #ifdef DUMP_COORD
#line 162 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 162 "cplus.met"
    #endif
#line 162 "cplus.met"
    
#line 162 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 162 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 162 "cplus.met"
#line 165 "cplus.met"
    if ((! (keepCarriage)) && 
#line 165 "cplus.met"
       (! (keepAll))){
#line 165 "cplus.met"
#line 166 "cplus.met"
#line 167 "cplus.met"
        ptStockBuf = -1;
#line 167 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 167 "cplus.met"
            NextChar() ;
#line 167 "cplus.met"
        ptStockBuf = -1;
#line 167 "cplus.met"
        lexEl.Erase();
#line 167 "cplus.met"
        tokenAhead = 0;
#line 167 "cplus.met"
        oldLine=line,oldCol=col;
#line 167 "cplus.met"
        if ( !lexCallLex) {
#line 167 "cplus.met"
            PUT_COORD_CALL;
#line 167 "cplus.met"
        }
#line 167 "cplus.met"
#line 167 "cplus.met"
#line 167 "cplus.met"
    } else {
#line 167 "cplus.met"
#line 170 "cplus.met"
        if (! (keepAll)){
#line 170 "cplus.met"
#line 171 "cplus.met"
#line 172 "cplus.met"
            ptStockBuf = -1;
#line 172 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 172 "cplus.met"
                NextChar() ;
#line 172 "cplus.met"
            ptStockBuf = -1;
#line 172 "cplus.met"
            lexEl.Erase();
#line 172 "cplus.met"
            tokenAhead = 0;
#line 172 "cplus.met"
            oldLine=line,oldCol=col;
#line 172 "cplus.met"
            if ( !lexCallLex) {
#line 172 "cplus.met"
                PUT_COORD_CALL;
#line 172 "cplus.met"
            }
#line 172 "cplus.met"
#line 172 "cplus.met"
#line 172 "cplus.met"
        } else {
#line 172 "cplus.met"
#line 175 "cplus.met"
            ptStockBuf = -1;
#line 175 "cplus.met"
            lexEl.Erase();
#line 175 "cplus.met"
            tokenAhead = 0;
#line 175 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 175 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 175 "cplus.met"
        }
#line 175 "cplus.met"
    }
#line 175 "cplus.met"
#line 176 "cplus.met"
    switch (c) {
#line 176 "cplus.met"
#line 177 "cplus.met"
        case '/' :
#line 177 "cplus.met"
            NextChar();
#line 177 "cplus.met"
#line 179 "cplus.met"
            switch (c) {
#line 179 "cplus.met"
#line 181 "cplus.met"
                case '/' :
#line 181 "cplus.met"
#line 182 "cplus.met"
#line 183 "cplus.met"
                    begin_comment ();
#line 183 "cplus.met"
#line 184 "cplus.met"
                    {
#line 184 "cplus.met"
                        lexEl . AddChar(c);
#line 184 "cplus.met"
                        NextChar();
#line 184 "cplus.met"
                    }
#line 184 "cplus.met"
#line 185 "cplus.met"
                    while (c != EOF) { 
#line 185 "cplus.met"
#line 186 "cplus.met"
                        switch (c) {
#line 186 "cplus.met"
#line 187 "cplus.met"
                            case '\r' :
#line 187 "cplus.met"
                            case '\n' :
#line 187 "cplus.met"
#line 188 "cplus.met"
#line 189 "cplus.met"
                                {
#line 189 "cplus.met"
                                    store_comment_line(lexEl.length());
#line 189 "cplus.met"
                                    lexEl.Erase();
#line 189 "cplus.met"
                                    ptStockBuf = -1 ;
#line 189 "cplus.met"
                                }
#line 189 "cplus.met"
#line 190 "cplus.met"
                                {
#line 190 "cplus.met"
                                    firstOnLine = 0 ; 
#line 190 "cplus.met"
                                    tokenAhead =2;
#line 190 "cplus.met"
                                     tokenAhead = 0 ; 
#line 190 "cplus.met"
                                     lexCallLex = 1 ; 
#line 190 "cplus.met"
                                    return _Tak(LexComment)();
#line 190 "cplus.met"
                                }
#line 190 "cplus.met"
#line 190 "cplus.met"
                                break ;
#line 190 "cplus.met"
#line 194 "cplus.met"
                            default : 
#line 194 "cplus.met"
                                 if (c!= EOF) {
#line 194 "cplus.met"
#line 193 "cplus.met"
#line 194 "cplus.met"
                                    {
#line 194 "cplus.met"
                                        lexEl . AddChar(c);
#line 194 "cplus.met"
                                        NextChar();
#line 194 "cplus.met"
                                    }
#line 194 "cplus.met"
#line 194 "cplus.met"
                                }
#line 194 "cplus.met"
                                break ;
#line 194 "cplus.met"
                        }
#line 194 "cplus.met"
                    } 
#line 194 "cplus.met"
#line 197 "cplus.met"
                    {
#line 197 "cplus.met"
                        store_comment_line(lexEl.length());
#line 197 "cplus.met"
                        lexEl.Erase();
#line 197 "cplus.met"
                        ptStockBuf = -1 ;
#line 197 "cplus.met"
                    }
#line 197 "cplus.met"
#line 197 "cplus.met"
                    break ;
#line 197 "cplus.met"
#line 199 "cplus.met"
                case '*' :
#line 199 "cplus.met"
                    NextChar();
#line 199 "cplus.met"
#line 200 "cplus.met"
#line 201 "cplus.met"
                     {int level = 0; int nbCaract = 0 ;
#line 201 "cplus.met"
#line 202 "cplus.met"
                    begin_comment ();
#line 202 "cplus.met"
#line 203 "cplus.met"
                    while (c != EOF) { 
#line 203 "cplus.met"
#line 204 "cplus.met"
#line 205 "cplus.met"
                        if((GetString("/*",1)&& NextChar())){
#line 205 "cplus.met"
#line 206 "cplus.met"
#line 207 "cplus.met"
                             level ++; 
#line 207 "cplus.met"
#line 208 "cplus.met"
                            {
#line 208 "cplus.met"
                                lexEl.AddString("/*");
#line 208 "cplus.met"
                            }
#line 208 "cplus.met"
#line 208 "cplus.met"
                        } else 
#line 208 "cplus.met"
#line 210 "cplus.met"
                        if((GetString("*/",1)&& NextChar())){
#line 210 "cplus.met"
#line 211 "cplus.met"
#line 212 "cplus.met"
                            if (!level ){
#line 212 "cplus.met"
#line 213 "cplus.met"
#line 214 "cplus.met"
                                {
#line 214 "cplus.met"
                                    store_comment_line(lexEl.length());
#line 214 "cplus.met"
                                    lexEl.Erase();
#line 214 "cplus.met"
                                    ptStockBuf = -1 ;
#line 214 "cplus.met"
                                }
#line 214 "cplus.met"
#line 215 "cplus.met"
                                {
#line 215 "cplus.met"
                                    firstOnLine = 0 ; 
#line 215 "cplus.met"
                                    tokenAhead =2;
#line 215 "cplus.met"
                                     tokenAhead = 0 ; 
#line 215 "cplus.met"
                                     lexCallLex = 1 ; 
#line 215 "cplus.met"
                                    return _Tak(LexComment)();
#line 215 "cplus.met"
                                }
#line 215 "cplus.met"
#line 215 "cplus.met"
#line 215 "cplus.met"
                            } else {
#line 215 "cplus.met"
#line 218 "cplus.met"
#line 219 "cplus.met"
                                 level --;
#line 219 "cplus.met"
#line 220 "cplus.met"
                                {
#line 220 "cplus.met"
                                    lexEl.AddString("*/");
#line 220 "cplus.met"
                                }
#line 220 "cplus.met"
#line 220 "cplus.met"
                            }
#line 220 "cplus.met"
#line 220 "cplus.met"
                        } else 
#line 220 "cplus.met"
#line 223 "cplus.met"
                        if((((c == '\n'))&& NextChar())){
#line 223 "cplus.met"
#line 224 "cplus.met"
#line 225 "cplus.met"
                            {
#line 225 "cplus.met"
                                store_comment_line(lexEl.length());
#line 225 "cplus.met"
                                lexEl.Erase();
#line 225 "cplus.met"
                                ptStockBuf = -1 ;
#line 225 "cplus.met"
                            }
#line 225 "cplus.met"
#line 226 "cplus.met"
                             nbCaract = 0 ;
#line 226 "cplus.met"
#line 226 "cplus.met"
                        } else 
#line 226 "cplus.met"
#line 228 "cplus.met"
                        if((((c == '\r'))&& NextChar())){
#line 228 "cplus.met"
#line 228 "cplus.met"
                        } else 
#line 228 "cplus.met"
#line 231 "cplus.met"
                        if((c != EOF)){
#line 231 "cplus.met"
#line 230 "cplus.met"
#line 231 "cplus.met"
                            if ( nbCaract++ > 254 ){
#line 231 "cplus.met"
#line 232 "cplus.met"
#line 233 "cplus.met"
                                {
#line 233 "cplus.met"
                                    store_comment_line(lexEl.length());
#line 233 "cplus.met"
                                    lexEl.Erase();
#line 233 "cplus.met"
                                    ptStockBuf = -1 ;
#line 233 "cplus.met"
                                }
#line 233 "cplus.met"
#line 234 "cplus.met"
                                begin_comment ();
#line 234 "cplus.met"
#line 235 "cplus.met"
                                 nbCaract = 0 ;
#line 235 "cplus.met"
#line 235 "cplus.met"
#line 235 "cplus.met"
                            }
#line 235 "cplus.met"
#line 237 "cplus.met"
                            {
#line 237 "cplus.met"
                                lexEl . AddChar(c);
#line 237 "cplus.met"
                                NextChar();
#line 237 "cplus.met"
                            }
#line 237 "cplus.met"
#line 237 "cplus.met"
                        } else 
#line 237 "cplus.met"
                         ;
#line 237 "cplus.met"
                    } 
#line 237 "cplus.met"
#line 240 "cplus.met"
                    {
#line 240 "cplus.met"
                        store_comment_line(lexEl.length());
#line 240 "cplus.met"
                        lexEl.Erase();
#line 240 "cplus.met"
                        ptStockBuf = -1 ;
#line 240 "cplus.met"
                    }
#line 240 "cplus.met"
#line 241 "cplus.met"
                    } 
#line 241 "cplus.met"
#line 241 "cplus.met"
                    break ;
#line 241 "cplus.met"
#line 245 "cplus.met"
                default : 
#line 245 "cplus.met"
                     if (c!= EOF) {
#line 245 "cplus.met"
#line 244 "cplus.met"
#line 245 "cplus.met"
                        if(ptStockBuf > -1) UnputBuf ();
#line 245 "cplus.met"
                        lexEl.Erase();
#line 245 "cplus.met"
                        tokenAhead = 0;
#line 245 "cplus.met"
                        if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 245 "cplus.met"
                        lastContextPos = (PFILE_POSITION) 0 ;
#line 245 "cplus.met"
#line 245 "cplus.met"
                    }
#line 245 "cplus.met"
                    break ;
#line 245 "cplus.met"
            }
#line 245 "cplus.met"
            break ;
#line 245 "cplus.met"
    }
#line 245 "cplus.met"
#line 245 "cplus.met"
#line 248 "cplus.met"
    if ( lexCallLex) {PUT_COORD_AFTER_COMMENTS_CALL;
#line 248 "cplus.met"
    }line = oldLine;
#line 248 "cplus.met"
    LEX_EXIT(0,"")
#line 248 "cplus.met"
    lexEl.Value = -1 ;
#line 248 "cplus.met"
    return -1 ; 
#line 248 "cplus.met"
}
#line 248 "cplus.met"

#line 248 "cplus.met"
#line 687 "cplus.met"
int cplus::LexDefine ()
#line 687 "cplus.met"
{
#line 687 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 687 "cplus.met"
        FreePos(lastContextPos);
#line 687 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 687 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 687 "cplus.met"
        ExtUnputBuf();
#line 687 "cplus.met"
    #ifdef DUMP_COORD
#line 687 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 687 "cplus.met"
    #endif
#line 687 "cplus.met"
    
#line 687 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 687 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 687 "cplus.met"
    tokenAhead = 0;
#line 687 "cplus.met"
    if(LexMeta() != -1){tokenAhead =3; return 1;}
#line 687 "cplus.met"
#line 688 "cplus.met"
    ptStockBuf = -1;
#line 688 "cplus.met"
    lexEl.Erase();
#line 688 "cplus.met"
    tokenAhead = 0;
#line 688 "cplus.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 688 "cplus.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 688 "cplus.met"
#line 689 "cplus.met"
    if (c != EOF){
#line 689 "cplus.met"
#line 690 "cplus.met"
#line 691 "cplus.met"
        while (c != EOF) { 
#line 691 "cplus.met"
#line 692 "cplus.met"
#line 693 "cplus.met"
            while ((c != EOF) && 
#line 693 "cplus.met"
                  (! (((c == '\n')||(c == '\r')||(c == '\\'))))) { 
#line 693 "cplus.met"
#line 694 "cplus.met"
#line 695 "cplus.met"
                if((GetString("/*",1)&& NextChar())){
#line 695 "cplus.met"
#line 696 "cplus.met"
#line 697 "cplus.met"
                     nbOpenComment+= 1;
#line 697 "cplus.met"
#line 698 "cplus.met"
                    {
#line 698 "cplus.met"
                        lexEl.AddString("/*");
#line 698 "cplus.met"
                    }
#line 698 "cplus.met"
#line 698 "cplus.met"
                } else 
#line 698 "cplus.met"
#line 700 "cplus.met"
                if((GetString("*/",1)&& NextChar())){
#line 700 "cplus.met"
#line 701 "cplus.met"
#line 702 "cplus.met"
                     if (nbOpenComment > 0) nbOpenComment-= 1;
#line 702 "cplus.met"
#line 703 "cplus.met"
                    {
#line 703 "cplus.met"
                        lexEl.AddString("*/");
#line 703 "cplus.met"
                    }
#line 703 "cplus.met"
#line 703 "cplus.met"
                } else 
#line 703 "cplus.met"
#line 705 "cplus.met"
                if((c != EOF)){
#line 705 "cplus.met"
#line 705 "cplus.met"
                    {
#line 705 "cplus.met"
                        lexEl . AddChar(c);
#line 705 "cplus.met"
                        NextChar();
#line 705 "cplus.met"
                    }
#line 705 "cplus.met"
                } else 
#line 705 "cplus.met"
                 ;
#line 705 "cplus.met"
            } 
#line 705 "cplus.met"
#line 707 "cplus.met"
            if ((((c == '\\'))) || 
#line 707 "cplus.met"
               nbOpenComment ){
#line 707 "cplus.met"
#line 708 "cplus.met"
#line 709 "cplus.met"
                if (((c == '\\'))){
#line 709 "cplus.met"
#line 710 "cplus.met"
#line 711 "cplus.met"
                    {
#line 711 "cplus.met"
                        lexEl . AddChar(c);
#line 711 "cplus.met"
                        NextChar();
#line 711 "cplus.met"
                    }
#line 711 "cplus.met"
#line 711 "cplus.met"
#line 711 "cplus.met"
                }
#line 711 "cplus.met"
#line 713 "cplus.met"
                if (((c == '\n')||(c == '\r'))){
#line 713 "cplus.met"
#line 714 "cplus.met"
#line 715 "cplus.met"
                    while (((c == '\n')||(c == '\r'))) { 
#line 715 "cplus.met"
#line 716 "cplus.met"
                        if (!(c != EOF&& NextChar())) ;
#line 716 "cplus.met"
                    } 
#line 716 "cplus.met"
#line 717 "cplus.met"
                    {
#line 717 "cplus.met"
                        firstOnLine = 0 ; 
#line 717 "cplus.met"
                        tokenAhead =3;
#line 717 "cplus.met"
                        lexEl.Value=DEFINED_CONTINUED;
#line 717 "cplus.met"
                        PUT_COORD_CALL;
#line 717 "cplus.met"
                        return(1);
#line 717 "cplus.met"
                    }
#line 717 "cplus.met"
#line 717 "cplus.met"
#line 717 "cplus.met"
                }
#line 717 "cplus.met"
#line 717 "cplus.met"
#line 718 "cplus.met"
            } else {
#line 718 "cplus.met"
#line 721 "cplus.met"
#line 724 "cplus.met"
                {
#line 724 "cplus.met"
                    firstOnLine = 0 ; 
#line 724 "cplus.met"
                    tokenAhead =3;
#line 724 "cplus.met"
                    lexEl.Value=DEFINED_NOT_CONTINUED;
#line 724 "cplus.met"
                    PUT_COORD_CALL;
#line 724 "cplus.met"
                    return(1);
#line 724 "cplus.met"
                }
#line 724 "cplus.met"
#line 724 "cplus.met"
            }
#line 724 "cplus.met"
#line 724 "cplus.met"
        } 
#line 724 "cplus.met"
#line 724 "cplus.met"
#line 727 "cplus.met"
    }
#line 727 "cplus.met"
#line 727 "cplus.met"
#line 728 "cplus.met"
    line = oldLine;
#line 728 "cplus.met"
    LEX_EXIT(0,"")
#line 728 "cplus.met"
    lexEl.Value = -1 ;
#line 728 "cplus.met"
    return -1 ; 
#line 728 "cplus.met"
}
#line 728 "cplus.met"

#line 728 "cplus.met"
#line 628 "cplus.met"
int cplus::LexDefineName ()
#line 628 "cplus.met"
{
#line 628 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 628 "cplus.met"
        FreePos(lastContextPos);
#line 628 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 628 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 628 "cplus.met"
        ExtUnputBuf();
#line 628 "cplus.met"
    #ifdef DUMP_COORD
#line 628 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 628 "cplus.met"
    #endif
#line 628 "cplus.met"
    
#line 628 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 628 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 628 "cplus.met"
    tokenAhead = 0;
#line 628 "cplus.met"
    if(LexMeta() != -1){tokenAhead =4; return 1;}
#line 628 "cplus.met"
#line 628 "cplus.met"
    ptStockBuf = -1;
#line 628 "cplus.met"
    while ((c == ' ')||(c == '\t')||(c == ''))
#line 628 "cplus.met"
        NextChar() ;
#line 628 "cplus.met"
    ptStockBuf = -1;
#line 628 "cplus.met"
    lexEl.Erase();
#line 628 "cplus.met"
    tokenAhead = 0;
#line 628 "cplus.met"
    oldLine=line,oldCol=col;
#line 628 "cplus.met"
    if ( !lexCallLex) {
#line 628 "cplus.met"
        PUT_COORD_CALL;
#line 628 "cplus.met"
    }
#line 628 "cplus.met"
#line 630 "cplus.met"
    while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 630 "cplus.met"
#line 631 "cplus.met"
        {
#line 631 "cplus.met"
            lexEl . AddChar(c);
#line 631 "cplus.met"
            NextChar();
#line 631 "cplus.met"
        }
#line 631 "cplus.met"
    } 
#line 631 "cplus.met"
#line 632 "cplus.met"
    {
#line 632 "cplus.met"
        firstOnLine = 0 ; 
#line 632 "cplus.met"
        tokenAhead =4;
#line 632 "cplus.met"
        lexEl.Value=DEFINE_NAME;
#line 632 "cplus.met"
        PUT_COORD_CALL;
#line 632 "cplus.met"
        return(1);
#line 632 "cplus.met"
    }
#line 632 "cplus.met"
#line 632 "cplus.met"
#line 632 "cplus.met"
    
#line 633 "cplus.met"
    line = oldLine;
#line 633 "cplus.met"
    LEX_EXIT(0,"")
#line 633 "cplus.met"
    lexEl.Value = -1 ;
#line 633 "cplus.met"
    return -1 ; 
#line 633 "cplus.met"
}
#line 633 "cplus.met"

#line 633 "cplus.met"
#line 607 "cplus.met"
int cplus::LexEndLine ()
#line 607 "cplus.met"
{
#line 607 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 607 "cplus.met"
        FreePos(lastContextPos);
#line 607 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 607 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 607 "cplus.met"
        ExtUnputBuf();
#line 607 "cplus.met"
    #ifdef DUMP_COORD
#line 607 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 607 "cplus.met"
    #endif
#line 607 "cplus.met"
    
#line 607 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 607 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 607 "cplus.met"
    tokenAhead = 0;
#line 607 "cplus.met"
    if(LexMeta() != -1){tokenAhead =5; return 1;}
#line 607 "cplus.met"
#line 608 "cplus.met"
    ptStockBuf = -1;
#line 608 "cplus.met"
    lexEl.Erase();
#line 608 "cplus.met"
    tokenAhead = 0;
#line 608 "cplus.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 608 "cplus.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 608 "cplus.met"
#line 609 "cplus.met"
    if (c != EOF){
#line 609 "cplus.met"
#line 610 "cplus.met"
#line 611 "cplus.met"
        while ((c != EOF) && 
#line 611 "cplus.met"
              (! (((c == '\n')||(c == '\r'))))) { 
#line 611 "cplus.met"
#line 612 "cplus.met"
            {
#line 612 "cplus.met"
                lexEl . AddChar(c);
#line 612 "cplus.met"
                NextChar();
#line 612 "cplus.met"
            }
#line 612 "cplus.met"
        } 
#line 612 "cplus.met"
#line 613 "cplus.met"
        while (((c == '\n')||(c == '\r'))) { 
#line 613 "cplus.met"
#line 614 "cplus.met"
            if (!(c != EOF&& NextChar())) ;
#line 614 "cplus.met"
        } 
#line 614 "cplus.met"
#line 615 "cplus.met"
        {
#line 615 "cplus.met"
            firstOnLine = 0 ; 
#line 615 "cplus.met"
            tokenAhead =5;
#line 615 "cplus.met"
            lexEl.Value=END_LINE;
#line 615 "cplus.met"
            PUT_COORD_CALL;
#line 615 "cplus.met"
            return(1);
#line 615 "cplus.met"
        }
#line 615 "cplus.met"
#line 615 "cplus.met"
#line 615 "cplus.met"
    }
#line 615 "cplus.met"
#line 615 "cplus.met"
#line 616 "cplus.met"
    line = oldLine;
#line 616 "cplus.met"
    LEX_EXIT(0,"")
#line 616 "cplus.met"
    lexEl.Value = -1 ;
#line 616 "cplus.met"
    return -1 ; 
#line 616 "cplus.met"
}
#line 616 "cplus.met"

#line 616 "cplus.met"
#line 731 "cplus.met"
int cplus::LexInclude ()
#line 731 "cplus.met"
{
#line 731 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 731 "cplus.met"
        FreePos(lastContextPos);
#line 731 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 731 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 731 "cplus.met"
        ExtUnputBuf();
#line 731 "cplus.met"
    #ifdef DUMP_COORD
#line 731 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 731 "cplus.met"
    #endif
#line 731 "cplus.met"
    
#line 731 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 731 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 731 "cplus.met"
    tokenAhead = 0;
#line 731 "cplus.met"
    if(LexMeta() != -1){tokenAhead =6; return 1;}
#line 731 "cplus.met"
#line 731 "cplus.met"
    ptStockBuf = -1;
#line 731 "cplus.met"
    while ((c == ' ')||(c == '\t'))
#line 731 "cplus.met"
        NextChar() ;
#line 731 "cplus.met"
    ptStockBuf = -1;
#line 731 "cplus.met"
    lexEl.Erase();
#line 731 "cplus.met"
    tokenAhead = 0;
#line 731 "cplus.met"
    oldLine=line,oldCol=col;
#line 731 "cplus.met"
    if ( !lexCallLex) {
#line 731 "cplus.met"
        PUT_COORD_CALL;
#line 731 "cplus.met"
    }
#line 731 "cplus.met"
#line 733 "cplus.met"
    switch (c) {
#line 733 "cplus.met"
#line 734 "cplus.met"
        case '<' :
#line 734 "cplus.met"
            NextChar();
#line 734 "cplus.met"
#line 735 "cplus.met"
#line 736 "cplus.met"
            while (! (((c == '>')||(c == '\r')||(c == '\n')))) { 
#line 736 "cplus.met"
#line 737 "cplus.met"
                {
#line 737 "cplus.met"
                    lexEl . AddChar(c);
#line 737 "cplus.met"
                    NextChar();
#line 737 "cplus.met"
                }
#line 737 "cplus.met"
            } 
#line 737 "cplus.met"
#line 738 "cplus.met"
            if (!(c != EOF&& NextChar())) ;
#line 738 "cplus.met"
#line 739 "cplus.met"
            {
#line 739 "cplus.met"
                firstOnLine = 0 ; 
#line 739 "cplus.met"
                tokenAhead =6;
#line 739 "cplus.met"
                lexEl.Value=INCLUDE_SYS;
#line 739 "cplus.met"
                PUT_COORD_CALL;
#line 739 "cplus.met"
                return(1);
#line 739 "cplus.met"
            }
#line 739 "cplus.met"
#line 739 "cplus.met"
            break ;
#line 739 "cplus.met"
#line 741 "cplus.met"
        case '"' :
#line 741 "cplus.met"
            NextChar();
#line 741 "cplus.met"
#line 742 "cplus.met"
#line 743 "cplus.met"
            while (! (((c == '"')||(c == '\r')||(c == '\n')))) { 
#line 743 "cplus.met"
#line 744 "cplus.met"
                {
#line 744 "cplus.met"
                    lexEl . AddChar(c);
#line 744 "cplus.met"
                    NextChar();
#line 744 "cplus.met"
                }
#line 744 "cplus.met"
            } 
#line 744 "cplus.met"
#line 745 "cplus.met"
            if (!(c != EOF&& NextChar())) ;
#line 745 "cplus.met"
#line 746 "cplus.met"
            {
#line 746 "cplus.met"
                firstOnLine = 0 ; 
#line 746 "cplus.met"
                tokenAhead =6;
#line 746 "cplus.met"
                lexEl.Value=INCLUDE_LOCAL;
#line 746 "cplus.met"
                PUT_COORD_CALL;
#line 746 "cplus.met"
                return(1);
#line 746 "cplus.met"
            }
#line 746 "cplus.met"
#line 746 "cplus.met"
            break ;
#line 746 "cplus.met"
    }
#line 746 "cplus.met"
#line 746 "cplus.met"
#line 748 "cplus.met"
    line = oldLine;
#line 748 "cplus.met"
    LEX_EXIT(0,"")
#line 748 "cplus.met"
    lexEl.Value = -1 ;
#line 748 "cplus.met"
    return -1 ; 
#line 748 "cplus.met"
}
#line 748 "cplus.met"

#line 748 "cplus.met"
#line 251 "cplus.met"
int cplus::LexMeta ()
#line 251 "cplus.met"
{
#line 251 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 251 "cplus.met"
        FreePos(lastContextPos);
#line 251 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 251 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 251 "cplus.met"
        ExtUnputBuf();
#line 251 "cplus.met"
    #ifdef DUMP_COORD
#line 251 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 251 "cplus.met"
    #endif
#line 251 "cplus.met"
    
#line 251 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 251 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 251 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 251 "cplus.met"
#line 254 "cplus.met"
    if ((! (keepCarriage)) && 
#line 254 "cplus.met"
       (! (keepAll))){
#line 254 "cplus.met"
#line 255 "cplus.met"
#line 256 "cplus.met"
        ptStockBuf = -1;
#line 256 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 256 "cplus.met"
            NextChar() ;
#line 256 "cplus.met"
        ptStockBuf = -1;
#line 256 "cplus.met"
        lexEl.Erase();
#line 256 "cplus.met"
        tokenAhead = 0;
#line 256 "cplus.met"
        oldLine=line,oldCol=col;
#line 256 "cplus.met"
        if ( !lexCallLex) {
#line 256 "cplus.met"
            PUT_COORD_CALL;
#line 256 "cplus.met"
        }
#line 256 "cplus.met"
#line 256 "cplus.met"
#line 256 "cplus.met"
    } else {
#line 256 "cplus.met"
#line 259 "cplus.met"
        if (! (keepAll)){
#line 259 "cplus.met"
#line 260 "cplus.met"
#line 261 "cplus.met"
            ptStockBuf = -1;
#line 261 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 261 "cplus.met"
                NextChar() ;
#line 261 "cplus.met"
            ptStockBuf = -1;
#line 261 "cplus.met"
            lexEl.Erase();
#line 261 "cplus.met"
            tokenAhead = 0;
#line 261 "cplus.met"
            oldLine=line,oldCol=col;
#line 261 "cplus.met"
            if ( !lexCallLex) {
#line 261 "cplus.met"
                PUT_COORD_CALL;
#line 261 "cplus.met"
            }
#line 261 "cplus.met"
#line 261 "cplus.met"
#line 261 "cplus.met"
        } else {
#line 261 "cplus.met"
#line 264 "cplus.met"
            ptStockBuf = -1;
#line 264 "cplus.met"
            lexEl.Erase();
#line 264 "cplus.met"
            tokenAhead = 0;
#line 264 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 264 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 264 "cplus.met"
        }
#line 264 "cplus.met"
    }
#line 264 "cplus.met"
#line 265 "cplus.met"
    switch (c) {
#line 265 "cplus.met"
#line 266 "cplus.met"
        case '$' :
#line 266 "cplus.met"
            NextChar();
#line 266 "cplus.met"
#line 268 "cplus.met"
#line 270 "cplus.met"
            if (! (((c == '(')))){
#line 270 "cplus.met"
#line 271 "cplus.met"
                while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||('0' <= c && c <= '9')||(c == '_'))) { 
#line 271 "cplus.met"
#line 272 "cplus.met"
                    {
#line 272 "cplus.met"
                        lexEl . AddChar(c);
#line 272 "cplus.met"
                        NextChar();
#line 272 "cplus.met"
                    }
#line 272 "cplus.met"
                } 
#line 272 "cplus.met"
            } else {
#line 272 "cplus.met"
#line 274 "cplus.met"
#line 275 "cplus.met"
                 int nbPar = 0;
#line 275 "cplus.met"
#line 276 "cplus.met"
                {
#line 276 "cplus.met"
                    lexEl . AddChar(c);
#line 276 "cplus.met"
                    NextChar();
#line 276 "cplus.met"
                }
#line 276 "cplus.met"
#line 277 "cplus.met"
                while (c != EOF) { 
#line 277 "cplus.met"
#line 278 "cplus.met"
                    switch (c) {
#line 278 "cplus.met"
#line 279 "cplus.met"
                        case '(' :
#line 279 "cplus.met"
#line 280 "cplus.met"
#line 281 "cplus.met"
                             nbPar++;
#line 281 "cplus.met"
#line 282 "cplus.met"
                            {
#line 282 "cplus.met"
                                lexEl . AddChar(c);
#line 282 "cplus.met"
                                NextChar();
#line 282 "cplus.met"
                            }
#line 282 "cplus.met"
#line 282 "cplus.met"
                            break ;
#line 282 "cplus.met"
#line 284 "cplus.met"
                        case ')' :
#line 284 "cplus.met"
#line 285 "cplus.met"
                            if (!nbPar ){
#line 285 "cplus.met"
#line 286 "cplus.met"
#line 287 "cplus.met"
                                {
#line 287 "cplus.met"
                                    lexEl . AddChar(c);
#line 287 "cplus.met"
                                    NextChar();
#line 287 "cplus.met"
                                }
#line 287 "cplus.met"
#line 288 "cplus.met"
                                {
#line 288 "cplus.met"
                                    firstOnLine = 0 ; 
#line 288 "cplus.met"
                                    tokenAhead =7;
#line 288 "cplus.met"
                                    lexEl.Value=META;
#line 288 "cplus.met"
                                    PUT_COORD_CALL;
#line 288 "cplus.met"
                                    return(1);
#line 288 "cplus.met"
                                }
#line 288 "cplus.met"
#line 288 "cplus.met"
#line 288 "cplus.met"
                            } else {
#line 288 "cplus.met"
#line 291 "cplus.met"
#line 292 "cplus.met"
                                {
#line 292 "cplus.met"
                                    lexEl . AddChar(c);
#line 292 "cplus.met"
                                    NextChar();
#line 292 "cplus.met"
                                }
#line 292 "cplus.met"
#line 293 "cplus.met"
                                 nbPar--;
#line 293 "cplus.met"
#line 293 "cplus.met"
                            }
#line 293 "cplus.met"
                            break ;
#line 293 "cplus.met"
#line 295 "cplus.met"
                        default : 
#line 295 "cplus.met"
                             if (c!= EOF) {
#line 295 "cplus.met"
#line 295 "cplus.met"
                                {
#line 295 "cplus.met"
                                    lexEl . AddChar(c);
#line 295 "cplus.met"
                                    NextChar();
#line 295 "cplus.met"
                                }
#line 295 "cplus.met"
                            }
#line 295 "cplus.met"
                            break ;
#line 295 "cplus.met"
                    }
#line 295 "cplus.met"
                } 
#line 295 "cplus.met"
#line 295 "cplus.met"
            }
#line 295 "cplus.met"
#line 298 "cplus.met"
            {
#line 298 "cplus.met"
                firstOnLine = 0 ; 
#line 298 "cplus.met"
                tokenAhead =7;
#line 298 "cplus.met"
                lexEl.Value=META;
#line 298 "cplus.met"
                PUT_COORD_CALL;
#line 298 "cplus.met"
                return(1);
#line 298 "cplus.met"
            }
#line 298 "cplus.met"
#line 298 "cplus.met"
            break ;
#line 298 "cplus.met"
    }
#line 298 "cplus.met"
#line 298 "cplus.met"
#line 300 "cplus.met"
    line = oldLine;
#line 300 "cplus.met"
    LEX_EXIT(0,"")
#line 300 "cplus.met"
    lexEl.Value = -1 ;
#line 300 "cplus.met"
    return -1 ; 
#line 300 "cplus.met"
}
#line 300 "cplus.met"

#line 300 "cplus.met"
#line 635 "cplus.met"
int cplus::LexPragma ()
#line 635 "cplus.met"
{
#line 635 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 635 "cplus.met"
        FreePos(lastContextPos);
#line 635 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 635 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 635 "cplus.met"
        ExtUnputBuf();
#line 635 "cplus.met"
    #ifdef DUMP_COORD
#line 635 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 635 "cplus.met"
    #endif
#line 635 "cplus.met"
    
#line 635 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 635 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 635 "cplus.met"
    tokenAhead = 0;
#line 635 "cplus.met"
    if(LexMeta() != -1){tokenAhead =8; return 1;}
#line 635 "cplus.met"
#line 635 "cplus.met"
    ptStockBuf = -1;
#line 635 "cplus.met"
    while ((c == '\t')||(c == ' ')||(c == ''))
#line 635 "cplus.met"
        NextChar() ;
#line 635 "cplus.met"
    ptStockBuf = -1;
#line 635 "cplus.met"
    lexEl.Erase();
#line 635 "cplus.met"
    tokenAhead = 0;
#line 635 "cplus.met"
    oldLine=line,oldCol=col;
#line 635 "cplus.met"
    if ( !lexCallLex) {
#line 635 "cplus.met"
        PUT_COORD_CALL;
#line 635 "cplus.met"
    }
#line 635 "cplus.met"
#line 637 "cplus.met"
#line 638 "cplus.met"
    if((GetString("pretty",1)&& NextChar())){
#line 638 "cplus.met"
#line 638 "cplus.met"
        {
#line 638 "cplus.met"
            firstOnLine = 0 ; 
#line 638 "cplus.met"
            tokenAhead =8;
#line 638 "cplus.met"
            lexEl.Value=PRAGMA_PRETTY;
#line 638 "cplus.met"
            PUT_COORD_CALL;
#line 638 "cplus.met"
            return(1);
#line 638 "cplus.met"
        }
#line 638 "cplus.met"
    } else 
#line 638 "cplus.met"
#line 639 "cplus.met"
    if((GetString("nopretty",1)&& NextChar())){
#line 639 "cplus.met"
#line 639 "cplus.met"
        {
#line 639 "cplus.met"
            firstOnLine = 0 ; 
#line 639 "cplus.met"
            tokenAhead =8;
#line 639 "cplus.met"
            lexEl.Value=PRAGMA_NOPRETTY;
#line 639 "cplus.met"
            PUT_COORD_CALL;
#line 639 "cplus.met"
            return(1);
#line 639 "cplus.met"
        }
#line 639 "cplus.met"
    } else 
#line 639 "cplus.met"
#line 640 "cplus.met"
    if((GetString("managed",1)&& NextChar())){
#line 640 "cplus.met"
#line 640 "cplus.met"
        {
#line 640 "cplus.met"
            firstOnLine = 0 ; 
#line 640 "cplus.met"
            tokenAhead =8;
#line 640 "cplus.met"
            lexEl.Value=PRAGMA_MANAGED;
#line 640 "cplus.met"
            PUT_COORD_CALL;
#line 640 "cplus.met"
            return(1);
#line 640 "cplus.met"
        }
#line 640 "cplus.met"
    } else 
#line 640 "cplus.met"
#line 641 "cplus.met"
    if((GetString("notmanaged",1)&& NextChar())){
#line 641 "cplus.met"
#line 641 "cplus.met"
        {
#line 641 "cplus.met"
            firstOnLine = 0 ; 
#line 641 "cplus.met"
            tokenAhead =8;
#line 641 "cplus.met"
            lexEl.Value=PRAGMA_NOT_MANAGED;
#line 641 "cplus.met"
            PUT_COORD_CALL;
#line 641 "cplus.met"
            return(1);
#line 641 "cplus.met"
        }
#line 641 "cplus.met"
    } else 
#line 641 "cplus.met"
#line 642 "cplus.met"
    if((GetString("config",1)&& NextChar())){
#line 642 "cplus.met"
#line 642 "cplus.met"
        {
#line 642 "cplus.met"
            firstOnLine = 0 ; 
#line 642 "cplus.met"
            tokenAhead =8;
#line 642 "cplus.met"
            lexEl.Value=PRAGMA_CONFIG;
#line 642 "cplus.met"
            PUT_COORD_CALL;
#line 642 "cplus.met"
            return(1);
#line 642 "cplus.met"
        }
#line 642 "cplus.met"
    } else 
#line 642 "cplus.met"
#line 643 "cplus.met"
    if((GetString("tab_directive",1)&& NextChar())){
#line 643 "cplus.met"
#line 643 "cplus.met"
        {
#line 643 "cplus.met"
            firstOnLine = 0 ; 
#line 643 "cplus.met"
            tokenAhead =8;
#line 643 "cplus.met"
            lexEl.Value=PRAGMA_TAB_DIRECTIVE;
#line 643 "cplus.met"
            PUT_COORD_CALL;
#line 643 "cplus.met"
            return(1);
#line 643 "cplus.met"
        }
#line 643 "cplus.met"
    } else 
#line 643 "cplus.met"
#line 644 "cplus.met"
    if((GetString("tab",1)&& NextChar())){
#line 644 "cplus.met"
#line 644 "cplus.met"
        {
#line 644 "cplus.met"
            firstOnLine = 0 ; 
#line 644 "cplus.met"
            tokenAhead =8;
#line 644 "cplus.met"
            lexEl.Value=PRAGMA_TAB;
#line 644 "cplus.met"
            PUT_COORD_CALL;
#line 644 "cplus.met"
            return(1);
#line 644 "cplus.met"
        }
#line 644 "cplus.met"
    } else 
#line 644 "cplus.met"
#line 645 "cplus.met"
    if((GetString("range",1)&& NextChar())){
#line 645 "cplus.met"
#line 645 "cplus.met"
        {
#line 645 "cplus.met"
            firstOnLine = 0 ; 
#line 645 "cplus.met"
            tokenAhead =8;
#line 645 "cplus.met"
            lexEl.Value=PRAGMA_RANGE;
#line 645 "cplus.met"
            PUT_COORD_CALL;
#line 645 "cplus.met"
            return(1);
#line 645 "cplus.met"
        }
#line 645 "cplus.met"
    } else 
#line 645 "cplus.met"
#line 646 "cplus.met"
    if((GetString("mode",1)&& NextChar())){
#line 646 "cplus.met"
#line 646 "cplus.met"
        {
#line 646 "cplus.met"
            firstOnLine = 0 ; 
#line 646 "cplus.met"
            tokenAhead =8;
#line 646 "cplus.met"
            lexEl.Value=PRAGMA_MODE;
#line 646 "cplus.met"
            PUT_COORD_CALL;
#line 646 "cplus.met"
            return(1);
#line 646 "cplus.met"
        }
#line 646 "cplus.met"
    } else 
#line 646 "cplus.met"
#line 647 "cplus.met"
    if((GetString("brace_align",1)&& NextChar())){
#line 647 "cplus.met"
#line 647 "cplus.met"
        {
#line 647 "cplus.met"
            firstOnLine = 0 ; 
#line 647 "cplus.met"
            tokenAhead =8;
#line 647 "cplus.met"
            lexEl.Value=PRAGMA_BRACE_ALIGN;
#line 647 "cplus.met"
            PUT_COORD_CALL;
#line 647 "cplus.met"
            return(1);
#line 647 "cplus.met"
        }
#line 647 "cplus.met"
    } else 
#line 647 "cplus.met"
#line 648 "cplus.met"
    if((GetString("simplify",1)&& NextChar())){
#line 648 "cplus.met"
#line 648 "cplus.met"
        {
#line 648 "cplus.met"
            firstOnLine = 0 ; 
#line 648 "cplus.met"
            tokenAhead =8;
#line 648 "cplus.met"
            lexEl.Value=PRAGMA_SIMPLIFY;
#line 648 "cplus.met"
            PUT_COORD_CALL;
#line 648 "cplus.met"
            return(1);
#line 648 "cplus.met"
        }
#line 648 "cplus.met"
    } else 
#line 648 "cplus.met"
#line 649 "cplus.met"
    if((GetString("single_switch_indent",1)&& NextChar())){
#line 649 "cplus.met"
#line 649 "cplus.met"
        {
#line 649 "cplus.met"
            firstOnLine = 0 ; 
#line 649 "cplus.met"
            tokenAhead =8;
#line 649 "cplus.met"
            lexEl.Value=PRAGMA_SINGLE_SWITCH_INDENT;
#line 649 "cplus.met"
            PUT_COORD_CALL;
#line 649 "cplus.met"
            return(1);
#line 649 "cplus.met"
        }
#line 649 "cplus.met"
    } else 
#line 649 "cplus.met"
#line 650 "cplus.met"
    if((GetString("assign_align",1)&& NextChar())){
#line 650 "cplus.met"
#line 650 "cplus.met"
        {
#line 650 "cplus.met"
            firstOnLine = 0 ; 
#line 650 "cplus.met"
            tokenAhead =8;
#line 650 "cplus.met"
            lexEl.Value=PRAGMA_ASSIGN_ALIGN;
#line 650 "cplus.met"
            PUT_COORD_CALL;
#line 650 "cplus.met"
            return(1);
#line 650 "cplus.met"
        }
#line 650 "cplus.met"
    } else 
#line 650 "cplus.met"
#line 651 "cplus.met"
    if((GetString("decl_align",1)&& NextChar())){
#line 651 "cplus.met"
#line 651 "cplus.met"
        {
#line 651 "cplus.met"
            firstOnLine = 0 ; 
#line 651 "cplus.met"
            tokenAhead =8;
#line 651 "cplus.met"
            lexEl.Value=PRAGMA_DECL_ALIGN;
#line 651 "cplus.met"
            PUT_COORD_CALL;
#line 651 "cplus.met"
            return(1);
#line 651 "cplus.met"
        }
#line 651 "cplus.met"
    } else 
#line 651 "cplus.met"
#line 652 "cplus.met"
    if((GetString("margin",1)&& NextChar())){
#line 652 "cplus.met"
#line 652 "cplus.met"
        {
#line 652 "cplus.met"
            firstOnLine = 0 ; 
#line 652 "cplus.met"
            tokenAhead =8;
#line 652 "cplus.met"
            lexEl.Value=PRAGMA_MARGIN;
#line 652 "cplus.met"
            PUT_COORD_CALL;
#line 652 "cplus.met"
            return(1);
#line 652 "cplus.met"
        }
#line 652 "cplus.met"
    } else 
#line 652 "cplus.met"
#line 653 "cplus.met"
    if((GetString("comment",1)&& NextChar())){
#line 653 "cplus.met"
#line 654 "cplus.met"
#line 655 "cplus.met"
        ptStockBuf = -1;
#line 655 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 655 "cplus.met"
            NextChar() ;
#line 655 "cplus.met"
        ptStockBuf = -1;
#line 655 "cplus.met"
        lexEl.Erase();
#line 655 "cplus.met"
        tokenAhead = 0;
#line 655 "cplus.met"
        oldLine=line,oldCol=col;
#line 655 "cplus.met"
        if ( !lexCallLex) {
#line 655 "cplus.met"
            PUT_COORD_CALL;
#line 655 "cplus.met"
        }
#line 655 "cplus.met"
#line 656 "cplus.met"
#line 657 "cplus.met"
        if((GetString("start",1)&& NextChar())){
#line 657 "cplus.met"
#line 657 "cplus.met"
            {
#line 657 "cplus.met"
                firstOnLine = 0 ; 
#line 657 "cplus.met"
                tokenAhead =8;
#line 657 "cplus.met"
                lexEl.Value=PRAGMA_COMMENT_START;
#line 657 "cplus.met"
                PUT_COORD_CALL;
#line 657 "cplus.met"
                return(1);
#line 657 "cplus.met"
            }
#line 657 "cplus.met"
        } else 
#line 657 "cplus.met"
#line 658 "cplus.met"
        if((GetString("middle",1)&& NextChar())){
#line 658 "cplus.met"
#line 658 "cplus.met"
            {
#line 658 "cplus.met"
                firstOnLine = 0 ; 
#line 658 "cplus.met"
                tokenAhead =8;
#line 658 "cplus.met"
                lexEl.Value=PRAGMA_COMMENT_MIDDLE;
#line 658 "cplus.met"
                PUT_COORD_CALL;
#line 658 "cplus.met"
                return(1);
#line 658 "cplus.met"
            }
#line 658 "cplus.met"
        } else 
#line 658 "cplus.met"
#line 659 "cplus.met"
        if((GetString("end",1)&& NextChar())){
#line 659 "cplus.met"
#line 659 "cplus.met"
            {
#line 659 "cplus.met"
                firstOnLine = 0 ; 
#line 659 "cplus.met"
                tokenAhead =8;
#line 659 "cplus.met"
                lexEl.Value=PRAGMA_COMMENT_END;
#line 659 "cplus.met"
                PUT_COORD_CALL;
#line 659 "cplus.met"
                return(1);
#line 659 "cplus.met"
            }
#line 659 "cplus.met"
        } else 
#line 659 "cplus.met"
#line 660 "cplus.met"
        if((GetString("plus",1)&& NextChar())){
#line 660 "cplus.met"
#line 660 "cplus.met"
            {
#line 660 "cplus.met"
                firstOnLine = 0 ; 
#line 660 "cplus.met"
                tokenAhead =8;
#line 660 "cplus.met"
                lexEl.Value=PRAGMA_COMMENT_PLUS;
#line 660 "cplus.met"
                PUT_COORD_CALL;
#line 660 "cplus.met"
                return(1);
#line 660 "cplus.met"
            }
#line 660 "cplus.met"
        } else 
#line 660 "cplus.met"
         ;
#line 660 "cplus.met"
#line 660 "cplus.met"
    } else 
#line 660 "cplus.met"
#line 663 "cplus.met"
    if((GetString("indent_function_type",1)&& NextChar())){
#line 663 "cplus.met"
#line 663 "cplus.met"
        {
#line 663 "cplus.met"
            firstOnLine = 0 ; 
#line 663 "cplus.met"
            tokenAhead =8;
#line 663 "cplus.met"
            lexEl.Value=PRAGMA_INDENT_FUNCTION_TYPE;
#line 663 "cplus.met"
            PUT_COORD_CALL;
#line 663 "cplus.met"
            return(1);
#line 663 "cplus.met"
        }
#line 663 "cplus.met"
    } else 
#line 663 "cplus.met"
#line 664 "cplus.met"
    if((GetString("func_header",1)&& NextChar())){
#line 664 "cplus.met"
#line 664 "cplus.met"
        {
#line 664 "cplus.met"
            firstOnLine = 0 ; 
#line 664 "cplus.met"
            tokenAhead =8;
#line 664 "cplus.met"
            lexEl.Value=PRAGMA_FUNC_HEADER;
#line 664 "cplus.met"
            PUT_COORD_CALL;
#line 664 "cplus.met"
            return(1);
#line 664 "cplus.met"
        }
#line 664 "cplus.met"
    } else 
#line 664 "cplus.met"
#line 665 "cplus.met"
    if((GetString("parameters_under_tab",1)&& NextChar())){
#line 665 "cplus.met"
#line 665 "cplus.met"
        {
#line 665 "cplus.met"
            firstOnLine = 0 ; 
#line 665 "cplus.met"
            tokenAhead =8;
#line 665 "cplus.met"
            lexEl.Value=PRAGMA_PARAMETERS_UNDER;
#line 665 "cplus.met"
            PUT_COORD_CALL;
#line 665 "cplus.met"
            return(1);
#line 665 "cplus.met"
        }
#line 665 "cplus.met"
    } else 
#line 665 "cplus.met"
#line 666 "cplus.met"
    if((GetString("parameters",1)&& NextChar())){
#line 666 "cplus.met"
#line 666 "cplus.met"
        {
#line 666 "cplus.met"
            firstOnLine = 0 ; 
#line 666 "cplus.met"
            tokenAhead =8;
#line 666 "cplus.met"
            lexEl.Value=PRAGMA_PARAMETERS;
#line 666 "cplus.met"
            PUT_COORD_CALL;
#line 666 "cplus.met"
            return(1);
#line 666 "cplus.met"
        }
#line 666 "cplus.met"
    } else 
#line 666 "cplus.met"
#line 667 "cplus.met"
    if((GetString("space_arrow",1)&& NextChar())){
#line 667 "cplus.met"
#line 667 "cplus.met"
        {
#line 667 "cplus.met"
            firstOnLine = 0 ; 
#line 667 "cplus.met"
            tokenAhead =8;
#line 667 "cplus.met"
            lexEl.Value=PRAGMA_SPACE_ARROW;
#line 667 "cplus.met"
            PUT_COORD_CALL;
#line 667 "cplus.met"
            return(1);
#line 667 "cplus.met"
        }
#line 667 "cplus.met"
    } else 
#line 667 "cplus.met"
#line 668 "cplus.met"
    if((GetString("enum_vert",1)&& NextChar())){
#line 668 "cplus.met"
#line 668 "cplus.met"
        {
#line 668 "cplus.met"
            firstOnLine = 0 ; 
#line 668 "cplus.met"
            tokenAhead =8;
#line 668 "cplus.met"
            lexEl.Value=PRAGMA_ENUM_VERT;
#line 668 "cplus.met"
            PUT_COORD_CALL;
#line 668 "cplus.met"
            return(1);
#line 668 "cplus.met"
        }
#line 668 "cplus.met"
    } else 
#line 668 "cplus.met"
#line 671 "cplus.met"
    if((c != EOF)){
#line 671 "cplus.met"
#line 670 "cplus.met"
#line 671 "cplus.met"
        while ((! (((c == '\n')||(c == '\r')))) && 
#line 671 "cplus.met"
              (c != EOF)) { 
#line 671 "cplus.met"
#line 672 "cplus.met"
            {
#line 672 "cplus.met"
                lexEl . AddChar(c);
#line 672 "cplus.met"
                NextChar();
#line 672 "cplus.met"
            }
#line 672 "cplus.met"
        } 
#line 672 "cplus.met"
#line 673 "cplus.met"
        {
#line 673 "cplus.met"
            firstOnLine = 0 ; 
#line 673 "cplus.met"
            tokenAhead =8;
#line 673 "cplus.met"
            lexEl.Value=PRAGMA_CONTENT;
#line 673 "cplus.met"
            PUT_COORD_CALL;
#line 673 "cplus.met"
            return(1);
#line 673 "cplus.met"
        }
#line 673 "cplus.met"
#line 673 "cplus.met"
    } else 
#line 673 "cplus.met"
     ;
#line 673 "cplus.met"
#line 673 "cplus.met"
#line 675 "cplus.met"
    line = oldLine;
#line 675 "cplus.met"
    LEX_EXIT(0,"")
#line 675 "cplus.met"
    lexEl.Value = -1 ;
#line 675 "cplus.met"
    return -1 ; 
#line 675 "cplus.met"
}
#line 675 "cplus.met"

#line 675 "cplus.met"
#line 678 "cplus.met"
int cplus::LexPragmaSmall ()
#line 678 "cplus.met"
{
#line 678 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 678 "cplus.met"
        FreePos(lastContextPos);
#line 678 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 678 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 678 "cplus.met"
        ExtUnputBuf();
#line 678 "cplus.met"
    #ifdef DUMP_COORD
#line 678 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 678 "cplus.met"
    #endif
#line 678 "cplus.met"
    
#line 678 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 678 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 678 "cplus.met"
    tokenAhead = 0;
#line 678 "cplus.met"
    if(LexMeta() != -1){tokenAhead =9; return 1;}
#line 678 "cplus.met"
#line 678 "cplus.met"
    ptStockBuf = -1;
#line 678 "cplus.met"
    while ((c == ' ')||(c == '\t'))
#line 678 "cplus.met"
        NextChar() ;
#line 678 "cplus.met"
    ptStockBuf = -1;
#line 678 "cplus.met"
    lexEl.Erase();
#line 678 "cplus.met"
    tokenAhead = 0;
#line 678 "cplus.met"
    oldLine=line,oldCol=col;
#line 678 "cplus.met"
    if ( !lexCallLex) {
#line 678 "cplus.met"
        PUT_COORD_CALL;
#line 678 "cplus.met"
    }
#line 678 "cplus.met"
#line 680 "cplus.met"
    while (((c != EOF) && 
#line 680 "cplus.met"
           ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9')))) && 
#line 680 "cplus.met"
          (! (((c == '\n')||(c == '\r'))))) { 
#line 680 "cplus.met"
#line 683 "cplus.met"
        {
#line 683 "cplus.met"
            lexEl . AddChar(c);
#line 683 "cplus.met"
            NextChar();
#line 683 "cplus.met"
        }
#line 683 "cplus.met"
    } 
#line 683 "cplus.met"
#line 684 "cplus.met"
    {
#line 684 "cplus.met"
        firstOnLine = 0 ; 
#line 684 "cplus.met"
        tokenAhead =9;
#line 684 "cplus.met"
        lexEl.Value=SMALL_PRAGMA_CONTENT;
#line 684 "cplus.met"
        PUT_COORD_CALL;
#line 684 "cplus.met"
        return(1);
#line 684 "cplus.met"
    }
#line 684 "cplus.met"
#line 684 "cplus.met"
#line 684 "cplus.met"
    
#line 685 "cplus.met"
    line = oldLine;
#line 685 "cplus.met"
    LEX_EXIT(0,"")
#line 685 "cplus.met"
    lexEl.Value = -1 ;
#line 685 "cplus.met"
    return -1 ; 
#line 685 "cplus.met"
}
#line 685 "cplus.met"

#line 685 "cplus.met"
#line 619 "cplus.met"
int cplus::LexUndef ()
#line 619 "cplus.met"
{
#line 619 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 619 "cplus.met"
        FreePos(lastContextPos);
#line 619 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 619 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 619 "cplus.met"
        ExtUnputBuf();
#line 619 "cplus.met"
    #ifdef DUMP_COORD
#line 619 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 619 "cplus.met"
    #endif
#line 619 "cplus.met"
    
#line 619 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 619 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 619 "cplus.met"
    tokenAhead = 0;
#line 619 "cplus.met"
    if(LexMeta() != -1){tokenAhead =10; return 1;}
#line 619 "cplus.met"
#line 619 "cplus.met"
    ptStockBuf = -1;
#line 619 "cplus.met"
    while ((c == ' ')||(c == '\t')||(c == ''))
#line 619 "cplus.met"
        NextChar() ;
#line 619 "cplus.met"
    ptStockBuf = -1;
#line 619 "cplus.met"
    lexEl.Erase();
#line 619 "cplus.met"
    tokenAhead = 0;
#line 619 "cplus.met"
    oldLine=line,oldCol=col;
#line 619 "cplus.met"
    if ( !lexCallLex) {
#line 619 "cplus.met"
        PUT_COORD_CALL;
#line 619 "cplus.met"
    }
#line 619 "cplus.met"
#line 621 "cplus.met"
    while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 621 "cplus.met"
#line 622 "cplus.met"
        {
#line 622 "cplus.met"
            lexEl . AddChar(c);
#line 622 "cplus.met"
            NextChar();
#line 622 "cplus.met"
        }
#line 622 "cplus.met"
    } 
#line 622 "cplus.met"
#line 623 "cplus.met"
    while (((c == ' ')||(c == '\t'))) { 
#line 623 "cplus.met"
#line 624 "cplus.met"
        if (!(c != EOF&& NextChar())) ;
#line 624 "cplus.met"
    } 
#line 624 "cplus.met"
#line 625 "cplus.met"
    {
#line 625 "cplus.met"
        firstOnLine = 0 ; 
#line 625 "cplus.met"
        tokenAhead =10;
#line 625 "cplus.met"
        lexEl.Value=UNDEF_CONTENT;
#line 625 "cplus.met"
        PUT_COORD_CALL;
#line 625 "cplus.met"
        return(1);
#line 625 "cplus.met"
    }
#line 625 "cplus.met"
#line 625 "cplus.met"
#line 625 "cplus.met"
    
#line 626 "cplus.met"
    line = oldLine;
#line 626 "cplus.met"
    LEX_EXIT(0,"")
#line 626 "cplus.met"
    lexEl.Value = -1 ;
#line 626 "cplus.met"
    return -1 ; 
#line 626 "cplus.met"
}
#line 626 "cplus.met"

#line 626 "cplus.met"
#line 140 "cplus.met"
int cplus::PushArgument ()
#line 140 "cplus.met"
{
#line 140 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 140 "cplus.met"
        FreePos(lastContextPos);
#line 140 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 140 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 140 "cplus.met"
        ExtUnputBuf();
#line 140 "cplus.met"
    #ifdef DUMP_COORD
#line 140 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 140 "cplus.met"
    #endif
#line 140 "cplus.met"
    
#line 140 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 140 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 140 "cplus.met"
    tokenAhead = 0;
#line 140 "cplus.met"
    if(LexMeta() != -1){tokenAhead =11; return 1;}
#line 140 "cplus.met"
#line 143 "cplus.met"
    if (! (keepCarriage)){
#line 143 "cplus.met"
#line 144 "cplus.met"
#line 145 "cplus.met"
        ptStockBuf = -1;
#line 145 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 145 "cplus.met"
            NextChar() ;
#line 145 "cplus.met"
        ptStockBuf = -1;
#line 145 "cplus.met"
        lexEl.Erase();
#line 145 "cplus.met"
        tokenAhead = 0;
#line 145 "cplus.met"
        oldLine=line,oldCol=col;
#line 145 "cplus.met"
        if ( !lexCallLex) {
#line 145 "cplus.met"
            PUT_COORD_CALL;
#line 145 "cplus.met"
        }
#line 145 "cplus.met"
#line 145 "cplus.met"
#line 145 "cplus.met"
    } else {
#line 145 "cplus.met"
#line 148 "cplus.met"
        if (! (keepAll)){
#line 148 "cplus.met"
#line 149 "cplus.met"
#line 150 "cplus.met"
            ptStockBuf = -1;
#line 150 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 150 "cplus.met"
                NextChar() ;
#line 150 "cplus.met"
            ptStockBuf = -1;
#line 150 "cplus.met"
            lexEl.Erase();
#line 150 "cplus.met"
            tokenAhead = 0;
#line 150 "cplus.met"
            oldLine=line,oldCol=col;
#line 150 "cplus.met"
            if ( !lexCallLex) {
#line 150 "cplus.met"
                PUT_COORD_CALL;
#line 150 "cplus.met"
            }
#line 150 "cplus.met"
#line 150 "cplus.met"
#line 150 "cplus.met"
        } else {
#line 150 "cplus.met"
#line 153 "cplus.met"
            ptStockBuf = -1;
#line 153 "cplus.met"
            lexEl.Erase();
#line 153 "cplus.met"
            tokenAhead = 0;
#line 153 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 153 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 153 "cplus.met"
        }
#line 153 "cplus.met"
    }
#line 153 "cplus.met"
#line 154 "cplus.met"
    if (c != EOF){
#line 154 "cplus.met"
#line 155 "cplus.met"
#line 156 "cplus.met"
        while ((c != EOF) && 
#line 156 "cplus.met"
              (! (((c == ',')||(c == '\r')||(c == '\n'))))) { 
#line 156 "cplus.met"
#line 157 "cplus.met"
            {
#line 157 "cplus.met"
                lexEl . AddChar(c);
#line 157 "cplus.met"
                NextChar();
#line 157 "cplus.met"
            }
#line 157 "cplus.met"
        } 
#line 157 "cplus.met"
#line 158 "cplus.met"
        {
#line 158 "cplus.met"
            firstOnLine = 0 ; 
#line 158 "cplus.met"
            tokenAhead =11;
#line 158 "cplus.met"
            lexEl.Value=PUSH_ARGUMENT;
#line 158 "cplus.met"
            PUT_COORD_CALL;
#line 158 "cplus.met"
            return(1);
#line 158 "cplus.met"
        }
#line 158 "cplus.met"
#line 158 "cplus.met"
#line 158 "cplus.met"
    }
#line 158 "cplus.met"
#line 158 "cplus.met"
#line 159 "cplus.met"
    line = oldLine;
#line 159 "cplus.met"
    LEX_EXIT(0,"")
#line 159 "cplus.met"
    lexEl.Value = -1 ;
#line 159 "cplus.met"
    return -1 ; 
#line 159 "cplus.met"
}
#line 159 "cplus.met"

#line 159 "cplus.met"
#line 102 "cplus.met"
int cplus::PushFunction ()
#line 102 "cplus.met"
{
#line 102 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 102 "cplus.met"
        FreePos(lastContextPos);
#line 102 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 102 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 102 "cplus.met"
        ExtUnputBuf();
#line 102 "cplus.met"
    #ifdef DUMP_COORD
#line 102 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 102 "cplus.met"
    #endif
#line 102 "cplus.met"
    
#line 102 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 102 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 102 "cplus.met"
    tokenAhead = 0;
#line 102 "cplus.met"
    if(LexMeta() != -1){tokenAhead =12; return 1;}
#line 102 "cplus.met"
#line 105 "cplus.met"
    if (! (keepCarriage)){
#line 105 "cplus.met"
#line 106 "cplus.met"
#line 107 "cplus.met"
        ptStockBuf = -1;
#line 107 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 107 "cplus.met"
            NextChar() ;
#line 107 "cplus.met"
        ptStockBuf = -1;
#line 107 "cplus.met"
        lexEl.Erase();
#line 107 "cplus.met"
        tokenAhead = 0;
#line 107 "cplus.met"
        oldLine=line,oldCol=col;
#line 107 "cplus.met"
        if ( !lexCallLex) {
#line 107 "cplus.met"
            PUT_COORD_CALL;
#line 107 "cplus.met"
        }
#line 107 "cplus.met"
#line 107 "cplus.met"
#line 107 "cplus.met"
    } else {
#line 107 "cplus.met"
#line 110 "cplus.met"
        if (! (keepAll)){
#line 110 "cplus.met"
#line 111 "cplus.met"
#line 112 "cplus.met"
            ptStockBuf = -1;
#line 112 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 112 "cplus.met"
                NextChar() ;
#line 112 "cplus.met"
            ptStockBuf = -1;
#line 112 "cplus.met"
            lexEl.Erase();
#line 112 "cplus.met"
            tokenAhead = 0;
#line 112 "cplus.met"
            oldLine=line,oldCol=col;
#line 112 "cplus.met"
            if ( !lexCallLex) {
#line 112 "cplus.met"
                PUT_COORD_CALL;
#line 112 "cplus.met"
            }
#line 112 "cplus.met"
#line 112 "cplus.met"
#line 112 "cplus.met"
        } else {
#line 112 "cplus.met"
#line 115 "cplus.met"
            ptStockBuf = -1;
#line 115 "cplus.met"
            lexEl.Erase();
#line 115 "cplus.met"
            tokenAhead = 0;
#line 115 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 115 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 115 "cplus.met"
        }
#line 115 "cplus.met"
    }
#line 115 "cplus.met"
#line 116 "cplus.met"
#line 117 "cplus.met"
    if((GetString("NPUSH_CALL_AFF_VERIF",1)&& NextChar())){
#line 117 "cplus.met"
#line 118 "cplus.met"
#line 119 "cplus.met"
        {
#line 119 "cplus.met"
            lexEl.AddString("NPUSH_CALL_AFF_VERIF");
#line 119 "cplus.met"
        }
#line 119 "cplus.met"
#line 120 "cplus.met"
        {
#line 120 "cplus.met"
            firstOnLine = 0 ; 
#line 120 "cplus.met"
            tokenAhead =12;
#line 120 "cplus.met"
            lexEl.Value=PUSH_FUNCTION;
#line 120 "cplus.met"
            PUT_COORD_CALL;
#line 120 "cplus.met"
            return(1);
#line 120 "cplus.met"
        }
#line 120 "cplus.met"
#line 120 "cplus.met"
    } else 
#line 120 "cplus.met"
#line 122 "cplus.met"
    if((GetString("NPUSH_CALL_AFF",1)&& NextChar())){
#line 122 "cplus.met"
#line 123 "cplus.met"
#line 124 "cplus.met"
        {
#line 124 "cplus.met"
            lexEl.AddString("NPUSH_CALL_AFF");
#line 124 "cplus.met"
        }
#line 124 "cplus.met"
#line 125 "cplus.met"
        {
#line 125 "cplus.met"
            firstOnLine = 0 ; 
#line 125 "cplus.met"
            tokenAhead =12;
#line 125 "cplus.met"
            lexEl.Value=PUSH_FUNCTION;
#line 125 "cplus.met"
            PUT_COORD_CALL;
#line 125 "cplus.met"
            return(1);
#line 125 "cplus.met"
        }
#line 125 "cplus.met"
#line 125 "cplus.met"
    } else 
#line 125 "cplus.met"
#line 127 "cplus.met"
    if((GetString("PUSH_CALL_AFF_VERIF",1)&& NextChar())){
#line 127 "cplus.met"
#line 128 "cplus.met"
#line 129 "cplus.met"
        {
#line 129 "cplus.met"
            lexEl.AddString("PUSH_CALL_AFF_VERIF");
#line 129 "cplus.met"
        }
#line 129 "cplus.met"
#line 130 "cplus.met"
        {
#line 130 "cplus.met"
            firstOnLine = 0 ; 
#line 130 "cplus.met"
            tokenAhead =12;
#line 130 "cplus.met"
            lexEl.Value=PUSH_FUNCTION;
#line 130 "cplus.met"
            PUT_COORD_CALL;
#line 130 "cplus.met"
            return(1);
#line 130 "cplus.met"
        }
#line 130 "cplus.met"
#line 130 "cplus.met"
    } else 
#line 130 "cplus.met"
#line 132 "cplus.met"
    if((GetString("PUSH_CALL_AFF",1)&& NextChar())){
#line 132 "cplus.met"
#line 133 "cplus.met"
#line 134 "cplus.met"
        {
#line 134 "cplus.met"
            lexEl.AddString("PUSH_CALL_AFF");
#line 134 "cplus.met"
        }
#line 134 "cplus.met"
#line 135 "cplus.met"
        {
#line 135 "cplus.met"
            firstOnLine = 0 ; 
#line 135 "cplus.met"
            tokenAhead =12;
#line 135 "cplus.met"
            lexEl.Value=PUSH_FUNCTION;
#line 135 "cplus.met"
            PUT_COORD_CALL;
#line 135 "cplus.met"
            return(1);
#line 135 "cplus.met"
        }
#line 135 "cplus.met"
#line 135 "cplus.met"
    } else 
#line 135 "cplus.met"
     ;
#line 135 "cplus.met"
#line 135 "cplus.met"
#line 137 "cplus.met"
    line = oldLine;
#line 137 "cplus.met"
    LEX_EXIT(0,"")
#line 137 "cplus.met"
    lexEl.Value = -1 ;
#line 137 "cplus.met"
    return -1 ; 
#line 137 "cplus.met"
}
#line 137 "cplus.met"

#line 137 "cplus.met"
#line 45 "cplus.met"
int cplus::specific ()
#line 45 "cplus.met"
{
#line 45 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 45 "cplus.met"
        FreePos(lastContextPos);
#line 45 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 45 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 45 "cplus.met"
        ExtUnputBuf();
#line 45 "cplus.met"
    #ifdef DUMP_COORD
#line 45 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 45 "cplus.met"
    #endif
#line 45 "cplus.met"
    
#line 45 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 45 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 45 "cplus.met"
    tokenAhead = 0;
#line 45 "cplus.met"
    if(LexMeta() != -1){tokenAhead =13; return 1;}
#line 45 "cplus.met"
#line 48 "cplus.met"
    if (! (keepCarriage)){
#line 48 "cplus.met"
#line 49 "cplus.met"
#line 50 "cplus.met"
        ptStockBuf = -1;
#line 50 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 50 "cplus.met"
            NextChar() ;
#line 50 "cplus.met"
        ptStockBuf = -1;
#line 50 "cplus.met"
        lexEl.Erase();
#line 50 "cplus.met"
        tokenAhead = 0;
#line 50 "cplus.met"
        oldLine=line,oldCol=col;
#line 50 "cplus.met"
        if ( !lexCallLex) {
#line 50 "cplus.met"
            PUT_COORD_CALL;
#line 50 "cplus.met"
        }
#line 50 "cplus.met"
#line 50 "cplus.met"
#line 50 "cplus.met"
    } else {
#line 50 "cplus.met"
#line 53 "cplus.met"
        if (! (keepAll)){
#line 53 "cplus.met"
#line 54 "cplus.met"
#line 55 "cplus.met"
            ptStockBuf = -1;
#line 55 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 55 "cplus.met"
                NextChar() ;
#line 55 "cplus.met"
            ptStockBuf = -1;
#line 55 "cplus.met"
            lexEl.Erase();
#line 55 "cplus.met"
            tokenAhead = 0;
#line 55 "cplus.met"
            oldLine=line,oldCol=col;
#line 55 "cplus.met"
            if ( !lexCallLex) {
#line 55 "cplus.met"
                PUT_COORD_CALL;
#line 55 "cplus.met"
            }
#line 55 "cplus.met"
#line 55 "cplus.met"
#line 55 "cplus.met"
        } else {
#line 55 "cplus.met"
#line 58 "cplus.met"
            ptStockBuf = -1;
#line 58 "cplus.met"
            lexEl.Erase();
#line 58 "cplus.met"
            tokenAhead = 0;
#line 58 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 58 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 58 "cplus.met"
        }
#line 58 "cplus.met"
    }
#line 58 "cplus.met"
#line 59 "cplus.met"
#line 60 "cplus.met"
    if((GetString("DECLARE_DYNAMIC",1)&& NextChar())){
#line 60 "cplus.met"
#line 60 "cplus.met"
        {
#line 60 "cplus.met"
            firstOnLine = 0 ; 
#line 60 "cplus.met"
            tokenAhead =13;
#line 60 "cplus.met"
            lexEl.Value=DECLARE_DYNAMIC;
#line 60 "cplus.met"
            PUT_COORD_CALL;
#line 60 "cplus.met"
            return(1);
#line 60 "cplus.met"
        }
#line 60 "cplus.met"
    } else 
#line 60 "cplus.met"
#line 61 "cplus.met"
    if((GetString("DECLARE_SERIAL",1)&& NextChar())){
#line 61 "cplus.met"
#line 61 "cplus.met"
        {
#line 61 "cplus.met"
            firstOnLine = 0 ; 
#line 61 "cplus.met"
            tokenAhead =13;
#line 61 "cplus.met"
            lexEl.Value=DECLARE_SERIAL;
#line 61 "cplus.met"
            PUT_COORD_CALL;
#line 61 "cplus.met"
            return(1);
#line 61 "cplus.met"
        }
#line 61 "cplus.met"
    } else 
#line 61 "cplus.met"
#line 62 "cplus.met"
    if((GetString("IMPLEMENT_DYNAMIC",1)&& NextChar())){
#line 62 "cplus.met"
#line 62 "cplus.met"
        {
#line 62 "cplus.met"
            firstOnLine = 0 ; 
#line 62 "cplus.met"
            tokenAhead =13;
#line 62 "cplus.met"
            lexEl.Value=IMPLEMENT_DYNAMIC;
#line 62 "cplus.met"
            PUT_COORD_CALL;
#line 62 "cplus.met"
            return(1);
#line 62 "cplus.met"
        }
#line 62 "cplus.met"
    } else 
#line 62 "cplus.met"
#line 63 "cplus.met"
    if((GetString("IMPLEMENT_DYNCREATE",1)&& NextChar())){
#line 63 "cplus.met"
#line 63 "cplus.met"
        {
#line 63 "cplus.met"
            firstOnLine = 0 ; 
#line 63 "cplus.met"
            tokenAhead =13;
#line 63 "cplus.met"
            lexEl.Value=IMPLEMENT_DYNCREATE;
#line 63 "cplus.met"
            PUT_COORD_CALL;
#line 63 "cplus.met"
            return(1);
#line 63 "cplus.met"
        }
#line 63 "cplus.met"
    } else 
#line 63 "cplus.met"
#line 64 "cplus.met"
    if((GetString("IMPLEMENT_SERIAL",1)&& NextChar())){
#line 64 "cplus.met"
#line 64 "cplus.met"
        {
#line 64 "cplus.met"
            firstOnLine = 0 ; 
#line 64 "cplus.met"
            tokenAhead =13;
#line 64 "cplus.met"
            lexEl.Value=IMPLEMENT_SERIAL;
#line 64 "cplus.met"
            PUT_COORD_CALL;
#line 64 "cplus.met"
            return(1);
#line 64 "cplus.met"
        }
#line 64 "cplus.met"
    } else 
#line 64 "cplus.met"
#line 65 "cplus.met"
    if((GetString("DECLARE_MESSAGE_MAP",1)&& NextChar())){
#line 65 "cplus.met"
#line 65 "cplus.met"
        {
#line 65 "cplus.met"
            firstOnLine = 0 ; 
#line 65 "cplus.met"
            tokenAhead =13;
#line 65 "cplus.met"
            lexEl.Value=DECLARE_MESSAGE_MAP;
#line 65 "cplus.met"
            PUT_COORD_CALL;
#line 65 "cplus.met"
            return(1);
#line 65 "cplus.met"
        }
#line 65 "cplus.met"
    } else 
#line 65 "cplus.met"
#line 66 "cplus.met"
    if((GetString("BEGIN_MESSAGE_MAP",1)&& NextChar())){
#line 66 "cplus.met"
#line 66 "cplus.met"
        {
#line 66 "cplus.met"
            firstOnLine = 0 ; 
#line 66 "cplus.met"
            tokenAhead =13;
#line 66 "cplus.met"
            lexEl.Value=BEGIN_MESSAGE_MAP;
#line 66 "cplus.met"
            PUT_COORD_CALL;
#line 66 "cplus.met"
            return(1);
#line 66 "cplus.met"
        }
#line 66 "cplus.met"
    } else 
#line 66 "cplus.met"
#line 67 "cplus.met"
    if((GetString("END_MESSAGE_MAP",1)&& NextChar())){
#line 67 "cplus.met"
#line 67 "cplus.met"
        {
#line 67 "cplus.met"
            firstOnLine = 0 ; 
#line 67 "cplus.met"
            tokenAhead =13;
#line 67 "cplus.met"
            lexEl.Value=END_MESSAGE_MAP;
#line 67 "cplus.met"
            PUT_COORD_CALL;
#line 67 "cplus.met"
            return(1);
#line 67 "cplus.met"
        }
#line 67 "cplus.met"
    } else 
#line 67 "cplus.met"
#line 68 "cplus.met"
    if((GetString("CATCH_ALL",1)&& NextChar())){
#line 68 "cplus.met"
#line 68 "cplus.met"
        {
#line 68 "cplus.met"
            firstOnLine = 0 ; 
#line 68 "cplus.met"
            tokenAhead =13;
#line 68 "cplus.met"
            lexEl.Value=CATCH_ALL;
#line 68 "cplus.met"
            PUT_COORD_CALL;
#line 68 "cplus.met"
            return(1);
#line 68 "cplus.met"
        }
#line 68 "cplus.met"
    } else 
#line 68 "cplus.met"
#line 69 "cplus.met"
    if((GetString("CATCH",1)&& NextChar())){
#line 69 "cplus.met"
#line 69 "cplus.met"
        {
#line 69 "cplus.met"
            firstOnLine = 0 ; 
#line 69 "cplus.met"
            tokenAhead =13;
#line 69 "cplus.met"
            lexEl.Value=CATCH_UPPER;
#line 69 "cplus.met"
            PUT_COORD_CALL;
#line 69 "cplus.met"
            return(1);
#line 69 "cplus.met"
        }
#line 69 "cplus.met"
    } else 
#line 69 "cplus.met"
#line 70 "cplus.met"
    if((GetString("AND_CATCH",1)&& NextChar())){
#line 70 "cplus.met"
#line 70 "cplus.met"
        {
#line 70 "cplus.met"
            firstOnLine = 0 ; 
#line 70 "cplus.met"
            tokenAhead =13;
#line 70 "cplus.met"
            lexEl.Value=AND_CATCH;
#line 70 "cplus.met"
            PUT_COORD_CALL;
#line 70 "cplus.met"
            return(1);
#line 70 "cplus.met"
        }
#line 70 "cplus.met"
    } else 
#line 70 "cplus.met"
#line 71 "cplus.met"
    if((GetString("END_CATCH_ALL",1)&& NextChar())){
#line 71 "cplus.met"
#line 71 "cplus.met"
        {
#line 71 "cplus.met"
            firstOnLine = 0 ; 
#line 71 "cplus.met"
            tokenAhead =13;
#line 71 "cplus.met"
            lexEl.Value=END_CATCH_ALL;
#line 71 "cplus.met"
            PUT_COORD_CALL;
#line 71 "cplus.met"
            return(1);
#line 71 "cplus.met"
        }
#line 71 "cplus.met"
    } else 
#line 71 "cplus.met"
#line 72 "cplus.met"
    if((GetString("END_CATCH",1)&& NextChar())){
#line 72 "cplus.met"
#line 72 "cplus.met"
        {
#line 72 "cplus.met"
            firstOnLine = 0 ; 
#line 72 "cplus.met"
            tokenAhead =13;
#line 72 "cplus.met"
            lexEl.Value=END_CATCH;
#line 72 "cplus.met"
            PUT_COORD_CALL;
#line 72 "cplus.met"
            return(1);
#line 72 "cplus.met"
        }
#line 72 "cplus.met"
    } else 
#line 72 "cplus.met"
#line 73 "cplus.met"
    if((GetString("TRY",1)&& NextChar())){
#line 73 "cplus.met"
#line 73 "cplus.met"
        {
#line 73 "cplus.met"
            firstOnLine = 0 ; 
#line 73 "cplus.met"
            tokenAhead =13;
#line 73 "cplus.met"
            lexEl.Value=TRY_UPPER;
#line 73 "cplus.met"
            PUT_COORD_CALL;
#line 73 "cplus.met"
            return(1);
#line 73 "cplus.met"
        }
#line 73 "cplus.met"
    } else 
#line 73 "cplus.met"
     ;
#line 73 "cplus.met"
#line 73 "cplus.met"
#line 74 "cplus.met"
    line = oldLine;
#line 74 "cplus.met"
    LEX_EXIT(0,"")
#line 74 "cplus.met"
    lexEl.Value = -1 ;
#line 74 "cplus.met"
    return -1 ; 
#line 74 "cplus.met"
}
#line 74 "cplus.met"

#line 74 "cplus.met"
#line 77 "cplus.met"
int cplus::the_exit ()
#line 77 "cplus.met"
{
#line 77 "cplus.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 77 "cplus.met"
        FreePos(lastContextPos);
#line 77 "cplus.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 77 "cplus.met"
    if ( tokenAhead && tokenAhead != -1)
#line 77 "cplus.met"
        ExtUnputBuf();
#line 77 "cplus.met"
    #ifdef DUMP_COORD
#line 77 "cplus.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 77 "cplus.met"
    #endif
#line 77 "cplus.met"
    
#line 77 "cplus.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 77 "cplus.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 77 "cplus.met"
    tokenAhead = 0;
#line 77 "cplus.met"
    if(LexMeta() != -1){tokenAhead =14; return 1;}
#line 77 "cplus.met"
#line 80 "cplus.met"
    if (! (keepCarriage)){
#line 80 "cplus.met"
#line 81 "cplus.met"
#line 82 "cplus.met"
        ptStockBuf = -1;
#line 82 "cplus.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 82 "cplus.met"
            NextChar() ;
#line 82 "cplus.met"
        ptStockBuf = -1;
#line 82 "cplus.met"
        lexEl.Erase();
#line 82 "cplus.met"
        tokenAhead = 0;
#line 82 "cplus.met"
        oldLine=line,oldCol=col;
#line 82 "cplus.met"
        if ( !lexCallLex) {
#line 82 "cplus.met"
            PUT_COORD_CALL;
#line 82 "cplus.met"
        }
#line 82 "cplus.met"
#line 82 "cplus.met"
#line 82 "cplus.met"
    } else {
#line 82 "cplus.met"
#line 85 "cplus.met"
        if (! (keepAll)){
#line 85 "cplus.met"
#line 86 "cplus.met"
#line 87 "cplus.met"
            ptStockBuf = -1;
#line 87 "cplus.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 87 "cplus.met"
                NextChar() ;
#line 87 "cplus.met"
            ptStockBuf = -1;
#line 87 "cplus.met"
            lexEl.Erase();
#line 87 "cplus.met"
            tokenAhead = 0;
#line 87 "cplus.met"
            oldLine=line,oldCol=col;
#line 87 "cplus.met"
            if ( !lexCallLex) {
#line 87 "cplus.met"
                PUT_COORD_CALL;
#line 87 "cplus.met"
            }
#line 87 "cplus.met"
#line 87 "cplus.met"
#line 87 "cplus.met"
        } else {
#line 87 "cplus.met"
#line 90 "cplus.met"
            ptStockBuf = -1;
#line 90 "cplus.met"
            lexEl.Erase();
#line 90 "cplus.met"
            tokenAhead = 0;
#line 90 "cplus.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 90 "cplus.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 90 "cplus.met"
        }
#line 90 "cplus.met"
    }
#line 90 "cplus.met"
#line 91 "cplus.met"
#line 92 "cplus.met"
    if((GetString("TOKEN_EXIT",1)&& NextChar())){
#line 92 "cplus.met"
#line 92 "cplus.met"
        {
#line 92 "cplus.met"
            lexEl.AddString("TOKEN_EXIT");
#line 92 "cplus.met"
        }
#line 92 "cplus.met"
    } else 
#line 92 "cplus.met"
#line 93 "cplus.met"
    if((GetString("PROG_EXIT",1)&& NextChar())){
#line 93 "cplus.met"
#line 93 "cplus.met"
        {
#line 93 "cplus.met"
            lexEl.AddString("PROG_EXIT");
#line 93 "cplus.met"
        }
#line 93 "cplus.met"
    } else 
#line 93 "cplus.met"
#line 94 "cplus.met"
    if((GetString("CASE_EXIT",1)&& NextChar())){
#line 94 "cplus.met"
#line 94 "cplus.met"
        {
#line 94 "cplus.met"
            lexEl.AddString("CASE_EXIT");
#line 94 "cplus.met"
        }
#line 94 "cplus.met"
    } else 
#line 94 "cplus.met"
#line 95 "cplus.met"
    if((GetString("LEX_EXIT",1)&& NextChar())){
#line 95 "cplus.met"
#line 95 "cplus.met"
        {
#line 95 "cplus.met"
            lexEl.AddString("LEX_EXIT");
#line 95 "cplus.met"
        }
#line 95 "cplus.met"
    } else 
#line 95 "cplus.met"
#line 96 "cplus.met"
    if((c != EOF)){
#line 96 "cplus.met"
#line 96 "cplus.met"
         goto fin; 
#line 96 "cplus.met"
    } else 
#line 96 "cplus.met"
     ;
#line 96 "cplus.met"
#line 98 "cplus.met"
    {
#line 98 "cplus.met"
        firstOnLine = 0 ; 
#line 98 "cplus.met"
        tokenAhead =14;
#line 98 "cplus.met"
        lexEl.Value=FUNC_SPEC;
#line 98 "cplus.met"
        PUT_COORD_CALL;
#line 98 "cplus.met"
        return(1);
#line 98 "cplus.met"
    }
#line 98 "cplus.met"
#line 99 "cplus.met"
     fin :
#line 99 "cplus.met"
#line 99 "cplus.met"
#line 99 "cplus.met"
    
#line 100 "cplus.met"
    line = oldLine;
#line 100 "cplus.met"
    LEX_EXIT(0,"")
#line 100 "cplus.met"
    lexEl.Value = -1 ;
#line 100 "cplus.met"
    return -1 ; 
#line 100 "cplus.met"
}
#line 100 "cplus.met"

#line 100 "cplus.met"
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
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
    INLINE
    VIRTUAL
    FRIEND
    CONST
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 16 -- base_specifier
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 17 -- base_specifier_elem
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 18 -- bit_field_decl
    META
    IDENT
-- 19 -- cast_expression
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
-- 20 -- cast_expression_value
    META
    POUV
-- 21 -- catch_unit
    META
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 22 -- catch_unit_ansi
    META
    CATCH
-- 23 -- class_declaration
    META
    STRUCT
    UNION
    CLASS
-- 24 -- comment_eater
    ALWAYS
-- 25 -- complete_class_name
    META
    IDENT
    DPOIDPOI
-- 26 -- compound_statement
    META
    AOUV
-- 27 -- conditional_expression
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
-- 28 -- const_or_volatile
    META
    VOLATILE
    CONST
-- 29 -- constan
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
-- 30 -- ctor_initializer
    ALWAYS
-- 31 -- data_decl_exotic
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
-- 32 -- data_decl_sc_decl
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
-- 33 -- data_decl_sc_decl_full
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
-- 34 -- data_decl_sc_decl_short
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
-- 35 -- data_decl_sc_ty_decl
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 36 -- data_decl_sc_ty_decl_full
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 37 -- data_decl_sc_ty_decl_short
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 38 -- data_declaration
    ALWAYS
-- 39 -- data_declaration_for
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 40 -- data_declaration_for_full
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 41 -- data_declaration_for_short
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 42 -- data_declaration_strict
    ALWAYS
-- 43 -- deallocation_expression
    META
    DELETE
-- 44 -- declarator
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
-- 45 -- declarator_follow
    ALWAYS
-- 46 -- declarator_list
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
-- 47 -- declarator_list_init
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
-- 48 -- declarator_value
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
-- 49 -- define_dir
    META
    DEFINE_DIR
-- 50 -- directive
    META
    INCLUDE_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
-- 51 -- end_pragma
    META
    PRAGMA_DIR
-- 52 -- end_pragma_managed
    META
    PRAGMA_DIR
-- 53 -- enum_declarator
    META
    ENUM
-- 54 -- enum_val
    META
    IDENT
-- 55 -- equality_expression
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
-- 56 -- exception
    META
    TRY_UPPER
-- 57 -- exception_ansi
    META
    TRY
-- 58 -- exception_list
    META
    THROW
-- 59 -- exclusive_or_expression
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
-- 60 -- expression
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
-- 61 -- expression_for
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
-- 62 -- ext_all
    ALWAYS
-- 63 -- ext_all_ext
    ALWAYS
-- 64 -- ext_all_no_linkage
    ALWAYS
-- 65 -- ext_data_decl_sc_ty
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 66 -- ext_data_decl_sc_ty_full
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 67 -- ext_data_decl_sc_ty_short
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 68 -- ext_data_decl_simp
    ALWAYS
-- 69 -- ext_data_declaration
    ALWAYS
-- 70 -- ext_decl_dir
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
-- 71 -- ext_decl_if_dir
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
-- 72 -- ext_decl_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 73 -- for_statement
    META
    POUV
-- 74 -- func_declaration
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 75 -- func_declarator
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
-- 76 -- ident_mul
    META
    IDENT
    DPOIDPOI
-- 77 -- include_dir
    META
    INCLUDE_DIR
-- 78 -- inclusive_or_expression
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
-- 79 -- initializer
    ALWAYS
-- 80 -- inside_declaration
    ALWAYS
-- 81 -- inside_declaration1
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 82 -- inside_declaration2
    META
    IDENT
-- 83 -- inside_declaration_extension
    ALWAYS
-- 84 -- label_beg
    META
    IDENT
-- 85 -- linkage_specification
    META
    EXTERN
-- 86 -- logical_and_expression
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
-- 87 -- logical_or_expression
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
-- 88 -- long_short_int_char
    META
    INT
    CHAR
    LONG
    SHORT
-- 89 -- macro
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
-- 90 -- macro_extended
    ALWAYS
-- 91 -- main_entry
    ALWAYS
-- 92 -- member_declarator
    META
    IDENT
    DPOIDPOI
-- 93 -- message_map
    META
    BEGIN_MESSAGE_MAP
-- 94 -- multiplicative_expression
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
-- 95 -- name_space
    META
    NAMESPACE
    USING
-- 96 -- new_1
    META
    POUV
-- 97 -- new_2
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 98 -- new_declarator
    ALWAYS
-- 99 -- new_type_name
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 100 -- none_statement
    ALWAYS
-- 101 -- operator_function_name
    META
    OPERATOR
-- 102 -- other_config
    META
    PRAGMA_CONTENT
-- 103 -- parameter_list
    META
    POUV
-- 104 -- parameter_list_extended
    META
    POUV
-- 105 -- pm_expression
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
-- 106 -- postfix_expression
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
-- 107 -- pretty::bidon
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 108 -- pretty::parse_entry
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 109 -- primary_expression
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
-- 110 -- program
    ALWAYS
-- 111 -- protect_declare
    META
    PRIVATE
    PROTECTED
    PUBLIC
-- 112 -- ptr_operator
    META
    IDENT
    DPOIDPOI
    ETOI
    ETCO
-- 113 -- qualified_name
    META
    IDENT
    TILD
-- 114 -- qualified_name_elem
    META
    DPOIDPOI
-- 115 -- quick_prog
    ALWAYS
-- 116 -- quick_prog_elem
    ALWAYS
-- 117 -- range_in_liste
    META
    IDENT
-- 118 -- range_modifier
    META
    IDENT
    REGISTER
    VOLATILE
    INLINE
    VIRTUAL
    FRIEND
    CONST
-- 119 -- range_modifier_function
    META
    INLINE
    VIRTUAL
    FRIEND
    CONST
-- 120 -- range_modifier_ident
    ALWAYS
-- 121 -- range_pragma
    META
    PRAGMA_RANGE
-- 122 -- relational_expression
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
-- 123 -- sc_specifier
    ALWAYS
-- 124 -- shift_expression
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
-- 125 -- simple_type
    META
    IDENT
    AUTO
    TYPENAME
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
-- 126 -- simple_type_name
    META
    IDENT
    AUTO
    TYPENAME
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
-- 127 -- sizeof_type
    META
    POUV
-- 128 -- stat_all
    ALWAYS
-- 129 -- stat_dir
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
-- 130 -- stat_dir_switch
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
-- 131 -- stat_if_dir
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
-- 132 -- stat_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 133 -- statement
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
-- 134 -- statement_expression
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
-- 135 -- string_list
    META
    STRING
-- 136 -- switch_elem
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
    CASE
    DEFAULT
-- 137 -- switch_list
    META
    AOUV
-- 138 -- template_type
    META
    INFE
-- 139 -- type_and_declarator
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
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
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
-- 140 -- type_descr
    META
    IDENT
-- 141 -- type_name
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 142 -- type_specifier
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 143 -- type_specifier_without_param
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 144 -- typedef_and_declarator
    META
    IDENT
    AUTO
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
    TYPENAME
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
-- 145 -- unary_expression
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
*/

signed char *cplus::_tokenArray [146] = {
    (signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\060\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\001\040\000\000\000\000\000\034\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\001\040\000\000\000\000\000\034\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\070\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\160\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\100\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\370\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\370\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\074\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\300\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\074\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\106\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\370\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\063\000\040\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\060\000\040\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\034\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\040\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\340\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\200\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\004\200\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\004\200\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\004\200\377\377\377\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\007\000\000\000\000\000\000\000\000\000\000\000\030\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\374\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\344\377\377\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\004\200\377\077\000\340\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
};
typedef int (cplus::*(DEF_FUNC_TOKEN_ARRAY [146]))() ;
DEF_FUNC_TOKEN_ARRAY cplus::_tokenFuncArray = {
    /*bidon                          */0,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */(&cplus::Lex),
    /*alloc_expression               */(&cplus::Lex),
    /*allocation_expression          */(&cplus::Lex),
    /*and_expression                 */(&cplus::Lex),
    /*arg_declarator                 */(&cplus::Lex),
    /*arg_declarator_base            */(&cplus::Lex),
    /*arg_declarator_followed        */(&cplus::Lex),
    /*arg_declarator_type            */(&cplus::Lex),
    /*arg_typ_declarator             */(&cplus::Lex),
    /*arg_typ_list                   */0,
    /*asm_declaration                */(&cplus::Lex),
    /*assignment_end                 */(&cplus::Lex),
    /*assignment_expression          */(&cplus::Lex),
    /*base_specifier                 */(&cplus::Lex),
    /*base_specifier_elem            */(&cplus::Lex),
    /*bit_field_decl                 */(&cplus::Lex),
    /*cast_expression                */(&cplus::Lex),
    /*cast_expression_value          */(&cplus::Lex),
    /*catch_unit                     */(&cplus::specific),
    /*catch_unit_ansi                */(&cplus::Lex),
    /*class_declaration              */(&cplus::Lex),
    /*comment_eater                  */0,
    /*complete_class_name            */(&cplus::Lex),
    /*compound_statement             */(&cplus::Lex),
    /*conditional_expression         */(&cplus::Lex),
    /*const_or_volatile              */(&cplus::Lex),
    /*constan                        */(&cplus::Lex),
    /*ctor_initializer               */0,
    /*data_decl_exotic               */(&cplus::specific),
    /*data_decl_sc_decl              */(&cplus::Lex),
    /*data_decl_sc_decl_full         */(&cplus::Lex),
    /*data_decl_sc_decl_short        */(&cplus::Lex),
    /*data_decl_sc_ty_decl           */(&cplus::Lex),
    /*data_decl_sc_ty_decl_full      */(&cplus::Lex),
    /*data_decl_sc_ty_decl_short     */(&cplus::Lex),
    /*data_declaration               */0,
    /*data_declaration_for           */(&cplus::Lex),
    /*data_declaration_for_full      */(&cplus::Lex),
    /*data_declaration_for_short     */(&cplus::Lex),
    /*data_declaration_strict        */0,
    /*deallocation_expression        */(&cplus::Lex),
    /*declarator                     */(&cplus::Lex),
    /*declarator_follow              */0,
    /*declarator_list                */(&cplus::Lex),
    /*declarator_list_init           */(&cplus::Lex),
    /*declarator_value               */(&cplus::Lex),
    /*define_dir                     */(&cplus::Lex),
    /*directive                      */(&cplus::Lex),
    /*end_pragma                     */(&cplus::Lex),
    /*end_pragma_managed             */(&cplus::Lex),
    /*enum_declarator                */(&cplus::Lex),
    /*enum_val                       */(&cplus::Lex),
    /*equality_expression            */(&cplus::Lex),
    /*exception                      */(&cplus::specific),
    /*exception_ansi                 */(&cplus::Lex),
    /*exception_list                 */(&cplus::Lex),
    /*exclusive_or_expression        */(&cplus::Lex),
    /*expression                     */(&cplus::Lex),
    /*expression_for                 */(&cplus::Lex),
    /*ext_all                        */0,
    /*ext_all_ext                    */0,
    /*ext_all_no_linkage             */0,
    /*ext_data_decl_sc_ty            */(&cplus::Lex),
    /*ext_data_decl_sc_ty_full       */(&cplus::Lex),
    /*ext_data_decl_sc_ty_short      */(&cplus::Lex),
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */(&cplus::Lex),
    /*ext_decl_if_dir                */(&cplus::Lex),
    /*ext_decl_ifdef_dir             */(&cplus::Lex),
    /*for_statement                  */(&cplus::Lex),
    /*func_declaration               */(&cplus::Lex),
    /*func_declarator                */(&cplus::Lex),
    /*ident_mul                      */(&cplus::Lex),
    /*include_dir                    */(&cplus::Lex),
    /*inclusive_or_expression        */(&cplus::Lex),
    /*initializer                    */0,
    /*inside_declaration             */0,
    /*inside_declaration1            */(&cplus::Lex),
    /*inside_declaration2            */(&cplus::Lex),
    /*inside_declaration_extension   */0,
    /*label_beg                      */(&cplus::Lex),
    /*linkage_specification          */(&cplus::Lex),
    /*logical_and_expression         */(&cplus::Lex),
    /*logical_or_expression          */(&cplus::Lex),
    /*long_short_int_char            */(&cplus::Lex),
    /*macro                          */(&cplus::specific),
    /*macro_extended                 */0,
    /*main_entry                     */0,
    /*member_declarator              */(&cplus::Lex),
    /*message_map                    */(&cplus::specific),
    /*multiplicative_expression      */(&cplus::Lex),
    /*name_space                     */(&cplus::Lex),
    /*new_1                          */(&cplus::Lex),
    /*new_2                          */(&cplus::Lex),
    /*new_declarator                 */0,
    /*new_type_name                  */(&cplus::Lex),
    /*none_statement                 */0,
    /*operator_function_name         */(&cplus::Lex),
    /*other_config                   */(&cplus::LexPragma),
    /*parameter_list                 */(&cplus::Lex),
    /*parameter_list_extended        */(&cplus::Lex),
    /*pm_expression                  */(&cplus::Lex),
    /*postfix_expression             */(&cplus::Lex),
    /*pretty::bidon                  */(&cplus::Lex),
    /*pretty::parse_entry            */(&cplus::Lex),
    /*primary_expression             */(&cplus::Lex),
    /*program                        */0,
    /*protect_declare                */(&cplus::Lex),
    /*ptr_operator                   */(&cplus::Lex),
    /*qualified_name                 */(&cplus::Lex),
    /*qualified_name_elem            */(&cplus::Lex),
    /*quick_prog                     */0,
    /*quick_prog_elem                */0,
    /*range_in_liste                 */(&cplus::Lex),
    /*range_modifier                 */(&cplus::Lex),
    /*range_modifier_function        */(&cplus::Lex),
    /*range_modifier_ident           */0,
    /*range_pragma                   */(&cplus::LexPragma),
    /*relational_expression          */(&cplus::Lex),
    /*sc_specifier                   */0,
    /*shift_expression               */(&cplus::Lex),
    /*simple_type                    */(&cplus::Lex),
    /*simple_type_name               */(&cplus::Lex),
    /*sizeof_type                    */(&cplus::Lex),
    /*stat_all                       */0,
    /*stat_dir                       */(&cplus::Lex),
    /*stat_dir_switch                */(&cplus::Lex),
    /*stat_if_dir                    */(&cplus::Lex),
    /*stat_ifdef_dir                 */(&cplus::Lex),
    /*statement                      */(&cplus::Lex),
    /*statement_expression           */(&cplus::Lex),
    /*string_list                    */(&cplus::Lex),
    /*switch_elem                    */(&cplus::Lex),
    /*switch_list                    */(&cplus::Lex),
    /*template_type                  */(&cplus::Lex),
    /*type_and_declarator            */(&cplus::Lex),
    /*type_descr                     */(&cplus::Lex),
    /*type_name                      */(&cplus::Lex),
    /*type_specifier                 */(&cplus::Lex),
    /*type_specifier_without_param   */(&cplus::Lex),
    /*typedef_and_declarator         */(&cplus::Lex),
    /*unary_expression               */(&cplus::Lex)
};
int cplus::_tokenNbFuncArray [146] = {
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
    /*unary_expression               */1
};
int _arityNode_cplus[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                           , 0 , 1 , 1 , 1 , 1 , -1 , 1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , 1 , -1 , -1 , -1 , -1 , -1 , 1 , -1
                           , -1 , -1 , -1 , -1 , 1 , 1 , 3 , 3 , 3 , -1 , -1
                           , -1 , 2 , -1 , -1 , 3 , -1 , -1 , -1 , -1 , 1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , 2 , 0 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , 2 , -1 , -1 , 4 , 1 , -1 , -1
                           , 1 , 1 , 0 , -1 , 1 , -1 , -1 , -1 , -1 , -1 , -1
                           , 1 , 1 , 1 , 2 , -1 , 4 , 3 , -1 , 1 , 2 , 2
                           , 2 , -1 , -1 , 2 , 1 , -1 , -1 , 2 , -1 , -1 , -1
                           , -1 , 4 , 2 , 2 , 1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2 , -1 , 2 , 2
                           , 1 , -1 , 1 , 1 , 1 , -1 , 1 , 2 , 2 , -1 , 1
                           , 2 , -1 , 2 , 2 , 2 , 3 , 0 , 2 , 2 , 2 , 2
                           , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , -1
                           , 2 , 0 , 2 , -1 , 1 , 1 , -1 , 3 , 2 , 1 , 1
                           , 1 , 1 , 1 , 1 , 2 , 1 , 3 , 3 , -1 , -1 , 2
                           , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 1 , 1 , -1 , -1 , 2 , 2 , 2 , 2 , 1 , -1
                           , 2 , 1 , 1 , -1 , 2 , 0 , 2 , 9 , -1 , 2 , 1
                           , 2 , 1 , -1 , 2 , -1 , 2 , 0 , 1 , 1 , 0 , 2
                           , 1 , -1 , 2 , 2 , 2 , 2 , 1 , 2 , 0 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , 2 , 2 , 2 , 2 , 2 , 2
                           , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 2 , 2
                           , 2 , 2 , 2 , 2 , 1 , 0 , 0 , 1 , 1 , -1 , 1
                           , 2 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 };

    
STRINGELEM * listConst_cplus;
PPTREE bri_parse_entry_cplus(int error_free) {
return cplus() . parse_entry (error_free);
}

int cplus::init = 0 ;

void cplus::InitConst()
{
    if (!cplus::init) {
        cplus::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("cplus::BDECR", 340);
        AddConstVal("cplus::BINCR", 339);
        AddConstVal("cplus::ADDR", 338);
        AddConstVal("cplus::NOT", 337);
        AddConstVal("cplus::LNEG", 336);
        AddConstVal("cplus::POS", 335);
        AddConstVal("cplus::NEG", 334);
        AddConstVal("cplus::PARAM_TYPE", 333);
        AddConstVal("cplus::STRING_LIST", 332);
        AddConstVal("cplus::LABEL", 331);
        AddConstVal("cplus::THROW_ANSI", 330);
        AddConstVal("cplus::ELSE", 329);
        AddConstVal("cplus::TUNSIGNED", 328);
        AddConstVal("cplus::TSIGNED", 327);
        AddConstVal("cplus::TFLOAT", 326);
        AddConstVal("cplus::TDOUBLE", 325);
        AddConstVal("cplus::TIDENT", 324);
        AddConstVal("cplus::RSHI", 323);
        AddConstVal("cplus::LSHI", 322);
        AddConstVal("cplus::LT", 321);
        AddConstVal("cplus::GT", 320);
        AddConstVal("cplus::GEQU", 319);
        AddConstVal("cplus::LEQU", 318);
        AddConstVal("cplus::SPACE_ARROW", 317);
        AddConstVal("cplus::TAB_DIRECTIVE", 316);
        AddConstVal("cplus::ENUM_PARAMETERS_UNDER", 315);
        AddConstVal("cplus::ENUM_VERT_VALUE", 314);
        AddConstVal("cplus::PROTECT_MEMB", 313);
        AddConstVal("cplus::LANGUAGE", 312);
        AddConstVal("cplus::EXP", 311);
        AddConstVal("cplus::ADECR", 310);
        AddConstVal("cplus::AINCR", 309);
        AddConstVal("cplus::ARROW", 308);
        AddConstVal("cplus::REF", 307);
        AddConstVal("cplus::EXP_ARRAY", 306);
        AddConstVal("cplus::EXP_LIST", 305);
        AddConstVal("cplus::ARROW_MEMB", 304);
        AddConstVal("cplus::DOT_MEMB", 303);
        AddConstVal("cplus::POINETOI", 302);
        AddConstVal("cplus::TIRESUPEETOI", 301);
        AddConstVal("cplus::TIRESUPE", 300);
        AddConstVal("cplus::SUPESUPE", 299);
        AddConstVal("cplus::INFEINFE", 298);
        AddConstVal("cplus::SUPEEGAL", 297);
        AddConstVal("cplus::INFEEGAL", 296);
        AddConstVal("cplus::NONE", 295);
        AddConstVal("cplus::NEW_DECLARATOR", 294);
        AddConstVal("cplus::USING_NAMESPACE", 293);
        AddConstVal("cplus::NAMESPACE_ALIAS", 292);
        AddConstVal("cplus::REM", 291);
        AddConstVal("cplus::DIV", 290);
        AddConstVal("cplus::MUL", 289);
        AddConstVal("cplus::POURC", 288);
        AddConstVal("cplus::MESSAGE_MAP", 287);
        AddConstVal("cplus::MACRO", 286);
        AddConstVal("cplus::TCHAR", 285);
        AddConstVal("cplus::TSHORT", 284);
        AddConstVal("cplus::TLONG", 283);
        AddConstVal("cplus::TINT", 282);
        AddConstVal("cplus::OR", 281);
        AddConstVal("cplus::VBARVBAR", 280);
        AddConstVal("cplus::AND", 279);
        AddConstVal("cplus::ETCOETCO", 278);
        AddConstVal("cplus::COMPOUND_EXT", 277);
        AddConstVal("cplus::EXTERNAL", 276);
        AddConstVal("cplus::INITIALIZER", 275);
        AddConstVal("cplus::LOR", 274);
        AddConstVal("cplus::VBAR", 273);
        AddConstVal("cplus::FUNC", 272);
        AddConstVal("cplus::ALL_OF", 271);
        AddConstVal("cplus::STAT_VOID", 270);
        AddConstVal("cplus::TEMPLATE_DECL", 269);
        AddConstVal("cplus::SUPE", 268);
        AddConstVal("cplus::CLASS_PARAM", 267);
        AddConstVal("cplus::EXP_SEQ", 266);
        AddConstVal("cplus::LXOR", 265);
        AddConstVal("cplus::CHAP", 264);
        AddConstVal("cplus::EXCEPTION_LIST", 263);
        AddConstVal("cplus::EXCEPTION_ANSI", 262);
        AddConstVal("cplus::EXCEPTION", 261);
        AddConstVal("cplus::NEQU", 260);
        AddConstVal("cplus::EQU", 259);
        AddConstVal("cplus::EXCLEGAL", 258);
        AddConstVal("cplus::EGALEGAL", 257);
        AddConstVal("cplus::PRAGMA", 256);
        AddConstVal("cplus::PARAMETERS", 255);
        AddConstVal("cplus::FUNC_HEADER", 254);
        AddConstVal("cplus::INDENT_FUNCTION_TYPE", 253);
        AddConstVal("cplus::COMMENT_PLUS", 252);
        AddConstVal("cplus::COMMENT_END", 251);
        AddConstVal("cplus::COMMENT_MIDDLE", 250);
        AddConstVal("cplus::COMMENT_START", 249);
        AddConstVal("cplus::MARGIN_VALUE", 248);
        AddConstVal("cplus::BRACE_ALIGN_VALUE", 247);
        AddConstVal("cplus::DECL_ALIGN", 246);
        AddConstVal("cplus::ASSIGN_ALIGN", 245);
        AddConstVal("cplus::SINGLE_SWITCH_INDENT_VALUE", 244);
        AddConstVal("cplus::SIMPLIFY_VALUE", 243);
        AddConstVal("cplus::SIMPLIFY", 242);
        AddConstVal("cplus::MODE_VALUE", 241);
        AddConstVal("cplus::TAB_VALUE", 240);
        AddConstVal("cplus::CONFIG", 239);
        AddConstVal("cplus::NOT_MANAGED", 238);
        AddConstVal("cplus::NO_PRETTY", 237);
        AddConstVal("cplus::ALINE", 236);
        AddConstVal("cplus::ERROR", 235);
        AddConstVal("cplus::UNDEF", 234);
        AddConstVal("cplus::TYP_AFF_CALL", 233);
        AddConstVal("cplus::MEMBER_DECLARATOR", 232);
        AddConstVal("cplus::TYP_ARRAY", 231);
        AddConstVal("cplus::CFER", 230);
        AddConstVal("cplus::COUV", 229);
        AddConstVal("cplus::FOR_DECLARATION", 228);
        AddConstVal("cplus::DECLARATION", 227);
        AddConstVal("cplus::CTOR_INITIALIZER", 226);
        AddConstVal("cplus::CTOR_INIT", 225);
        AddConstVal("cplus::LONGLONG", 224);
        AddConstVal("cplus::IUNLONGLONG", 223);
        AddConstVal("cplus::IUNLONG", 222);
        AddConstVal("cplus::IUN", 221);
        AddConstVal("cplus::ILONGLONG", 220);
        AddConstVal("cplus::ILONG", 219);
        AddConstVal("cplus::RANGE_MODIFIER", 218);
        AddConstVal("cplus::COND_AFF", 217);
        AddConstVal("cplus::INTE", 216);
        AddConstVal("cplus::COMPOUND", 215);
        AddConstVal("cplus::CLASS_DECL", 214);
        AddConstVal("cplus::AFER", 213);
        AddConstVal("cplus::CATCH_ANSI", 212);
        AddConstVal("cplus::EXCEPT_ANSI_ALL", 211);
        AddConstVal("cplus::CAST", 210);
        AddConstVal("cplus::DPOI", 209);
        AddConstVal("cplus::TYP_BIT", 208);
        AddConstVal("cplus::PROTECT", 207);
        AddConstVal("cplus::BASE_LIST", 206);
        AddConstVal("cplus::XOR_AFF", 205);
        AddConstVal("cplus::OR_AFF", 204);
        AddConstVal("cplus::AND_AFF", 203);
        AddConstVal("cplus::RSH_AFF", 202);
        AddConstVal("cplus::LSH_AFF", 201);
        AddConstVal("cplus::MIN_AFF", 200);
        AddConstVal("cplus::PLU_AFF", 199);
        AddConstVal("cplus::REM_AFF", 198);
        AddConstVal("cplus::DIV_AFF", 197);
        AddConstVal("cplus::MUL_AFF", 196);
        AddConstVal("cplus::AFF", 195);
        AddConstVal("cplus::VAR_LIST", 194);
        AddConstVal("cplus::TYP_LIST", 193);
        AddConstVal("cplus::TYP_AFF", 192);
        AddConstVal("cplus::ABST_DECLARATOR", 191);
        AddConstVal("cplus::DECLARATOR", 190);
        AddConstVal("cplus::POINPOINPOIN", 189);
        AddConstVal("cplus::LAND", 188);
        AddConstVal("cplus::INIT_NEW", 187);
        AddConstVal("cplus::VIRG", 186);
        AddConstVal("cplus::QUALIFIED", 185);
        AddConstVal("cplus::MINUS", 184);
        AddConstVal("cplus::TYP", 183);
        AddConstVal("cplus::PFER", 182);
        AddConstVal("cplus::DESTRUCT", 181);
        AddConstVal("cplus::TYP_REF", 180);
        AddConstVal("cplus::TYP_ADDR", 179);
        AddConstVal("cplus::INFE", 178);
        AddConstVal("cplus::USING", 177);
        AddConstVal("cplus::NAMESPACE", 176);
        AddConstVal("cplus::TYPEDEF", 175);
        AddConstVal("cplus::TEMPLATE", 174);
        AddConstVal("cplus::CATCH", 173);
        AddConstVal("cplus::PUBLIC", 172);
        AddConstVal("cplus::PROTECTED", 171);
        AddConstVal("cplus::PRIVATE", 170);
        AddConstVal("cplus::CHAPEGAL", 169);
        AddConstVal("cplus::VBAREGAL", 168);
        AddConstVal("cplus::ETCOEGAL", 167);
        AddConstVal("cplus::SUPESUPEEGAL", 166);
        AddConstVal("cplus::INFEINFEEGAL", 165);
        AddConstVal("cplus::TIREEGAL", 164);
        AddConstVal("cplus::PLUSEGAL", 163);
        AddConstVal("cplus::POURCEGAL", 162);
        AddConstVal("cplus::ETOIEGAL", 161);
        AddConstVal("cplus::EGAL", 160);
        AddConstVal("cplus::ASM", 159);
        AddConstVal("cplus::VA_ARG", 158);
        AddConstVal("cplus::DELETE", 157);
        AddConstVal("cplus::NEW", 156);
        AddConstVal("cplus::SIZEOF", 155);
        AddConstVal("cplus::TIRETIRE", 154);
        AddConstVal("cplus::PLUSPLUS", 153);
        AddConstVal("cplus::EXCL", 152);
        AddConstVal("cplus::PLUS", 151);
        AddConstVal("cplus::TIRE", 150);
        AddConstVal("cplus::POUV", 149);
        AddConstVal("cplus::DEFAULT", 148);
        AddConstVal("cplus::CASE", 147);
        AddConstVal("cplus::TRY", 146);
        AddConstVal("cplus::THROW", 145);
        AddConstVal("cplus::FORALLSONS", 144);
        AddConstVal("cplus::WHILE", 143);
        AddConstVal("cplus::SWITCH", 142);
        AddConstVal("cplus::RETURN", 141);
        AddConstVal("cplus::PVIR", 140);
        AddConstVal("cplus::IF", 139);
        AddConstVal("cplus::FOR", 138);
        AddConstVal("cplus::AOUV", 137);
        AddConstVal("cplus::DO", 136);
        AddConstVal("cplus::CONTINUE", 135);
        AddConstVal("cplus::BREAK", 134);
        AddConstVal("cplus::OPERATOR", 133);
        AddConstVal("cplus::TILD", 132);
        AddConstVal("cplus::ETCO", 131);
        AddConstVal("cplus::ETOI", 130);
        AddConstVal("cplus::SHORT", 129);
        AddConstVal("cplus::UNSIGNED", 128);
        AddConstVal("cplus::SIGNED", 127);
        AddConstVal("cplus::LONG", 126);
        AddConstVal("cplus::DPOIDPOI", 125);
        AddConstVal("cplus::VOID", 124);
        AddConstVal("cplus::FLOAT", 123);
        AddConstVal("cplus::CHAR", 122);
        AddConstVal("cplus::INT", 121);
        AddConstVal("cplus::DOUBLE", 120);
        AddConstVal("cplus::TYPENAME", 119);
        AddConstVal("cplus::CLASS", 118);
        AddConstVal("cplus::UNION", 117);
        AddConstVal("cplus::STRUCT", 116);
        AddConstVal("cplus::ENUM", 115);
        AddConstVal("cplus::CONST", 114);
        AddConstVal("cplus::FRIEND", 113);
        AddConstVal("cplus::VIRTUAL", 112);
        AddConstVal("cplus::INLINE", 111);
        AddConstVal("cplus::VOLATILE", 110);
        AddConstVal("cplus::REGISTER", 109);
        AddConstVal("cplus::EXTERN", 108);
        AddConstVal("cplus::STATIC", 107);
        AddConstVal("cplus::AUTO", 106);
        AddConstVal("cplus::FUNC_SPEC", 105);
        AddConstVal("cplus::TRY_UPPER", 104);
        AddConstVal("cplus::END_CATCH", 103);
        AddConstVal("cplus::END_CATCH_ALL", 102);
        AddConstVal("cplus::AND_CATCH", 101);
        AddConstVal("cplus::CATCH_UPPER", 100);
        AddConstVal("cplus::CATCH_ALL", 99);
        AddConstVal("cplus::END_MESSAGE_MAP", 98);
        AddConstVal("cplus::BEGIN_MESSAGE_MAP", 97);
        AddConstVal("cplus::DECLARE_MESSAGE_MAP", 96);
        AddConstVal("cplus::IMPLEMENT_SERIAL", 95);
        AddConstVal("cplus::IMPLEMENT_DYNCREATE", 94);
        AddConstVal("cplus::IMPLEMENT_DYNAMIC", 93);
        AddConstVal("cplus::DECLARE_SERIAL", 92);
        AddConstVal("cplus::DECLARE_DYNAMIC", 91);
        AddConstVal("cplus::PUSH_FUNCTION", 90);
        AddConstVal("cplus::PUSH_ARGUMENT", 89);
        AddConstVal("cplus::UNDEF_CONTENT", 88);
        AddConstVal("cplus::SMALL_PRAGMA_CONTENT", 87);
        AddConstVal("cplus::PRAGMA_CONTENT", 86);
        AddConstVal("cplus::PRAGMA_ENUM_VERT", 85);
        AddConstVal("cplus::PRAGMA_SPACE_ARROW", 84);
        AddConstVal("cplus::PRAGMA_PARAMETERS", 83);
        AddConstVal("cplus::PRAGMA_PARAMETERS_UNDER", 82);
        AddConstVal("cplus::PRAGMA_FUNC_HEADER", 81);
        AddConstVal("cplus::PRAGMA_INDENT_FUNCTION_TYPE", 80);
        AddConstVal("cplus::PRAGMA_COMMENT_PLUS", 79);
        AddConstVal("cplus::PRAGMA_COMMENT_END", 78);
        AddConstVal("cplus::PRAGMA_COMMENT_MIDDLE", 77);
        AddConstVal("cplus::PRAGMA_COMMENT_START", 76);
        AddConstVal("cplus::PRAGMA_MARGIN", 75);
        AddConstVal("cplus::PRAGMA_DECL_ALIGN", 74);
        AddConstVal("cplus::PRAGMA_ASSIGN_ALIGN", 73);
        AddConstVal("cplus::PRAGMA_SINGLE_SWITCH_INDENT", 72);
        AddConstVal("cplus::PRAGMA_SIMPLIFY", 71);
        AddConstVal("cplus::PRAGMA_BRACE_ALIGN", 70);
        AddConstVal("cplus::PRAGMA_MODE", 69);
        AddConstVal("cplus::PRAGMA_RANGE", 68);
        AddConstVal("cplus::PRAGMA_TAB", 67);
        AddConstVal("cplus::PRAGMA_TAB_DIRECTIVE", 66);
        AddConstVal("cplus::PRAGMA_CONFIG", 65);
        AddConstVal("cplus::PRAGMA_NOT_MANAGED", 64);
        AddConstVal("cplus::PRAGMA_MANAGED", 63);
        AddConstVal("cplus::PRAGMA_NOPRETTY", 62);
        AddConstVal("cplus::PRAGMA_PRETTY", 61);
        AddConstVal("cplus::INCLUDE_LOCAL", 60);
        AddConstVal("cplus::INCLUDE_SYS", 59);
        AddConstVal("cplus::END_LINE", 58);
        AddConstVal("cplus::DEFINE_NAME", 57);
        AddConstVal("cplus::DEFINED_NOT_CONTINUED", 56);
        AddConstVal("cplus::DEFINED_CONTINUED", 55);
        AddConstVal("cplus::POINT", 54);
        AddConstVal("cplus::SLAS", 53);
        AddConstVal("cplus::SLASEGAL", 52);
        AddConstVal("cplus::CARRIAGE_RETURN", 51);
        AddConstVal("cplus::UNDEF_DIR", 50);
        AddConstVal("cplus::DEFINE_DIR", 49);
        AddConstVal("cplus::ERROR_DIR", 48);
        AddConstVal("cplus::PRAGMA_DIR", 47);
        AddConstVal("cplus::LINE_DIR", 46);
        AddConstVal("cplus::ENDIF_DIR", 45);
        AddConstVal("cplus::ELIF_DIR", 44);
        AddConstVal("cplus::ELSE_DIR", 43);
        AddConstVal("cplus::IF_DIR", 42);
        AddConstVal("cplus::IFNDEF_DIR", 41);
        AddConstVal("cplus::IFDEF_DIR", 40);
        AddConstVal("cplus::INCLUDE_DIR", 39);
        AddConstVal("cplus::OCTAL", 38);
        AddConstVal("cplus::UOCTAL", 37);
        AddConstVal("cplus::LOCTAL", 36);
        AddConstVal("cplus::ULOCTAL", 35);
        AddConstVal("cplus::LLOCTAL", 34);
        AddConstVal("cplus::ULLOCTAL", 33);
        AddConstVal("cplus::HEXA", 32);
        AddConstVal("cplus::UHEXA", 31);
        AddConstVal("cplus::LHEXA", 30);
        AddConstVal("cplus::LLHEXA", 29);
        AddConstVal("cplus::ULLHEXA", 28);
        AddConstVal("cplus::ULHEXA", 27);
        AddConstVal("cplus::INTEGER", 26);
        AddConstVal("cplus::FLOATVAL", 25);
        AddConstVal("cplus::UINTEGER", 24);
        AddConstVal("cplus::LINTEGER", 23);
        AddConstVal("cplus::LLINTEGER", 22);
        AddConstVal("cplus::ULLINTEGER", 21);
        AddConstVal("cplus::ULINTEGER", 20);
        AddConstVal("cplus::CHARACT", 19);
        AddConstVal("cplus::STRING", 18);
        AddConstVal("cplus::DQUOTE", 17);
        AddConstVal("cplus::IDENT", 16);
        AddConstVal("cplus::GOTO_REL", 15);
        AddConstVal("cplus::GOTO", 14);
        AddConstVal("cplus::STR", 13);
        AddConstVal("cplus::UNMARK", 12);
        AddConstVal("cplus::MARK", 11);
        AddConstVal("cplus::TAB_VIRT", 10);
        AddConstVal("cplus::TAB", 9);
        AddConstVal("cplus::NEWLINE", 8);
        AddConstVal("cplus::ATTRIBUTS", 7);
        AddConstVal("cplus::PLUS____TIRETIRETIRETIRETIRETIRE____", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_cplus = listConst;
        listConst = inter;
        AddLang("cplus",_arityNode_cplus,listConst_cplus,bri_parse_entry_cplus,340,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
