/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chopb.h"



#line 626 "chopb.met"

#line 626 "chopb.met"
int chopb::SortKeyWord (int defaultValue)
#line 626 "chopb.met"
{
#line 626 "chopb.met"
    register int Value;
#line 626 "chopb.met"
    Value = strcmp(lexEl.string(),"language");
#line 626 "chopb.met"
    if (Value > 0) {
#line 626 "chopb.met"
        Value = strcmp(lexEl.string(),"struct");
#line 626 "chopb.met"
        if (Value > 0) {
#line 626 "chopb.met"
            Value = strcmp(lexEl.string(),"unsigned");
#line 626 "chopb.met"
            if (Value > 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"virtual");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"volatile");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"while")) {
#line 626 "chopb.met"
                            return(WHILE) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"void")) {
#line 626 "chopb.met"
                            return(VOID) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(VOLATILE);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"va_arg");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"value")) {
#line 626 "chopb.met"
                            return(VALUE) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"using")) {
#line 626 "chopb.met"
                            return(USING) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(VA_ARG);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(VIRTUAL);
#line 626 "chopb.met"
            } else if (Value < 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"try");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"typename");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"union")) {
#line 626 "chopb.met"
                            return(UNION) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"typedef")) {
#line 626 "chopb.met"
                            return(TYPEDEF) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(TYPENAME);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"template");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"throw")) {
#line 626 "chopb.met"
                            return(THROW) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"switch")) {
#line 626 "chopb.met"
                            return(SWITCH) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(TEMPLATE);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(TRY);
#line 626 "chopb.met"
            } else 
#line 626 "chopb.met"
                return(UNSIGNED);
#line 626 "chopb.met"
        } else if (Value < 0) {
#line 626 "chopb.met"
            Value = strcmp(lexEl.string(),"protected");
#line 626 "chopb.met"
            if (Value > 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"short");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"sizeof");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"static")) {
#line 626 "chopb.met"
                            return(STATIC) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"signed")) {
#line 626 "chopb.met"
                            return(SIGNED) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(SIZEOF);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"register");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"return")) {
#line 626 "chopb.met"
                            return(RETURN) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"public")) {
#line 626 "chopb.met"
                            return(PUBLIC) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(REGISTER);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(SHORT);
#line 626 "chopb.met"
            } else if (Value < 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"nextl");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"parse");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"private")) {
#line 626 "chopb.met"
                            return(PRIVATE) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"operator")) {
#line 626 "chopb.met"
                            return(OPERATOR) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(PARSE);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"namespace");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"new")) {
#line 626 "chopb.met"
                            return(NEW) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"long")) {
#line 626 "chopb.met"
                            return(LONG) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(NAMESPACE);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(NEXTL);
#line 626 "chopb.met"
            } else 
#line 626 "chopb.met"
                return(PROTECTED);
#line 626 "chopb.met"
        } else 
#line 626 "chopb.met"
            return(STRUCT);
#line 626 "chopb.met"
    } else if (Value < 0) {
#line 626 "chopb.met"
        Value = strcmp(lexEl.string(),"delete");
#line 626 "chopb.met"
        if (Value > 0) {
#line 626 "chopb.met"
            Value = strcmp(lexEl.string(),"forallsons");
#line 626 "chopb.met"
            if (Value > 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"if");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"inline");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"int")) {
#line 626 "chopb.met"
                            return(INT) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"in")) {
#line 626 "chopb.met"
                            return(IN) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(INLINE);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"friend");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"goto")) {
#line 626 "chopb.met"
                            return(GOTO) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"foreach")) {
#line 626 "chopb.met"
                            return(FOREACH) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(FRIEND);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(IF);
#line 626 "chopb.met"
            } else if (Value < 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"enum");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"float");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"for")) {
#line 626 "chopb.met"
                            return(FOR) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"extern")) {
#line 626 "chopb.met"
                            return(EXTERN) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(FLOAT);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"double");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"else")) {
#line 626 "chopb.met"
                            return(ELSE) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"do")) {
#line 626 "chopb.met"
                            return(DO) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(DOUBLE);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(ENUM);
#line 626 "chopb.met"
            } else 
#line 626 "chopb.met"
                return(FORALLSONS);
#line 626 "chopb.met"
        } else if (Value < 0) {
#line 626 "chopb.met"
            Value = strcmp(lexEl.string(),"catch");
#line 626 "chopb.met"
            if (Value > 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"constexpr");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"decltype");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"default")) {
#line 626 "chopb.met"
                            return(DEFAULT) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"continue")) {
#line 626 "chopb.met"
                            return(CONTINUE) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(DECLTYPE);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"class");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"const")) {
#line 626 "chopb.met"
                            return(CONST) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"char")) {
#line 626 "chopb.met"
                            return(CHAR) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(CLASS);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(CONSTEXPR);
#line 626 "chopb.met"
            } else if (Value < 0) {
#line 626 "chopb.met"
                Value = strcmp(lexEl.string(),"asm");
#line 626 "chopb.met"
                if (Value > 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"break");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"case")) {
#line 626 "chopb.met"
                            return(CASE) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"auto")) {
#line 626 "chopb.met"
                            return(AUTO) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(BREAK);
#line 626 "chopb.met"
                } else if (Value < 0) {
#line 626 "chopb.met"
                    Value = strcmp(lexEl.string(),"__asm__");
#line 626 "chopb.met"
                    if (Value > 0) {
#line 626 "chopb.met"
                        if(!strcmp(lexEl.string(),"__attribute__")) {
#line 626 "chopb.met"
                            return(__ATTRIBUTE__) ;
#line 626 "chopb.met"
                        }
#line 626 "chopb.met"
                    } else if (Value < 0) {
#line 626 "chopb.met"
                        Value = strcmp(lexEl.string(),"+____------____");
#line 626 "chopb.met"
                        if (Value > 0) {
#line 626 "chopb.met"
                            return(defaultValue);
#line 626 "chopb.met"
                        } else if (Value < 0) {
#line 626 "chopb.met"
                            if(!strcmp(lexEl.string(),"(")) {
#line 626 "chopb.met"
                                return(POUV) ;
#line 626 "chopb.met"
                            }
#line 626 "chopb.met"
                        } else 
#line 626 "chopb.met"
                            return(PLUS____TIRETIRETIRETIRETIRETIRE____);
#line 626 "chopb.met"
                    } else 
#line 626 "chopb.met"
                        return(__ASM__);
#line 626 "chopb.met"
                } else 
#line 626 "chopb.met"
                    return(ASM);
#line 626 "chopb.met"
            } else 
#line 626 "chopb.met"
                return(CATCH);
#line 626 "chopb.met"
        } else 
#line 626 "chopb.met"
            return(DELETE);
#line 626 "chopb.met"
    } else 
#line 626 "chopb.met"
        return(LANGUAGE);
#line 626 "chopb.met"
    return(defaultValue);
#line 626 "chopb.met"
}
#line 626 "chopb.met"

#line 626 "chopb.met"
int chopb::UpSortKeyWord(int value) 
#line 626 "chopb.met"
{
#line 626 "chopb.met"
    register char * ptSource=lexEl.string();
#line 626 "chopb.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 626 "chopb.met"
    return SortKeyWord (value);
#line 626 "chopb.met"
}
#line 626 "chopb.met"
#line 303 "chopb.met"
int chopb::Lex ()
#line 303 "chopb.met"
{
#line 303 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 303 "chopb.met"
        FreePos(lastContextPos);
#line 303 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 303 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 303 "chopb.met"
        ExtUnputBuf();
#line 303 "chopb.met"
    #ifdef DUMP_COORD
#line 303 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 303 "chopb.met"
    #endif
#line 303 "chopb.met"
    
#line 303 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 303 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 303 "chopb.met"
    tokenAhead = 0;
#line 303 "chopb.met"
    if(LexMeta() != -1){tokenAhead =1; return 1;}
#line 303 "chopb.met"
#line 306 "chopb.met"
    if (! (keepCarriage)){
#line 306 "chopb.met"
#line 307 "chopb.met"
#line 308 "chopb.met"
        ptStockBuf = -1;
#line 308 "chopb.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 308 "chopb.met"
            NextChar() ;
#line 308 "chopb.met"
        ptStockBuf = -1;
#line 308 "chopb.met"
        lexEl.Erase();
#line 308 "chopb.met"
        tokenAhead = 0;
#line 308 "chopb.met"
        oldLine=line,oldCol=col;
#line 308 "chopb.met"
        if ( !lexCallLex) {
#line 308 "chopb.met"
            PUT_COORD_CALL;
#line 308 "chopb.met"
        }
#line 308 "chopb.met"
#line 308 "chopb.met"
#line 308 "chopb.met"
    } else {
#line 308 "chopb.met"
#line 311 "chopb.met"
        if (! (keepAll)){
#line 311 "chopb.met"
#line 312 "chopb.met"
#line 313 "chopb.met"
            ptStockBuf = -1;
#line 313 "chopb.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 313 "chopb.met"
                NextChar() ;
#line 313 "chopb.met"
            ptStockBuf = -1;
#line 313 "chopb.met"
            lexEl.Erase();
#line 313 "chopb.met"
            tokenAhead = 0;
#line 313 "chopb.met"
            oldLine=line,oldCol=col;
#line 313 "chopb.met"
            if ( !lexCallLex) {
#line 313 "chopb.met"
                PUT_COORD_CALL;
#line 313 "chopb.met"
            }
#line 313 "chopb.met"
#line 313 "chopb.met"
#line 313 "chopb.met"
        } else {
#line 313 "chopb.met"
#line 316 "chopb.met"
            ptStockBuf = -1;
#line 316 "chopb.met"
            lexEl.Erase();
#line 316 "chopb.met"
            tokenAhead = 0;
#line 316 "chopb.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 316 "chopb.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 316 "chopb.met"
        }
#line 316 "chopb.met"
    }
#line 316 "chopb.met"
#line 317 "chopb.met"
    int keepCurrCol = col ;
#line 317 "chopb.met"
    switch(c) {
#line 317 "chopb.met"
        case '*' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::ETOIEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '*' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    if (GetStringS("=",1)) {
#line 317 "chopb.met"
                        lexEl.Value = chopb::ETOIETOIEGAL;
#line 317 "chopb.met"
                        firstOnLine = 0;
#line 317 "chopb.met"
                        tokenAhead = 1;
#line 317 "chopb.met"
                        PUT_COORD_CALL;
#line 317 "chopb.met"
                        return(1);
#line 317 "chopb.met"
                    } else {
#line 317 "chopb.met"
                        UnputChar(1);
#line 317 "chopb.met"
                        goto _exitDumpToken50;
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken50 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::ETOI;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '&' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::ETCOEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '&' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::ETCOETCO;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken53 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::ETCO;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '~' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::TILD;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '(' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::POUV;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case ')' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::PFER;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '+' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::PLUSEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '+' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::PLUSPLUS;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken59 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::PLUS;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '-' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::TIREEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '-' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::TIRETIRE;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '>' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    switch(c) {
#line 317 "chopb.met"
                        case '*' :
#line 317 "chopb.met"
                            NextChar();
#line 317 "chopb.met"
                            lexEl.Value = chopb::TIRESUPEETOI;
#line 317 "chopb.met"
                            firstOnLine = 0;
#line 317 "chopb.met"
                            tokenAhead = 1;
#line 317 "chopb.met"
                            PUT_COORD_CALL;
#line 317 "chopb.met"
                            return(1);
#line 317 "chopb.met"
                            break;
#line 317 "chopb.met"
                        _exitDumpToken65 :;
#line 317 "chopb.met"
                        default :
#line 317 "chopb.met"
                            lexEl.Value = chopb::TIRESUPE;
#line 317 "chopb.met"
                            firstOnLine = 0;
#line 317 "chopb.met"
                            tokenAhead = 1;
#line 317 "chopb.met"
                            PUT_COORD_CALL;
#line 317 "chopb.met"
                        
#line 317 "chopb.met"
                            return(1);
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken62 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::TIRE;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case ':' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case ':' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::DPOIDPOI;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken67 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::DPOI;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case ',' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::VIRG;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '.' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '.' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    if (GetStringS(".",1)) {
#line 317 "chopb.met"
                        lexEl.Value = chopb::POINPOINPOIN;
#line 317 "chopb.met"
                        firstOnLine = 0;
#line 317 "chopb.met"
                        tokenAhead = 1;
#line 317 "chopb.met"
                        PUT_COORD_CALL;
#line 317 "chopb.met"
                        return(1);
#line 317 "chopb.met"
                    } else {
#line 317 "chopb.met"
                        UnputChar(1);
#line 317 "chopb.met"
                        goto _exitDumpToken70;
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '*' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::POINETOI;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken70 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    UnputChar(1);
#line 317 "chopb.met"
                goto _exitDumpToken0;
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '=' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::EGALEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken73 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::EGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case ']' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::CFER;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '%' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::POURCEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken76 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::POURC;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '<' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '<' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    switch(c) {
#line 317 "chopb.met"
                        case '=' :
#line 317 "chopb.met"
                            NextChar();
#line 317 "chopb.met"
                            lexEl.Value = chopb::INFEINFEEGAL;
#line 317 "chopb.met"
                            firstOnLine = 0;
#line 317 "chopb.met"
                            tokenAhead = 1;
#line 317 "chopb.met"
                            PUT_COORD_CALL;
#line 317 "chopb.met"
                            return(1);
#line 317 "chopb.met"
                            break;
#line 317 "chopb.met"
                        _exitDumpToken79 :;
#line 317 "chopb.met"
                        default :
#line 317 "chopb.met"
                            lexEl.Value = chopb::INFEINFE;
#line 317 "chopb.met"
                            firstOnLine = 0;
#line 317 "chopb.met"
                            tokenAhead = 1;
#line 317 "chopb.met"
                            PUT_COORD_CALL;
#line 317 "chopb.met"
                        
#line 317 "chopb.met"
                            return(1);
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::INFEEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '>' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::INFESUPE;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case 'S' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    if ( c== 'E') {
#line 317 "chopb.met"
                        NextChar();
#line 317 "chopb.met"
                        if ( c== 'P') {
#line 317 "chopb.met"
                            NextChar();
#line 317 "chopb.met"
                            switch(c) {
#line 317 "chopb.met"
                                case 'A' :
#line 317 "chopb.met"
                                    NextChar();
#line 317 "chopb.met"
                                    if (GetStringS(">",1)) {
#line 317 "chopb.met"
                                        lexEl.Value = chopb::INFESEPASUPE;
#line 317 "chopb.met"
                                        firstOnLine = 0;
#line 317 "chopb.met"
                                        tokenAhead = 1;
#line 317 "chopb.met"
                                        PUT_COORD_CALL;
#line 317 "chopb.met"
                                        return(1);
#line 317 "chopb.met"
                                    } else {
#line 317 "chopb.met"
                                        UnputChar(1);
#line 317 "chopb.met"
                                        goto _exitDumpToken85;
#line 317 "chopb.met"
                                    }
#line 317 "chopb.met"
                                    break;
#line 317 "chopb.met"
                                case 'B' :
#line 317 "chopb.met"
                                    NextChar();
#line 317 "chopb.met"
                                    if (GetStringS(">",1)) {
#line 317 "chopb.met"
                                        lexEl.Value = chopb::INFESEPBSUPE;
#line 317 "chopb.met"
                                        firstOnLine = 0;
#line 317 "chopb.met"
                                        tokenAhead = 1;
#line 317 "chopb.met"
                                        PUT_COORD_CALL;
#line 317 "chopb.met"
                                        return(1);
#line 317 "chopb.met"
                                    } else {
#line 317 "chopb.met"
                                        UnputChar(1);
#line 317 "chopb.met"
                                        goto _exitDumpToken85;
#line 317 "chopb.met"
                                    }
#line 317 "chopb.met"
                                    break;
#line 317 "chopb.met"
                                case 'O' :
#line 317 "chopb.met"
                                    NextChar();
#line 317 "chopb.met"
                                    if (GetStringS(">",1)) {
#line 317 "chopb.met"
                                        lexEl.Value = chopb::INFESEPOSUPE;
#line 317 "chopb.met"
                                        firstOnLine = 0;
#line 317 "chopb.met"
                                        tokenAhead = 1;
#line 317 "chopb.met"
                                        PUT_COORD_CALL;
#line 317 "chopb.met"
                                        return(1);
#line 317 "chopb.met"
                                    } else {
#line 317 "chopb.met"
                                        UnputChar(1);
#line 317 "chopb.met"
                                        goto _exitDumpToken85;
#line 317 "chopb.met"
                                    }
#line 317 "chopb.met"
                                    break;
#line 317 "chopb.met"
                                _exitDumpToken85 :;
#line 317 "chopb.met"
                                default :
#line 317 "chopb.met"
                                    UnputChar(3);
#line 317 "chopb.met"
                                goto _exitDumpToken78;
#line 317 "chopb.met"
                            }
#line 317 "chopb.met"
                        } else {
#line 317 "chopb.met"
                            UnputChar(2);
#line 317 "chopb.met"
                            goto _exitDumpToken78;
#line 317 "chopb.met"
                        }
#line 317 "chopb.met"
                    } else {
#line 317 "chopb.met"
                        UnputChar(1);
#line 317 "chopb.met"
                        goto _exitDumpToken78;
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken78 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::INFE;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '>' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '>' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    switch(c) {
#line 317 "chopb.met"
                        case '=' :
#line 317 "chopb.met"
                            NextChar();
#line 317 "chopb.met"
                            lexEl.Value = chopb::SUPESUPEEGAL;
#line 317 "chopb.met"
                            firstOnLine = 0;
#line 317 "chopb.met"
                            tokenAhead = 1;
#line 317 "chopb.met"
                            PUT_COORD_CALL;
#line 317 "chopb.met"
                            return(1);
#line 317 "chopb.met"
                            break;
#line 317 "chopb.met"
                        _exitDumpToken90 :;
#line 317 "chopb.met"
                        default :
#line 317 "chopb.met"
                            lexEl.Value = chopb::SUPESUPE;
#line 317 "chopb.met"
                            firstOnLine = 0;
#line 317 "chopb.met"
                            tokenAhead = 1;
#line 317 "chopb.met"
                            PUT_COORD_CALL;
#line 317 "chopb.met"
                        
#line 317 "chopb.met"
                            return(1);
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::SUPEEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken89 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::SUPE;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '|' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::VBAREGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                case '|' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::VBARVBAR;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken93 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::VBAR;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '^' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::CHAPEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken96 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::CHAP;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '{' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '{' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::AOUVAOUV;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken98 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::AOUV;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '}' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '}' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::AFERAFER;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken100 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::AFER;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '?' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::INTE;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case ';' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::PVIR;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '[' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::COUV;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '!' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            switch(c) {
#line 317 "chopb.met"
                case '=' :
#line 317 "chopb.met"
                    NextChar();
#line 317 "chopb.met"
                    lexEl.Value = chopb::EXCLEGAL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
                    break;
#line 317 "chopb.met"
                _exitDumpToken105 :;
#line 317 "chopb.met"
                default :
#line 317 "chopb.met"
                    lexEl.Value = chopb::EXCL;
#line 317 "chopb.met"
                    firstOnLine = 0;
#line 317 "chopb.met"
                    tokenAhead = 1;
#line 317 "chopb.met"
                    PUT_COORD_CALL;
#line 317 "chopb.met"
                
#line 317 "chopb.met"
                    return(1);
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '_' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            if (GetStringS("_extension__",1)) {
#line 317 "chopb.met"
                lexEl.Value = chopb::__EXTENSION__;
#line 317 "chopb.met"
                firstOnLine = 0;
#line 317 "chopb.met"
                tokenAhead = 1;
#line 317 "chopb.met"
                PUT_COORD_CALL;
#line 317 "chopb.met"
                return(1);
#line 317 "chopb.met"
            } else {
#line 317 "chopb.met"
                UnputChar(1);
#line 317 "chopb.met"
                goto _exitDumpToken0;
#line 317 "chopb.met"
            }
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        case '@' :
#line 317 "chopb.met"
            NextChar();
#line 317 "chopb.met"
            lexEl.Value = chopb::ARRO;
#line 317 "chopb.met"
            firstOnLine = 0;
#line 317 "chopb.met"
            tokenAhead = 1;
#line 317 "chopb.met"
            PUT_COORD_CALL;
#line 317 "chopb.met"
            return(1);
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
        _exitDumpToken0 :;
#line 317 "chopb.met"
        default :
#line 317 "chopb.met"
            break;
#line 317 "chopb.met"
    }
#line 317 "chopb.met"
    col = keepCurrCol ;
#line 317 "chopb.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 317 "chopb.met"
    lexEl.Erase();
#line 317 "chopb.met"
    tokenAhead = 0;
#line 317 "chopb.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 317 "chopb.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 317 "chopb.met"
#line 318 "chopb.met"
    switch (c) {
#line 318 "chopb.met"
#line 319 "chopb.met"
        case 'a' :
#line 319 "chopb.met"
        case 'b' :
#line 319 "chopb.met"
        case 'c' :
#line 319 "chopb.met"
        case 'd' :
#line 319 "chopb.met"
        case 'e' :
#line 319 "chopb.met"
        case 'f' :
#line 319 "chopb.met"
        case 'g' :
#line 319 "chopb.met"
        case 'h' :
#line 319 "chopb.met"
        case 'i' :
#line 319 "chopb.met"
        case 'j' :
#line 319 "chopb.met"
        case 'k' :
#line 319 "chopb.met"
        case 'l' :
#line 319 "chopb.met"
        case 'm' :
#line 319 "chopb.met"
        case 'n' :
#line 319 "chopb.met"
        case 'o' :
#line 319 "chopb.met"
        case 'p' :
#line 319 "chopb.met"
        case 'q' :
#line 319 "chopb.met"
        case 'r' :
#line 319 "chopb.met"
        case 's' :
#line 319 "chopb.met"
        case 't' :
#line 319 "chopb.met"
        case 'u' :
#line 319 "chopb.met"
        case 'v' :
#line 319 "chopb.met"
        case 'w' :
#line 319 "chopb.met"
        case 'x' :
#line 319 "chopb.met"
        case 'y' :
#line 319 "chopb.met"
        case 'z' :
#line 319 "chopb.met"
        case 'A' :
#line 319 "chopb.met"
        case 'B' :
#line 319 "chopb.met"
        case 'C' :
#line 319 "chopb.met"
        case 'D' :
#line 319 "chopb.met"
        case 'E' :
#line 319 "chopb.met"
        case 'F' :
#line 319 "chopb.met"
        case 'G' :
#line 319 "chopb.met"
        case 'H' :
#line 319 "chopb.met"
        case 'I' :
#line 319 "chopb.met"
        case 'J' :
#line 319 "chopb.met"
        case 'K' :
#line 319 "chopb.met"
        case 'L' :
#line 319 "chopb.met"
        case 'M' :
#line 319 "chopb.met"
        case 'N' :
#line 319 "chopb.met"
        case 'O' :
#line 319 "chopb.met"
        case 'P' :
#line 319 "chopb.met"
        case 'Q' :
#line 319 "chopb.met"
        case 'R' :
#line 319 "chopb.met"
        case 'S' :
#line 319 "chopb.met"
        case 'T' :
#line 319 "chopb.met"
        case 'U' :
#line 319 "chopb.met"
        case 'V' :
#line 319 "chopb.met"
        case 'W' :
#line 319 "chopb.met"
        case 'X' :
#line 319 "chopb.met"
        case 'Y' :
#line 319 "chopb.met"
        case 'Z' :
#line 319 "chopb.met"
        case '_' :
#line 319 "chopb.met"
#line 320 "chopb.met"
#line 322 "chopb.met"
            while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 322 "chopb.met"
#line 323 "chopb.met"
                {
#line 323 "chopb.met"
                    lexEl . AddChar(c);
#line 323 "chopb.met"
                    NextChar();
#line 323 "chopb.met"
                }
#line 323 "chopb.met"
            } 
#line 323 "chopb.met"
#line 324 "chopb.met"
            {
#line 324 "chopb.met"
                firstOnLine = 0 ; 
#line 324 "chopb.met"
                tokenAhead =1;
#line 324 "chopb.met"
                lexEl.Value = (SortKeyWord (IDENT));
#line 324 "chopb.met"
                PUT_COORD_CALL;
#line 324 "chopb.met"
                return(1);
#line 324 "chopb.met"
            }
#line 324 "chopb.met"
#line 324 "chopb.met"
            break ;
#line 324 "chopb.met"
#line 326 "chopb.met"
        case '"' :
#line 326 "chopb.met"
#line 327 "chopb.met"
            if (noString){
#line 327 "chopb.met"
#line 328 "chopb.met"
#line 329 "chopb.met"
                {
#line 329 "chopb.met"
                    lexEl . AddChar(c);
#line 329 "chopb.met"
                    NextChar();
#line 329 "chopb.met"
                }
#line 329 "chopb.met"
#line 330 "chopb.met"
                {
#line 330 "chopb.met"
                    firstOnLine = 0 ; 
#line 330 "chopb.met"
                    tokenAhead =1;
#line 330 "chopb.met"
                    lexEl.Value=DQUOTE;
#line 330 "chopb.met"
                    PUT_COORD_CALL;
#line 330 "chopb.met"
                    return(1);
#line 330 "chopb.met"
                }
#line 330 "chopb.met"
#line 330 "chopb.met"
#line 330 "chopb.met"
            } else {
#line 330 "chopb.met"
#line 333 "chopb.met"
#line 334 "chopb.met"
                if (!(((c == '"'))&& NextChar())) ;
#line 334 "chopb.met"
#line 336 "chopb.met"
                while (c != EOF) { 
#line 336 "chopb.met"
#line 338 "chopb.met"
                    switch (c) {
#line 338 "chopb.met"
#line 339 "chopb.met"
                        case '\r' :
#line 339 "chopb.met"
                        case '\n' :
#line 339 "chopb.met"
#line 339 "chopb.met"
                            {
#line 339 "chopb.met"
                                firstOnLine = 0 ; 
#line 339 "chopb.met"
                                tokenAhead =1;
#line 339 "chopb.met"
                                lexEl.Value=STRING;
#line 339 "chopb.met"
                                PUT_COORD_CALL;
#line 339 "chopb.met"
                                return(1);
#line 339 "chopb.met"
                            }
#line 339 "chopb.met"
                            break ;
#line 339 "chopb.met"
#line 340 "chopb.met"
                        case '"' :
#line 340 "chopb.met"
                            NextChar();
#line 340 "chopb.met"
#line 340 "chopb.met"
                            {
#line 340 "chopb.met"
                                firstOnLine = 0 ; 
#line 340 "chopb.met"
                                tokenAhead =1;
#line 340 "chopb.met"
                                lexEl.Value=STRING;
#line 340 "chopb.met"
                                PUT_COORD_CALL;
#line 340 "chopb.met"
                                return(1);
#line 340 "chopb.met"
                            }
#line 340 "chopb.met"
                            break ;
#line 340 "chopb.met"
#line 341 "chopb.met"
                        case '\\' :
#line 341 "chopb.met"
                            NextChar();
#line 341 "chopb.met"
#line 342 "chopb.met"
#line 343 "chopb.met"
                            {
#line 343 "chopb.met"
                                lexEl.AddString("\\");
#line 343 "chopb.met"
                            }
#line 343 "chopb.met"
#line 344 "chopb.met"
                            if (! (((c == '\r')))){
#line 344 "chopb.met"
#line 347 "chopb.met"
                                {
#line 347 "chopb.met"
                                    lexEl . AddChar(c);
#line 347 "chopb.met"
                                    NextChar();
#line 347 "chopb.met"
                                }
#line 347 "chopb.met"
                            } else {
#line 347 "chopb.met"
#line 350 "chopb.met"
                                if (!(c != EOF&& NextChar())) ;
#line 350 "chopb.met"
                            }
#line 350 "chopb.met"
#line 350 "chopb.met"
                            break ;
#line 350 "chopb.met"
#line 352 "chopb.met"
                        default : 
#line 352 "chopb.met"
                             if (c!= EOF) {
#line 352 "chopb.met"
#line 352 "chopb.met"
                                {
#line 352 "chopb.met"
                                    lexEl . AddChar(c);
#line 352 "chopb.met"
                                    NextChar();
#line 352 "chopb.met"
                                }
#line 352 "chopb.met"
                            }
#line 352 "chopb.met"
                            break ;
#line 352 "chopb.met"
                    }
#line 352 "chopb.met"
                } 
#line 352 "chopb.met"
#line 352 "chopb.met"
            }
#line 352 "chopb.met"
            break ;
#line 352 "chopb.met"
#line 355 "chopb.met"
        case '\'' :
#line 355 "chopb.met"
            NextChar();
#line 355 "chopb.met"
#line 357 "chopb.met"
            while (c != EOF) { 
#line 357 "chopb.met"
#line 359 "chopb.met"
                switch (c) {
#line 359 "chopb.met"
#line 360 "chopb.met"
                    case '\\' :
#line 360 "chopb.met"
                        NextChar();
#line 360 "chopb.met"
#line 361 "chopb.met"
#line 362 "chopb.met"
                        {
#line 362 "chopb.met"
                            lexEl.AddString("\\");
#line 362 "chopb.met"
                        }
#line 362 "chopb.met"
#line 363 "chopb.met"
                        {
#line 363 "chopb.met"
                            lexEl . AddChar(c);
#line 363 "chopb.met"
                            NextChar();
#line 363 "chopb.met"
                        }
#line 363 "chopb.met"
#line 363 "chopb.met"
                        break ;
#line 363 "chopb.met"
#line 365 "chopb.met"
                    case '\'' :
#line 365 "chopb.met"
                        NextChar();
#line 365 "chopb.met"
#line 366 "chopb.met"
#line 367 "chopb.met"
                        {
#line 367 "chopb.met"
                            firstOnLine = 0 ; 
#line 367 "chopb.met"
                            tokenAhead =1;
#line 367 "chopb.met"
                            lexEl.Value=CHARACT;
#line 367 "chopb.met"
                            PUT_COORD_CALL;
#line 367 "chopb.met"
                            return(1);
#line 367 "chopb.met"
                        }
#line 367 "chopb.met"
#line 367 "chopb.met"
                        break ;
#line 367 "chopb.met"
#line 369 "chopb.met"
                    default : 
#line 369 "chopb.met"
                         if (c!= EOF) {
#line 369 "chopb.met"
#line 369 "chopb.met"
                            {
#line 369 "chopb.met"
                                lexEl . AddChar(c);
#line 369 "chopb.met"
                                NextChar();
#line 369 "chopb.met"
                            }
#line 369 "chopb.met"
                        }
#line 369 "chopb.met"
                        break ;
#line 369 "chopb.met"
                }
#line 369 "chopb.met"
            } 
#line 369 "chopb.met"
            break ;
#line 369 "chopb.met"
#line 371 "chopb.met"
        case '1' :
#line 371 "chopb.met"
        case '2' :
#line 371 "chopb.met"
        case '3' :
#line 371 "chopb.met"
        case '4' :
#line 371 "chopb.met"
        case '5' :
#line 371 "chopb.met"
        case '6' :
#line 371 "chopb.met"
        case '7' :
#line 371 "chopb.met"
        case '8' :
#line 371 "chopb.met"
        case '9' :
#line 371 "chopb.met"
#line 373 "chopb.met"
#line 375 "chopb.met"
            while ((('0' <= c && c <= '9'))) { 
#line 375 "chopb.met"
#line 376 "chopb.met"
                {
#line 376 "chopb.met"
                    lexEl . AddChar(c);
#line 376 "chopb.met"
                    NextChar();
#line 376 "chopb.met"
                }
#line 376 "chopb.met"
            } 
#line 376 "chopb.met"
#line 377 "chopb.met"
            if (! (c != EOF)){
#line 377 "chopb.met"
#line 378 "chopb.met"
#line 379 "chopb.met"
                {
#line 379 "chopb.met"
                    firstOnLine = 0 ; 
#line 379 "chopb.met"
                    tokenAhead =1;
#line 379 "chopb.met"
                    lexEl.Value=INTEGER;
#line 379 "chopb.met"
                    PUT_COORD_CALL;
#line 379 "chopb.met"
                    return(1);
#line 379 "chopb.met"
                }
#line 379 "chopb.met"
#line 379 "chopb.met"
#line 379 "chopb.met"
            }
#line 379 "chopb.met"
#line 381 "chopb.met"
            switch (c) {
#line 381 "chopb.met"
#line 382 "chopb.met"
                case 'l' :
#line 382 "chopb.met"
                case 'L' :
#line 382 "chopb.met"
                    NextChar();
#line 382 "chopb.met"
#line 383 "chopb.met"
                    switch (c) {
#line 383 "chopb.met"
#line 384 "chopb.met"
                        case 'u' :
#line 384 "chopb.met"
                        case 'U' :
#line 384 "chopb.met"
                            NextChar();
#line 384 "chopb.met"
#line 384 "chopb.met"
                            {
#line 384 "chopb.met"
                                firstOnLine = 0 ; 
#line 384 "chopb.met"
                                tokenAhead =1;
#line 384 "chopb.met"
                                lexEl.Value=ULINTEGER;
#line 384 "chopb.met"
                                PUT_COORD_CALL;
#line 384 "chopb.met"
                                return(1);
#line 384 "chopb.met"
                            }
#line 384 "chopb.met"
                            break ;
#line 384 "chopb.met"
#line 385 "chopb.met"
                        case 'L' :
#line 385 "chopb.met"
                        case 'l' :
#line 385 "chopb.met"
                            NextChar();
#line 385 "chopb.met"
#line 386 "chopb.met"
#line 387 "chopb.met"
                            switch (c) {
#line 387 "chopb.met"
#line 388 "chopb.met"
                                case 'u' :
#line 388 "chopb.met"
                                case 'U' :
#line 388 "chopb.met"
                                    NextChar();
#line 388 "chopb.met"
#line 388 "chopb.met"
                                    {
#line 388 "chopb.met"
                                        firstOnLine = 0 ; 
#line 388 "chopb.met"
                                        tokenAhead =1;
#line 388 "chopb.met"
                                        lexEl.Value=ULLINTEGER;
#line 388 "chopb.met"
                                        PUT_COORD_CALL;
#line 388 "chopb.met"
                                        return(1);
#line 388 "chopb.met"
                                    }
#line 388 "chopb.met"
                                    break ;
#line 388 "chopb.met"
#line 389 "chopb.met"
                                default : 
#line 389 "chopb.met"
                                     if (c!= EOF) {
#line 389 "chopb.met"
#line 389 "chopb.met"
                                        {
#line 389 "chopb.met"
                                            firstOnLine = 0 ; 
#line 389 "chopb.met"
                                            tokenAhead =1;
#line 389 "chopb.met"
                                            lexEl.Value=LLINTEGER;
#line 389 "chopb.met"
                                            PUT_COORD_CALL;
#line 389 "chopb.met"
                                            return(1);
#line 389 "chopb.met"
                                        }
#line 389 "chopb.met"
                                    }
#line 389 "chopb.met"
                                    break ;
#line 389 "chopb.met"
                            }
#line 389 "chopb.met"
#line 389 "chopb.met"
                            break ;
#line 389 "chopb.met"
#line 392 "chopb.met"
                        default : 
#line 392 "chopb.met"
                             if (c!= EOF) {
#line 392 "chopb.met"
#line 392 "chopb.met"
                                {
#line 392 "chopb.met"
                                    firstOnLine = 0 ; 
#line 392 "chopb.met"
                                    tokenAhead =1;
#line 392 "chopb.met"
                                    lexEl.Value=LINTEGER;
#line 392 "chopb.met"
                                    PUT_COORD_CALL;
#line 392 "chopb.met"
                                    return(1);
#line 392 "chopb.met"
                                }
#line 392 "chopb.met"
                            }
#line 392 "chopb.met"
                            break ;
#line 392 "chopb.met"
                    }
#line 392 "chopb.met"
                    break ;
#line 392 "chopb.met"
#line 394 "chopb.met"
                case 'u' :
#line 394 "chopb.met"
                case 'U' :
#line 394 "chopb.met"
                    NextChar();
#line 394 "chopb.met"
#line 395 "chopb.met"
                    switch (c) {
#line 395 "chopb.met"
#line 396 "chopb.met"
                        case 'l' :
#line 396 "chopb.met"
                        case 'L' :
#line 396 "chopb.met"
                            NextChar();
#line 396 "chopb.met"
#line 397 "chopb.met"
#line 398 "chopb.met"
                            switch (c) {
#line 398 "chopb.met"
#line 399 "chopb.met"
                                case 'L' :
#line 399 "chopb.met"
                                case 'l' :
#line 399 "chopb.met"
                                    NextChar();
#line 399 "chopb.met"
#line 399 "chopb.met"
                                    {
#line 399 "chopb.met"
                                        firstOnLine = 0 ; 
#line 399 "chopb.met"
                                        tokenAhead =1;
#line 399 "chopb.met"
                                        lexEl.Value=ULLINTEGER;
#line 399 "chopb.met"
                                        PUT_COORD_CALL;
#line 399 "chopb.met"
                                        return(1);
#line 399 "chopb.met"
                                    }
#line 399 "chopb.met"
                                    break ;
#line 399 "chopb.met"
#line 400 "chopb.met"
                                default : 
#line 400 "chopb.met"
                                     if (c!= EOF) {
#line 400 "chopb.met"
#line 400 "chopb.met"
                                        {
#line 400 "chopb.met"
                                            firstOnLine = 0 ; 
#line 400 "chopb.met"
                                            tokenAhead =1;
#line 400 "chopb.met"
                                            lexEl.Value=ULINTEGER;
#line 400 "chopb.met"
                                            PUT_COORD_CALL;
#line 400 "chopb.met"
                                            return(1);
#line 400 "chopb.met"
                                        }
#line 400 "chopb.met"
                                    }
#line 400 "chopb.met"
                                    break ;
#line 400 "chopb.met"
                            }
#line 400 "chopb.met"
#line 400 "chopb.met"
                            break ;
#line 400 "chopb.met"
#line 403 "chopb.met"
                        default : 
#line 403 "chopb.met"
                             if (c!= EOF) {
#line 403 "chopb.met"
#line 403 "chopb.met"
                                {
#line 403 "chopb.met"
                                    firstOnLine = 0 ; 
#line 403 "chopb.met"
                                    tokenAhead =1;
#line 403 "chopb.met"
                                    lexEl.Value=UINTEGER;
#line 403 "chopb.met"
                                    PUT_COORD_CALL;
#line 403 "chopb.met"
                                    return(1);
#line 403 "chopb.met"
                                }
#line 403 "chopb.met"
                            }
#line 403 "chopb.met"
                            break ;
#line 403 "chopb.met"
                    }
#line 403 "chopb.met"
                    break ;
#line 403 "chopb.met"
#line 405 "chopb.met"
                case 'e' :
#line 405 "chopb.met"
                case 'E' :
#line 405 "chopb.met"
                    NextChar();
#line 405 "chopb.met"
#line 406 "chopb.met"
#line 407 "chopb.met"
                    {
#line 407 "chopb.met"
                        lexEl.AddString("e");
#line 407 "chopb.met"
                    }
#line 407 "chopb.met"
#line 408 "chopb.met"
                    if (((c == '+')||(c == '-'))){
#line 408 "chopb.met"
#line 409 "chopb.met"
                        {
#line 409 "chopb.met"
                            lexEl . AddChar(c);
#line 409 "chopb.met"
                            NextChar();
#line 409 "chopb.met"
                        }
#line 409 "chopb.met"
                    }
#line 409 "chopb.met"
#line 410 "chopb.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 410 "chopb.met"
#line 411 "chopb.met"
                        {
#line 411 "chopb.met"
                            lexEl . AddChar(c);
#line 411 "chopb.met"
                            NextChar();
#line 411 "chopb.met"
                        }
#line 411 "chopb.met"
                    } 
#line 411 "chopb.met"
#line 412 "chopb.met"
                    switch (c) {
#line 412 "chopb.met"
#line 413 "chopb.met"
                        case 'f' :
#line 413 "chopb.met"
#line 413 "chopb.met"
                            {
#line 413 "chopb.met"
                                lexEl . AddChar(c);
#line 413 "chopb.met"
                                NextChar();
#line 413 "chopb.met"
                            }
#line 413 "chopb.met"
                            break ;
#line 413 "chopb.met"
#line 414 "chopb.met"
                        case 'F' :
#line 414 "chopb.met"
#line 414 "chopb.met"
                            {
#line 414 "chopb.met"
                                lexEl . AddChar(c);
#line 414 "chopb.met"
                                NextChar();
#line 414 "chopb.met"
                            }
#line 414 "chopb.met"
                            break ;
#line 414 "chopb.met"
#line 415 "chopb.met"
                        case 'l' :
#line 415 "chopb.met"
#line 415 "chopb.met"
                            {
#line 415 "chopb.met"
                                lexEl . AddChar(c);
#line 415 "chopb.met"
                                NextChar();
#line 415 "chopb.met"
                            }
#line 415 "chopb.met"
                            break ;
#line 415 "chopb.met"
#line 416 "chopb.met"
                        case 'L' :
#line 416 "chopb.met"
#line 416 "chopb.met"
                            {
#line 416 "chopb.met"
                                lexEl . AddChar(c);
#line 416 "chopb.met"
                                NextChar();
#line 416 "chopb.met"
                            }
#line 416 "chopb.met"
                            break ;
#line 416 "chopb.met"
                    }
#line 416 "chopb.met"
#line 418 "chopb.met"
                    {
#line 418 "chopb.met"
                        firstOnLine = 0 ; 
#line 418 "chopb.met"
                        tokenAhead =1;
#line 418 "chopb.met"
                        lexEl.Value=FLOATVAL;
#line 418 "chopb.met"
                        PUT_COORD_CALL;
#line 418 "chopb.met"
                        return(1);
#line 418 "chopb.met"
                    }
#line 418 "chopb.met"
#line 418 "chopb.met"
                    break ;
#line 418 "chopb.met"
#line 420 "chopb.met"
                case '.' :
#line 420 "chopb.met"
#line 421 "chopb.met"
#line 422 "chopb.met"
                    {
#line 422 "chopb.met"
                        lexEl . AddChar(c);
#line 422 "chopb.met"
                        NextChar();
#line 422 "chopb.met"
                    }
#line 422 "chopb.met"
#line 423 "chopb.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 423 "chopb.met"
#line 424 "chopb.met"
                        {
#line 424 "chopb.met"
                            lexEl . AddChar(c);
#line 424 "chopb.met"
                            NextChar();
#line 424 "chopb.met"
                        }
#line 424 "chopb.met"
                    } 
#line 424 "chopb.met"
#line 425 "chopb.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 425 "chopb.met"
#line 426 "chopb.met"
#line 427 "chopb.met"
                        {
#line 427 "chopb.met"
                            lexEl.AddString("e");
#line 427 "chopb.met"
                        }
#line 427 "chopb.met"
#line 428 "chopb.met"
                        if (((c == '+')||(c == '-'))){
#line 428 "chopb.met"
#line 429 "chopb.met"
                            {
#line 429 "chopb.met"
                                lexEl . AddChar(c);
#line 429 "chopb.met"
                                NextChar();
#line 429 "chopb.met"
                            }
#line 429 "chopb.met"
                        }
#line 429 "chopb.met"
#line 430 "chopb.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 430 "chopb.met"
#line 431 "chopb.met"
                            {
#line 431 "chopb.met"
                                lexEl . AddChar(c);
#line 431 "chopb.met"
                                NextChar();
#line 431 "chopb.met"
                            }
#line 431 "chopb.met"
                        } 
#line 431 "chopb.met"
#line 431 "chopb.met"
#line 431 "chopb.met"
                    }
#line 431 "chopb.met"
#line 433 "chopb.met"
                    switch (c) {
#line 433 "chopb.met"
#line 434 "chopb.met"
                        case 'f' :
#line 434 "chopb.met"
#line 434 "chopb.met"
                            {
#line 434 "chopb.met"
                                lexEl . AddChar(c);
#line 434 "chopb.met"
                                NextChar();
#line 434 "chopb.met"
                            }
#line 434 "chopb.met"
                            break ;
#line 434 "chopb.met"
#line 435 "chopb.met"
                        case 'F' :
#line 435 "chopb.met"
#line 435 "chopb.met"
                            {
#line 435 "chopb.met"
                                lexEl . AddChar(c);
#line 435 "chopb.met"
                                NextChar();
#line 435 "chopb.met"
                            }
#line 435 "chopb.met"
                            break ;
#line 435 "chopb.met"
#line 436 "chopb.met"
                        case 'l' :
#line 436 "chopb.met"
#line 436 "chopb.met"
                            {
#line 436 "chopb.met"
                                lexEl . AddChar(c);
#line 436 "chopb.met"
                                NextChar();
#line 436 "chopb.met"
                            }
#line 436 "chopb.met"
                            break ;
#line 436 "chopb.met"
#line 437 "chopb.met"
                        case 'L' :
#line 437 "chopb.met"
#line 437 "chopb.met"
                            {
#line 437 "chopb.met"
                                lexEl . AddChar(c);
#line 437 "chopb.met"
                                NextChar();
#line 437 "chopb.met"
                            }
#line 437 "chopb.met"
                            break ;
#line 437 "chopb.met"
                    }
#line 437 "chopb.met"
#line 439 "chopb.met"
                    {
#line 439 "chopb.met"
                        firstOnLine = 0 ; 
#line 439 "chopb.met"
                        tokenAhead =1;
#line 439 "chopb.met"
                        lexEl.Value=FLOATVAL;
#line 439 "chopb.met"
                        PUT_COORD_CALL;
#line 439 "chopb.met"
                        return(1);
#line 439 "chopb.met"
                    }
#line 439 "chopb.met"
#line 439 "chopb.met"
                    break ;
#line 439 "chopb.met"
#line 441 "chopb.met"
                default : 
#line 441 "chopb.met"
                     if (c!= EOF) {
#line 441 "chopb.met"
#line 441 "chopb.met"
                        {
#line 441 "chopb.met"
                            firstOnLine = 0 ; 
#line 441 "chopb.met"
                            tokenAhead =1;
#line 441 "chopb.met"
                            lexEl.Value=INTEGER;
#line 441 "chopb.met"
                            PUT_COORD_CALL;
#line 441 "chopb.met"
                            return(1);
#line 441 "chopb.met"
                        }
#line 441 "chopb.met"
                    }
#line 441 "chopb.met"
                    break ;
#line 441 "chopb.met"
            }
#line 441 "chopb.met"
#line 441 "chopb.met"
            break ;
#line 441 "chopb.met"
#line 444 "chopb.met"
        case '0' :
#line 444 "chopb.met"
            NextChar();
#line 444 "chopb.met"
#line 445 "chopb.met"
#line 446 "chopb.met"
            if (! (c != EOF)){
#line 446 "chopb.met"
#line 447 "chopb.met"
#line 448 "chopb.met"
                {
#line 448 "chopb.met"
                    lexEl.AddString("0");
#line 448 "chopb.met"
                }
#line 448 "chopb.met"
#line 449 "chopb.met"
                {
#line 449 "chopb.met"
                    firstOnLine = 0 ; 
#line 449 "chopb.met"
                    tokenAhead =1;
#line 449 "chopb.met"
                    lexEl.Value=INTEGER;
#line 449 "chopb.met"
                    PUT_COORD_CALL;
#line 449 "chopb.met"
                    return(1);
#line 449 "chopb.met"
                }
#line 449 "chopb.met"
#line 449 "chopb.met"
#line 449 "chopb.met"
            }
#line 449 "chopb.met"
#line 451 "chopb.met"
            switch (c) {
#line 451 "chopb.met"
#line 452 "chopb.met"
                case 'x' :
#line 452 "chopb.met"
                case 'X' :
#line 452 "chopb.met"
                    NextChar();
#line 452 "chopb.met"
#line 453 "chopb.met"
#line 454 "chopb.met"
                    while ((('0' <= c && c <= '9')||('a' <= c && c <= 'f')||('A' <= c && c <= 'F'))) { 
#line 454 "chopb.met"
#line 455 "chopb.met"
                        {
#line 455 "chopb.met"
                            lexEl . AddChar(c);
#line 455 "chopb.met"
                            NextChar();
#line 455 "chopb.met"
                        }
#line 455 "chopb.met"
                    } 
#line 455 "chopb.met"
#line 456 "chopb.met"
                    switch (c) {
#line 456 "chopb.met"
#line 457 "chopb.met"
                        case 'l' :
#line 457 "chopb.met"
                        case 'L' :
#line 457 "chopb.met"
                            NextChar();
#line 457 "chopb.met"
#line 458 "chopb.met"
                            switch (c) {
#line 458 "chopb.met"
#line 459 "chopb.met"
                                case 'u' :
#line 459 "chopb.met"
                                case 'U' :
#line 459 "chopb.met"
                                    NextChar();
#line 459 "chopb.met"
#line 459 "chopb.met"
                                    {
#line 459 "chopb.met"
                                        firstOnLine = 0 ; 
#line 459 "chopb.met"
                                        tokenAhead =1;
#line 459 "chopb.met"
                                        lexEl.Value=ULHEXA;
#line 459 "chopb.met"
                                        PUT_COORD_CALL;
#line 459 "chopb.met"
                                        return(1);
#line 459 "chopb.met"
                                    }
#line 459 "chopb.met"
                                    break ;
#line 459 "chopb.met"
#line 460 "chopb.met"
                                case 'L' :
#line 460 "chopb.met"
                                case 'l' :
#line 460 "chopb.met"
                                    NextChar();
#line 460 "chopb.met"
#line 461 "chopb.met"
#line 462 "chopb.met"
                                    switch (c) {
#line 462 "chopb.met"
#line 463 "chopb.met"
                                        case 'u' :
#line 463 "chopb.met"
                                        case 'U' :
#line 463 "chopb.met"
                                            NextChar();
#line 463 "chopb.met"
#line 463 "chopb.met"
                                            {
#line 463 "chopb.met"
                                                firstOnLine = 0 ; 
#line 463 "chopb.met"
                                                tokenAhead =1;
#line 463 "chopb.met"
                                                lexEl.Value=ULLHEXA;
#line 463 "chopb.met"
                                                PUT_COORD_CALL;
#line 463 "chopb.met"
                                                return(1);
#line 463 "chopb.met"
                                            }
#line 463 "chopb.met"
                                            break ;
#line 463 "chopb.met"
#line 464 "chopb.met"
                                        default : 
#line 464 "chopb.met"
                                             if (c!= EOF) {
#line 464 "chopb.met"
#line 464 "chopb.met"
                                                {
#line 464 "chopb.met"
                                                    firstOnLine = 0 ; 
#line 464 "chopb.met"
                                                    tokenAhead =1;
#line 464 "chopb.met"
                                                    lexEl.Value=LLHEXA;
#line 464 "chopb.met"
                                                    PUT_COORD_CALL;
#line 464 "chopb.met"
                                                    return(1);
#line 464 "chopb.met"
                                                }
#line 464 "chopb.met"
                                            }
#line 464 "chopb.met"
                                            break ;
#line 464 "chopb.met"
                                    }
#line 464 "chopb.met"
#line 464 "chopb.met"
                                    break ;
#line 464 "chopb.met"
#line 467 "chopb.met"
                                default : 
#line 467 "chopb.met"
                                     if (c!= EOF) {
#line 467 "chopb.met"
#line 467 "chopb.met"
                                        {
#line 467 "chopb.met"
                                            firstOnLine = 0 ; 
#line 467 "chopb.met"
                                            tokenAhead =1;
#line 467 "chopb.met"
                                            lexEl.Value=LHEXA;
#line 467 "chopb.met"
                                            PUT_COORD_CALL;
#line 467 "chopb.met"
                                            return(1);
#line 467 "chopb.met"
                                        }
#line 467 "chopb.met"
                                    }
#line 467 "chopb.met"
                                    break ;
#line 467 "chopb.met"
                            }
#line 467 "chopb.met"
                            break ;
#line 467 "chopb.met"
#line 469 "chopb.met"
                        case 'u' :
#line 469 "chopb.met"
                        case 'U' :
#line 469 "chopb.met"
                            NextChar();
#line 469 "chopb.met"
#line 470 "chopb.met"
                            switch (c) {
#line 470 "chopb.met"
#line 471 "chopb.met"
                                case 'l' :
#line 471 "chopb.met"
                                case 'L' :
#line 471 "chopb.met"
                                    NextChar();
#line 471 "chopb.met"
#line 472 "chopb.met"
#line 473 "chopb.met"
                                    switch (c) {
#line 473 "chopb.met"
#line 474 "chopb.met"
                                        case 'L' :
#line 474 "chopb.met"
                                        case 'l' :
#line 474 "chopb.met"
                                            NextChar();
#line 474 "chopb.met"
#line 474 "chopb.met"
                                            {
#line 474 "chopb.met"
                                                firstOnLine = 0 ; 
#line 474 "chopb.met"
                                                tokenAhead =1;
#line 474 "chopb.met"
                                                lexEl.Value=ULLHEXA;
#line 474 "chopb.met"
                                                PUT_COORD_CALL;
#line 474 "chopb.met"
                                                return(1);
#line 474 "chopb.met"
                                            }
#line 474 "chopb.met"
                                            break ;
#line 474 "chopb.met"
#line 475 "chopb.met"
                                        default : 
#line 475 "chopb.met"
                                             if (c!= EOF) {
#line 475 "chopb.met"
#line 475 "chopb.met"
                                                {
#line 475 "chopb.met"
                                                    firstOnLine = 0 ; 
#line 475 "chopb.met"
                                                    tokenAhead =1;
#line 475 "chopb.met"
                                                    lexEl.Value=ULHEXA;
#line 475 "chopb.met"
                                                    PUT_COORD_CALL;
#line 475 "chopb.met"
                                                    return(1);
#line 475 "chopb.met"
                                                }
#line 475 "chopb.met"
                                            }
#line 475 "chopb.met"
                                            break ;
#line 475 "chopb.met"
                                    }
#line 475 "chopb.met"
#line 475 "chopb.met"
                                    break ;
#line 475 "chopb.met"
#line 478 "chopb.met"
                                default : 
#line 478 "chopb.met"
                                     if (c!= EOF) {
#line 478 "chopb.met"
#line 478 "chopb.met"
                                        {
#line 478 "chopb.met"
                                            firstOnLine = 0 ; 
#line 478 "chopb.met"
                                            tokenAhead =1;
#line 478 "chopb.met"
                                            lexEl.Value=UHEXA;
#line 478 "chopb.met"
                                            PUT_COORD_CALL;
#line 478 "chopb.met"
                                            return(1);
#line 478 "chopb.met"
                                        }
#line 478 "chopb.met"
                                    }
#line 478 "chopb.met"
                                    break ;
#line 478 "chopb.met"
                            }
#line 478 "chopb.met"
                            break ;
#line 478 "chopb.met"
#line 480 "chopb.met"
                        default : 
#line 480 "chopb.met"
                             if (c!= EOF) {
#line 480 "chopb.met"
#line 480 "chopb.met"
                                {
#line 480 "chopb.met"
                                    firstOnLine = 0 ; 
#line 480 "chopb.met"
                                    tokenAhead =1;
#line 480 "chopb.met"
                                    lexEl.Value=HEXA;
#line 480 "chopb.met"
                                    PUT_COORD_CALL;
#line 480 "chopb.met"
                                    return(1);
#line 480 "chopb.met"
                                }
#line 480 "chopb.met"
                            }
#line 480 "chopb.met"
                            break ;
#line 480 "chopb.met"
                    }
#line 480 "chopb.met"
#line 480 "chopb.met"
                    break ;
#line 480 "chopb.met"
#line 483 "chopb.met"
                case '0' :
#line 483 "chopb.met"
                case '1' :
#line 483 "chopb.met"
                case '2' :
#line 483 "chopb.met"
                case '3' :
#line 483 "chopb.met"
                case '4' :
#line 483 "chopb.met"
                case '5' :
#line 483 "chopb.met"
                case '6' :
#line 483 "chopb.met"
                case '7' :
#line 483 "chopb.met"
#line 484 "chopb.met"
#line 485 "chopb.met"
                    while ((('0' <= c && c <= '7'))) { 
#line 485 "chopb.met"
#line 486 "chopb.met"
                        {
#line 486 "chopb.met"
                            lexEl . AddChar(c);
#line 486 "chopb.met"
                            NextChar();
#line 486 "chopb.met"
                        }
#line 486 "chopb.met"
                    } 
#line 486 "chopb.met"
#line 487 "chopb.met"
                    switch (c) {
#line 487 "chopb.met"
#line 488 "chopb.met"
                        case 'l' :
#line 488 "chopb.met"
                        case 'L' :
#line 488 "chopb.met"
                            NextChar();
#line 488 "chopb.met"
#line 489 "chopb.met"
                            switch (c) {
#line 489 "chopb.met"
#line 490 "chopb.met"
                                case 'L' :
#line 490 "chopb.met"
                                case 'l' :
#line 490 "chopb.met"
                                    NextChar();
#line 490 "chopb.met"
#line 491 "chopb.met"
#line 492 "chopb.met"
                                    switch (c) {
#line 492 "chopb.met"
#line 493 "chopb.met"
                                        case 'u' :
#line 493 "chopb.met"
                                        case 'U' :
#line 493 "chopb.met"
                                            NextChar();
#line 493 "chopb.met"
#line 493 "chopb.met"
                                            {
#line 493 "chopb.met"
                                                firstOnLine = 0 ; 
#line 493 "chopb.met"
                                                tokenAhead =1;
#line 493 "chopb.met"
                                                lexEl.Value=ULLOCTAL;
#line 493 "chopb.met"
                                                PUT_COORD_CALL;
#line 493 "chopb.met"
                                                return(1);
#line 493 "chopb.met"
                                            }
#line 493 "chopb.met"
                                            break ;
#line 493 "chopb.met"
#line 494 "chopb.met"
                                        default : 
#line 494 "chopb.met"
                                             if (c!= EOF) {
#line 494 "chopb.met"
#line 494 "chopb.met"
                                                {
#line 494 "chopb.met"
                                                    firstOnLine = 0 ; 
#line 494 "chopb.met"
                                                    tokenAhead =1;
#line 494 "chopb.met"
                                                    lexEl.Value=LLOCTAL;
#line 494 "chopb.met"
                                                    PUT_COORD_CALL;
#line 494 "chopb.met"
                                                    return(1);
#line 494 "chopb.met"
                                                }
#line 494 "chopb.met"
                                            }
#line 494 "chopb.met"
                                            break ;
#line 494 "chopb.met"
                                    }
#line 494 "chopb.met"
#line 494 "chopb.met"
                                    break ;
#line 494 "chopb.met"
#line 497 "chopb.met"
                                case 'u' :
#line 497 "chopb.met"
                                case 'U' :
#line 497 "chopb.met"
                                    NextChar();
#line 497 "chopb.met"
#line 497 "chopb.met"
                                    {
#line 497 "chopb.met"
                                        firstOnLine = 0 ; 
#line 497 "chopb.met"
                                        tokenAhead =1;
#line 497 "chopb.met"
                                        lexEl.Value=ULOCTAL;
#line 497 "chopb.met"
                                        PUT_COORD_CALL;
#line 497 "chopb.met"
                                        return(1);
#line 497 "chopb.met"
                                    }
#line 497 "chopb.met"
                                    break ;
#line 497 "chopb.met"
#line 498 "chopb.met"
                                default : 
#line 498 "chopb.met"
                                     if (c!= EOF) {
#line 498 "chopb.met"
#line 498 "chopb.met"
                                        {
#line 498 "chopb.met"
                                            firstOnLine = 0 ; 
#line 498 "chopb.met"
                                            tokenAhead =1;
#line 498 "chopb.met"
                                            lexEl.Value=LOCTAL;
#line 498 "chopb.met"
                                            PUT_COORD_CALL;
#line 498 "chopb.met"
                                            return(1);
#line 498 "chopb.met"
                                        }
#line 498 "chopb.met"
                                    }
#line 498 "chopb.met"
                                    break ;
#line 498 "chopb.met"
                            }
#line 498 "chopb.met"
                            break ;
#line 498 "chopb.met"
#line 500 "chopb.met"
                        case 'u' :
#line 500 "chopb.met"
                        case 'U' :
#line 500 "chopb.met"
                            NextChar();
#line 500 "chopb.met"
#line 501 "chopb.met"
                            switch (c) {
#line 501 "chopb.met"
#line 502 "chopb.met"
                                case 'l' :
#line 502 "chopb.met"
                                case 'L' :
#line 502 "chopb.met"
                                    NextChar();
#line 502 "chopb.met"
#line 503 "chopb.met"
#line 504 "chopb.met"
                                    switch (c) {
#line 504 "chopb.met"
#line 505 "chopb.met"
                                        case 'L' :
#line 505 "chopb.met"
                                        case 'l' :
#line 505 "chopb.met"
                                            NextChar();
#line 505 "chopb.met"
#line 505 "chopb.met"
                                            {
#line 505 "chopb.met"
                                                firstOnLine = 0 ; 
#line 505 "chopb.met"
                                                tokenAhead =1;
#line 505 "chopb.met"
                                                lexEl.Value=ULLOCTAL;
#line 505 "chopb.met"
                                                PUT_COORD_CALL;
#line 505 "chopb.met"
                                                return(1);
#line 505 "chopb.met"
                                            }
#line 505 "chopb.met"
                                            break ;
#line 505 "chopb.met"
#line 506 "chopb.met"
                                        default : 
#line 506 "chopb.met"
                                             if (c!= EOF) {
#line 506 "chopb.met"
#line 506 "chopb.met"
                                                {
#line 506 "chopb.met"
                                                    firstOnLine = 0 ; 
#line 506 "chopb.met"
                                                    tokenAhead =1;
#line 506 "chopb.met"
                                                    lexEl.Value=ULOCTAL;
#line 506 "chopb.met"
                                                    PUT_COORD_CALL;
#line 506 "chopb.met"
                                                    return(1);
#line 506 "chopb.met"
                                                }
#line 506 "chopb.met"
                                            }
#line 506 "chopb.met"
                                            break ;
#line 506 "chopb.met"
                                    }
#line 506 "chopb.met"
#line 506 "chopb.met"
                                    break ;
#line 506 "chopb.met"
#line 509 "chopb.met"
                                default : 
#line 509 "chopb.met"
                                     if (c!= EOF) {
#line 509 "chopb.met"
#line 509 "chopb.met"
                                        {
#line 509 "chopb.met"
                                            firstOnLine = 0 ; 
#line 509 "chopb.met"
                                            tokenAhead =1;
#line 509 "chopb.met"
                                            lexEl.Value=UOCTAL;
#line 509 "chopb.met"
                                            PUT_COORD_CALL;
#line 509 "chopb.met"
                                            return(1);
#line 509 "chopb.met"
                                        }
#line 509 "chopb.met"
                                    }
#line 509 "chopb.met"
                                    break ;
#line 509 "chopb.met"
                            }
#line 509 "chopb.met"
                            break ;
#line 509 "chopb.met"
#line 511 "chopb.met"
                        default : 
#line 511 "chopb.met"
                             if (c!= EOF) {
#line 511 "chopb.met"
#line 511 "chopb.met"
                                {
#line 511 "chopb.met"
                                    firstOnLine = 0 ; 
#line 511 "chopb.met"
                                    tokenAhead =1;
#line 511 "chopb.met"
                                    lexEl.Value=OCTAL;
#line 511 "chopb.met"
                                    PUT_COORD_CALL;
#line 511 "chopb.met"
                                    return(1);
#line 511 "chopb.met"
                                }
#line 511 "chopb.met"
                            }
#line 511 "chopb.met"
                            break ;
#line 511 "chopb.met"
                    }
#line 511 "chopb.met"
#line 511 "chopb.met"
                    break ;
#line 511 "chopb.met"
#line 514 "chopb.met"
                case '.' :
#line 514 "chopb.met"
#line 515 "chopb.met"
#line 516 "chopb.met"
                    {
#line 516 "chopb.met"
                        lexEl.AddString("0");
#line 516 "chopb.met"
                    }
#line 516 "chopb.met"
#line 517 "chopb.met"
                    {
#line 517 "chopb.met"
                        lexEl . AddChar(c);
#line 517 "chopb.met"
                        NextChar();
#line 517 "chopb.met"
                    }
#line 517 "chopb.met"
#line 518 "chopb.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 518 "chopb.met"
#line 519 "chopb.met"
                        {
#line 519 "chopb.met"
                            lexEl . AddChar(c);
#line 519 "chopb.met"
                            NextChar();
#line 519 "chopb.met"
                        }
#line 519 "chopb.met"
                    } 
#line 519 "chopb.met"
#line 520 "chopb.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 520 "chopb.met"
#line 521 "chopb.met"
#line 522 "chopb.met"
                        {
#line 522 "chopb.met"
                            lexEl.AddString("e");
#line 522 "chopb.met"
                        }
#line 522 "chopb.met"
#line 523 "chopb.met"
                        if (((c == '+')||(c == '-'))){
#line 523 "chopb.met"
#line 524 "chopb.met"
                            {
#line 524 "chopb.met"
                                lexEl . AddChar(c);
#line 524 "chopb.met"
                                NextChar();
#line 524 "chopb.met"
                            }
#line 524 "chopb.met"
                        }
#line 524 "chopb.met"
#line 525 "chopb.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 525 "chopb.met"
#line 526 "chopb.met"
                            {
#line 526 "chopb.met"
                                lexEl . AddChar(c);
#line 526 "chopb.met"
                                NextChar();
#line 526 "chopb.met"
                            }
#line 526 "chopb.met"
                        } 
#line 526 "chopb.met"
#line 526 "chopb.met"
#line 526 "chopb.met"
                    }
#line 526 "chopb.met"
#line 528 "chopb.met"
                    switch (c) {
#line 528 "chopb.met"
#line 529 "chopb.met"
                        case 'f' :
#line 529 "chopb.met"
#line 529 "chopb.met"
                            {
#line 529 "chopb.met"
                                lexEl . AddChar(c);
#line 529 "chopb.met"
                                NextChar();
#line 529 "chopb.met"
                            }
#line 529 "chopb.met"
                            break ;
#line 529 "chopb.met"
#line 530 "chopb.met"
                        case 'F' :
#line 530 "chopb.met"
#line 530 "chopb.met"
                            {
#line 530 "chopb.met"
                                lexEl . AddChar(c);
#line 530 "chopb.met"
                                NextChar();
#line 530 "chopb.met"
                            }
#line 530 "chopb.met"
                            break ;
#line 530 "chopb.met"
#line 531 "chopb.met"
                        case 'l' :
#line 531 "chopb.met"
#line 531 "chopb.met"
                            {
#line 531 "chopb.met"
                                lexEl . AddChar(c);
#line 531 "chopb.met"
                                NextChar();
#line 531 "chopb.met"
                            }
#line 531 "chopb.met"
                            break ;
#line 531 "chopb.met"
#line 532 "chopb.met"
                        case 'L' :
#line 532 "chopb.met"
#line 532 "chopb.met"
                            {
#line 532 "chopb.met"
                                lexEl . AddChar(c);
#line 532 "chopb.met"
                                NextChar();
#line 532 "chopb.met"
                            }
#line 532 "chopb.met"
                            break ;
#line 532 "chopb.met"
                    }
#line 532 "chopb.met"
#line 534 "chopb.met"
                    {
#line 534 "chopb.met"
                        firstOnLine = 0 ; 
#line 534 "chopb.met"
                        tokenAhead =1;
#line 534 "chopb.met"
                        lexEl.Value=FLOATVAL;
#line 534 "chopb.met"
                        PUT_COORD_CALL;
#line 534 "chopb.met"
                        return(1);
#line 534 "chopb.met"
                    }
#line 534 "chopb.met"
#line 534 "chopb.met"
                    break ;
#line 534 "chopb.met"
#line 540 "chopb.met"
                default : 
#line 540 "chopb.met"
                     if (c!= EOF) {
#line 540 "chopb.met"
#line 537 "chopb.met"
#line 538 "chopb.met"
                        if (c != EOF){
#line 538 "chopb.met"
#line 539 "chopb.met"
#line 540 "chopb.met"
                            {
#line 540 "chopb.met"
                                lexEl.AddString("0");
#line 540 "chopb.met"
                            }
#line 540 "chopb.met"
#line 541 "chopb.met"
                            switch (c) {
#line 541 "chopb.met"
#line 542 "chopb.met"
                                case 'l' :
#line 542 "chopb.met"
                                case 'L' :
#line 542 "chopb.met"
                                    NextChar();
#line 542 "chopb.met"
#line 543 "chopb.met"
                                    switch (c) {
#line 543 "chopb.met"
#line 544 "chopb.met"
                                        case 'u' :
#line 544 "chopb.met"
                                        case 'U' :
#line 544 "chopb.met"
                                            NextChar();
#line 544 "chopb.met"
#line 544 "chopb.met"
                                            {
#line 544 "chopb.met"
                                                firstOnLine = 0 ; 
#line 544 "chopb.met"
                                                tokenAhead =1;
#line 544 "chopb.met"
                                                lexEl.Value=ULINTEGER;
#line 544 "chopb.met"
                                                PUT_COORD_CALL;
#line 544 "chopb.met"
                                                return(1);
#line 544 "chopb.met"
                                            }
#line 544 "chopb.met"
                                            break ;
#line 544 "chopb.met"
#line 545 "chopb.met"
                                        default : 
#line 545 "chopb.met"
                                             if (c!= EOF) {
#line 545 "chopb.met"
#line 545 "chopb.met"
                                                {
#line 545 "chopb.met"
                                                    firstOnLine = 0 ; 
#line 545 "chopb.met"
                                                    tokenAhead =1;
#line 545 "chopb.met"
                                                    lexEl.Value=LINTEGER;
#line 545 "chopb.met"
                                                    PUT_COORD_CALL;
#line 545 "chopb.met"
                                                    return(1);
#line 545 "chopb.met"
                                                }
#line 545 "chopb.met"
                                            }
#line 545 "chopb.met"
                                            break ;
#line 545 "chopb.met"
                                    }
#line 545 "chopb.met"
                                    break ;
#line 545 "chopb.met"
#line 547 "chopb.met"
                                case 'u' :
#line 547 "chopb.met"
                                case 'U' :
#line 547 "chopb.met"
                                    NextChar();
#line 547 "chopb.met"
#line 548 "chopb.met"
                                    switch (c) {
#line 548 "chopb.met"
#line 549 "chopb.met"
                                        case 'l' :
#line 549 "chopb.met"
                                        case 'L' :
#line 549 "chopb.met"
                                            NextChar();
#line 549 "chopb.met"
#line 549 "chopb.met"
                                            {
#line 549 "chopb.met"
                                                firstOnLine = 0 ; 
#line 549 "chopb.met"
                                                tokenAhead =1;
#line 549 "chopb.met"
                                                lexEl.Value=ULINTEGER;
#line 549 "chopb.met"
                                                PUT_COORD_CALL;
#line 549 "chopb.met"
                                                return(1);
#line 549 "chopb.met"
                                            }
#line 549 "chopb.met"
                                            break ;
#line 549 "chopb.met"
#line 550 "chopb.met"
                                        default : 
#line 550 "chopb.met"
                                             if (c!= EOF) {
#line 550 "chopb.met"
#line 550 "chopb.met"
                                                {
#line 550 "chopb.met"
                                                    firstOnLine = 0 ; 
#line 550 "chopb.met"
                                                    tokenAhead =1;
#line 550 "chopb.met"
                                                    lexEl.Value=UINTEGER;
#line 550 "chopb.met"
                                                    PUT_COORD_CALL;
#line 550 "chopb.met"
                                                    return(1);
#line 550 "chopb.met"
                                                }
#line 550 "chopb.met"
                                            }
#line 550 "chopb.met"
                                            break ;
#line 550 "chopb.met"
                                    }
#line 550 "chopb.met"
                                    break ;
#line 550 "chopb.met"
#line 552 "chopb.met"
                                default : 
#line 552 "chopb.met"
                                     if (c!= EOF) {
#line 552 "chopb.met"
#line 552 "chopb.met"
                                        {
#line 552 "chopb.met"
                                            firstOnLine = 0 ; 
#line 552 "chopb.met"
                                            tokenAhead =1;
#line 552 "chopb.met"
                                            lexEl.Value=INTEGER;
#line 552 "chopb.met"
                                            PUT_COORD_CALL;
#line 552 "chopb.met"
                                            return(1);
#line 552 "chopb.met"
                                        }
#line 552 "chopb.met"
                                    }
#line 552 "chopb.met"
                                    break ;
#line 552 "chopb.met"
                            }
#line 552 "chopb.met"
#line 552 "chopb.met"
#line 553 "chopb.met"
                        }
#line 553 "chopb.met"
#line 553 "chopb.met"
                    }
#line 553 "chopb.met"
                    break ;
#line 553 "chopb.met"
            }
#line 553 "chopb.met"
#line 553 "chopb.met"
            break ;
#line 553 "chopb.met"
#line 558 "chopb.met"
        case '#' :
#line 558 "chopb.met"
            NextChar();
#line 558 "chopb.met"
#line 559 "chopb.met"
#line 560 "chopb.met"
            while (((c == ' ')||(c == '\t'))) { 
#line 560 "chopb.met"
#line 561 "chopb.met"
                if (!(c != EOF&& NextChar())) ;
#line 561 "chopb.met"
            } 
#line 561 "chopb.met"
#line 562 "chopb.met"
#line 563 "chopb.met"
            if((GetString("include",1)&& NextChar())){
#line 563 "chopb.met"
#line 563 "chopb.met"
                {
#line 563 "chopb.met"
                    firstOnLine = 0 ; 
#line 563 "chopb.met"
                    tokenAhead =1;
#line 563 "chopb.met"
                    lexEl.Value=INCLUDE_DIR;
#line 563 "chopb.met"
                    PUT_COORD_CALL;
#line 563 "chopb.met"
                    return(1);
#line 563 "chopb.met"
                }
#line 563 "chopb.met"
            } else 
#line 563 "chopb.met"
#line 564 "chopb.met"
            if((GetString("ifdef",1)&& NextChar())){
#line 564 "chopb.met"
#line 564 "chopb.met"
                {
#line 564 "chopb.met"
                    firstOnLine = 0 ; 
#line 564 "chopb.met"
                    tokenAhead =1;
#line 564 "chopb.met"
                    lexEl.Value=IFDEF_DIR;
#line 564 "chopb.met"
                    PUT_COORD_CALL;
#line 564 "chopb.met"
                    return(1);
#line 564 "chopb.met"
                }
#line 564 "chopb.met"
            } else 
#line 564 "chopb.met"
#line 565 "chopb.met"
            if((GetString("ifndef",1)&& NextChar())){
#line 565 "chopb.met"
#line 565 "chopb.met"
                {
#line 565 "chopb.met"
                    firstOnLine = 0 ; 
#line 565 "chopb.met"
                    tokenAhead =1;
#line 565 "chopb.met"
                    lexEl.Value=IFNDEF_DIR;
#line 565 "chopb.met"
                    PUT_COORD_CALL;
#line 565 "chopb.met"
                    return(1);
#line 565 "chopb.met"
                }
#line 565 "chopb.met"
            } else 
#line 565 "chopb.met"
#line 566 "chopb.met"
            if((GetString("if",1)&& NextChar())){
#line 566 "chopb.met"
#line 566 "chopb.met"
                {
#line 566 "chopb.met"
                    firstOnLine = 0 ; 
#line 566 "chopb.met"
                    tokenAhead =1;
#line 566 "chopb.met"
                    lexEl.Value=IF_DIR;
#line 566 "chopb.met"
                    PUT_COORD_CALL;
#line 566 "chopb.met"
                    return(1);
#line 566 "chopb.met"
                }
#line 566 "chopb.met"
            } else 
#line 566 "chopb.met"
#line 567 "chopb.met"
            if((GetString("else",1)&& NextChar())){
#line 567 "chopb.met"
#line 567 "chopb.met"
                {
#line 567 "chopb.met"
                    firstOnLine = 0 ; 
#line 567 "chopb.met"
                    tokenAhead =1;
#line 567 "chopb.met"
                    lexEl.Value=ELSE_DIR;
#line 567 "chopb.met"
                    PUT_COORD_CALL;
#line 567 "chopb.met"
                    return(1);
#line 567 "chopb.met"
                }
#line 567 "chopb.met"
            } else 
#line 567 "chopb.met"
#line 568 "chopb.met"
            if((GetString("elif",1)&& NextChar())){
#line 568 "chopb.met"
#line 568 "chopb.met"
                {
#line 568 "chopb.met"
                    firstOnLine = 0 ; 
#line 568 "chopb.met"
                    tokenAhead =1;
#line 568 "chopb.met"
                    lexEl.Value=ELIF_DIR;
#line 568 "chopb.met"
                    PUT_COORD_CALL;
#line 568 "chopb.met"
                    return(1);
#line 568 "chopb.met"
                }
#line 568 "chopb.met"
            } else 
#line 568 "chopb.met"
#line 569 "chopb.met"
            if((GetString("endif",1)&& NextChar())){
#line 569 "chopb.met"
#line 569 "chopb.met"
                {
#line 569 "chopb.met"
                    firstOnLine = 0 ; 
#line 569 "chopb.met"
                    tokenAhead =1;
#line 569 "chopb.met"
                    lexEl.Value=ENDIF_DIR;
#line 569 "chopb.met"
                    PUT_COORD_CALL;
#line 569 "chopb.met"
                    return(1);
#line 569 "chopb.met"
                }
#line 569 "chopb.met"
            } else 
#line 569 "chopb.met"
#line 570 "chopb.met"
            if((GetString("line",1)&& NextChar())){
#line 570 "chopb.met"
#line 570 "chopb.met"
                {
#line 570 "chopb.met"
                    firstOnLine = 0 ; 
#line 570 "chopb.met"
                    tokenAhead =1;
#line 570 "chopb.met"
                    lexEl.Value=LINE_DIR;
#line 570 "chopb.met"
                    PUT_COORD_CALL;
#line 570 "chopb.met"
                    return(1);
#line 570 "chopb.met"
                }
#line 570 "chopb.met"
            } else 
#line 570 "chopb.met"
#line 571 "chopb.met"
            if((GetString("pragma",1)&& NextChar())){
#line 571 "chopb.met"
#line 571 "chopb.met"
                {
#line 571 "chopb.met"
                    firstOnLine = 0 ; 
#line 571 "chopb.met"
                    tokenAhead =1;
#line 571 "chopb.met"
                    lexEl.Value=PRAGMA_DIR;
#line 571 "chopb.met"
                    PUT_COORD_CALL;
#line 571 "chopb.met"
                    return(1);
#line 571 "chopb.met"
                }
#line 571 "chopb.met"
            } else 
#line 571 "chopb.met"
#line 572 "chopb.met"
            if((GetString("error",1)&& NextChar())){
#line 572 "chopb.met"
#line 572 "chopb.met"
                {
#line 572 "chopb.met"
                    firstOnLine = 0 ; 
#line 572 "chopb.met"
                    tokenAhead =1;
#line 572 "chopb.met"
                    lexEl.Value=ERROR_DIR;
#line 572 "chopb.met"
                    PUT_COORD_CALL;
#line 572 "chopb.met"
                    return(1);
#line 572 "chopb.met"
                }
#line 572 "chopb.met"
            } else 
#line 572 "chopb.met"
#line 573 "chopb.met"
            if((GetString("define",1)&& NextChar())){
#line 573 "chopb.met"
#line 573 "chopb.met"
                {
#line 573 "chopb.met"
                    firstOnLine = 0 ; 
#line 573 "chopb.met"
                    tokenAhead =1;
#line 573 "chopb.met"
                    lexEl.Value=DEFINE_DIR;
#line 573 "chopb.met"
                    PUT_COORD_CALL;
#line 573 "chopb.met"
                    return(1);
#line 573 "chopb.met"
                }
#line 573 "chopb.met"
            } else 
#line 573 "chopb.met"
#line 574 "chopb.met"
            if((GetString("undef",1)&& NextChar())){
#line 574 "chopb.met"
#line 574 "chopb.met"
                {
#line 574 "chopb.met"
                    firstOnLine = 0 ; 
#line 574 "chopb.met"
                    tokenAhead =1;
#line 574 "chopb.met"
                    lexEl.Value=UNDEF_DIR;
#line 574 "chopb.met"
                    PUT_COORD_CALL;
#line 574 "chopb.met"
                    return(1);
#line 574 "chopb.met"
                }
#line 574 "chopb.met"
            } else 
#line 574 "chopb.met"
#line 575 "chopb.met"
            if(((('0' <= c && c <= '9')))){
#line 575 "chopb.met"
#line 575 "chopb.met"
                {
#line 575 "chopb.met"
                    firstOnLine = 0 ; 
#line 575 "chopb.met"
                    tokenAhead =1;
#line 575 "chopb.met"
                    lexEl.Value=LINE_REFERENCE_DIR;
#line 575 "chopb.met"
                    PUT_COORD_CALL;
#line 575 "chopb.met"
                    return(1);
#line 575 "chopb.met"
                }
#line 575 "chopb.met"
            } else 
#line 575 "chopb.met"
#line 578 "chopb.met"
            if((c != EOF)){
#line 578 "chopb.met"
#line 577 "chopb.met"
#line 578 "chopb.met"
                {
#line 578 "chopb.met"
                    firstOnLine = 0 ; 
#line 578 "chopb.met"
                    tokenAhead =1;
#line 578 "chopb.met"
                    lexEl.Value=SHARP_VAL;
#line 578 "chopb.met"
                    PUT_COORD_CALL;
#line 578 "chopb.met"
                    return(1);
#line 578 "chopb.met"
                }
#line 578 "chopb.met"
#line 578 "chopb.met"
            } else 
#line 578 "chopb.met"
             ;
#line 578 "chopb.met"
#line 578 "chopb.met"
            break ;
#line 578 "chopb.met"
#line 582 "chopb.met"
        case '\r' :
#line 582 "chopb.met"
        case '\n' :
#line 582 "chopb.met"
            NextChar();
#line 582 "chopb.met"
#line 582 "chopb.met"
            {
#line 582 "chopb.met"
                firstOnLine = 0 ; 
#line 582 "chopb.met"
                tokenAhead =1;
#line 582 "chopb.met"
                lexEl.Value=CARRIAGE_RETURN;
#line 582 "chopb.met"
                firstOnLine = 1 ; 
#line 582 "chopb.met"
                PUT_COORD_CALL;
#line 582 "chopb.met"
                return(1);
#line 582 "chopb.met"
            }
#line 582 "chopb.met"
            break ;
#line 582 "chopb.met"
#line 583 "chopb.met"
        case '/' :
#line 583 "chopb.met"
            NextChar();
#line 583 "chopb.met"
#line 584 "chopb.met"
#line 585 "chopb.met"
            if (((c == '='))){
#line 585 "chopb.met"
#line 586 "chopb.met"
#line 587 "chopb.met"
                if (!(c != EOF&& NextChar())) ;
#line 587 "chopb.met"
#line 588 "chopb.met"
                {
#line 588 "chopb.met"
                    firstOnLine = 0 ; 
#line 588 "chopb.met"
                    tokenAhead =1;
#line 588 "chopb.met"
                    lexEl.Value=SLASEGAL;
#line 588 "chopb.met"
                    PUT_COORD_CALL;
#line 588 "chopb.met"
                    return(1);
#line 588 "chopb.met"
                }
#line 588 "chopb.met"
#line 588 "chopb.met"
#line 588 "chopb.met"
            } else {
#line 588 "chopb.met"
#line 591 "chopb.met"
                {
#line 591 "chopb.met"
                    firstOnLine = 0 ; 
#line 591 "chopb.met"
                    tokenAhead =1;
#line 591 "chopb.met"
                    lexEl.Value=SLAS;
#line 591 "chopb.met"
                    PUT_COORD_CALL;
#line 591 "chopb.met"
                    return(1);
#line 591 "chopb.met"
                }
#line 591 "chopb.met"
            }
#line 591 "chopb.met"
#line 591 "chopb.met"
            break ;
#line 591 "chopb.met"
#line 593 "chopb.met"
        case '.' :
#line 593 "chopb.met"
#line 594 "chopb.met"
#line 595 "chopb.met"
            {
#line 595 "chopb.met"
                lexEl . AddChar(c);
#line 595 "chopb.met"
                NextChar();
#line 595 "chopb.met"
            }
#line 595 "chopb.met"
#line 596 "chopb.met"
            if ((('0' <= c && c <= '9'))){
#line 596 "chopb.met"
#line 597 "chopb.met"
#line 598 "chopb.met"
                while ((('0' <= c && c <= '9'))) { 
#line 598 "chopb.met"
#line 599 "chopb.met"
                    {
#line 599 "chopb.met"
                        lexEl . AddChar(c);
#line 599 "chopb.met"
                        NextChar();
#line 599 "chopb.met"
                    }
#line 599 "chopb.met"
                } 
#line 599 "chopb.met"
#line 600 "chopb.met"
                if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 600 "chopb.met"
#line 601 "chopb.met"
#line 602 "chopb.met"
                    {
#line 602 "chopb.met"
                        lexEl.AddString("e");
#line 602 "chopb.met"
                    }
#line 602 "chopb.met"
#line 603 "chopb.met"
                    if (((c == '+')||(c == '-'))){
#line 603 "chopb.met"
#line 604 "chopb.met"
                        {
#line 604 "chopb.met"
                            lexEl . AddChar(c);
#line 604 "chopb.met"
                            NextChar();
#line 604 "chopb.met"
                        }
#line 604 "chopb.met"
                    }
#line 604 "chopb.met"
#line 605 "chopb.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 605 "chopb.met"
#line 606 "chopb.met"
                        {
#line 606 "chopb.met"
                            lexEl . AddChar(c);
#line 606 "chopb.met"
                            NextChar();
#line 606 "chopb.met"
                        }
#line 606 "chopb.met"
                    } 
#line 606 "chopb.met"
#line 606 "chopb.met"
#line 606 "chopb.met"
                }
#line 606 "chopb.met"
#line 608 "chopb.met"
                switch (c) {
#line 608 "chopb.met"
#line 609 "chopb.met"
                    case 'f' :
#line 609 "chopb.met"
#line 609 "chopb.met"
                        {
#line 609 "chopb.met"
                            lexEl . AddChar(c);
#line 609 "chopb.met"
                            NextChar();
#line 609 "chopb.met"
                        }
#line 609 "chopb.met"
                        break ;
#line 609 "chopb.met"
#line 610 "chopb.met"
                    case 'F' :
#line 610 "chopb.met"
#line 610 "chopb.met"
                        {
#line 610 "chopb.met"
                            lexEl . AddChar(c);
#line 610 "chopb.met"
                            NextChar();
#line 610 "chopb.met"
                        }
#line 610 "chopb.met"
                        break ;
#line 610 "chopb.met"
#line 611 "chopb.met"
                    case 'l' :
#line 611 "chopb.met"
#line 611 "chopb.met"
                        {
#line 611 "chopb.met"
                            lexEl . AddChar(c);
#line 611 "chopb.met"
                            NextChar();
#line 611 "chopb.met"
                        }
#line 611 "chopb.met"
                        break ;
#line 611 "chopb.met"
#line 612 "chopb.met"
                    case 'L' :
#line 612 "chopb.met"
#line 612 "chopb.met"
                        {
#line 612 "chopb.met"
                            lexEl . AddChar(c);
#line 612 "chopb.met"
                            NextChar();
#line 612 "chopb.met"
                        }
#line 612 "chopb.met"
                        break ;
#line 612 "chopb.met"
                }
#line 612 "chopb.met"
#line 614 "chopb.met"
                {
#line 614 "chopb.met"
                    firstOnLine = 0 ; 
#line 614 "chopb.met"
                    tokenAhead =1;
#line 614 "chopb.met"
                    lexEl.Value=FLOATVAL;
#line 614 "chopb.met"
                    PUT_COORD_CALL;
#line 614 "chopb.met"
                    return(1);
#line 614 "chopb.met"
                }
#line 614 "chopb.met"
#line 614 "chopb.met"
#line 614 "chopb.met"
            } else {
#line 614 "chopb.met"
#line 617 "chopb.met"
#line 618 "chopb.met"
                {
#line 618 "chopb.met"
                    firstOnLine = 0 ; 
#line 618 "chopb.met"
                    tokenAhead =1;
#line 618 "chopb.met"
                    lexEl.Value=POINT;
#line 618 "chopb.met"
                    PUT_COORD_CALL;
#line 618 "chopb.met"
                    return(1);
#line 618 "chopb.met"
                }
#line 618 "chopb.met"
#line 618 "chopb.met"
            }
#line 618 "chopb.met"
#line 618 "chopb.met"
            break ;
#line 618 "chopb.met"
    }
#line 618 "chopb.met"
#line 618 "chopb.met"
#line 621 "chopb.met"
    line = oldLine;
#line 621 "chopb.met"
    LEX_EXIT(0,"")
#line 621 "chopb.met"
    lexEl.Value = -1 ;
#line 621 "chopb.met"
    return -1 ; 
#line 621 "chopb.met"
}
#line 621 "chopb.met"

#line 621 "chopb.met"
#line 14 "chopb.met"
int chopb::LexComment ()
#line 14 "chopb.met"
{
#line 14 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 14 "chopb.met"
        FreePos(lastContextPos);
#line 14 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 14 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 14 "chopb.met"
        ExtUnputBuf();
#line 14 "chopb.met"
    #ifdef DUMP_COORD
#line 14 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 14 "chopb.met"
    #endif
#line 14 "chopb.met"
    
#line 14 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 14 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 14 "chopb.met"
#line 17 "chopb.met"
    if ((! (keepCarriage)) && 
#line 17 "chopb.met"
       (! (parse))){
#line 17 "chopb.met"
#line 18 "chopb.met"
#line 19 "chopb.met"
        ptStockBuf = -1;
#line 19 "chopb.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n'))
#line 19 "chopb.met"
            NextChar() ;
#line 19 "chopb.met"
        ptStockBuf = -1;
#line 19 "chopb.met"
        lexEl.Erase();
#line 19 "chopb.met"
        tokenAhead = 0;
#line 19 "chopb.met"
        oldLine=line,oldCol=col;
#line 19 "chopb.met"
        if ( !lexCallLex) {
#line 19 "chopb.met"
            PUT_COORD_CALL;
#line 19 "chopb.met"
        }
#line 19 "chopb.met"
#line 19 "chopb.met"
#line 19 "chopb.met"
    } else {
#line 19 "chopb.met"
#line 22 "chopb.met"
        if (! (parse)){
#line 22 "chopb.met"
#line 23 "chopb.met"
#line 24 "chopb.met"
            ptStockBuf = -1;
#line 24 "chopb.met"
            while ((c == '\t')||(c == ' '))
#line 24 "chopb.met"
                NextChar() ;
#line 24 "chopb.met"
            ptStockBuf = -1;
#line 24 "chopb.met"
            lexEl.Erase();
#line 24 "chopb.met"
            tokenAhead = 0;
#line 24 "chopb.met"
            oldLine=line,oldCol=col;
#line 24 "chopb.met"
            if ( !lexCallLex) {
#line 24 "chopb.met"
                PUT_COORD_CALL;
#line 24 "chopb.met"
            }
#line 24 "chopb.met"
#line 24 "chopb.met"
#line 24 "chopb.met"
        } else {
#line 24 "chopb.met"
#line 27 "chopb.met"
            ptStockBuf = -1;
#line 27 "chopb.met"
            lexEl.Erase();
#line 27 "chopb.met"
            tokenAhead = 0;
#line 27 "chopb.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 27 "chopb.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 27 "chopb.met"
        }
#line 27 "chopb.met"
    }
#line 27 "chopb.met"
#line 28 "chopb.met"
    switch (c) {
#line 28 "chopb.met"
#line 29 "chopb.met"
        case '/' :
#line 29 "chopb.met"
            NextChar();
#line 29 "chopb.met"
#line 31 "chopb.met"
            switch (c) {
#line 31 "chopb.met"
#line 33 "chopb.met"
                case '/' :
#line 33 "chopb.met"
#line 34 "chopb.met"
#line 35 "chopb.met"
                    begin_comment ();
#line 35 "chopb.met"
#line 36 "chopb.met"
                    {
#line 36 "chopb.met"
                        lexEl . AddChar(c);
#line 36 "chopb.met"
                        NextChar();
#line 36 "chopb.met"
                    }
#line 36 "chopb.met"
#line 37 "chopb.met"
                    while (c != EOF) { 
#line 37 "chopb.met"
#line 38 "chopb.met"
                        switch (c) {
#line 38 "chopb.met"
#line 39 "chopb.met"
                            case '\r' :
#line 39 "chopb.met"
                            case '\n' :
#line 39 "chopb.met"
#line 40 "chopb.met"
#line 41 "chopb.met"
                                {
#line 41 "chopb.met"
                                    store_comment_line(lexEl.length());
#line 41 "chopb.met"
                                    lexEl.Erase();
#line 41 "chopb.met"
                                    ptStockBuf = -1 ;
#line 41 "chopb.met"
                                }
#line 41 "chopb.met"
#line 42 "chopb.met"
                                {
#line 42 "chopb.met"
                                    firstOnLine = 0 ; 
#line 42 "chopb.met"
                                    tokenAhead =2;
#line 42 "chopb.met"
                                     tokenAhead = 0 ; 
#line 42 "chopb.met"
                                     lexCallLex = 1 ; 
#line 42 "chopb.met"
                                    return _Tak(LexComment)();
#line 42 "chopb.met"
                                }
#line 42 "chopb.met"
#line 42 "chopb.met"
                                break ;
#line 42 "chopb.met"
#line 46 "chopb.met"
                            default : 
#line 46 "chopb.met"
                                 if (c!= EOF) {
#line 46 "chopb.met"
#line 45 "chopb.met"
#line 46 "chopb.met"
                                    {
#line 46 "chopb.met"
                                        lexEl . AddChar(c);
#line 46 "chopb.met"
                                        NextChar();
#line 46 "chopb.met"
                                    }
#line 46 "chopb.met"
#line 46 "chopb.met"
                                }
#line 46 "chopb.met"
                                break ;
#line 46 "chopb.met"
                        }
#line 46 "chopb.met"
                    } 
#line 46 "chopb.met"
#line 46 "chopb.met"
                    break ;
#line 46 "chopb.met"
#line 50 "chopb.met"
                case '*' :
#line 50 "chopb.met"
                    NextChar();
#line 50 "chopb.met"
#line 51 "chopb.met"
#line 52 "chopb.met"
                     {int level = 0; 
#line 52 "chopb.met"
#line 53 "chopb.met"
                    begin_comment ();
#line 53 "chopb.met"
#line 54 "chopb.met"
                    while (c != EOF) { 
#line 54 "chopb.met"
#line 55 "chopb.met"
#line 56 "chopb.met"
                        if((GetString("/*",1)&& NextChar())){
#line 56 "chopb.met"
#line 57 "chopb.met"
#line 58 "chopb.met"
                             level ++; 
#line 58 "chopb.met"
#line 59 "chopb.met"
                            {
#line 59 "chopb.met"
                                lexEl.AddString("/*");
#line 59 "chopb.met"
                            }
#line 59 "chopb.met"
#line 59 "chopb.met"
                        } else 
#line 59 "chopb.met"
#line 61 "chopb.met"
                        if((GetString("*/",1)&& NextChar())){
#line 61 "chopb.met"
#line 62 "chopb.met"
#line 63 "chopb.met"
                            if (!level ){
#line 63 "chopb.met"
#line 64 "chopb.met"
#line 65 "chopb.met"
                                {
#line 65 "chopb.met"
                                    store_comment_line(lexEl.length());
#line 65 "chopb.met"
                                    lexEl.Erase();
#line 65 "chopb.met"
                                    ptStockBuf = -1 ;
#line 65 "chopb.met"
                                }
#line 65 "chopb.met"
#line 66 "chopb.met"
                                {
#line 66 "chopb.met"
                                    firstOnLine = 0 ; 
#line 66 "chopb.met"
                                    tokenAhead =2;
#line 66 "chopb.met"
                                     tokenAhead = 0 ; 
#line 66 "chopb.met"
                                     lexCallLex = 1 ; 
#line 66 "chopb.met"
                                    return _Tak(LexComment)();
#line 66 "chopb.met"
                                }
#line 66 "chopb.met"
#line 66 "chopb.met"
#line 66 "chopb.met"
                            } else {
#line 66 "chopb.met"
#line 69 "chopb.met"
#line 70 "chopb.met"
                                 level --;
#line 70 "chopb.met"
#line 71 "chopb.met"
                                {
#line 71 "chopb.met"
                                    lexEl.AddString("*/");
#line 71 "chopb.met"
                                }
#line 71 "chopb.met"
#line 71 "chopb.met"
                            }
#line 71 "chopb.met"
#line 71 "chopb.met"
                        } else 
#line 71 "chopb.met"
#line 74 "chopb.met"
                        if((((c == '\n'))&& NextChar())){
#line 74 "chopb.met"
#line 74 "chopb.met"
                            {
#line 74 "chopb.met"
                                store_comment_line(lexEl.length());
#line 74 "chopb.met"
                                lexEl.Erase();
#line 74 "chopb.met"
                                ptStockBuf = -1 ;
#line 74 "chopb.met"
                            }
#line 74 "chopb.met"
                        } else 
#line 74 "chopb.met"
#line 75 "chopb.met"
                        if((((c == '\r'))&& NextChar())){
#line 75 "chopb.met"
#line 75 "chopb.met"
                        } else 
#line 75 "chopb.met"
#line 78 "chopb.met"
                        if((c != EOF)){
#line 78 "chopb.met"
#line 77 "chopb.met"
#line 78 "chopb.met"
                            {
#line 78 "chopb.met"
                                lexEl . AddChar(c);
#line 78 "chopb.met"
                                NextChar();
#line 78 "chopb.met"
                            }
#line 78 "chopb.met"
#line 78 "chopb.met"
                        } else 
#line 78 "chopb.met"
                         ;
#line 78 "chopb.met"
                    } 
#line 78 "chopb.met"
#line 81 "chopb.met"
                    } 
#line 81 "chopb.met"
#line 81 "chopb.met"
                    break ;
#line 81 "chopb.met"
#line 85 "chopb.met"
                default : 
#line 85 "chopb.met"
                     if (c!= EOF) {
#line 85 "chopb.met"
#line 84 "chopb.met"
#line 85 "chopb.met"
                        if(ptStockBuf > -1) UnputBuf ();
#line 85 "chopb.met"
                        lexEl.Erase();
#line 85 "chopb.met"
                        tokenAhead = 0;
#line 85 "chopb.met"
                        if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 85 "chopb.met"
                        lastContextPos = (PFILE_POSITION) 0 ;
#line 85 "chopb.met"
#line 85 "chopb.met"
                    }
#line 85 "chopb.met"
                    break ;
#line 85 "chopb.met"
            }
#line 85 "chopb.met"
            break ;
#line 85 "chopb.met"
    }
#line 85 "chopb.met"
#line 85 "chopb.met"
#line 88 "chopb.met"
    if ( lexCallLex) {PUT_COORD_AFTER_COMMENTS_CALL;
#line 88 "chopb.met"
    }line = oldLine;
#line 88 "chopb.met"
    LEX_EXIT(0,"")
#line 88 "chopb.met"
    lexEl.Value = -1 ;
#line 88 "chopb.met"
    return -1 ; 
#line 88 "chopb.met"
}
#line 88 "chopb.met"

#line 88 "chopb.met"
#line 203 "chopb.met"
int chopb::LexEtoiEtoi ()
#line 203 "chopb.met"
{
#line 203 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 203 "chopb.met"
        FreePos(lastContextPos);
#line 203 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 203 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 203 "chopb.met"
        ExtUnputBuf();
#line 203 "chopb.met"
    #ifdef DUMP_COORD
#line 203 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 203 "chopb.met"
    #endif
#line 203 "chopb.met"
    
#line 203 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 203 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 203 "chopb.met"
    tokenAhead = 0;
#line 203 "chopb.met"
    if(LexMeta() != -1){tokenAhead =15; return 1;}
#line 203 "chopb.met"
#line 204 "chopb.met"
    if (keepCarriage){
#line 204 "chopb.met"
#line 205 "chopb.met"
#line 206 "chopb.met"
        ptStockBuf = -1;
#line 206 "chopb.met"
        while ((c == ' ')||(c == '\t'))
#line 206 "chopb.met"
            NextChar() ;
#line 206 "chopb.met"
        ptStockBuf = -1;
#line 206 "chopb.met"
        lexEl.Erase();
#line 206 "chopb.met"
        tokenAhead = 0;
#line 206 "chopb.met"
        oldLine=line,oldCol=col;
#line 206 "chopb.met"
        if ( !lexCallLex) {
#line 206 "chopb.met"
            PUT_COORD_CALL;
#line 206 "chopb.met"
        }
#line 206 "chopb.met"
#line 206 "chopb.met"
#line 206 "chopb.met"
    } else {
#line 206 "chopb.met"
#line 209 "chopb.met"
#line 210 "chopb.met"
        ptStockBuf = -1;
#line 210 "chopb.met"
        while ((c == ' ')||(c == '\t')||(c == '\r')||(c == '\n'))
#line 210 "chopb.met"
            NextChar() ;
#line 210 "chopb.met"
        ptStockBuf = -1;
#line 210 "chopb.met"
        lexEl.Erase();
#line 210 "chopb.met"
        tokenAhead = 0;
#line 210 "chopb.met"
        oldLine=line,oldCol=col;
#line 210 "chopb.met"
        if ( !lexCallLex) {
#line 210 "chopb.met"
            PUT_COORD_CALL;
#line 210 "chopb.met"
        }
#line 210 "chopb.met"
#line 210 "chopb.met"
    }
#line 210 "chopb.met"
#line 212 "chopb.met"
#line 213 "chopb.met"
    if((GetString("**",1)&& NextChar())){
#line 213 "chopb.met"
#line 214 "chopb.met"
        if (GetString("=",0)){
#line 214 "chopb.met"
#line 215 "chopb.met"
            if(ptStockBuf > -1) UnputBuf ();
#line 215 "chopb.met"
            lexEl.Erase();
#line 215 "chopb.met"
            tokenAhead = 0;
#line 215 "chopb.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 215 "chopb.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 215 "chopb.met"
#line 215 "chopb.met"
        } else {
#line 215 "chopb.met"
#line 217 "chopb.met"
            {
#line 217 "chopb.met"
                firstOnLine = 0 ; 
#line 217 "chopb.met"
                tokenAhead =15;
#line 217 "chopb.met"
                lexEl.Value=ETOI_ETOI;
#line 217 "chopb.met"
                PUT_COORD_CALL;
#line 217 "chopb.met"
                return(1);
#line 217 "chopb.met"
            }
#line 217 "chopb.met"
        }
#line 217 "chopb.met"
    } else 
#line 217 "chopb.met"
#line 218 "chopb.met"
    if((GetString("*",1)&& NextChar())){
#line 218 "chopb.met"
#line 219 "chopb.met"
        if (GetString("=",0)){
#line 219 "chopb.met"
#line 220 "chopb.met"
            if(ptStockBuf > -1) UnputBuf ();
#line 220 "chopb.met"
            lexEl.Erase();
#line 220 "chopb.met"
            tokenAhead = 0;
#line 220 "chopb.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 220 "chopb.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 220 "chopb.met"
#line 220 "chopb.met"
        } else {
#line 220 "chopb.met"
#line 222 "chopb.met"
            {
#line 222 "chopb.met"
                firstOnLine = 0 ; 
#line 222 "chopb.met"
                tokenAhead =15;
#line 222 "chopb.met"
                lexEl.Value=SIMP_ETOI;
#line 222 "chopb.met"
                PUT_COORD_CALL;
#line 222 "chopb.met"
                return(1);
#line 222 "chopb.met"
            }
#line 222 "chopb.met"
        }
#line 222 "chopb.met"
    } else 
#line 222 "chopb.met"
     ;
#line 222 "chopb.met"
#line 222 "chopb.met"
#line 223 "chopb.met"
    line = oldLine;
#line 223 "chopb.met"
    LEX_EXIT(0,"")
#line 223 "chopb.met"
    lexEl.Value = -1 ;
#line 223 "chopb.met"
    return -1 ; 
#line 223 "chopb.met"
}
#line 223 "chopb.met"

#line 223 "chopb.met"
#line 91 "chopb.met"
int chopb::LexMeta ()
#line 91 "chopb.met"
{
#line 91 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 91 "chopb.met"
        FreePos(lastContextPos);
#line 91 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 91 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 91 "chopb.met"
        ExtUnputBuf();
#line 91 "chopb.met"
    #ifdef DUMP_COORD
#line 91 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 91 "chopb.met"
    #endif
#line 91 "chopb.met"
    
#line 91 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 91 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 91 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 91 "chopb.met"
#line 94 "chopb.met"
    if ((! (keepCarriage)) && 
#line 94 "chopb.met"
       (! (parse))){
#line 94 "chopb.met"
#line 95 "chopb.met"
#line 96 "chopb.met"
        ptStockBuf = -1;
#line 96 "chopb.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n'))
#line 96 "chopb.met"
            NextChar() ;
#line 96 "chopb.met"
        ptStockBuf = -1;
#line 96 "chopb.met"
        lexEl.Erase();
#line 96 "chopb.met"
        tokenAhead = 0;
#line 96 "chopb.met"
        oldLine=line,oldCol=col;
#line 96 "chopb.met"
        if ( !lexCallLex) {
#line 96 "chopb.met"
            PUT_COORD_CALL;
#line 96 "chopb.met"
        }
#line 96 "chopb.met"
#line 96 "chopb.met"
#line 96 "chopb.met"
    } else {
#line 96 "chopb.met"
#line 99 "chopb.met"
        if (! (parse)){
#line 99 "chopb.met"
#line 100 "chopb.met"
#line 101 "chopb.met"
            ptStockBuf = -1;
#line 101 "chopb.met"
            while ((c == '\t')||(c == ' '))
#line 101 "chopb.met"
                NextChar() ;
#line 101 "chopb.met"
            ptStockBuf = -1;
#line 101 "chopb.met"
            lexEl.Erase();
#line 101 "chopb.met"
            tokenAhead = 0;
#line 101 "chopb.met"
            oldLine=line,oldCol=col;
#line 101 "chopb.met"
            if ( !lexCallLex) {
#line 101 "chopb.met"
                PUT_COORD_CALL;
#line 101 "chopb.met"
            }
#line 101 "chopb.met"
#line 101 "chopb.met"
#line 101 "chopb.met"
        } else {
#line 101 "chopb.met"
#line 104 "chopb.met"
            ptStockBuf = -1;
#line 104 "chopb.met"
            lexEl.Erase();
#line 104 "chopb.met"
            tokenAhead = 0;
#line 104 "chopb.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 104 "chopb.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 104 "chopb.met"
        }
#line 104 "chopb.met"
    }
#line 104 "chopb.met"
#line 105 "chopb.met"
    if (! (parse)){
#line 105 "chopb.met"
#line 106 "chopb.met"
        switch (c) {
#line 106 "chopb.met"
#line 107 "chopb.met"
            case '$' :
#line 107 "chopb.met"
                NextChar();
#line 107 "chopb.met"
#line 109 "chopb.met"
#line 111 "chopb.met"
                if (! (((c == '(')))){
#line 111 "chopb.met"
#line 112 "chopb.met"
                    while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||('0' <= c && c <= '9')||(c == '_'))) { 
#line 112 "chopb.met"
#line 113 "chopb.met"
                        {
#line 113 "chopb.met"
                            lexEl . AddChar(c);
#line 113 "chopb.met"
                            NextChar();
#line 113 "chopb.met"
                        }
#line 113 "chopb.met"
                    } 
#line 113 "chopb.met"
                } else {
#line 113 "chopb.met"
#line 115 "chopb.met"
#line 116 "chopb.met"
                     int nbPar = 0;
#line 116 "chopb.met"
#line 117 "chopb.met"
                    {
#line 117 "chopb.met"
                        lexEl . AddChar(c);
#line 117 "chopb.met"
                        NextChar();
#line 117 "chopb.met"
                    }
#line 117 "chopb.met"
#line 118 "chopb.met"
                    while (c != EOF) { 
#line 118 "chopb.met"
#line 119 "chopb.met"
                        switch (c) {
#line 119 "chopb.met"
#line 120 "chopb.met"
                            case '(' :
#line 120 "chopb.met"
#line 121 "chopb.met"
#line 122 "chopb.met"
                                 nbPar++;
#line 122 "chopb.met"
#line 123 "chopb.met"
                                {
#line 123 "chopb.met"
                                    lexEl . AddChar(c);
#line 123 "chopb.met"
                                    NextChar();
#line 123 "chopb.met"
                                }
#line 123 "chopb.met"
#line 123 "chopb.met"
                                break ;
#line 123 "chopb.met"
#line 125 "chopb.met"
                            case ')' :
#line 125 "chopb.met"
#line 126 "chopb.met"
                                if (!nbPar ){
#line 126 "chopb.met"
#line 127 "chopb.met"
#line 128 "chopb.met"
                                    {
#line 128 "chopb.met"
                                        lexEl . AddChar(c);
#line 128 "chopb.met"
                                        NextChar();
#line 128 "chopb.met"
                                    }
#line 128 "chopb.met"
#line 129 "chopb.met"
                                    {
#line 129 "chopb.met"
                                        firstOnLine = 0 ; 
#line 129 "chopb.met"
                                        tokenAhead =7;
#line 129 "chopb.met"
                                        lexEl.Value=META;
#line 129 "chopb.met"
                                        PUT_COORD_CALL;
#line 129 "chopb.met"
                                        return(1);
#line 129 "chopb.met"
                                    }
#line 129 "chopb.met"
#line 129 "chopb.met"
#line 129 "chopb.met"
                                } else {
#line 129 "chopb.met"
#line 132 "chopb.met"
#line 133 "chopb.met"
                                    {
#line 133 "chopb.met"
                                        lexEl . AddChar(c);
#line 133 "chopb.met"
                                        NextChar();
#line 133 "chopb.met"
                                    }
#line 133 "chopb.met"
#line 134 "chopb.met"
                                     nbPar--;
#line 134 "chopb.met"
#line 134 "chopb.met"
                                }
#line 134 "chopb.met"
                                break ;
#line 134 "chopb.met"
#line 136 "chopb.met"
                            default : 
#line 136 "chopb.met"
                                 if (c!= EOF) {
#line 136 "chopb.met"
#line 136 "chopb.met"
                                    {
#line 136 "chopb.met"
                                        lexEl . AddChar(c);
#line 136 "chopb.met"
                                        NextChar();
#line 136 "chopb.met"
                                    }
#line 136 "chopb.met"
                                }
#line 136 "chopb.met"
                                break ;
#line 136 "chopb.met"
                        }
#line 136 "chopb.met"
                    } 
#line 136 "chopb.met"
#line 136 "chopb.met"
                }
#line 136 "chopb.met"
#line 139 "chopb.met"
                {
#line 139 "chopb.met"
                    firstOnLine = 0 ; 
#line 139 "chopb.met"
                    tokenAhead =7;
#line 139 "chopb.met"
                    lexEl.Value=META;
#line 139 "chopb.met"
                    PUT_COORD_CALL;
#line 139 "chopb.met"
                    return(1);
#line 139 "chopb.met"
                }
#line 139 "chopb.met"
#line 139 "chopb.met"
                break ;
#line 139 "chopb.met"
        }
#line 139 "chopb.met"
#line 141 "chopb.met"
    }
#line 141 "chopb.met"
#line 141 "chopb.met"
#line 141 "chopb.met"
    
#line 142 "chopb.met"
    line = oldLine;
#line 142 "chopb.met"
    LEX_EXIT(0,"")
#line 142 "chopb.met"
    lexEl.Value = -1 ;
#line 142 "chopb.met"
    return -1 ; 
#line 142 "chopb.met"
}
#line 142 "chopb.met"

#line 142 "chopb.met"
#line 226 "chopb.met"
int chopb::LexParse ()
#line 226 "chopb.met"
{
#line 226 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 226 "chopb.met"
        FreePos(lastContextPos);
#line 226 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 226 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 226 "chopb.met"
        ExtUnputBuf();
#line 226 "chopb.met"
    #ifdef DUMP_COORD
#line 226 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 226 "chopb.met"
    #endif
#line 226 "chopb.met"
    
#line 226 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 226 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 226 "chopb.met"
    tokenAhead = 0;
#line 226 "chopb.met"
    if(LexMeta() != -1){tokenAhead =16; return 1;}
#line 226 "chopb.met"
#line 227 "chopb.met"
    if ((nb_par_parse > 0)){
#line 227 "chopb.met"
#line 228 "chopb.met"
#line 229 "chopb.met"
        ptStockBuf = -1;
#line 229 "chopb.met"
        lexEl.Erase();
#line 229 "chopb.met"
        tokenAhead = 0;
#line 229 "chopb.met"
        if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 229 "chopb.met"
        lastContextPos = (PFILE_POSITION) 0 ;
#line 229 "chopb.met"
#line 230 "chopb.met"
        while (c != EOF) { 
#line 230 "chopb.met"
#line 231 "chopb.met"
            switch (c) {
#line 231 "chopb.met"
#line 232 "chopb.met"
                case '(' :
#line 232 "chopb.met"
#line 233 "chopb.met"
#line 234 "chopb.met"
                    {
#line 234 "chopb.met"
                        lexEl . AddChar(c);
#line 234 "chopb.met"
                        NextChar();
#line 234 "chopb.met"
                    }
#line 234 "chopb.met"
#line 235 "chopb.met"
                     nb_par_parse++;
#line 235 "chopb.met"
#line 235 "chopb.met"
                    break ;
#line 235 "chopb.met"
#line 237 "chopb.met"
                case ')' :
#line 237 "chopb.met"
#line 238 "chopb.met"
#line 239 "chopb.met"
                    if (!(c != EOF&& NextChar())) ;
#line 239 "chopb.met"
#line 240 "chopb.met"
                     nb_par_parse--;
#line 240 "chopb.met"
#line 241 "chopb.met"
                    if ((nb_par_parse <= 0)){
#line 241 "chopb.met"
#line 242 "chopb.met"
                        {
#line 242 "chopb.met"
                            firstOnLine = 0 ; 
#line 242 "chopb.met"
                            tokenAhead =16;
#line 242 "chopb.met"
                            lexEl.Value=PARSE_ELEM;
#line 242 "chopb.met"
                            PUT_COORD_CALL;
#line 242 "chopb.met"
                            return(1);
#line 242 "chopb.met"
                        }
#line 242 "chopb.met"
                    }
#line 242 "chopb.met"
#line 243 "chopb.met"
                    {
#line 243 "chopb.met"
                        lexEl.AddString(")");
#line 243 "chopb.met"
                    }
#line 243 "chopb.met"
#line 243 "chopb.met"
                    break ;
#line 243 "chopb.met"
#line 245 "chopb.met"
                case '\r' :
#line 245 "chopb.met"
#line 245 "chopb.met"
                    if (!(c != EOF&& NextChar())) ;
#line 245 "chopb.met"
                    break ;
#line 245 "chopb.met"
#line 246 "chopb.met"
                case '\n' :
#line 246 "chopb.met"
#line 247 "chopb.met"
#line 248 "chopb.met"
                    if (!(c != EOF&& NextChar())) ;
#line 248 "chopb.met"
#line 249 "chopb.met"
                    {
#line 249 "chopb.met"
                        firstOnLine = 0 ; 
#line 249 "chopb.met"
                        tokenAhead =16;
#line 249 "chopb.met"
                        lexEl.Value=PARSE_ELEM;
#line 249 "chopb.met"
                        PUT_COORD_CALL;
#line 249 "chopb.met"
                        return(1);
#line 249 "chopb.met"
                    }
#line 249 "chopb.met"
#line 249 "chopb.met"
                    break ;
#line 249 "chopb.met"
#line 251 "chopb.met"
                default : 
#line 251 "chopb.met"
                     if (c!= EOF) {
#line 251 "chopb.met"
#line 251 "chopb.met"
                        {
#line 251 "chopb.met"
                            lexEl . AddChar(c);
#line 251 "chopb.met"
                            NextChar();
#line 251 "chopb.met"
                        }
#line 251 "chopb.met"
                    }
#line 251 "chopb.met"
                    break ;
#line 251 "chopb.met"
            }
#line 251 "chopb.met"
        } 
#line 251 "chopb.met"
#line 251 "chopb.met"
#line 252 "chopb.met"
    }
#line 252 "chopb.met"
#line 252 "chopb.met"
#line 253 "chopb.met"
    line = oldLine;
#line 253 "chopb.met"
    LEX_EXIT(0,"")
#line 253 "chopb.met"
    lexEl.Value = -1 ;
#line 253 "chopb.met"
    return -1 ; 
#line 253 "chopb.met"
}
#line 253 "chopb.met"

#line 253 "chopb.met"
#line 144 "chopb.met"
int chopb::LexSup ()
#line 144 "chopb.met"
{
#line 144 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 144 "chopb.met"
        FreePos(lastContextPos);
#line 144 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 144 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 144 "chopb.met"
        ExtUnputBuf();
#line 144 "chopb.met"
    #ifdef DUMP_COORD
#line 144 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 144 "chopb.met"
    #endif
#line 144 "chopb.met"
    
#line 144 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 144 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 144 "chopb.met"
    tokenAhead = 0;
#line 144 "chopb.met"
    if(LexMeta() != -1){tokenAhead =17; return 1;}
#line 144 "chopb.met"
#line 145 "chopb.met"
    if (keepCarriage){
#line 145 "chopb.met"
#line 146 "chopb.met"
#line 147 "chopb.met"
        ptStockBuf = -1;
#line 147 "chopb.met"
        while ((c == ' ')||(c == '\t'))
#line 147 "chopb.met"
            NextChar() ;
#line 147 "chopb.met"
        ptStockBuf = -1;
#line 147 "chopb.met"
        lexEl.Erase();
#line 147 "chopb.met"
        tokenAhead = 0;
#line 147 "chopb.met"
        oldLine=line,oldCol=col;
#line 147 "chopb.met"
        if ( !lexCallLex) {
#line 147 "chopb.met"
            PUT_COORD_CALL;
#line 147 "chopb.met"
        }
#line 147 "chopb.met"
#line 147 "chopb.met"
#line 147 "chopb.met"
    } else {
#line 147 "chopb.met"
#line 150 "chopb.met"
#line 151 "chopb.met"
        ptStockBuf = -1;
#line 151 "chopb.met"
        while ((c == ' ')||(c == '\t')||(c == '\r')||(c == '\n'))
#line 151 "chopb.met"
            NextChar() ;
#line 151 "chopb.met"
        ptStockBuf = -1;
#line 151 "chopb.met"
        lexEl.Erase();
#line 151 "chopb.met"
        tokenAhead = 0;
#line 151 "chopb.met"
        oldLine=line,oldCol=col;
#line 151 "chopb.met"
        if ( !lexCallLex) {
#line 151 "chopb.met"
            PUT_COORD_CALL;
#line 151 "chopb.met"
        }
#line 151 "chopb.met"
#line 151 "chopb.met"
    }
#line 151 "chopb.met"
#line 153 "chopb.met"
    switch (c) {
#line 153 "chopb.met"
#line 154 "chopb.met"
        case '<' :
#line 154 "chopb.met"
#line 155 "chopb.met"
#line 156 "chopb.met"
            {
#line 156 "chopb.met"
                lexEl . AddChar(c);
#line 156 "chopb.met"
                NextChar();
#line 156 "chopb.met"
            }
#line 156 "chopb.met"
#line 157 "chopb.met"
            {
#line 157 "chopb.met"
                firstOnLine = 0 ; 
#line 157 "chopb.met"
                tokenAhead =17;
#line 157 "chopb.met"
                lexEl.Value=MAKETREE_INF;
#line 157 "chopb.met"
                PUT_COORD_CALL;
#line 157 "chopb.met"
                return(1);
#line 157 "chopb.met"
            }
#line 157 "chopb.met"
#line 157 "chopb.met"
            break ;
#line 157 "chopb.met"
#line 159 "chopb.met"
        case '>' :
#line 159 "chopb.met"
#line 160 "chopb.met"
#line 161 "chopb.met"
            {
#line 161 "chopb.met"
                lexEl . AddChar(c);
#line 161 "chopb.met"
                NextChar();
#line 161 "chopb.met"
            }
#line 161 "chopb.met"
#line 162 "chopb.met"
            {
#line 162 "chopb.met"
                firstOnLine = 0 ; 
#line 162 "chopb.met"
                tokenAhead =17;
#line 162 "chopb.met"
                lexEl.Value=MAKETREE_SUP;
#line 162 "chopb.met"
                PUT_COORD_CALL;
#line 162 "chopb.met"
                return(1);
#line 162 "chopb.met"
            }
#line 162 "chopb.met"
#line 162 "chopb.met"
            break ;
#line 162 "chopb.met"
    }
#line 162 "chopb.met"
#line 162 "chopb.met"
#line 164 "chopb.met"
    line = oldLine;
#line 164 "chopb.met"
    LEX_EXIT(0,"")
#line 164 "chopb.met"
    lexEl.Value = -1 ;
#line 164 "chopb.met"
    return -1 ; 
#line 164 "chopb.met"
}
#line 164 "chopb.met"

#line 164 "chopb.met"
#line 167 "chopb.met"
int chopb::formatBeg ()
#line 167 "chopb.met"
{
#line 167 "chopb.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 167 "chopb.met"
        FreePos(lastContextPos);
#line 167 "chopb.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 167 "chopb.met"
    if ( tokenAhead && tokenAhead != -1)
#line 167 "chopb.met"
        ExtUnputBuf();
#line 167 "chopb.met"
    #ifdef DUMP_COORD
#line 167 "chopb.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 167 "chopb.met"
    #endif
#line 167 "chopb.met"
    
#line 167 "chopb.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 167 "chopb.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 167 "chopb.met"
    tokenAhead = 0;
#line 167 "chopb.met"
    if(LexMeta() != -1){tokenAhead =18; return 1;}
#line 167 "chopb.met"
#line 167 "chopb.met"
    ptStockBuf = -1;
#line 167 "chopb.met"
    while ((c == ' ')||(c == '\t')||(c == '\r')||(c == '\n'))
#line 167 "chopb.met"
        NextChar() ;
#line 167 "chopb.met"
    ptStockBuf = -1;
#line 167 "chopb.met"
    lexEl.Erase();
#line 167 "chopb.met"
    tokenAhead = 0;
#line 167 "chopb.met"
    oldLine=line,oldCol=col;
#line 167 "chopb.met"
    if ( !lexCallLex) {
#line 167 "chopb.met"
        PUT_COORD_CALL;
#line 167 "chopb.met"
    }
#line 167 "chopb.met"
#line 169 "chopb.met"
#line 170 "chopb.met"
    if((GetString("<S,",0))){
#line 170 "chopb.met"
#line 171 "chopb.met"
#line 172 "chopb.met"
        if (!(GetString("<S",1)&& NextChar())) ;
#line 172 "chopb.met"
#line 173 "chopb.met"
        {
#line 173 "chopb.met"
            firstOnLine = 0 ; 
#line 173 "chopb.met"
            tokenAhead =18;
#line 173 "chopb.met"
            lexEl.Value=SPACE_BEG;
#line 173 "chopb.met"
            PUT_COORD_CALL;
#line 173 "chopb.met"
            return(1);
#line 173 "chopb.met"
        }
#line 173 "chopb.met"
#line 173 "chopb.met"
    } else 
#line 173 "chopb.met"
#line 175 "chopb.met"
    if((GetString("<S>",0))){
#line 175 "chopb.met"
#line 176 "chopb.met"
#line 177 "chopb.met"
        if (!(GetString("<S",1)&& NextChar())) ;
#line 177 "chopb.met"
#line 178 "chopb.met"
        {
#line 178 "chopb.met"
            firstOnLine = 0 ; 
#line 178 "chopb.met"
            tokenAhead =18;
#line 178 "chopb.met"
            lexEl.Value=SPACE_BEG;
#line 178 "chopb.met"
            PUT_COORD_CALL;
#line 178 "chopb.met"
            return(1);
#line 178 "chopb.met"
        }
#line 178 "chopb.met"
#line 178 "chopb.met"
    } else 
#line 178 "chopb.met"
#line 180 "chopb.met"
    if((GetString("<T,",0))){
#line 180 "chopb.met"
#line 181 "chopb.met"
#line 182 "chopb.met"
        if (!(GetString("<T",1)&& NextChar())) ;
#line 182 "chopb.met"
#line 183 "chopb.met"
        {
#line 183 "chopb.met"
            firstOnLine = 0 ; 
#line 183 "chopb.met"
            tokenAhead =18;
#line 183 "chopb.met"
            lexEl.Value=TAB_BEG;
#line 183 "chopb.met"
            PUT_COORD_CALL;
#line 183 "chopb.met"
            return(1);
#line 183 "chopb.met"
        }
#line 183 "chopb.met"
#line 183 "chopb.met"
    } else 
#line 183 "chopb.met"
#line 185 "chopb.met"
    if((GetString("<T>",0))){
#line 185 "chopb.met"
#line 186 "chopb.met"
#line 187 "chopb.met"
        if (!(GetString("<T",1)&& NextChar())) ;
#line 187 "chopb.met"
#line 188 "chopb.met"
        {
#line 188 "chopb.met"
            firstOnLine = 0 ; 
#line 188 "chopb.met"
            tokenAhead =18;
#line 188 "chopb.met"
            lexEl.Value=TAB_BEG;
#line 188 "chopb.met"
            PUT_COORD_CALL;
#line 188 "chopb.met"
            return(1);
#line 188 "chopb.met"
        }
#line 188 "chopb.met"
#line 188 "chopb.met"
    } else 
#line 188 "chopb.met"
#line 190 "chopb.met"
    if((GetString("<NL,",0))){
#line 190 "chopb.met"
#line 191 "chopb.met"
#line 192 "chopb.met"
        if (!(GetString("<NL",1)&& NextChar())) ;
#line 192 "chopb.met"
#line 193 "chopb.met"
        {
#line 193 "chopb.met"
            firstOnLine = 0 ; 
#line 193 "chopb.met"
            tokenAhead =18;
#line 193 "chopb.met"
            lexEl.Value=NL_BEG;
#line 193 "chopb.met"
            PUT_COORD_CALL;
#line 193 "chopb.met"
            return(1);
#line 193 "chopb.met"
        }
#line 193 "chopb.met"
#line 193 "chopb.met"
    } else 
#line 193 "chopb.met"
#line 195 "chopb.met"
    if((GetString("<NL>",0))){
#line 195 "chopb.met"
#line 196 "chopb.met"
#line 197 "chopb.met"
        if (!(GetString("<NL",1)&& NextChar())) ;
#line 197 "chopb.met"
#line 198 "chopb.met"
        {
#line 198 "chopb.met"
            firstOnLine = 0 ; 
#line 198 "chopb.met"
            tokenAhead =18;
#line 198 "chopb.met"
            lexEl.Value=NL_BEG;
#line 198 "chopb.met"
            PUT_COORD_CALL;
#line 198 "chopb.met"
            return(1);
#line 198 "chopb.met"
        }
#line 198 "chopb.met"
#line 198 "chopb.met"
    } else 
#line 198 "chopb.met"
     ;
#line 198 "chopb.met"
#line 198 "chopb.met"
#line 200 "chopb.met"
    line = oldLine;
#line 200 "chopb.met"
    LEX_EXIT(0,"")
#line 200 "chopb.met"
    lexEl.Value = -1 ;
#line 200 "chopb.met"
    return -1 ; 
#line 200 "chopb.met"
}
#line 200 "chopb.met"

#line 200 "chopb.met"
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
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
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
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 7 -- arg_declarator
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 8 -- arg_declarator_base
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 9 -- arg_declarator_followed
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 10 -- arg_declarator_type
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 11 -- arg_typ_declarator
    META
    POUV
-- 12 -- arg_typ_list
    ALWAYS
-- 13 -- array_expression_follow
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    CFER
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 14 -- asm_call
    META
    __ASM__
-- 15 -- asm_declaration
    META
    ASM
-- 16 -- assignment_end
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
-- 17 -- assignment_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 18 -- attribute_call
    META
    __ATTRIBUTE__
-- 19 -- base_specifier
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 20 -- base_specifier_elem
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 21 -- bit_field_decl
    META
    IDENT
    DPOI
-- 22 -- cast_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 23 -- cast_expression_value
    META
    POUV
-- 24 -- catch_unit
    META
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 25 -- catch_unit_ansi
    META
    CATCH
-- 26 -- class_declaration
    META
    STRUCT
    UNION
    CLASS
-- 27 -- comment_eater
    ALWAYS
-- 28 -- complete_class_name
    META
    IDENT
    DPOIDPOI
-- 29 -- compound_statement
    META
    AOUV
-- 30 -- conditional_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 31 -- const_or_volatile
    META
    VOLATILE
    CONST
-- 32 -- constan
    META
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
-- 33 -- ctor_initializer
    ALWAYS
-- 34 -- data_decl_exotic
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
-- 35 -- data_decl_sc_decl
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 36 -- data_decl_sc_decl_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 37 -- data_decl_sc_decl_short
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 38 -- data_decl_sc_ty_decl
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 39 -- data_decl_sc_ty_decl_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 40 -- data_decl_sc_ty_decl_short
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 41 -- data_declaration
    ALWAYS
-- 42 -- data_declaration_for
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 43 -- data_declaration_for_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 44 -- data_declaration_for_short
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 45 -- data_declaration_strict
    ALWAYS
-- 46 -- deallocation_expression
    META
    DELETE
-- 47 -- declarator
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 48 -- declarator_follow
    ALWAYS
-- 49 -- declarator_list
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 50 -- declarator_list_init
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 51 -- declarator_value
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
    POUV
-- 52 -- define_dir
    META
    DEFINE_DIR
-- 53 -- directive
    META
    INCLUDE_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
-- 54 -- end_pragma
    META
    PRAGMA_DIR
-- 55 -- end_pragma_managed
    META
    PRAGMA_DIR
-- 56 -- enum_declarator
    META
    ENUM
-- 57 -- enum_val
    META
    IDENT
-- 58 -- equality_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 59 -- exception
    META
    TRY_UPPER
-- 60 -- exception_ansi
    META
    TRY
-- 61 -- exception_list
    META
    THROW
-- 62 -- exclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 63 -- expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 64 -- expression_for
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 65 -- ext_all
    ALWAYS
-- 66 -- ext_all_ext
    ALWAYS
-- 67 -- ext_all_no_linkage
    ALWAYS
-- 68 -- ext_data_decl_sc_ty
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 69 -- ext_data_decl_sc_ty_full
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 70 -- ext_data_decl_sc_ty_short
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 71 -- ext_data_decl_simp
    ALWAYS
-- 72 -- ext_data_declaration
    ALWAYS
-- 73 -- ext_decl_dir
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
-- 74 -- ext_decl_if_dir
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 75 -- ext_decl_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 76 -- for_statement
    META
    POUV
-- 77 -- func_declaration
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
    ETOI
    ETCO
    TILD
    OPERATOR
-- 78 -- func_declarator
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ETOI
    ETCO
    TILD
    OPERATOR
-- 79 -- ident_mul
    META
    IDENT
    DPOIDPOI
-- 80 -- include_dir
    META
    INCLUDE_DIR
-- 81 -- inclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 82 -- initializer
    ALWAYS
-- 83 -- inline_namespace
    META
    INLINE
-- 84 -- inside_declaration
    ALWAYS
-- 85 -- inside_declaration1
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 86 -- inside_declaration2
    META
    IDENT
    DPOI
-- 87 -- inside_declaration_extension
    ALWAYS
-- 88 -- label_beg
    META
    IDENT
-- 89 -- linkage_specification
    META
    EXTERN
-- 90 -- logical_and_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 91 -- logical_or_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 92 -- long_type
    META
    LONG
-- 93 -- macro
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
-- 94 -- macro_extended
    ALWAYS
-- 95 -- main_entry
    META
    LANGUAGE
-- 96 -- member_declarator
    META
    IDENT
    DPOIDPOI
-- 97 -- message_map
    META
    BEGIN_MESSAGE_MAP
-- 98 -- multiplicative_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 99 -- name_space
    META
    NAMESPACE
    USING
-- 100 -- new_1
    META
    POUV
-- 101 -- new_2
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
    POUV
-- 102 -- new_declarator
    ALWAYS
-- 103 -- new_type_name
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 104 -- none_statement
    ALWAYS
-- 105 -- operator_function_name
    META
    OPERATOR
-- 106 -- other_config
    META
    PRAGMA_CONTENT
-- 107 -- parameter_list
    META
    POUV
-- 108 -- parameter_list_extended
    META
    POUV
-- 109 -- pm_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 110 -- postfix_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
    TILD
    OPERATOR
    POUV
    VA_ARG
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 111 -- pretty::bidon
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 112 -- pretty::parse_entry
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 113 -- primary_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 114 -- program
    ALWAYS
-- 115 -- protect_declare
    META
    PRIVATE
    PROTECTED
    PUBLIC
-- 116 -- ptr_operator
    META
    IDENT
    DPOIDPOI
    ETOI
    ETCO
-- 117 -- qualified_name
    META
    IDENT
    TILD
-- 118 -- qualified_name_elem
    META
    DPOIDPOI
-- 119 -- quick_prog
    ALWAYS
-- 120 -- quick_prog_elem
    ALWAYS
-- 121 -- range_in_liste
    META
    IDENT
-- 122 -- range_modifier
    META
    IDENT
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
-- 123 -- range_modifier_function
    META
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
-- 124 -- range_modifier_ident
    ALWAYS
-- 125 -- range_pragma
    META
    PRAGMA_RANGE
-- 126 -- relational_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 127 -- sc_specifier
    ALWAYS
-- 128 -- shift_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 129 -- short_long_int_char
    META
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 130 -- signed_type
    META
    SIGNED
-- 131 -- simple_ident
    META
    IDENT
-- 132 -- simple_type
    META
    IDENT
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 133 -- simple_type_name
    META
    IDENT
    AUTO
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 134 -- sizeof_type
    META
    POUV
-- 135 -- stat_all
    ALWAYS
-- 136 -- stat_dir
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
-- 137 -- stat_dir_switch
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
-- 138 -- stat_if_dir
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 139 -- stat_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 140 -- statement
    META
    GOTO
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
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
-- 141 -- statement_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 142 -- string_list
    META
    STRING
-- 143 -- switch_elem
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
-- 144 -- switch_list
    META
    AOUV
-- 145 -- template_type
    META
    INFE
-- 146 -- type_and_declarator
    META
    IDENT
    AUTO
    STATIC
    EXTERN
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 147 -- type_descr
    META
    IDENT
-- 148 -- type_name
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 149 -- type_specifier
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 150 -- type_specifier_without_param
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 151 -- typedef_and_declarator
    META
    IDENT
    AUTO
    REGISTER
    VOLATILE
    __ATTRIBUTE__
    __ASM__
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
    ENUM
    STRUCT
    UNION
    CLASS
    TYPENAME
    DECLTYPE
    DOUBLE
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 152 -- unary_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 153 -- unsigned_type
    META
    UNSIGNED
-- 154 -- cplus::assignment_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 155 -- cplus::cast_expression_value
    META
    POUV
-- 156 -- cplus::exclusive_or_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 157 -- cplus::expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 158 -- cplus::main_entry
    ALWAYS
-- 159 -- cplus::multiplicative_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 160 -- cplus::postfix_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
    TILD
    OPERATOR
    POUV
    VA_ARG
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 161 -- cplus::primary_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
-- 162 -- cplus::relational_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 163 -- cplus::shift_expression
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 164 -- cplus::statement
    META
    GOTO
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 165 -- old
    ALWAYS
-- 166 -- prog
    META
    LANGUAGE
-- 167 -- take_follow
    META
    INFE
    INFESUPE
-- 168 -- take_follow_list
    ALWAYS
-- 169 -- take_follow_super
    META
    IDENT
    STRING
    CHARACT
    INTEGER
    ULINTEGER
    ULLINTEGER
    LLINTEGER
    LINTEGER
    UINTEGER
    FLOATVAL
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
    FLOAT
    VOID
    DPOIDPOI
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
*/

signed char *chopb::_tokenArray [170] = {
    (signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\077\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\200\377\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\020\000\002\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\020\000\002\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\101\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\370\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\340\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\300\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\340\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\300\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\014\000\010\020\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\000\014\000\010\020\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\374\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\020\000\360\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\020\000\360\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\377\377\377\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\300\377\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\006\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\014\000\010\020\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\000\014\000\010\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\377\377\377\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\001\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
};
typedef int (chopb::*(DEF_FUNC_TOKEN_ARRAY [170]))() ;
DEF_FUNC_TOKEN_ARRAY chopb::_tokenFuncArray = {
    /*bidon                          */0,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */(&chopb::Lex),
    /*alloc_expression               */(&chopb::Lex),
    /*allocation_expression          */(&chopb::Lex),
    /*and_expression                 */(&chopb::Lex),
    /*arg_declarator                 */(&chopb::Lex),
    /*arg_declarator_base            */(&chopb::Lex),
    /*arg_declarator_followed        */(&chopb::Lex),
    /*arg_declarator_type            */(&chopb::Lex),
    /*arg_typ_declarator             */(&chopb::Lex),
    /*arg_typ_list                   */0,
    /*array_expression_follow        */(&chopb::Lex),
    /*asm_call                       */(&chopb::Lex),
    /*asm_declaration                */(&chopb::Lex),
    /*assignment_end                 */(&chopb::Lex),
    /*assignment_expression          */(&chopb::Lex),
    /*attribute_call                 */(&chopb::Lex),
    /*base_specifier                 */(&chopb::Lex),
    /*base_specifier_elem            */(&chopb::Lex),
    /*bit_field_decl                 */(&chopb::Lex),
    /*cast_expression                */(&chopb::Lex),
    /*cast_expression_value          */(&chopb::Lex),
    /*catch_unit                     */(&chopb::specific),
    /*catch_unit_ansi                */(&chopb::Lex),
    /*class_declaration              */(&chopb::Lex),
    /*comment_eater                  */0,
    /*complete_class_name            */(&chopb::Lex),
    /*compound_statement             */(&chopb::Lex),
    /*conditional_expression         */(&chopb::Lex),
    /*const_or_volatile              */(&chopb::Lex),
    /*constan                        */(&chopb::Lex),
    /*ctor_initializer               */0,
    /*data_decl_exotic               */(&chopb::specific),
    /*data_decl_sc_decl              */(&chopb::Lex),
    /*data_decl_sc_decl_full         */(&chopb::Lex),
    /*data_decl_sc_decl_short        */(&chopb::Lex),
    /*data_decl_sc_ty_decl           */(&chopb::Lex),
    /*data_decl_sc_ty_decl_full      */(&chopb::Lex),
    /*data_decl_sc_ty_decl_short     */(&chopb::Lex),
    /*data_declaration               */0,
    /*data_declaration_for           */(&chopb::Lex),
    /*data_declaration_for_full      */(&chopb::Lex),
    /*data_declaration_for_short     */(&chopb::Lex),
    /*data_declaration_strict        */0,
    /*deallocation_expression        */(&chopb::Lex),
    /*declarator                     */(&chopb::Lex),
    /*declarator_follow              */0,
    /*declarator_list                */(&chopb::Lex),
    /*declarator_list_init           */(&chopb::Lex),
    /*declarator_value               */(&chopb::Lex),
    /*define_dir                     */(&chopb::Lex),
    /*directive                      */(&chopb::Lex),
    /*end_pragma                     */(&chopb::Lex),
    /*end_pragma_managed             */(&chopb::Lex),
    /*enum_declarator                */(&chopb::Lex),
    /*enum_val                       */(&chopb::Lex),
    /*equality_expression            */(&chopb::Lex),
    /*exception                      */(&chopb::specific),
    /*exception_ansi                 */(&chopb::Lex),
    /*exception_list                 */(&chopb::Lex),
    /*exclusive_or_expression        */(&chopb::Lex),
    /*expression                     */(&chopb::Lex),
    /*expression_for                 */(&chopb::Lex),
    /*ext_all                        */0,
    /*ext_all_ext                    */0,
    /*ext_all_no_linkage             */0,
    /*ext_data_decl_sc_ty            */(&chopb::Lex),
    /*ext_data_decl_sc_ty_full       */(&chopb::Lex),
    /*ext_data_decl_sc_ty_short      */(&chopb::Lex),
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */(&chopb::Lex),
    /*ext_decl_if_dir                */(&chopb::Lex),
    /*ext_decl_ifdef_dir             */(&chopb::Lex),
    /*for_statement                  */(&chopb::Lex),
    /*func_declaration               */(&chopb::Lex),
    /*func_declarator                */(&chopb::Lex),
    /*ident_mul                      */(&chopb::Lex),
    /*include_dir                    */(&chopb::Lex),
    /*inclusive_or_expression        */(&chopb::Lex),
    /*initializer                    */0,
    /*inline_namespace               */(&chopb::Lex),
    /*inside_declaration             */0,
    /*inside_declaration1            */(&chopb::Lex),
    /*inside_declaration2            */(&chopb::Lex),
    /*inside_declaration_extension   */0,
    /*label_beg                      */(&chopb::Lex),
    /*linkage_specification          */(&chopb::Lex),
    /*logical_and_expression         */(&chopb::Lex),
    /*logical_or_expression          */(&chopb::Lex),
    /*long_type                      */(&chopb::Lex),
    /*macro                          */(&chopb::specific),
    /*macro_extended                 */0,
    /*main_entry                     */(&chopb::Lex),
    /*member_declarator              */(&chopb::Lex),
    /*message_map                    */(&chopb::specific),
    /*multiplicative_expression      */(&chopb::Lex),
    /*name_space                     */(&chopb::Lex),
    /*new_1                          */(&chopb::Lex),
    /*new_2                          */(&chopb::Lex),
    /*new_declarator                 */0,
    /*new_type_name                  */(&chopb::Lex),
    /*none_statement                 */0,
    /*operator_function_name         */(&chopb::Lex),
    /*other_config                   */(&chopb::LexPragma),
    /*parameter_list                 */(&chopb::Lex),
    /*parameter_list_extended        */(&chopb::Lex),
    /*pm_expression                  */(&chopb::Lex),
    /*postfix_expression             */(&chopb::Lex),
    /*pretty::bidon                  */(&chopb::Lex),
    /*pretty::parse_entry            */(&chopb::Lex),
    /*primary_expression             */(&chopb::Lex),
    /*program                        */0,
    /*protect_declare                */(&chopb::Lex),
    /*ptr_operator                   */(&chopb::Lex),
    /*qualified_name                 */(&chopb::Lex),
    /*qualified_name_elem            */(&chopb::Lex),
    /*quick_prog                     */0,
    /*quick_prog_elem                */0,
    /*range_in_liste                 */(&chopb::Lex),
    /*range_modifier                 */(&chopb::Lex),
    /*range_modifier_function        */(&chopb::Lex),
    /*range_modifier_ident           */0,
    /*range_pragma                   */(&chopb::LexPragma),
    /*relational_expression          */(&chopb::Lex),
    /*sc_specifier                   */0,
    /*shift_expression               */(&chopb::Lex),
    /*short_long_int_char            */(&chopb::Lex),
    /*signed_type                    */(&chopb::Lex),
    /*simple_ident                   */(&chopb::Lex),
    /*simple_type                    */(&chopb::Lex),
    /*simple_type_name               */(&chopb::Lex),
    /*sizeof_type                    */(&chopb::Lex),
    /*stat_all                       */0,
    /*stat_dir                       */(&chopb::Lex),
    /*stat_dir_switch                */(&chopb::Lex),
    /*stat_if_dir                    */(&chopb::Lex),
    /*stat_ifdef_dir                 */(&chopb::Lex),
    /*statement                      */(&chopb::Lex),
    /*statement_expression           */(&chopb::Lex),
    /*string_list                    */(&chopb::Lex),
    /*switch_elem                    */(&chopb::Lex),
    /*switch_list                    */(&chopb::Lex),
    /*template_type                  */(&chopb::Lex),
    /*type_and_declarator            */(&chopb::Lex),
    /*type_descr                     */(&chopb::Lex),
    /*type_name                      */(&chopb::Lex),
    /*type_specifier                 */(&chopb::Lex),
    /*type_specifier_without_param   */(&chopb::Lex),
    /*typedef_and_declarator         */(&chopb::Lex),
    /*unary_expression               */(&chopb::Lex),
    /*unsigned_type                  */(&chopb::Lex),
    /*cplus::assignment_expression   */(&chopb::Lex),
    /*cplus::cast_expression_value   */(&chopb::Lex),
    /*cplus::exclusive_or_expression */(&chopb::Lex),
    /*cplus::expression              */(&chopb::Lex),
    /*cplus::main_entry              */0,
    /*cplus::multiplicative_expression*/(&chopb::Lex),
    /*cplus::postfix_expression      */(&chopb::Lex),
    /*cplus::primary_expression      */(&chopb::Lex),
    /*cplus::relational_expression   */(&chopb::Lex),
    /*cplus::shift_expression        */(&chopb::Lex),
    /*cplus::statement               */(&chopb::Lex),
    /*old                            */0,
    /*prog                           */(&chopb::Lex),
    /*take_follow                    */(&chopb::Lex),
    /*take_follow_list               */0,
    /*take_follow_super              */(&chopb::Lex)
};
int chopb::_tokenNbFuncArray [170] = {
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
    /*array_expression_follow        */1,
    /*asm_call                       */1,
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
    /*long_type                      */1,
    /*macro                          */13,
    /*macro_extended                 */0,
    /*main_entry                     */1,
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
    /*short_long_int_char            */1,
    /*signed_type                    */1,
    /*simple_ident                   */1,
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
    /*unsigned_type                  */1,
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
    /*take_follow_super              */1
};
int _arityNode_chopb[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                           , 0 , 1 , 1 , 1 , 1 , -1 , 1 , -1 , 1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 1 , -1
                           , -1 , -1 , -1 , -1 , 1 , 1 , 3 , 3 , 3 , -1 , -1
                           , -1 , 2 , -1 , -1 , 3 , -1 , 3 , -1 , -1 , -1 , -1
                           , 1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2 , 0 , -1 , -1
                           , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 4 , -1
                           , -1 , 4 , 1 , -1 , -1 , 1 , 0 , -1 , -1 , 1 , 1
                           , -1 , -1 , -1 , -1 , -1 , -1 , 1 , 1 , 1 , 2 , -1
                           , 4 , 3 , -1 , 1 , 2 , 2 , 2 , -1 , -1 , 2 , 1
                           , -1 , -1 , 2 , -1 , -1 , -1 , -1 , 4 , 2 , 2 , -1
                           , 1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                           , -1 , -1 , -1 , -1 , 2 , 3 , 1 , -1 , 1 , 1 , 1
                           , -1 , 1 , 2 , 2 , -1 , 1 , 2 , -1 , 2 , 2 , 2
                           , 4 , 0 , 2 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2
                           , 2 , 2 , 2 , 2 , 1 , 1 , 2 , 2 , 2 , 0 , 2
                           , -1 , 1 , 1 , -1 , 3 , 2 , 1 , 1 , 1 , 1 , 1
                           , 1 , 3 , 0 , 1 , 3 , 3 , -1 , 2 , 2 , 2 , 2
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                           , 1 , 0 , -1 , -1 , 2 , 2 , 2 , 2 , 1 , -1 , 2
                           , 1 , -1 , 1 , -1 , 2 , 2 , 0 , -1 , 1 , 2 , 11
                           , 0 , -1 , 2 , 1 , 1 , 2 , 1 , -1 , 2 , -1 , 2
                           , 1 , 0 , 0 , 2 , 1 , -1 , 2 , 2 , 2 , 2 , 2
                           , 2 , 0 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2 , 2
                           , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 2 , 1 , 1
                           , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 0 , 0 , 1
                           , 1 , 1 , 1 , -1 , 1 , 2 , 1 , 2 , 1 , 1 , 1
                           , 1 , 1 , 1 , 1 , 1 , -1 , -1 , 1 , -1 , -1 , -1
                           , -1 , -1 , 1 , -1 , -1 , -1 , -1 , 3 , -1 , 1 , -1
                           , 1 , -1 , -1 , 2 , 2 , 1 , 0 , 1 , 2 , 0 , 2
                           , 1 , -1 , 0 , 0 , 0 , 1 , 1 , 1 };

    
STRINGELEM * listConst_chopb;
PPTREE bri_parse_entry_chopb(int error_free) {
return chopb() . parse_entry (error_free);
}

int chopb::init = 0 ;

void chopb::InitConst()
{
    if (!chopb::init) {
        chopb::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("chopb::NODE_LIST", 393);
        AddConstVal("chopb::NODE_TREE", 392);
        AddConstVal("chopb::SPACE", 391);
        AddConstVal("chopb::SEP_OMIT", 390);
        AddConstVal("chopb::SEP_BEFORE", 389);
        AddConstVal("chopb::SEP_AFTER", 388);
        AddConstVal("chopb::AFERAFER", 387);
        AddConstVal("chopb::ALINEA", 386);
        AddConstVal("chopb::CHOP_DEF", 385);
        AddConstVal("chopb::NIL", 384);
        AddConstVal("chopb::IN_LANG", 383);
        AddConstVal("chopb::NEXT", 382);
        AddConstVal("chopb::DEF_IDENT", 381);
        AddConstVal("chopb::BOX", 380);
        AddConstVal("chopb::EXPO", 379);
        AddConstVal("chopb::EXPO_AFF", 378);
        AddConstVal("chopb::ETOIETOIEGAL", 377);
        AddConstVal("chopb::IN", 376);
        AddConstVal("chopb::PARSE", 375);
        AddConstVal("chopb::NEXTL", 374);
        AddConstVal("chopb::VALUE", 373);
        AddConstVal("chopb::INFESUPE", 372);
        AddConstVal("chopb::FOREACH", 371);
        AddConstVal("chopb::INFESEPOSUPE", 370);
        AddConstVal("chopb::INFESEPBSUPE", 369);
        AddConstVal("chopb::INFESEPASUPE", 368);
        AddConstVal("chopb::AOUVAOUV", 367);
        AddConstVal("chopb::ARRO", 366);
        AddConstVal("chopb::NL_BEG", 365);
        AddConstVal("chopb::TAB_BEG", 364);
        AddConstVal("chopb::SPACE_BEG", 363);
        AddConstVal("chopb::MAKETREE_SUP", 362);
        AddConstVal("chopb::MAKETREE_INF", 361);
        AddConstVal("chopb::PARSE_ELEM", 360);
        AddConstVal("chopb::SIMP_ETOI", 359);
        AddConstVal("chopb::ETOI_ETOI", 358);
        AddConstVal("chopb::TUNSIGNED", 357);
        AddConstVal("chopb::BDECR", 356);
        AddConstVal("chopb::BINCR", 355);
        AddConstVal("chopb::ADDR", 354);
        AddConstVal("chopb::NOT", 353);
        AddConstVal("chopb::LNEG", 352);
        AddConstVal("chopb::POS", 351);
        AddConstVal("chopb::NEG", 350);
        AddConstVal("chopb::PARAM_TYPE", 349);
        AddConstVal("chopb::STRING_LIST", 348);
        AddConstVal("chopb::LABEL", 347);
        AddConstVal("chopb::THROW_ANSI", 346);
        AddConstVal("chopb::ELSE", 345);
        AddConstVal("chopb::DECL_TYPE", 344);
        AddConstVal("chopb::TIDENT", 343);
        AddConstVal("chopb::TSIGNED", 342);
        AddConstVal("chopb::TSHORT", 341);
        AddConstVal("chopb::TCHAR", 340);
        AddConstVal("chopb::TINT", 339);
        AddConstVal("chopb::RSHI", 338);
        AddConstVal("chopb::LSHI", 337);
        AddConstVal("chopb::LT", 336);
        AddConstVal("chopb::GT", 335);
        AddConstVal("chopb::GEQU", 334);
        AddConstVal("chopb::LEQU", 333);
        AddConstVal("chopb::SPACE_ARROW", 332);
        AddConstVal("chopb::TAB_DIRECTIVE", 331);
        AddConstVal("chopb::ENUM_PARAMETERS_UNDER", 330);
        AddConstVal("chopb::ENUM_VERT_VALUE", 329);
        AddConstVal("chopb::PROTECT_MEMB", 328);
        AddConstVal("chopb::LANGUAGE", 327);
        AddConstVal("chopb::EXP", 326);
        AddConstVal("chopb::ADECR", 325);
        AddConstVal("chopb::AINCR", 324);
        AddConstVal("chopb::ARROW", 323);
        AddConstVal("chopb::REF", 322);
        AddConstVal("chopb::EXP_BRA", 321);
        AddConstVal("chopb::EXP_LIST", 320);
        AddConstVal("chopb::ARROW_MEMB", 319);
        AddConstVal("chopb::DOT_MEMB", 318);
        AddConstVal("chopb::POINETOI", 317);
        AddConstVal("chopb::TIRESUPEETOI", 316);
        AddConstVal("chopb::TIRESUPE", 315);
        AddConstVal("chopb::SUPESUPE", 314);
        AddConstVal("chopb::INFEINFE", 313);
        AddConstVal("chopb::SUPEEGAL", 312);
        AddConstVal("chopb::INFEEGAL", 311);
        AddConstVal("chopb::NONE", 310);
        AddConstVal("chopb::NEW_DECLARATOR", 309);
        AddConstVal("chopb::USING_NAMESPACE", 308);
        AddConstVal("chopb::NAMESPACE_ALIAS", 307);
        AddConstVal("chopb::REM", 306);
        AddConstVal("chopb::DIV", 305);
        AddConstVal("chopb::MUL", 304);
        AddConstVal("chopb::POURC", 303);
        AddConstVal("chopb::MESSAGE_MAP", 302);
        AddConstVal("chopb::MACRO", 301);
        AddConstVal("chopb::TDOUBLE", 300);
        AddConstVal("chopb::TFLOAT", 299);
        AddConstVal("chopb::TLONG", 298);
        AddConstVal("chopb::OR", 297);
        AddConstVal("chopb::VBARVBAR", 296);
        AddConstVal("chopb::AND", 295);
        AddConstVal("chopb::ETCOETCO", 294);
        AddConstVal("chopb::COMPOUND_EXT", 293);
        AddConstVal("chopb::EXTERNAL", 292);
        AddConstVal("chopb::INLINE_NAMESPACE", 291);
        AddConstVal("chopb::INITIALIZER", 290);
        AddConstVal("chopb::LOR", 289);
        AddConstVal("chopb::VBAR", 288);
        AddConstVal("chopb::DELETE_FUNCTION", 287);
        AddConstVal("chopb::FUNC", 286);
        AddConstVal("chopb::ALL_OF", 285);
        AddConstVal("chopb::EXTENSION", 284);
        AddConstVal("chopb::__EXTENSION__", 283);
        AddConstVal("chopb::STAT_VOID", 282);
        AddConstVal("chopb::TYPEDEF", 281);
        AddConstVal("chopb::TEMPLATE_DECL", 280);
        AddConstVal("chopb::SUPE", 279);
        AddConstVal("chopb::CLASS_PARAM", 278);
        AddConstVal("chopb::TEMPLATE", 277);
        AddConstVal("chopb::EXP_SEQ", 276);
        AddConstVal("chopb::LXOR", 275);
        AddConstVal("chopb::CHAP", 274);
        AddConstVal("chopb::EXCEPTION_LIST", 273);
        AddConstVal("chopb::EXCEPTION_ANSI", 272);
        AddConstVal("chopb::EXCEPTION", 271);
        AddConstVal("chopb::NEQU", 270);
        AddConstVal("chopb::EQU", 269);
        AddConstVal("chopb::EXCLEGAL", 268);
        AddConstVal("chopb::EGALEGAL", 267);
        AddConstVal("chopb::ENUM_CLASS", 266);
        AddConstVal("chopb::PRAGMA", 265);
        AddConstVal("chopb::PARAMETERS", 264);
        AddConstVal("chopb::FUNC_HEADER", 263);
        AddConstVal("chopb::INDENT_FUNCTION_TYPE", 262);
        AddConstVal("chopb::COMMENT_PLUS", 261);
        AddConstVal("chopb::COMMENT_END", 260);
        AddConstVal("chopb::COMMENT_MIDDLE", 259);
        AddConstVal("chopb::COMMENT_START", 258);
        AddConstVal("chopb::MARGIN_VALUE", 257);
        AddConstVal("chopb::BRACE_ALIGN_VALUE", 256);
        AddConstVal("chopb::DECL_ALIGN", 255);
        AddConstVal("chopb::ASSIGN_ALIGN", 254);
        AddConstVal("chopb::SINGLE_SWITCH_INDENT_VALUE", 253);
        AddConstVal("chopb::SIMPLIFY_VALUE", 252);
        AddConstVal("chopb::SIMPLIFY", 251);
        AddConstVal("chopb::MODE_VALUE", 250);
        AddConstVal("chopb::TAB_VALUE", 249);
        AddConstVal("chopb::CONFIG", 248);
        AddConstVal("chopb::NOT_MANAGED", 247);
        AddConstVal("chopb::NO_PRETTY", 246);
        AddConstVal("chopb::ALINE", 245);
        AddConstVal("chopb::ERROR", 244);
        AddConstVal("chopb::UNDEF", 243);
        AddConstVal("chopb::TYP_AFF_BRA", 242);
        AddConstVal("chopb::TYP_AFF_CALL", 241);
        AddConstVal("chopb::MEMBER_DECLARATOR", 240);
        AddConstVal("chopb::TYP_ARRAY", 239);
        AddConstVal("chopb::COUV", 238);
        AddConstVal("chopb::FOR_DECLARATION", 237);
        AddConstVal("chopb::DECLARATION", 236);
        AddConstVal("chopb::CTOR_INITIALIZER", 235);
        AddConstVal("chopb::BRACE_MARKER", 234);
        AddConstVal("chopb::CTOR_INIT", 233);
        AddConstVal("chopb::LONGLONG", 232);
        AddConstVal("chopb::IUNLONGLONG", 231);
        AddConstVal("chopb::IUNLONG", 230);
        AddConstVal("chopb::IUN", 229);
        AddConstVal("chopb::ILONGLONG", 228);
        AddConstVal("chopb::ILONG", 227);
        AddConstVal("chopb::RANGE_MODIFIER", 226);
        AddConstVal("chopb::COND_AFF", 225);
        AddConstVal("chopb::INTE", 224);
        AddConstVal("chopb::COMPOUND", 223);
        AddConstVal("chopb::CLASS_DECL", 222);
        AddConstVal("chopb::AFER", 221);
        AddConstVal("chopb::CATCH_ANSI", 220);
        AddConstVal("chopb::EXCEPT_ANSI_ALL", 219);
        AddConstVal("chopb::CAST", 218);
        AddConstVal("chopb::TYP_BIT", 217);
        AddConstVal("chopb::PROTECT", 216);
        AddConstVal("chopb::BASE_LIST", 215);
        AddConstVal("chopb::ATTRIBUTE_CALL", 214);
        AddConstVal("chopb::XOR_AFF", 213);
        AddConstVal("chopb::OR_AFF", 212);
        AddConstVal("chopb::AND_AFF", 211);
        AddConstVal("chopb::RSH_AFF", 210);
        AddConstVal("chopb::LSH_AFF", 209);
        AddConstVal("chopb::MIN_AFF", 208);
        AddConstVal("chopb::PLU_AFF", 207);
        AddConstVal("chopb::REM_AFF", 206);
        AddConstVal("chopb::DIV_AFF", 205);
        AddConstVal("chopb::MUL_AFF", 204);
        AddConstVal("chopb::AFF", 203);
        AddConstVal("chopb::ASM_CALL", 202);
        AddConstVal("chopb::EXP_ARRAY", 201);
        AddConstVal("chopb::VAR_LIST", 200);
        AddConstVal("chopb::TYP_LIST", 199);
        AddConstVal("chopb::TYP_AFF", 198);
        AddConstVal("chopb::ABST_DECLARATOR", 197);
        AddConstVal("chopb::DECLARATOR", 196);
        AddConstVal("chopb::POINPOINPOIN", 195);
        AddConstVal("chopb::LAND", 194);
        AddConstVal("chopb::INIT_NEW", 193);
        AddConstVal("chopb::VIRG", 192);
        AddConstVal("chopb::QUALIFIED", 191);
        AddConstVal("chopb::MINUS", 190);
        AddConstVal("chopb::TYP", 189);
        AddConstVal("chopb::PFER", 188);
        AddConstVal("chopb::DESTRUCT", 187);
        AddConstVal("chopb::TYP_REF", 186);
        AddConstVal("chopb::TYP_ADDR", 185);
        AddConstVal("chopb::INFE", 184);
        AddConstVal("chopb::USING", 183);
        AddConstVal("chopb::NAMESPACE", 182);
        AddConstVal("chopb::CATCH", 181);
        AddConstVal("chopb::DPOI", 180);
        AddConstVal("chopb::PUBLIC", 179);
        AddConstVal("chopb::PROTECTED", 178);
        AddConstVal("chopb::PRIVATE", 177);
        AddConstVal("chopb::CHAPEGAL", 176);
        AddConstVal("chopb::VBAREGAL", 175);
        AddConstVal("chopb::ETCOEGAL", 174);
        AddConstVal("chopb::SUPESUPEEGAL", 173);
        AddConstVal("chopb::INFEINFEEGAL", 172);
        AddConstVal("chopb::TIREEGAL", 171);
        AddConstVal("chopb::PLUSEGAL", 170);
        AddConstVal("chopb::POURCEGAL", 169);
        AddConstVal("chopb::ETOIEGAL", 168);
        AddConstVal("chopb::EGAL", 167);
        AddConstVal("chopb::ASM", 166);
        AddConstVal("chopb::CFER", 165);
        AddConstVal("chopb::VA_ARG", 164);
        AddConstVal("chopb::DELETE", 163);
        AddConstVal("chopb::NEW", 162);
        AddConstVal("chopb::SIZEOF", 161);
        AddConstVal("chopb::TIRETIRE", 160);
        AddConstVal("chopb::PLUSPLUS", 159);
        AddConstVal("chopb::EXCL", 158);
        AddConstVal("chopb::PLUS", 157);
        AddConstVal("chopb::TIRE", 156);
        AddConstVal("chopb::POUV", 155);
        AddConstVal("chopb::DEFAULT", 154);
        AddConstVal("chopb::CASE", 153);
        AddConstVal("chopb::TRY", 152);
        AddConstVal("chopb::THROW", 151);
        AddConstVal("chopb::FORALLSONS", 150);
        AddConstVal("chopb::WHILE", 149);
        AddConstVal("chopb::SWITCH", 148);
        AddConstVal("chopb::RETURN", 147);
        AddConstVal("chopb::PVIR", 146);
        AddConstVal("chopb::IF", 145);
        AddConstVal("chopb::FOR", 144);
        AddConstVal("chopb::AOUV", 143);
        AddConstVal("chopb::DO", 142);
        AddConstVal("chopb::CONTINUE", 141);
        AddConstVal("chopb::BREAK", 140);
        AddConstVal("chopb::OPERATOR", 139);
        AddConstVal("chopb::TILD", 138);
        AddConstVal("chopb::ETCO", 137);
        AddConstVal("chopb::ETOI", 136);
        AddConstVal("chopb::UNSIGNED", 135);
        AddConstVal("chopb::SIGNED", 134);
        AddConstVal("chopb::SHORT", 133);
        AddConstVal("chopb::LONG", 132);
        AddConstVal("chopb::CHAR", 131);
        AddConstVal("chopb::INT", 130);
        AddConstVal("chopb::DPOIDPOI", 129);
        AddConstVal("chopb::VOID", 128);
        AddConstVal("chopb::FLOAT", 127);
        AddConstVal("chopb::DOUBLE", 126);
        AddConstVal("chopb::DECLTYPE", 125);
        AddConstVal("chopb::TYPENAME", 124);
        AddConstVal("chopb::CLASS", 123);
        AddConstVal("chopb::UNION", 122);
        AddConstVal("chopb::STRUCT", 121);
        AddConstVal("chopb::ENUM", 120);
        AddConstVal("chopb::CONSTEXPR", 119);
        AddConstVal("chopb::CONST", 118);
        AddConstVal("chopb::FRIEND", 117);
        AddConstVal("chopb::VIRTUAL", 116);
        AddConstVal("chopb::INLINE", 115);
        AddConstVal("chopb::__ASM__", 114);
        AddConstVal("chopb::__ATTRIBUTE__", 113);
        AddConstVal("chopb::VOLATILE", 112);
        AddConstVal("chopb::REGISTER", 111);
        AddConstVal("chopb::EXTERN", 110);
        AddConstVal("chopb::STATIC", 109);
        AddConstVal("chopb::AUTO", 108);
        AddConstVal("chopb::FUNC_SPEC", 107);
        AddConstVal("chopb::TRY_UPPER", 106);
        AddConstVal("chopb::END_CATCH", 105);
        AddConstVal("chopb::END_CATCH_ALL", 104);
        AddConstVal("chopb::AND_CATCH", 103);
        AddConstVal("chopb::CATCH_UPPER", 102);
        AddConstVal("chopb::CATCH_ALL", 101);
        AddConstVal("chopb::END_MESSAGE_MAP", 100);
        AddConstVal("chopb::BEGIN_MESSAGE_MAP", 99);
        AddConstVal("chopb::DECLARE_MESSAGE_MAP", 98);
        AddConstVal("chopb::IMPLEMENT_SERIAL", 97);
        AddConstVal("chopb::IMPLEMENT_DYNCREATE", 96);
        AddConstVal("chopb::IMPLEMENT_DYNAMIC", 95);
        AddConstVal("chopb::DECLARE_SERIAL", 94);
        AddConstVal("chopb::DECLARE_DYNAMIC", 93);
        AddConstVal("chopb::PUSH_FUNCTION", 92);
        AddConstVal("chopb::PUSH_ARGUMENT", 91);
        AddConstVal("chopb::UNDEF_CONTENT", 90);
        AddConstVal("chopb::SMALL_PRAGMA_CONTENT", 89);
        AddConstVal("chopb::PRAGMA_CONTENT", 88);
        AddConstVal("chopb::PRAGMA_ENUM_VERT", 87);
        AddConstVal("chopb::PRAGMA_SPACE_ARROW", 86);
        AddConstVal("chopb::PRAGMA_PARAMETERS", 85);
        AddConstVal("chopb::PRAGMA_PARAMETERS_UNDER", 84);
        AddConstVal("chopb::PRAGMA_FUNC_HEADER", 83);
        AddConstVal("chopb::PRAGMA_INDENT_FUNCTION_TYPE", 82);
        AddConstVal("chopb::PRAGMA_COMMENT_PLUS", 81);
        AddConstVal("chopb::PRAGMA_COMMENT_END", 80);
        AddConstVal("chopb::PRAGMA_COMMENT_MIDDLE", 79);
        AddConstVal("chopb::PRAGMA_COMMENT_START", 78);
        AddConstVal("chopb::PRAGMA_MARGIN", 77);
        AddConstVal("chopb::PRAGMA_DECL_ALIGN", 76);
        AddConstVal("chopb::PRAGMA_ASSIGN_ALIGN", 75);
        AddConstVal("chopb::PRAGMA_SINGLE_SWITCH_INDENT", 74);
        AddConstVal("chopb::PRAGMA_SIMPLIFY", 73);
        AddConstVal("chopb::PRAGMA_BRACE_ALIGN", 72);
        AddConstVal("chopb::PRAGMA_MODE", 71);
        AddConstVal("chopb::PRAGMA_RANGE", 70);
        AddConstVal("chopb::PRAGMA_TAB", 69);
        AddConstVal("chopb::PRAGMA_TAB_DIRECTIVE", 68);
        AddConstVal("chopb::PRAGMA_CONFIG", 67);
        AddConstVal("chopb::PRAGMA_NOT_MANAGED", 66);
        AddConstVal("chopb::PRAGMA_MANAGED", 65);
        AddConstVal("chopb::PRAGMA_NOPRETTY", 64);
        AddConstVal("chopb::PRAGMA_PRETTY", 63);
        AddConstVal("chopb::INCLUDE_LOCAL", 62);
        AddConstVal("chopb::INCLUDE_SYS", 61);
        AddConstVal("chopb::END_LINE", 60);
        AddConstVal("chopb::DEFINE_NAME", 59);
        AddConstVal("chopb::DEFINED_NOT_CONTINUED", 58);
        AddConstVal("chopb::DEFINED_CONTINUED", 57);
        AddConstVal("chopb::POINT", 56);
        AddConstVal("chopb::SLAS", 55);
        AddConstVal("chopb::SLASEGAL", 54);
        AddConstVal("chopb::CARRIAGE_RETURN", 53);
        AddConstVal("chopb::SHARP_VAL", 52);
        AddConstVal("chopb::LINE_REFERENCE_DIR", 51);
        AddConstVal("chopb::UNDEF_DIR", 50);
        AddConstVal("chopb::DEFINE_DIR", 49);
        AddConstVal("chopb::ERROR_DIR", 48);
        AddConstVal("chopb::PRAGMA_DIR", 47);
        AddConstVal("chopb::LINE_DIR", 46);
        AddConstVal("chopb::ENDIF_DIR", 45);
        AddConstVal("chopb::ELIF_DIR", 44);
        AddConstVal("chopb::ELSE_DIR", 43);
        AddConstVal("chopb::IF_DIR", 42);
        AddConstVal("chopb::IFNDEF_DIR", 41);
        AddConstVal("chopb::IFDEF_DIR", 40);
        AddConstVal("chopb::INCLUDE_DIR", 39);
        AddConstVal("chopb::OCTAL", 38);
        AddConstVal("chopb::UOCTAL", 37);
        AddConstVal("chopb::LOCTAL", 36);
        AddConstVal("chopb::ULOCTAL", 35);
        AddConstVal("chopb::LLOCTAL", 34);
        AddConstVal("chopb::ULLOCTAL", 33);
        AddConstVal("chopb::HEXA", 32);
        AddConstVal("chopb::UHEXA", 31);
        AddConstVal("chopb::LHEXA", 30);
        AddConstVal("chopb::LLHEXA", 29);
        AddConstVal("chopb::ULLHEXA", 28);
        AddConstVal("chopb::ULHEXA", 27);
        AddConstVal("chopb::FLOATVAL", 26);
        AddConstVal("chopb::UINTEGER", 25);
        AddConstVal("chopb::LINTEGER", 24);
        AddConstVal("chopb::LLINTEGER", 23);
        AddConstVal("chopb::ULLINTEGER", 22);
        AddConstVal("chopb::ULINTEGER", 21);
        AddConstVal("chopb::INTEGER", 20);
        AddConstVal("chopb::CHARACT", 19);
        AddConstVal("chopb::STRING", 18);
        AddConstVal("chopb::DQUOTE", 17);
        AddConstVal("chopb::IDENT", 16);
        AddConstVal("chopb::GOTO_REL", 15);
        AddConstVal("chopb::GOTO", 14);
        AddConstVal("chopb::STR", 13);
        AddConstVal("chopb::UNMARK", 12);
        AddConstVal("chopb::MARK", 11);
        AddConstVal("chopb::TAB_VIRT", 10);
        AddConstVal("chopb::TAB", 9);
        AddConstVal("chopb::NEWLINE", 8);
        AddConstVal("chopb::ATTRIBUTS", 7);
        AddConstVal("chopb::PLUS____TIRETIRETIRETIRETIRETIRE____", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_chopb = listConst;
        listConst = inter;
        AddLang("chopb",_arityNode_chopb,listConst_chopb,bri_parse_entry_chopb,393,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
