/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "metachop.h"



#line 24 "metachop.met"

#line 24 "metachop.met"
int metachop::SortKeyWord (int defaultValue)
#line 24 "metachop.met"
{
#line 24 "metachop.met"
    register int Value;
#line 24 "metachop.met"
    Value = strcmp(lexEl.string(),"namespace");
#line 24 "metachop.met"
    if (Value > 0) {
#line 24 "metachop.met"
        Value = strcmp(lexEl.string(),"switch");
#line 24 "metachop.met"
        if (Value > 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"using");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"void");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"while");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        return(defaultValue);
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"volatile")) {
#line 24 "metachop.met"
                            return(VOLATILE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(WHILE);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"value");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"virtual")) {
#line 24 "metachop.met"
                            return(VIRTUAL) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"va_arg")) {
#line 24 "metachop.met"
                            return(VA_ARG) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(VALUE);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(VOID);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"typedef");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"union");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"unsigned")) {
#line 24 "metachop.met"
                            return(UNSIGNED) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"typename")) {
#line 24 "metachop.met"
                            return(TYPENAME) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(UNION);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"throw");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"try")) {
#line 24 "metachop.met"
                            return(TRY) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"template")) {
#line 24 "metachop.met"
                            return(TEMPLATE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(THROW);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(TYPEDEF);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(USING);
#line 24 "metachop.met"
        } else if (Value < 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"register");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"sizeof");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"struct");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        return(defaultValue);
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"static")) {
#line 24 "metachop.met"
                            return(STATIC) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(STRUCT);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"short");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"signed")) {
#line 24 "metachop.met"
                            return(SIGNED) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"return")) {
#line 24 "metachop.met"
                            return(RETURN) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(SHORT);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(SIZEOF);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"parse");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"protected");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"public")) {
#line 24 "metachop.met"
                            return(PUBLIC) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"private")) {
#line 24 "metachop.met"
                            return(PRIVATE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(PROTECTED);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"nextl");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"operator")) {
#line 24 "metachop.met"
                            return(OPERATOR) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"new")) {
#line 24 "metachop.met"
                            return(NEW) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(NEXTL);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(PARSE);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(REGISTER);
#line 24 "metachop.met"
        } else 
#line 24 "metachop.met"
            return(SWITCH);
#line 24 "metachop.met"
    } else if (Value < 0) {
#line 24 "metachop.met"
        Value = strcmp(lexEl.string(),"else");
#line 24 "metachop.met"
        if (Value > 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"goto");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"int");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"long");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        return(defaultValue);
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"language")) {
#line 24 "metachop.met"
                            return(LANGUAGE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(LONG);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"in");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"inline")) {
#line 24 "metachop.met"
                            return(INLINE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"if")) {
#line 24 "metachop.met"
                            return(IF) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(IN);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(INT);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"for");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"foreach");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"friend")) {
#line 24 "metachop.met"
                            return(FRIEND) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"forallsons")) {
#line 24 "metachop.met"
                            return(FORALLSONS) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(FOREACH);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"extern");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"float")) {
#line 24 "metachop.met"
                            return(FLOAT) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"enum")) {
#line 24 "metachop.met"
                            return(ENUM) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(EXTERN);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(FOR);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(GOTO);
#line 24 "metachop.met"
        } else if (Value < 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"char");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"default");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"do");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"double")) {
#line 24 "metachop.met"
                            return(DOUBLE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"delete")) {
#line 24 "metachop.met"
                            return(DELETE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(DO);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"const");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"continue")) {
#line 24 "metachop.met"
                            return(CONTINUE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"class")) {
#line 24 "metachop.met"
                            return(CLASS) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(CONST);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(DEFAULT);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"auto");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"case");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"catch")) {
#line 24 "metachop.met"
                            return(CATCH) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"break")) {
#line 24 "metachop.met"
                            return(BREAK) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(CASE);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"+____------____");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"asm")) {
#line 24 "metachop.met"
                            return(ASM) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"(")) {
#line 24 "metachop.met"
                            return(POUV) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(PLUS____TIRETIRETIRETIRETIRETIRE____);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(AUTO);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(CHAR);
#line 24 "metachop.met"
        } else 
#line 24 "metachop.met"
            return(ELSE);
#line 24 "metachop.met"
    } else 
#line 24 "metachop.met"
        return(NAMESPACE);
#line 24 "metachop.met"
    return(defaultValue);
#line 24 "metachop.met"
}
#line 24 "metachop.met"

#line 24 "metachop.met"
int metachop::UpSortKeyWord(int value) 
#line 24 "metachop.met"
{
#line 24 "metachop.met"
    register char * ptSource=lexEl.string();
#line 24 "metachop.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 24 "metachop.met"
    return SortKeyWord (value);
#line 24 "metachop.met"
}
#line 24 "metachop.met"
#line 303 "metachop.met"
int metachop::Lex ()
#line 303 "metachop.met"
{
#line 303 "metachop.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 303 "metachop.met"
        FreePos(lastContextPos);
#line 303 "metachop.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 303 "metachop.met"
    if ( tokenAhead && tokenAhead != -1)
#line 303 "metachop.met"
        ExtUnputBuf();
#line 303 "metachop.met"
    #ifdef DUMP_COORD
#line 303 "metachop.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 303 "metachop.met"
    #endif
#line 303 "metachop.met"
    
#line 303 "metachop.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 303 "metachop.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 303 "metachop.met"
    tokenAhead = 0;
#line 303 "metachop.met"
    if(LexMeta() != -1){tokenAhead =1; return 1;}
#line 303 "metachop.met"
#line 306 "metachop.met"
    if (! (keepCarriage)){
#line 306 "metachop.met"
#line 307 "metachop.met"
#line 308 "metachop.met"
        ptStockBuf = -1;
#line 308 "metachop.met"
        while ((c == '\t')||(c == ' ')||(c == '\r')||(c == '\n')||(c == ''))
#line 308 "metachop.met"
            NextChar() ;
#line 308 "metachop.met"
        ptStockBuf = -1;
#line 308 "metachop.met"
        lexEl.Erase();
#line 308 "metachop.met"
        tokenAhead = 0;
#line 308 "metachop.met"
        oldLine=line,oldCol=col;
#line 308 "metachop.met"
        if ( !lexCallLex) {
#line 308 "metachop.met"
            PUT_COORD_CALL;
#line 308 "metachop.met"
        }
#line 308 "metachop.met"
#line 308 "metachop.met"
#line 308 "metachop.met"
    } else {
#line 308 "metachop.met"
#line 311 "metachop.met"
        if (! (keepAll)){
#line 311 "metachop.met"
#line 312 "metachop.met"
#line 313 "metachop.met"
            ptStockBuf = -1;
#line 313 "metachop.met"
            while ((c == '\t')||(c == ' ')||(c == ''))
#line 313 "metachop.met"
                NextChar() ;
#line 313 "metachop.met"
            ptStockBuf = -1;
#line 313 "metachop.met"
            lexEl.Erase();
#line 313 "metachop.met"
            tokenAhead = 0;
#line 313 "metachop.met"
            oldLine=line,oldCol=col;
#line 313 "metachop.met"
            if ( !lexCallLex) {
#line 313 "metachop.met"
                PUT_COORD_CALL;
#line 313 "metachop.met"
            }
#line 313 "metachop.met"
#line 313 "metachop.met"
#line 313 "metachop.met"
        } else {
#line 313 "metachop.met"
#line 316 "metachop.met"
            ptStockBuf = -1;
#line 316 "metachop.met"
            lexEl.Erase();
#line 316 "metachop.met"
            tokenAhead = 0;
#line 316 "metachop.met"
            if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 316 "metachop.met"
            lastContextPos = (PFILE_POSITION) 0 ;
#line 316 "metachop.met"
        }
#line 316 "metachop.met"
    }
#line 316 "metachop.met"
#line 317 "metachop.met"
    int keepCurrCol = col ;
#line 317 "metachop.met"
    switch(c) {
#line 317 "metachop.met"
        case '*' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::ETOIEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '*' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    if (GetStringS("=",1)) {
#line 317 "metachop.met"
                        lexEl.Value = metachop::ETOIETOIEGAL;
#line 317 "metachop.met"
                        firstOnLine = 0;
#line 317 "metachop.met"
                        tokenAhead = 1;
#line 317 "metachop.met"
                        PUT_COORD_CALL;
#line 317 "metachop.met"
                        return(1);
#line 317 "metachop.met"
                    } else {
#line 317 "metachop.met"
                        UnputChar(1);
#line 317 "metachop.met"
                        goto _exitDumpToken107;
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken107 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::ETOI;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '&' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::ETCOEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '&' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::ETCOETCO;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken110 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::ETCO;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '~' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::TILD;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '(' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::POUV;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case ')' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::PFER;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '+' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::PLUSEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '+' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::PLUSPLUS;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken116 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::PLUS;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '-' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::TIREEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '-' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::TIRETIRE;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '>' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    switch(c) {
#line 317 "metachop.met"
                        case '*' :
#line 317 "metachop.met"
                            NextChar();
#line 317 "metachop.met"
                            lexEl.Value = metachop::TIRESUPEETOI;
#line 317 "metachop.met"
                            firstOnLine = 0;
#line 317 "metachop.met"
                            tokenAhead = 1;
#line 317 "metachop.met"
                            PUT_COORD_CALL;
#line 317 "metachop.met"
                            return(1);
#line 317 "metachop.met"
                            break;
#line 317 "metachop.met"
                        _exitDumpToken122 :;
#line 317 "metachop.met"
                        default :
#line 317 "metachop.met"
                            lexEl.Value = metachop::TIRESUPE;
#line 317 "metachop.met"
                            firstOnLine = 0;
#line 317 "metachop.met"
                            tokenAhead = 1;
#line 317 "metachop.met"
                            PUT_COORD_CALL;
#line 317 "metachop.met"
                        
#line 317 "metachop.met"
                            return(1);
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken119 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::TIRE;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case ':' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case ':' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::DPOIDPOI;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken124 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::DPOI;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case ',' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::VIRG;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '.' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '.' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    if (GetStringS(".",1)) {
#line 317 "metachop.met"
                        lexEl.Value = metachop::POINPOINPOIN;
#line 317 "metachop.met"
                        firstOnLine = 0;
#line 317 "metachop.met"
                        tokenAhead = 1;
#line 317 "metachop.met"
                        PUT_COORD_CALL;
#line 317 "metachop.met"
                        return(1);
#line 317 "metachop.met"
                    } else {
#line 317 "metachop.met"
                        UnputChar(1);
#line 317 "metachop.met"
                        goto _exitDumpToken127;
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '*' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::POINETOI;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken127 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    UnputChar(1);
#line 317 "metachop.met"
                goto _exitDumpToken0;
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '=' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::EGALEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken130 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::EGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '%' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::POURCEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken132 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::POURC;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '<' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '<' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    switch(c) {
#line 317 "metachop.met"
                        case '=' :
#line 317 "metachop.met"
                            NextChar();
#line 317 "metachop.met"
                            lexEl.Value = metachop::INFEINFEEGAL;
#line 317 "metachop.met"
                            firstOnLine = 0;
#line 317 "metachop.met"
                            tokenAhead = 1;
#line 317 "metachop.met"
                            PUT_COORD_CALL;
#line 317 "metachop.met"
                            return(1);
#line 317 "metachop.met"
                            break;
#line 317 "metachop.met"
                        _exitDumpToken135 :;
#line 317 "metachop.met"
                        default :
#line 317 "metachop.met"
                            lexEl.Value = metachop::INFEINFE;
#line 317 "metachop.met"
                            firstOnLine = 0;
#line 317 "metachop.met"
                            tokenAhead = 1;
#line 317 "metachop.met"
                            PUT_COORD_CALL;
#line 317 "metachop.met"
                        
#line 317 "metachop.met"
                            return(1);
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::INFEEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '>' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::INFESUPE;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case 'S' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    if ( c== 'E') {
#line 317 "metachop.met"
                        NextChar();
#line 317 "metachop.met"
                        if ( c== 'P') {
#line 317 "metachop.met"
                            NextChar();
#line 317 "metachop.met"
                            switch(c) {
#line 317 "metachop.met"
                                case 'A' :
#line 317 "metachop.met"
                                    NextChar();
#line 317 "metachop.met"
                                    if (GetStringS(">",1)) {
#line 317 "metachop.met"
                                        lexEl.Value = metachop::INFESEPASUPE;
#line 317 "metachop.met"
                                        firstOnLine = 0;
#line 317 "metachop.met"
                                        tokenAhead = 1;
#line 317 "metachop.met"
                                        PUT_COORD_CALL;
#line 317 "metachop.met"
                                        return(1);
#line 317 "metachop.met"
                                    } else {
#line 317 "metachop.met"
                                        UnputChar(1);
#line 317 "metachop.met"
                                        goto _exitDumpToken141;
#line 317 "metachop.met"
                                    }
#line 317 "metachop.met"
                                    break;
#line 317 "metachop.met"
                                case 'B' :
#line 317 "metachop.met"
                                    NextChar();
#line 317 "metachop.met"
                                    if (GetStringS(">",1)) {
#line 317 "metachop.met"
                                        lexEl.Value = metachop::INFESEPBSUPE;
#line 317 "metachop.met"
                                        firstOnLine = 0;
#line 317 "metachop.met"
                                        tokenAhead = 1;
#line 317 "metachop.met"
                                        PUT_COORD_CALL;
#line 317 "metachop.met"
                                        return(1);
#line 317 "metachop.met"
                                    } else {
#line 317 "metachop.met"
                                        UnputChar(1);
#line 317 "metachop.met"
                                        goto _exitDumpToken141;
#line 317 "metachop.met"
                                    }
#line 317 "metachop.met"
                                    break;
#line 317 "metachop.met"
                                case 'O' :
#line 317 "metachop.met"
                                    NextChar();
#line 317 "metachop.met"
                                    if (GetStringS(">",1)) {
#line 317 "metachop.met"
                                        lexEl.Value = metachop::INFESEPOSUPE;
#line 317 "metachop.met"
                                        firstOnLine = 0;
#line 317 "metachop.met"
                                        tokenAhead = 1;
#line 317 "metachop.met"
                                        PUT_COORD_CALL;
#line 317 "metachop.met"
                                        return(1);
#line 317 "metachop.met"
                                    } else {
#line 317 "metachop.met"
                                        UnputChar(1);
#line 317 "metachop.met"
                                        goto _exitDumpToken141;
#line 317 "metachop.met"
                                    }
#line 317 "metachop.met"
                                    break;
#line 317 "metachop.met"
                                _exitDumpToken141 :;
#line 317 "metachop.met"
                                default :
#line 317 "metachop.met"
                                    UnputChar(3);
#line 317 "metachop.met"
                                goto _exitDumpToken134;
#line 317 "metachop.met"
                            }
#line 317 "metachop.met"
                        } else {
#line 317 "metachop.met"
                            UnputChar(2);
#line 317 "metachop.met"
                            goto _exitDumpToken134;
#line 317 "metachop.met"
                        }
#line 317 "metachop.met"
                    } else {
#line 317 "metachop.met"
                        UnputChar(1);
#line 317 "metachop.met"
                        goto _exitDumpToken134;
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken134 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::INFE;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '>' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '>' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    switch(c) {
#line 317 "metachop.met"
                        case '=' :
#line 317 "metachop.met"
                            NextChar();
#line 317 "metachop.met"
                            lexEl.Value = metachop::SUPESUPEEGAL;
#line 317 "metachop.met"
                            firstOnLine = 0;
#line 317 "metachop.met"
                            tokenAhead = 1;
#line 317 "metachop.met"
                            PUT_COORD_CALL;
#line 317 "metachop.met"
                            return(1);
#line 317 "metachop.met"
                            break;
#line 317 "metachop.met"
                        _exitDumpToken146 :;
#line 317 "metachop.met"
                        default :
#line 317 "metachop.met"
                            lexEl.Value = metachop::SUPESUPE;
#line 317 "metachop.met"
                            firstOnLine = 0;
#line 317 "metachop.met"
                            tokenAhead = 1;
#line 317 "metachop.met"
                            PUT_COORD_CALL;
#line 317 "metachop.met"
                        
#line 317 "metachop.met"
                            return(1);
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::SUPEEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken145 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::SUPE;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '|' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::VBAREGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                case '|' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::VBARVBAR;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken149 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::VBAR;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '^' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::CHAPEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken152 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::CHAP;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '{' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '{' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::AOUVAOUV;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken154 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::AOUV;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '}' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '}' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::AFERAFER;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken156 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::AFER;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '?' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::INTE;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case ';' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::PVIR;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '[' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::COUV;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case ']' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::CFER;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '!' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            switch(c) {
#line 317 "metachop.met"
                case '=' :
#line 317 "metachop.met"
                    NextChar();
#line 317 "metachop.met"
                    lexEl.Value = metachop::EXCLEGAL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken162 :;
#line 317 "metachop.met"
                default :
#line 317 "metachop.met"
                    lexEl.Value = metachop::EXCL;
#line 317 "metachop.met"
                    firstOnLine = 0;
#line 317 "metachop.met"
                    tokenAhead = 1;
#line 317 "metachop.met"
                    PUT_COORD_CALL;
#line 317 "metachop.met"
                
#line 317 "metachop.met"
                    return(1);
#line 317 "metachop.met"
            }
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        case '@' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            lexEl.Value = metachop::ARRO;
#line 317 "metachop.met"
            firstOnLine = 0;
#line 317 "metachop.met"
            tokenAhead = 1;
#line 317 "metachop.met"
            PUT_COORD_CALL;
#line 317 "metachop.met"
            return(1);
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
        _exitDumpToken0 :;
#line 317 "metachop.met"
        default :
#line 317 "metachop.met"
            break;
#line 317 "metachop.met"
    }
#line 317 "metachop.met"
    col = keepCurrCol ;
#line 317 "metachop.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 317 "metachop.met"
    lexEl.Erase();
#line 317 "metachop.met"
    tokenAhead = 0;
#line 317 "metachop.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 317 "metachop.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 317 "metachop.met"
#line 318 "metachop.met"
    switch (c) {
#line 318 "metachop.met"
#line 319 "metachop.met"
        case 'a' :
#line 319 "metachop.met"
        case 'b' :
#line 319 "metachop.met"
        case 'c' :
#line 319 "metachop.met"
        case 'd' :
#line 319 "metachop.met"
        case 'e' :
#line 319 "metachop.met"
        case 'f' :
#line 319 "metachop.met"
        case 'g' :
#line 319 "metachop.met"
        case 'h' :
#line 319 "metachop.met"
        case 'i' :
#line 319 "metachop.met"
        case 'j' :
#line 319 "metachop.met"
        case 'k' :
#line 319 "metachop.met"
        case 'l' :
#line 319 "metachop.met"
        case 'm' :
#line 319 "metachop.met"
        case 'n' :
#line 319 "metachop.met"
        case 'o' :
#line 319 "metachop.met"
        case 'p' :
#line 319 "metachop.met"
        case 'q' :
#line 319 "metachop.met"
        case 'r' :
#line 319 "metachop.met"
        case 's' :
#line 319 "metachop.met"
        case 't' :
#line 319 "metachop.met"
        case 'u' :
#line 319 "metachop.met"
        case 'v' :
#line 319 "metachop.met"
        case 'w' :
#line 319 "metachop.met"
        case 'x' :
#line 319 "metachop.met"
        case 'y' :
#line 319 "metachop.met"
        case 'z' :
#line 319 "metachop.met"
        case 'A' :
#line 319 "metachop.met"
        case 'B' :
#line 319 "metachop.met"
        case 'C' :
#line 319 "metachop.met"
        case 'D' :
#line 319 "metachop.met"
        case 'E' :
#line 319 "metachop.met"
        case 'F' :
#line 319 "metachop.met"
        case 'G' :
#line 319 "metachop.met"
        case 'H' :
#line 319 "metachop.met"
        case 'I' :
#line 319 "metachop.met"
        case 'J' :
#line 319 "metachop.met"
        case 'K' :
#line 319 "metachop.met"
        case 'L' :
#line 319 "metachop.met"
        case 'M' :
#line 319 "metachop.met"
        case 'N' :
#line 319 "metachop.met"
        case 'O' :
#line 319 "metachop.met"
        case 'P' :
#line 319 "metachop.met"
        case 'Q' :
#line 319 "metachop.met"
        case 'R' :
#line 319 "metachop.met"
        case 'S' :
#line 319 "metachop.met"
        case 'T' :
#line 319 "metachop.met"
        case 'U' :
#line 319 "metachop.met"
        case 'V' :
#line 319 "metachop.met"
        case 'W' :
#line 319 "metachop.met"
        case 'X' :
#line 319 "metachop.met"
        case 'Y' :
#line 319 "metachop.met"
        case 'Z' :
#line 319 "metachop.met"
        case '_' :
#line 319 "metachop.met"
#line 320 "metachop.met"
#line 322 "metachop.met"
            while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 322 "metachop.met"
#line 323 "metachop.met"
                {
#line 323 "metachop.met"
                    lexEl . AddChar(c);
#line 323 "metachop.met"
                    NextChar();
#line 323 "metachop.met"
                }
#line 323 "metachop.met"
            } 
#line 323 "metachop.met"
#line 324 "metachop.met"
            {
#line 324 "metachop.met"
                firstOnLine = 0 ; 
#line 324 "metachop.met"
                tokenAhead =1;
#line 324 "metachop.met"
                lexEl.Value = (SortKeyWord (IDENT));
#line 324 "metachop.met"
                PUT_COORD_CALL;
#line 324 "metachop.met"
                return(1);
#line 324 "metachop.met"
            }
#line 324 "metachop.met"
#line 324 "metachop.met"
            break ;
#line 324 "metachop.met"
#line 326 "metachop.met"
        case '"' :
#line 326 "metachop.met"
#line 327 "metachop.met"
            if (noString){
#line 327 "metachop.met"
#line 328 "metachop.met"
#line 329 "metachop.met"
                {
#line 329 "metachop.met"
                    lexEl . AddChar(c);
#line 329 "metachop.met"
                    NextChar();
#line 329 "metachop.met"
                }
#line 329 "metachop.met"
#line 330 "metachop.met"
                {
#line 330 "metachop.met"
                    firstOnLine = 0 ; 
#line 330 "metachop.met"
                    tokenAhead =1;
#line 330 "metachop.met"
                    lexEl.Value=DQUOTE;
#line 330 "metachop.met"
                    PUT_COORD_CALL;
#line 330 "metachop.met"
                    return(1);
#line 330 "metachop.met"
                }
#line 330 "metachop.met"
#line 330 "metachop.met"
#line 330 "metachop.met"
            } else {
#line 330 "metachop.met"
#line 333 "metachop.met"
#line 334 "metachop.met"
                if (!(((c == '"'))&& NextChar())) ;
#line 334 "metachop.met"
#line 336 "metachop.met"
                while (c != EOF) { 
#line 336 "metachop.met"
#line 338 "metachop.met"
                    switch (c) {
#line 338 "metachop.met"
#line 339 "metachop.met"
                        case '\r' :
#line 339 "metachop.met"
                        case '\n' :
#line 339 "metachop.met"
#line 339 "metachop.met"
                            {
#line 339 "metachop.met"
                                firstOnLine = 0 ; 
#line 339 "metachop.met"
                                tokenAhead =1;
#line 339 "metachop.met"
                                lexEl.Value=STRING;
#line 339 "metachop.met"
                                PUT_COORD_CALL;
#line 339 "metachop.met"
                                return(1);
#line 339 "metachop.met"
                            }
#line 339 "metachop.met"
                            break ;
#line 339 "metachop.met"
#line 340 "metachop.met"
                        case '"' :
#line 340 "metachop.met"
                            NextChar();
#line 340 "metachop.met"
#line 340 "metachop.met"
                            {
#line 340 "metachop.met"
                                firstOnLine = 0 ; 
#line 340 "metachop.met"
                                tokenAhead =1;
#line 340 "metachop.met"
                                lexEl.Value=STRING;
#line 340 "metachop.met"
                                PUT_COORD_CALL;
#line 340 "metachop.met"
                                return(1);
#line 340 "metachop.met"
                            }
#line 340 "metachop.met"
                            break ;
#line 340 "metachop.met"
#line 341 "metachop.met"
                        case '\\' :
#line 341 "metachop.met"
                            NextChar();
#line 341 "metachop.met"
#line 342 "metachop.met"
#line 343 "metachop.met"
                            {
#line 343 "metachop.met"
                                lexEl.AddString("\\");
#line 343 "metachop.met"
                            }
#line 343 "metachop.met"
#line 344 "metachop.met"
                            if (! (((c == '\r')))){
#line 344 "metachop.met"
#line 347 "metachop.met"
                                {
#line 347 "metachop.met"
                                    lexEl . AddChar(c);
#line 347 "metachop.met"
                                    NextChar();
#line 347 "metachop.met"
                                }
#line 347 "metachop.met"
                            } else {
#line 347 "metachop.met"
#line 350 "metachop.met"
                                if (!(c != EOF&& NextChar())) ;
#line 350 "metachop.met"
                            }
#line 350 "metachop.met"
#line 350 "metachop.met"
                            break ;
#line 350 "metachop.met"
#line 352 "metachop.met"
                        default : 
#line 352 "metachop.met"
                             if (c!= EOF) {
#line 352 "metachop.met"
#line 352 "metachop.met"
                                {
#line 352 "metachop.met"
                                    lexEl . AddChar(c);
#line 352 "metachop.met"
                                    NextChar();
#line 352 "metachop.met"
                                }
#line 352 "metachop.met"
                            }
#line 352 "metachop.met"
                            break ;
#line 352 "metachop.met"
                    }
#line 352 "metachop.met"
                } 
#line 352 "metachop.met"
#line 352 "metachop.met"
            }
#line 352 "metachop.met"
            break ;
#line 352 "metachop.met"
#line 355 "metachop.met"
        case '\'' :
#line 355 "metachop.met"
            NextChar();
#line 355 "metachop.met"
#line 357 "metachop.met"
            while (c != EOF) { 
#line 357 "metachop.met"
#line 359 "metachop.met"
                switch (c) {
#line 359 "metachop.met"
#line 360 "metachop.met"
                    case '\\' :
#line 360 "metachop.met"
                        NextChar();
#line 360 "metachop.met"
#line 361 "metachop.met"
#line 362 "metachop.met"
                        {
#line 362 "metachop.met"
                            lexEl.AddString("\\");
#line 362 "metachop.met"
                        }
#line 362 "metachop.met"
#line 363 "metachop.met"
                        {
#line 363 "metachop.met"
                            lexEl . AddChar(c);
#line 363 "metachop.met"
                            NextChar();
#line 363 "metachop.met"
                        }
#line 363 "metachop.met"
#line 363 "metachop.met"
                        break ;
#line 363 "metachop.met"
#line 365 "metachop.met"
                    case '\'' :
#line 365 "metachop.met"
                        NextChar();
#line 365 "metachop.met"
#line 366 "metachop.met"
#line 367 "metachop.met"
                        {
#line 367 "metachop.met"
                            firstOnLine = 0 ; 
#line 367 "metachop.met"
                            tokenAhead =1;
#line 367 "metachop.met"
                            lexEl.Value=CHARACT;
#line 367 "metachop.met"
                            PUT_COORD_CALL;
#line 367 "metachop.met"
                            return(1);
#line 367 "metachop.met"
                        }
#line 367 "metachop.met"
#line 367 "metachop.met"
                        break ;
#line 367 "metachop.met"
#line 369 "metachop.met"
                    default : 
#line 369 "metachop.met"
                         if (c!= EOF) {
#line 369 "metachop.met"
#line 369 "metachop.met"
                            {
#line 369 "metachop.met"
                                lexEl . AddChar(c);
#line 369 "metachop.met"
                                NextChar();
#line 369 "metachop.met"
                            }
#line 369 "metachop.met"
                        }
#line 369 "metachop.met"
                        break ;
#line 369 "metachop.met"
                }
#line 369 "metachop.met"
            } 
#line 369 "metachop.met"
            break ;
#line 369 "metachop.met"
#line 371 "metachop.met"
        case '1' :
#line 371 "metachop.met"
        case '2' :
#line 371 "metachop.met"
        case '3' :
#line 371 "metachop.met"
        case '4' :
#line 371 "metachop.met"
        case '5' :
#line 371 "metachop.met"
        case '6' :
#line 371 "metachop.met"
        case '7' :
#line 371 "metachop.met"
        case '8' :
#line 371 "metachop.met"
        case '9' :
#line 371 "metachop.met"
#line 373 "metachop.met"
#line 375 "metachop.met"
            while ((('0' <= c && c <= '9'))) { 
#line 375 "metachop.met"
#line 376 "metachop.met"
                {
#line 376 "metachop.met"
                    lexEl . AddChar(c);
#line 376 "metachop.met"
                    NextChar();
#line 376 "metachop.met"
                }
#line 376 "metachop.met"
            } 
#line 376 "metachop.met"
#line 377 "metachop.met"
            switch (c) {
#line 377 "metachop.met"
#line 378 "metachop.met"
                case 'l' :
#line 378 "metachop.met"
                case 'L' :
#line 378 "metachop.met"
                    NextChar();
#line 378 "metachop.met"
#line 379 "metachop.met"
                    switch (c) {
#line 379 "metachop.met"
#line 380 "metachop.met"
                        case 'u' :
#line 380 "metachop.met"
                        case 'U' :
#line 380 "metachop.met"
                            NextChar();
#line 380 "metachop.met"
#line 380 "metachop.met"
                            {
#line 380 "metachop.met"
                                firstOnLine = 0 ; 
#line 380 "metachop.met"
                                tokenAhead =1;
#line 380 "metachop.met"
                                lexEl.Value=ULINTEGER;
#line 380 "metachop.met"
                                PUT_COORD_CALL;
#line 380 "metachop.met"
                                return(1);
#line 380 "metachop.met"
                            }
#line 380 "metachop.met"
                            break ;
#line 380 "metachop.met"
#line 381 "metachop.met"
                        case 'L' :
#line 381 "metachop.met"
                        case 'l' :
#line 381 "metachop.met"
                            NextChar();
#line 381 "metachop.met"
#line 382 "metachop.met"
#line 383 "metachop.met"
                            switch (c) {
#line 383 "metachop.met"
#line 384 "metachop.met"
                                case 'u' :
#line 384 "metachop.met"
                                case 'U' :
#line 384 "metachop.met"
                                    NextChar();
#line 384 "metachop.met"
#line 384 "metachop.met"
                                    {
#line 384 "metachop.met"
                                        firstOnLine = 0 ; 
#line 384 "metachop.met"
                                        tokenAhead =1;
#line 384 "metachop.met"
                                        lexEl.Value=ULLINTEGER;
#line 384 "metachop.met"
                                        PUT_COORD_CALL;
#line 384 "metachop.met"
                                        return(1);
#line 384 "metachop.met"
                                    }
#line 384 "metachop.met"
                                    break ;
#line 384 "metachop.met"
#line 385 "metachop.met"
                                default : 
#line 385 "metachop.met"
                                     if (c!= EOF) {
#line 385 "metachop.met"
#line 385 "metachop.met"
                                        {
#line 385 "metachop.met"
                                            firstOnLine = 0 ; 
#line 385 "metachop.met"
                                            tokenAhead =1;
#line 385 "metachop.met"
                                            lexEl.Value=LLINTEGER;
#line 385 "metachop.met"
                                            PUT_COORD_CALL;
#line 385 "metachop.met"
                                            return(1);
#line 385 "metachop.met"
                                        }
#line 385 "metachop.met"
                                    }
#line 385 "metachop.met"
                                    break ;
#line 385 "metachop.met"
                            }
#line 385 "metachop.met"
#line 385 "metachop.met"
                            break ;
#line 385 "metachop.met"
#line 388 "metachop.met"
                        default : 
#line 388 "metachop.met"
                             if (c!= EOF) {
#line 388 "metachop.met"
#line 388 "metachop.met"
                                {
#line 388 "metachop.met"
                                    firstOnLine = 0 ; 
#line 388 "metachop.met"
                                    tokenAhead =1;
#line 388 "metachop.met"
                                    lexEl.Value=LINTEGER;
#line 388 "metachop.met"
                                    PUT_COORD_CALL;
#line 388 "metachop.met"
                                    return(1);
#line 388 "metachop.met"
                                }
#line 388 "metachop.met"
                            }
#line 388 "metachop.met"
                            break ;
#line 388 "metachop.met"
                    }
#line 388 "metachop.met"
                    break ;
#line 388 "metachop.met"
#line 390 "metachop.met"
                case 'u' :
#line 390 "metachop.met"
                case 'U' :
#line 390 "metachop.met"
                    NextChar();
#line 390 "metachop.met"
#line 391 "metachop.met"
                    switch (c) {
#line 391 "metachop.met"
#line 392 "metachop.met"
                        case 'l' :
#line 392 "metachop.met"
                        case 'L' :
#line 392 "metachop.met"
                            NextChar();
#line 392 "metachop.met"
#line 393 "metachop.met"
#line 394 "metachop.met"
                            switch (c) {
#line 394 "metachop.met"
#line 395 "metachop.met"
                                case 'L' :
#line 395 "metachop.met"
                                case 'l' :
#line 395 "metachop.met"
                                    NextChar();
#line 395 "metachop.met"
#line 395 "metachop.met"
                                    {
#line 395 "metachop.met"
                                        firstOnLine = 0 ; 
#line 395 "metachop.met"
                                        tokenAhead =1;
#line 395 "metachop.met"
                                        lexEl.Value=ULLINTEGER;
#line 395 "metachop.met"
                                        PUT_COORD_CALL;
#line 395 "metachop.met"
                                        return(1);
#line 395 "metachop.met"
                                    }
#line 395 "metachop.met"
                                    break ;
#line 395 "metachop.met"
#line 396 "metachop.met"
                                default : 
#line 396 "metachop.met"
                                     if (c!= EOF) {
#line 396 "metachop.met"
#line 396 "metachop.met"
                                        {
#line 396 "metachop.met"
                                            firstOnLine = 0 ; 
#line 396 "metachop.met"
                                            tokenAhead =1;
#line 396 "metachop.met"
                                            lexEl.Value=ULINTEGER;
#line 396 "metachop.met"
                                            PUT_COORD_CALL;
#line 396 "metachop.met"
                                            return(1);
#line 396 "metachop.met"
                                        }
#line 396 "metachop.met"
                                    }
#line 396 "metachop.met"
                                    break ;
#line 396 "metachop.met"
                            }
#line 396 "metachop.met"
#line 396 "metachop.met"
                            break ;
#line 396 "metachop.met"
#line 399 "metachop.met"
                        default : 
#line 399 "metachop.met"
                             if (c!= EOF) {
#line 399 "metachop.met"
#line 399 "metachop.met"
                                {
#line 399 "metachop.met"
                                    firstOnLine = 0 ; 
#line 399 "metachop.met"
                                    tokenAhead =1;
#line 399 "metachop.met"
                                    lexEl.Value=UINTEGER;
#line 399 "metachop.met"
                                    PUT_COORD_CALL;
#line 399 "metachop.met"
                                    return(1);
#line 399 "metachop.met"
                                }
#line 399 "metachop.met"
                            }
#line 399 "metachop.met"
                            break ;
#line 399 "metachop.met"
                    }
#line 399 "metachop.met"
                    break ;
#line 399 "metachop.met"
#line 401 "metachop.met"
                case 'e' :
#line 401 "metachop.met"
                case 'E' :
#line 401 "metachop.met"
                    NextChar();
#line 401 "metachop.met"
#line 402 "metachop.met"
#line 403 "metachop.met"
                    {
#line 403 "metachop.met"
                        lexEl.AddString("e");
#line 403 "metachop.met"
                    }
#line 403 "metachop.met"
#line 404 "metachop.met"
                    if (((c == '+')||(c == '-'))){
#line 404 "metachop.met"
#line 405 "metachop.met"
                        {
#line 405 "metachop.met"
                            lexEl . AddChar(c);
#line 405 "metachop.met"
                            NextChar();
#line 405 "metachop.met"
                        }
#line 405 "metachop.met"
                    }
#line 405 "metachop.met"
#line 406 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 406 "metachop.met"
#line 407 "metachop.met"
                        {
#line 407 "metachop.met"
                            lexEl . AddChar(c);
#line 407 "metachop.met"
                            NextChar();
#line 407 "metachop.met"
                        }
#line 407 "metachop.met"
                    } 
#line 407 "metachop.met"
#line 408 "metachop.met"
                    switch (c) {
#line 408 "metachop.met"
#line 409 "metachop.met"
                        case 'f' :
#line 409 "metachop.met"
#line 409 "metachop.met"
                            {
#line 409 "metachop.met"
                                lexEl . AddChar(c);
#line 409 "metachop.met"
                                NextChar();
#line 409 "metachop.met"
                            }
#line 409 "metachop.met"
                            break ;
#line 409 "metachop.met"
#line 410 "metachop.met"
                        case 'F' :
#line 410 "metachop.met"
#line 410 "metachop.met"
                            {
#line 410 "metachop.met"
                                lexEl . AddChar(c);
#line 410 "metachop.met"
                                NextChar();
#line 410 "metachop.met"
                            }
#line 410 "metachop.met"
                            break ;
#line 410 "metachop.met"
#line 411 "metachop.met"
                        case 'l' :
#line 411 "metachop.met"
#line 411 "metachop.met"
                            {
#line 411 "metachop.met"
                                lexEl . AddChar(c);
#line 411 "metachop.met"
                                NextChar();
#line 411 "metachop.met"
                            }
#line 411 "metachop.met"
                            break ;
#line 411 "metachop.met"
#line 412 "metachop.met"
                        case 'L' :
#line 412 "metachop.met"
#line 412 "metachop.met"
                            {
#line 412 "metachop.met"
                                lexEl . AddChar(c);
#line 412 "metachop.met"
                                NextChar();
#line 412 "metachop.met"
                            }
#line 412 "metachop.met"
                            break ;
#line 412 "metachop.met"
                    }
#line 412 "metachop.met"
#line 414 "metachop.met"
                    {
#line 414 "metachop.met"
                        firstOnLine = 0 ; 
#line 414 "metachop.met"
                        tokenAhead =1;
#line 414 "metachop.met"
                        lexEl.Value=FLOATVAL;
#line 414 "metachop.met"
                        PUT_COORD_CALL;
#line 414 "metachop.met"
                        return(1);
#line 414 "metachop.met"
                    }
#line 414 "metachop.met"
#line 414 "metachop.met"
                    break ;
#line 414 "metachop.met"
#line 416 "metachop.met"
                case '.' :
#line 416 "metachop.met"
#line 417 "metachop.met"
#line 418 "metachop.met"
                    {
#line 418 "metachop.met"
                        lexEl . AddChar(c);
#line 418 "metachop.met"
                        NextChar();
#line 418 "metachop.met"
                    }
#line 418 "metachop.met"
#line 419 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 419 "metachop.met"
#line 420 "metachop.met"
                        {
#line 420 "metachop.met"
                            lexEl . AddChar(c);
#line 420 "metachop.met"
                            NextChar();
#line 420 "metachop.met"
                        }
#line 420 "metachop.met"
                    } 
#line 420 "metachop.met"
#line 421 "metachop.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 421 "metachop.met"
#line 422 "metachop.met"
#line 423 "metachop.met"
                        {
#line 423 "metachop.met"
                            lexEl.AddString("e");
#line 423 "metachop.met"
                        }
#line 423 "metachop.met"
#line 424 "metachop.met"
                        if (((c == '+')||(c == '-'))){
#line 424 "metachop.met"
#line 425 "metachop.met"
                            {
#line 425 "metachop.met"
                                lexEl . AddChar(c);
#line 425 "metachop.met"
                                NextChar();
#line 425 "metachop.met"
                            }
#line 425 "metachop.met"
                        }
#line 425 "metachop.met"
#line 426 "metachop.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 426 "metachop.met"
#line 427 "metachop.met"
                            {
#line 427 "metachop.met"
                                lexEl . AddChar(c);
#line 427 "metachop.met"
                                NextChar();
#line 427 "metachop.met"
                            }
#line 427 "metachop.met"
                        } 
#line 427 "metachop.met"
#line 427 "metachop.met"
#line 427 "metachop.met"
                    }
#line 427 "metachop.met"
#line 429 "metachop.met"
                    switch (c) {
#line 429 "metachop.met"
#line 430 "metachop.met"
                        case 'f' :
#line 430 "metachop.met"
#line 430 "metachop.met"
                            {
#line 430 "metachop.met"
                                lexEl . AddChar(c);
#line 430 "metachop.met"
                                NextChar();
#line 430 "metachop.met"
                            }
#line 430 "metachop.met"
                            break ;
#line 430 "metachop.met"
#line 431 "metachop.met"
                        case 'F' :
#line 431 "metachop.met"
#line 431 "metachop.met"
                            {
#line 431 "metachop.met"
                                lexEl . AddChar(c);
#line 431 "metachop.met"
                                NextChar();
#line 431 "metachop.met"
                            }
#line 431 "metachop.met"
                            break ;
#line 431 "metachop.met"
#line 432 "metachop.met"
                        case 'l' :
#line 432 "metachop.met"
#line 432 "metachop.met"
                            {
#line 432 "metachop.met"
                                lexEl . AddChar(c);
#line 432 "metachop.met"
                                NextChar();
#line 432 "metachop.met"
                            }
#line 432 "metachop.met"
                            break ;
#line 432 "metachop.met"
#line 433 "metachop.met"
                        case 'L' :
#line 433 "metachop.met"
#line 433 "metachop.met"
                            {
#line 433 "metachop.met"
                                lexEl . AddChar(c);
#line 433 "metachop.met"
                                NextChar();
#line 433 "metachop.met"
                            }
#line 433 "metachop.met"
                            break ;
#line 433 "metachop.met"
                    }
#line 433 "metachop.met"
#line 435 "metachop.met"
                    {
#line 435 "metachop.met"
                        firstOnLine = 0 ; 
#line 435 "metachop.met"
                        tokenAhead =1;
#line 435 "metachop.met"
                        lexEl.Value=FLOATVAL;
#line 435 "metachop.met"
                        PUT_COORD_CALL;
#line 435 "metachop.met"
                        return(1);
#line 435 "metachop.met"
                    }
#line 435 "metachop.met"
#line 435 "metachop.met"
                    break ;
#line 435 "metachop.met"
#line 437 "metachop.met"
                default : 
#line 437 "metachop.met"
                     if (c!= EOF) {
#line 437 "metachop.met"
#line 437 "metachop.met"
                        {
#line 437 "metachop.met"
                            firstOnLine = 0 ; 
#line 437 "metachop.met"
                            tokenAhead =1;
#line 437 "metachop.met"
                            lexEl.Value=INTEGER;
#line 437 "metachop.met"
                            PUT_COORD_CALL;
#line 437 "metachop.met"
                            return(1);
#line 437 "metachop.met"
                        }
#line 437 "metachop.met"
                    }
#line 437 "metachop.met"
                    break ;
#line 437 "metachop.met"
            }
#line 437 "metachop.met"
#line 437 "metachop.met"
            break ;
#line 437 "metachop.met"
#line 440 "metachop.met"
        case '0' :
#line 440 "metachop.met"
            NextChar();
#line 440 "metachop.met"
#line 441 "metachop.met"
#line 442 "metachop.met"
            switch (c) {
#line 442 "metachop.met"
#line 443 "metachop.met"
                case 'x' :
#line 443 "metachop.met"
                case 'X' :
#line 443 "metachop.met"
                    NextChar();
#line 443 "metachop.met"
#line 444 "metachop.met"
#line 445 "metachop.met"
                    while ((('0' <= c && c <= '9')||('a' <= c && c <= 'f')||('A' <= c && c <= 'F'))) { 
#line 445 "metachop.met"
#line 446 "metachop.met"
                        {
#line 446 "metachop.met"
                            lexEl . AddChar(c);
#line 446 "metachop.met"
                            NextChar();
#line 446 "metachop.met"
                        }
#line 446 "metachop.met"
                    } 
#line 446 "metachop.met"
#line 447 "metachop.met"
                    switch (c) {
#line 447 "metachop.met"
#line 448 "metachop.met"
                        case 'l' :
#line 448 "metachop.met"
                        case 'L' :
#line 448 "metachop.met"
                            NextChar();
#line 448 "metachop.met"
#line 449 "metachop.met"
                            switch (c) {
#line 449 "metachop.met"
#line 450 "metachop.met"
                                case 'u' :
#line 450 "metachop.met"
                                case 'U' :
#line 450 "metachop.met"
                                    NextChar();
#line 450 "metachop.met"
#line 450 "metachop.met"
                                    {
#line 450 "metachop.met"
                                        firstOnLine = 0 ; 
#line 450 "metachop.met"
                                        tokenAhead =1;
#line 450 "metachop.met"
                                        lexEl.Value=ULHEXA;
#line 450 "metachop.met"
                                        PUT_COORD_CALL;
#line 450 "metachop.met"
                                        return(1);
#line 450 "metachop.met"
                                    }
#line 450 "metachop.met"
                                    break ;
#line 450 "metachop.met"
#line 451 "metachop.met"
                                case 'L' :
#line 451 "metachop.met"
                                case 'l' :
#line 451 "metachop.met"
                                    NextChar();
#line 451 "metachop.met"
#line 452 "metachop.met"
#line 453 "metachop.met"
                                    switch (c) {
#line 453 "metachop.met"
#line 454 "metachop.met"
                                        case 'u' :
#line 454 "metachop.met"
                                        case 'U' :
#line 454 "metachop.met"
                                            NextChar();
#line 454 "metachop.met"
#line 454 "metachop.met"
                                            {
#line 454 "metachop.met"
                                                firstOnLine = 0 ; 
#line 454 "metachop.met"
                                                tokenAhead =1;
#line 454 "metachop.met"
                                                lexEl.Value=ULLHEXA;
#line 454 "metachop.met"
                                                PUT_COORD_CALL;
#line 454 "metachop.met"
                                                return(1);
#line 454 "metachop.met"
                                            }
#line 454 "metachop.met"
                                            break ;
#line 454 "metachop.met"
#line 455 "metachop.met"
                                        default : 
#line 455 "metachop.met"
                                             if (c!= EOF) {
#line 455 "metachop.met"
#line 455 "metachop.met"
                                                {
#line 455 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 455 "metachop.met"
                                                    tokenAhead =1;
#line 455 "metachop.met"
                                                    lexEl.Value=LLHEXA;
#line 455 "metachop.met"
                                                    PUT_COORD_CALL;
#line 455 "metachop.met"
                                                    return(1);
#line 455 "metachop.met"
                                                }
#line 455 "metachop.met"
                                            }
#line 455 "metachop.met"
                                            break ;
#line 455 "metachop.met"
                                    }
#line 455 "metachop.met"
#line 455 "metachop.met"
                                    break ;
#line 455 "metachop.met"
#line 458 "metachop.met"
                                default : 
#line 458 "metachop.met"
                                     if (c!= EOF) {
#line 458 "metachop.met"
#line 458 "metachop.met"
                                        {
#line 458 "metachop.met"
                                            firstOnLine = 0 ; 
#line 458 "metachop.met"
                                            tokenAhead =1;
#line 458 "metachop.met"
                                            lexEl.Value=LHEXA;
#line 458 "metachop.met"
                                            PUT_COORD_CALL;
#line 458 "metachop.met"
                                            return(1);
#line 458 "metachop.met"
                                        }
#line 458 "metachop.met"
                                    }
#line 458 "metachop.met"
                                    break ;
#line 458 "metachop.met"
                            }
#line 458 "metachop.met"
                            break ;
#line 458 "metachop.met"
#line 460 "metachop.met"
                        case 'u' :
#line 460 "metachop.met"
                        case 'U' :
#line 460 "metachop.met"
                            NextChar();
#line 460 "metachop.met"
#line 461 "metachop.met"
                            switch (c) {
#line 461 "metachop.met"
#line 462 "metachop.met"
                                case 'l' :
#line 462 "metachop.met"
                                case 'L' :
#line 462 "metachop.met"
                                    NextChar();
#line 462 "metachop.met"
#line 463 "metachop.met"
#line 464 "metachop.met"
                                    switch (c) {
#line 464 "metachop.met"
#line 465 "metachop.met"
                                        case 'L' :
#line 465 "metachop.met"
                                        case 'l' :
#line 465 "metachop.met"
                                            NextChar();
#line 465 "metachop.met"
#line 465 "metachop.met"
                                            {
#line 465 "metachop.met"
                                                firstOnLine = 0 ; 
#line 465 "metachop.met"
                                                tokenAhead =1;
#line 465 "metachop.met"
                                                lexEl.Value=ULLHEXA;
#line 465 "metachop.met"
                                                PUT_COORD_CALL;
#line 465 "metachop.met"
                                                return(1);
#line 465 "metachop.met"
                                            }
#line 465 "metachop.met"
                                            break ;
#line 465 "metachop.met"
#line 466 "metachop.met"
                                        default : 
#line 466 "metachop.met"
                                             if (c!= EOF) {
#line 466 "metachop.met"
#line 466 "metachop.met"
                                                {
#line 466 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 466 "metachop.met"
                                                    tokenAhead =1;
#line 466 "metachop.met"
                                                    lexEl.Value=ULHEXA;
#line 466 "metachop.met"
                                                    PUT_COORD_CALL;
#line 466 "metachop.met"
                                                    return(1);
#line 466 "metachop.met"
                                                }
#line 466 "metachop.met"
                                            }
#line 466 "metachop.met"
                                            break ;
#line 466 "metachop.met"
                                    }
#line 466 "metachop.met"
#line 466 "metachop.met"
                                    break ;
#line 466 "metachop.met"
#line 469 "metachop.met"
                                default : 
#line 469 "metachop.met"
                                     if (c!= EOF) {
#line 469 "metachop.met"
#line 469 "metachop.met"
                                        {
#line 469 "metachop.met"
                                            firstOnLine = 0 ; 
#line 469 "metachop.met"
                                            tokenAhead =1;
#line 469 "metachop.met"
                                            lexEl.Value=UHEXA;
#line 469 "metachop.met"
                                            PUT_COORD_CALL;
#line 469 "metachop.met"
                                            return(1);
#line 469 "metachop.met"
                                        }
#line 469 "metachop.met"
                                    }
#line 469 "metachop.met"
                                    break ;
#line 469 "metachop.met"
                            }
#line 469 "metachop.met"
                            break ;
#line 469 "metachop.met"
#line 471 "metachop.met"
                        default : 
#line 471 "metachop.met"
                             if (c!= EOF) {
#line 471 "metachop.met"
#line 471 "metachop.met"
                                {
#line 471 "metachop.met"
                                    firstOnLine = 0 ; 
#line 471 "metachop.met"
                                    tokenAhead =1;
#line 471 "metachop.met"
                                    lexEl.Value=HEXA;
#line 471 "metachop.met"
                                    PUT_COORD_CALL;
#line 471 "metachop.met"
                                    return(1);
#line 471 "metachop.met"
                                }
#line 471 "metachop.met"
                            }
#line 471 "metachop.met"
                            break ;
#line 471 "metachop.met"
                    }
#line 471 "metachop.met"
#line 471 "metachop.met"
                    break ;
#line 471 "metachop.met"
#line 474 "metachop.met"
                case '0' :
#line 474 "metachop.met"
                case '1' :
#line 474 "metachop.met"
                case '2' :
#line 474 "metachop.met"
                case '3' :
#line 474 "metachop.met"
                case '4' :
#line 474 "metachop.met"
                case '5' :
#line 474 "metachop.met"
                case '6' :
#line 474 "metachop.met"
                case '7' :
#line 474 "metachop.met"
#line 475 "metachop.met"
#line 476 "metachop.met"
                    while ((('0' <= c && c <= '7'))) { 
#line 476 "metachop.met"
#line 477 "metachop.met"
                        {
#line 477 "metachop.met"
                            lexEl . AddChar(c);
#line 477 "metachop.met"
                            NextChar();
#line 477 "metachop.met"
                        }
#line 477 "metachop.met"
                    } 
#line 477 "metachop.met"
#line 478 "metachop.met"
                    switch (c) {
#line 478 "metachop.met"
#line 479 "metachop.met"
                        case 'l' :
#line 479 "metachop.met"
                        case 'L' :
#line 479 "metachop.met"
                            NextChar();
#line 479 "metachop.met"
#line 480 "metachop.met"
                            switch (c) {
#line 480 "metachop.met"
#line 481 "metachop.met"
                                case 'L' :
#line 481 "metachop.met"
                                case 'l' :
#line 481 "metachop.met"
                                    NextChar();
#line 481 "metachop.met"
#line 482 "metachop.met"
#line 483 "metachop.met"
                                    switch (c) {
#line 483 "metachop.met"
#line 484 "metachop.met"
                                        case 'u' :
#line 484 "metachop.met"
                                        case 'U' :
#line 484 "metachop.met"
                                            NextChar();
#line 484 "metachop.met"
#line 484 "metachop.met"
                                            {
#line 484 "metachop.met"
                                                firstOnLine = 0 ; 
#line 484 "metachop.met"
                                                tokenAhead =1;
#line 484 "metachop.met"
                                                lexEl.Value=ULLOCTAL;
#line 484 "metachop.met"
                                                PUT_COORD_CALL;
#line 484 "metachop.met"
                                                return(1);
#line 484 "metachop.met"
                                            }
#line 484 "metachop.met"
                                            break ;
#line 484 "metachop.met"
#line 485 "metachop.met"
                                        default : 
#line 485 "metachop.met"
                                             if (c!= EOF) {
#line 485 "metachop.met"
#line 485 "metachop.met"
                                                {
#line 485 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 485 "metachop.met"
                                                    tokenAhead =1;
#line 485 "metachop.met"
                                                    lexEl.Value=LLOCTAL;
#line 485 "metachop.met"
                                                    PUT_COORD_CALL;
#line 485 "metachop.met"
                                                    return(1);
#line 485 "metachop.met"
                                                }
#line 485 "metachop.met"
                                            }
#line 485 "metachop.met"
                                            break ;
#line 485 "metachop.met"
                                    }
#line 485 "metachop.met"
#line 485 "metachop.met"
                                    break ;
#line 485 "metachop.met"
#line 488 "metachop.met"
                                case 'u' :
#line 488 "metachop.met"
                                case 'U' :
#line 488 "metachop.met"
                                    NextChar();
#line 488 "metachop.met"
#line 488 "metachop.met"
                                    {
#line 488 "metachop.met"
                                        firstOnLine = 0 ; 
#line 488 "metachop.met"
                                        tokenAhead =1;
#line 488 "metachop.met"
                                        lexEl.Value=ULOCTAL;
#line 488 "metachop.met"
                                        PUT_COORD_CALL;
#line 488 "metachop.met"
                                        return(1);
#line 488 "metachop.met"
                                    }
#line 488 "metachop.met"
                                    break ;
#line 488 "metachop.met"
#line 489 "metachop.met"
                                default : 
#line 489 "metachop.met"
                                     if (c!= EOF) {
#line 489 "metachop.met"
#line 489 "metachop.met"
                                        {
#line 489 "metachop.met"
                                            firstOnLine = 0 ; 
#line 489 "metachop.met"
                                            tokenAhead =1;
#line 489 "metachop.met"
                                            lexEl.Value=LOCTAL;
#line 489 "metachop.met"
                                            PUT_COORD_CALL;
#line 489 "metachop.met"
                                            return(1);
#line 489 "metachop.met"
                                        }
#line 489 "metachop.met"
                                    }
#line 489 "metachop.met"
                                    break ;
#line 489 "metachop.met"
                            }
#line 489 "metachop.met"
                            break ;
#line 489 "metachop.met"
#line 491 "metachop.met"
                        case 'u' :
#line 491 "metachop.met"
                        case 'U' :
#line 491 "metachop.met"
                            NextChar();
#line 491 "metachop.met"
#line 492 "metachop.met"
                            switch (c) {
#line 492 "metachop.met"
#line 493 "metachop.met"
                                case 'l' :
#line 493 "metachop.met"
                                case 'L' :
#line 493 "metachop.met"
                                    NextChar();
#line 493 "metachop.met"
#line 494 "metachop.met"
#line 495 "metachop.met"
                                    switch (c) {
#line 495 "metachop.met"
#line 496 "metachop.met"
                                        case 'L' :
#line 496 "metachop.met"
                                        case 'l' :
#line 496 "metachop.met"
                                            NextChar();
#line 496 "metachop.met"
#line 496 "metachop.met"
                                            {
#line 496 "metachop.met"
                                                firstOnLine = 0 ; 
#line 496 "metachop.met"
                                                tokenAhead =1;
#line 496 "metachop.met"
                                                lexEl.Value=ULLOCTAL;
#line 496 "metachop.met"
                                                PUT_COORD_CALL;
#line 496 "metachop.met"
                                                return(1);
#line 496 "metachop.met"
                                            }
#line 496 "metachop.met"
                                            break ;
#line 496 "metachop.met"
#line 497 "metachop.met"
                                        default : 
#line 497 "metachop.met"
                                             if (c!= EOF) {
#line 497 "metachop.met"
#line 497 "metachop.met"
                                                {
#line 497 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 497 "metachop.met"
                                                    tokenAhead =1;
#line 497 "metachop.met"
                                                    lexEl.Value=ULOCTAL;
#line 497 "metachop.met"
                                                    PUT_COORD_CALL;
#line 497 "metachop.met"
                                                    return(1);
#line 497 "metachop.met"
                                                }
#line 497 "metachop.met"
                                            }
#line 497 "metachop.met"
                                            break ;
#line 497 "metachop.met"
                                    }
#line 497 "metachop.met"
#line 497 "metachop.met"
                                    break ;
#line 497 "metachop.met"
#line 500 "metachop.met"
                                default : 
#line 500 "metachop.met"
                                     if (c!= EOF) {
#line 500 "metachop.met"
#line 500 "metachop.met"
                                        {
#line 500 "metachop.met"
                                            firstOnLine = 0 ; 
#line 500 "metachop.met"
                                            tokenAhead =1;
#line 500 "metachop.met"
                                            lexEl.Value=UOCTAL;
#line 500 "metachop.met"
                                            PUT_COORD_CALL;
#line 500 "metachop.met"
                                            return(1);
#line 500 "metachop.met"
                                        }
#line 500 "metachop.met"
                                    }
#line 500 "metachop.met"
                                    break ;
#line 500 "metachop.met"
                            }
#line 500 "metachop.met"
                            break ;
#line 500 "metachop.met"
#line 502 "metachop.met"
                        default : 
#line 502 "metachop.met"
                             if (c!= EOF) {
#line 502 "metachop.met"
#line 502 "metachop.met"
                                {
#line 502 "metachop.met"
                                    firstOnLine = 0 ; 
#line 502 "metachop.met"
                                    tokenAhead =1;
#line 502 "metachop.met"
                                    lexEl.Value=OCTAL;
#line 502 "metachop.met"
                                    PUT_COORD_CALL;
#line 502 "metachop.met"
                                    return(1);
#line 502 "metachop.met"
                                }
#line 502 "metachop.met"
                            }
#line 502 "metachop.met"
                            break ;
#line 502 "metachop.met"
                    }
#line 502 "metachop.met"
#line 502 "metachop.met"
                    break ;
#line 502 "metachop.met"
#line 505 "metachop.met"
                case '.' :
#line 505 "metachop.met"
#line 506 "metachop.met"
#line 507 "metachop.met"
                    {
#line 507 "metachop.met"
                        lexEl.AddString("0");
#line 507 "metachop.met"
                    }
#line 507 "metachop.met"
#line 508 "metachop.met"
                    {
#line 508 "metachop.met"
                        lexEl . AddChar(c);
#line 508 "metachop.met"
                        NextChar();
#line 508 "metachop.met"
                    }
#line 508 "metachop.met"
#line 509 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 509 "metachop.met"
#line 510 "metachop.met"
                        {
#line 510 "metachop.met"
                            lexEl . AddChar(c);
#line 510 "metachop.met"
                            NextChar();
#line 510 "metachop.met"
                        }
#line 510 "metachop.met"
                    } 
#line 510 "metachop.met"
#line 511 "metachop.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 511 "metachop.met"
#line 512 "metachop.met"
#line 513 "metachop.met"
                        {
#line 513 "metachop.met"
                            lexEl.AddString("e");
#line 513 "metachop.met"
                        }
#line 513 "metachop.met"
#line 514 "metachop.met"
                        if (((c == '+')||(c == '-'))){
#line 514 "metachop.met"
#line 515 "metachop.met"
                            {
#line 515 "metachop.met"
                                lexEl . AddChar(c);
#line 515 "metachop.met"
                                NextChar();
#line 515 "metachop.met"
                            }
#line 515 "metachop.met"
                        }
#line 515 "metachop.met"
#line 516 "metachop.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 516 "metachop.met"
#line 517 "metachop.met"
                            {
#line 517 "metachop.met"
                                lexEl . AddChar(c);
#line 517 "metachop.met"
                                NextChar();
#line 517 "metachop.met"
                            }
#line 517 "metachop.met"
                        } 
#line 517 "metachop.met"
#line 517 "metachop.met"
#line 517 "metachop.met"
                    }
#line 517 "metachop.met"
#line 519 "metachop.met"
                    switch (c) {
#line 519 "metachop.met"
#line 520 "metachop.met"
                        case 'f' :
#line 520 "metachop.met"
#line 520 "metachop.met"
                            {
#line 520 "metachop.met"
                                lexEl . AddChar(c);
#line 520 "metachop.met"
                                NextChar();
#line 520 "metachop.met"
                            }
#line 520 "metachop.met"
                            break ;
#line 520 "metachop.met"
#line 521 "metachop.met"
                        case 'F' :
#line 521 "metachop.met"
#line 521 "metachop.met"
                            {
#line 521 "metachop.met"
                                lexEl . AddChar(c);
#line 521 "metachop.met"
                                NextChar();
#line 521 "metachop.met"
                            }
#line 521 "metachop.met"
                            break ;
#line 521 "metachop.met"
#line 522 "metachop.met"
                        case 'l' :
#line 522 "metachop.met"
#line 522 "metachop.met"
                            {
#line 522 "metachop.met"
                                lexEl . AddChar(c);
#line 522 "metachop.met"
                                NextChar();
#line 522 "metachop.met"
                            }
#line 522 "metachop.met"
                            break ;
#line 522 "metachop.met"
#line 523 "metachop.met"
                        case 'L' :
#line 523 "metachop.met"
#line 523 "metachop.met"
                            {
#line 523 "metachop.met"
                                lexEl . AddChar(c);
#line 523 "metachop.met"
                                NextChar();
#line 523 "metachop.met"
                            }
#line 523 "metachop.met"
                            break ;
#line 523 "metachop.met"
                    }
#line 523 "metachop.met"
#line 525 "metachop.met"
                    {
#line 525 "metachop.met"
                        firstOnLine = 0 ; 
#line 525 "metachop.met"
                        tokenAhead =1;
#line 525 "metachop.met"
                        lexEl.Value=FLOATVAL;
#line 525 "metachop.met"
                        PUT_COORD_CALL;
#line 525 "metachop.met"
                        return(1);
#line 525 "metachop.met"
                    }
#line 525 "metachop.met"
#line 525 "metachop.met"
                    break ;
#line 525 "metachop.met"
#line 529 "metachop.met"
                default : 
#line 529 "metachop.met"
                     if (c!= EOF) {
#line 529 "metachop.met"
#line 528 "metachop.met"
#line 529 "metachop.met"
                        {
#line 529 "metachop.met"
                            lexEl.AddString("0");
#line 529 "metachop.met"
                        }
#line 529 "metachop.met"
#line 530 "metachop.met"
                        switch (c) {
#line 530 "metachop.met"
#line 531 "metachop.met"
                            case 'l' :
#line 531 "metachop.met"
                            case 'L' :
#line 531 "metachop.met"
                                NextChar();
#line 531 "metachop.met"
#line 532 "metachop.met"
                                switch (c) {
#line 532 "metachop.met"
#line 533 "metachop.met"
                                    case 'u' :
#line 533 "metachop.met"
                                    case 'U' :
#line 533 "metachop.met"
                                        NextChar();
#line 533 "metachop.met"
#line 533 "metachop.met"
                                        {
#line 533 "metachop.met"
                                            firstOnLine = 0 ; 
#line 533 "metachop.met"
                                            tokenAhead =1;
#line 533 "metachop.met"
                                            lexEl.Value=ULINTEGER;
#line 533 "metachop.met"
                                            PUT_COORD_CALL;
#line 533 "metachop.met"
                                            return(1);
#line 533 "metachop.met"
                                        }
#line 533 "metachop.met"
                                        break ;
#line 533 "metachop.met"
#line 534 "metachop.met"
                                    default : 
#line 534 "metachop.met"
                                         if (c!= EOF) {
#line 534 "metachop.met"
#line 534 "metachop.met"
                                            {
#line 534 "metachop.met"
                                                firstOnLine = 0 ; 
#line 534 "metachop.met"
                                                tokenAhead =1;
#line 534 "metachop.met"
                                                lexEl.Value=LINTEGER;
#line 534 "metachop.met"
                                                PUT_COORD_CALL;
#line 534 "metachop.met"
                                                return(1);
#line 534 "metachop.met"
                                            }
#line 534 "metachop.met"
                                        }
#line 534 "metachop.met"
                                        break ;
#line 534 "metachop.met"
                                }
#line 534 "metachop.met"
                                break ;
#line 534 "metachop.met"
#line 536 "metachop.met"
                            case 'u' :
#line 536 "metachop.met"
                            case 'U' :
#line 536 "metachop.met"
                                NextChar();
#line 536 "metachop.met"
#line 537 "metachop.met"
                                switch (c) {
#line 537 "metachop.met"
#line 538 "metachop.met"
                                    case 'l' :
#line 538 "metachop.met"
                                    case 'L' :
#line 538 "metachop.met"
                                        NextChar();
#line 538 "metachop.met"
#line 538 "metachop.met"
                                        {
#line 538 "metachop.met"
                                            firstOnLine = 0 ; 
#line 538 "metachop.met"
                                            tokenAhead =1;
#line 538 "metachop.met"
                                            lexEl.Value=ULINTEGER;
#line 538 "metachop.met"
                                            PUT_COORD_CALL;
#line 538 "metachop.met"
                                            return(1);
#line 538 "metachop.met"
                                        }
#line 538 "metachop.met"
                                        break ;
#line 538 "metachop.met"
#line 539 "metachop.met"
                                    default : 
#line 539 "metachop.met"
                                         if (c!= EOF) {
#line 539 "metachop.met"
#line 539 "metachop.met"
                                            {
#line 539 "metachop.met"
                                                firstOnLine = 0 ; 
#line 539 "metachop.met"
                                                tokenAhead =1;
#line 539 "metachop.met"
                                                lexEl.Value=UINTEGER;
#line 539 "metachop.met"
                                                PUT_COORD_CALL;
#line 539 "metachop.met"
                                                return(1);
#line 539 "metachop.met"
                                            }
#line 539 "metachop.met"
                                        }
#line 539 "metachop.met"
                                        break ;
#line 539 "metachop.met"
                                }
#line 539 "metachop.met"
                                break ;
#line 539 "metachop.met"
#line 541 "metachop.met"
                            default : 
#line 541 "metachop.met"
                                 if (c!= EOF) {
#line 541 "metachop.met"
#line 541 "metachop.met"
                                    {
#line 541 "metachop.met"
                                        firstOnLine = 0 ; 
#line 541 "metachop.met"
                                        tokenAhead =1;
#line 541 "metachop.met"
                                        lexEl.Value=INTEGER;
#line 541 "metachop.met"
                                        PUT_COORD_CALL;
#line 541 "metachop.met"
                                        return(1);
#line 541 "metachop.met"
                                    }
#line 541 "metachop.met"
                                }
#line 541 "metachop.met"
                                break ;
#line 541 "metachop.met"
                        }
#line 541 "metachop.met"
#line 541 "metachop.met"
                    }
#line 541 "metachop.met"
                    break ;
#line 541 "metachop.met"
            }
#line 541 "metachop.met"
#line 541 "metachop.met"
            break ;
#line 541 "metachop.met"
#line 546 "metachop.met"
        case '#' :
#line 546 "metachop.met"
            NextChar();
#line 546 "metachop.met"
#line 547 "metachop.met"
#line 548 "metachop.met"
            while (((c == ' ')||(c == '\t'))) { 
#line 548 "metachop.met"
#line 549 "metachop.met"
                if (!(c != EOF&& NextChar())) ;
#line 549 "metachop.met"
            } 
#line 549 "metachop.met"
#line 550 "metachop.met"
#line 551 "metachop.met"
            if((GetString("include",1)&& NextChar())){
#line 551 "metachop.met"
#line 551 "metachop.met"
                {
#line 551 "metachop.met"
                    firstOnLine = 0 ; 
#line 551 "metachop.met"
                    tokenAhead =1;
#line 551 "metachop.met"
                    lexEl.Value=INCLUDE_DIR;
#line 551 "metachop.met"
                    PUT_COORD_CALL;
#line 551 "metachop.met"
                    return(1);
#line 551 "metachop.met"
                }
#line 551 "metachop.met"
            } else 
#line 551 "metachop.met"
#line 552 "metachop.met"
            if((GetString("ifdef",1)&& NextChar())){
#line 552 "metachop.met"
#line 552 "metachop.met"
                {
#line 552 "metachop.met"
                    firstOnLine = 0 ; 
#line 552 "metachop.met"
                    tokenAhead =1;
#line 552 "metachop.met"
                    lexEl.Value=IFDEF_DIR;
#line 552 "metachop.met"
                    PUT_COORD_CALL;
#line 552 "metachop.met"
                    return(1);
#line 552 "metachop.met"
                }
#line 552 "metachop.met"
            } else 
#line 552 "metachop.met"
#line 553 "metachop.met"
            if((GetString("ifndef",1)&& NextChar())){
#line 553 "metachop.met"
#line 553 "metachop.met"
                {
#line 553 "metachop.met"
                    firstOnLine = 0 ; 
#line 553 "metachop.met"
                    tokenAhead =1;
#line 553 "metachop.met"
                    lexEl.Value=IFNDEF_DIR;
#line 553 "metachop.met"
                    PUT_COORD_CALL;
#line 553 "metachop.met"
                    return(1);
#line 553 "metachop.met"
                }
#line 553 "metachop.met"
            } else 
#line 553 "metachop.met"
#line 554 "metachop.met"
            if((GetString("if",1)&& NextChar())){
#line 554 "metachop.met"
#line 554 "metachop.met"
                {
#line 554 "metachop.met"
                    firstOnLine = 0 ; 
#line 554 "metachop.met"
                    tokenAhead =1;
#line 554 "metachop.met"
                    lexEl.Value=IF_DIR;
#line 554 "metachop.met"
                    PUT_COORD_CALL;
#line 554 "metachop.met"
                    return(1);
#line 554 "metachop.met"
                }
#line 554 "metachop.met"
            } else 
#line 554 "metachop.met"
#line 555 "metachop.met"
            if((GetString("else",1)&& NextChar())){
#line 555 "metachop.met"
#line 555 "metachop.met"
                {
#line 555 "metachop.met"
                    firstOnLine = 0 ; 
#line 555 "metachop.met"
                    tokenAhead =1;
#line 555 "metachop.met"
                    lexEl.Value=ELSE_DIR;
#line 555 "metachop.met"
                    PUT_COORD_CALL;
#line 555 "metachop.met"
                    return(1);
#line 555 "metachop.met"
                }
#line 555 "metachop.met"
            } else 
#line 555 "metachop.met"
#line 556 "metachop.met"
            if((GetString("elif",1)&& NextChar())){
#line 556 "metachop.met"
#line 556 "metachop.met"
                {
#line 556 "metachop.met"
                    firstOnLine = 0 ; 
#line 556 "metachop.met"
                    tokenAhead =1;
#line 556 "metachop.met"
                    lexEl.Value=ELIF_DIR;
#line 556 "metachop.met"
                    PUT_COORD_CALL;
#line 556 "metachop.met"
                    return(1);
#line 556 "metachop.met"
                }
#line 556 "metachop.met"
            } else 
#line 556 "metachop.met"
#line 557 "metachop.met"
            if((GetString("endif",1)&& NextChar())){
#line 557 "metachop.met"
#line 557 "metachop.met"
                {
#line 557 "metachop.met"
                    firstOnLine = 0 ; 
#line 557 "metachop.met"
                    tokenAhead =1;
#line 557 "metachop.met"
                    lexEl.Value=ENDIF_DIR;
#line 557 "metachop.met"
                    PUT_COORD_CALL;
#line 557 "metachop.met"
                    return(1);
#line 557 "metachop.met"
                }
#line 557 "metachop.met"
            } else 
#line 557 "metachop.met"
#line 558 "metachop.met"
            if((GetString("line",1)&& NextChar())){
#line 558 "metachop.met"
#line 558 "metachop.met"
                {
#line 558 "metachop.met"
                    firstOnLine = 0 ; 
#line 558 "metachop.met"
                    tokenAhead =1;
#line 558 "metachop.met"
                    lexEl.Value=LINE_DIR;
#line 558 "metachop.met"
                    PUT_COORD_CALL;
#line 558 "metachop.met"
                    return(1);
#line 558 "metachop.met"
                }
#line 558 "metachop.met"
            } else 
#line 558 "metachop.met"
#line 559 "metachop.met"
            if((GetString("pragma",1)&& NextChar())){
#line 559 "metachop.met"
#line 559 "metachop.met"
                {
#line 559 "metachop.met"
                    firstOnLine = 0 ; 
#line 559 "metachop.met"
                    tokenAhead =1;
#line 559 "metachop.met"
                    lexEl.Value=PRAGMA_DIR;
#line 559 "metachop.met"
                    PUT_COORD_CALL;
#line 559 "metachop.met"
                    return(1);
#line 559 "metachop.met"
                }
#line 559 "metachop.met"
            } else 
#line 559 "metachop.met"
#line 560 "metachop.met"
            if((GetString("error",1)&& NextChar())){
#line 560 "metachop.met"
#line 560 "metachop.met"
                {
#line 560 "metachop.met"
                    firstOnLine = 0 ; 
#line 560 "metachop.met"
                    tokenAhead =1;
#line 560 "metachop.met"
                    lexEl.Value=ERROR_DIR;
#line 560 "metachop.met"
                    PUT_COORD_CALL;
#line 560 "metachop.met"
                    return(1);
#line 560 "metachop.met"
                }
#line 560 "metachop.met"
            } else 
#line 560 "metachop.met"
#line 561 "metachop.met"
            if((GetString("define",1)&& NextChar())){
#line 561 "metachop.met"
#line 561 "metachop.met"
                {
#line 561 "metachop.met"
                    firstOnLine = 0 ; 
#line 561 "metachop.met"
                    tokenAhead =1;
#line 561 "metachop.met"
                    lexEl.Value=DEFINE_DIR;
#line 561 "metachop.met"
                    PUT_COORD_CALL;
#line 561 "metachop.met"
                    return(1);
#line 561 "metachop.met"
                }
#line 561 "metachop.met"
            } else 
#line 561 "metachop.met"
#line 562 "metachop.met"
            if((GetString("undef",1)&& NextChar())){
#line 562 "metachop.met"
#line 562 "metachop.met"
                {
#line 562 "metachop.met"
                    firstOnLine = 0 ; 
#line 562 "metachop.met"
                    tokenAhead =1;
#line 562 "metachop.met"
                    lexEl.Value=UNDEF_DIR;
#line 562 "metachop.met"
                    PUT_COORD_CALL;
#line 562 "metachop.met"
                    return(1);
#line 562 "metachop.met"
                }
#line 562 "metachop.met"
            } else 
#line 562 "metachop.met"
#line 563 "metachop.met"
            if(((('0' <= c && c <= '9')))){
#line 563 "metachop.met"
#line 563 "metachop.met"
                {
#line 563 "metachop.met"
                    firstOnLine = 0 ; 
#line 563 "metachop.met"
                    tokenAhead =1;
#line 563 "metachop.met"
                    lexEl.Value=LINE_REFERENCE_DIR;
#line 563 "metachop.met"
                    PUT_COORD_CALL;
#line 563 "metachop.met"
                    return(1);
#line 563 "metachop.met"
                }
#line 563 "metachop.met"
            } else 
#line 563 "metachop.met"
             ;
#line 563 "metachop.met"
#line 563 "metachop.met"
            break ;
#line 563 "metachop.met"
#line 566 "metachop.met"
        case '\r' :
#line 566 "metachop.met"
        case '\n' :
#line 566 "metachop.met"
            NextChar();
#line 566 "metachop.met"
#line 566 "metachop.met"
            {
#line 566 "metachop.met"
                firstOnLine = 0 ; 
#line 566 "metachop.met"
                tokenAhead =1;
#line 566 "metachop.met"
                lexEl.Value=CARRIAGE_RETURN;
#line 566 "metachop.met"
                firstOnLine = 1 ; 
#line 566 "metachop.met"
                PUT_COORD_CALL;
#line 566 "metachop.met"
                return(1);
#line 566 "metachop.met"
            }
#line 566 "metachop.met"
            break ;
#line 566 "metachop.met"
#line 567 "metachop.met"
        case '/' :
#line 567 "metachop.met"
            NextChar();
#line 567 "metachop.met"
#line 568 "metachop.met"
#line 569 "metachop.met"
            if (((c == '='))){
#line 569 "metachop.met"
#line 570 "metachop.met"
#line 571 "metachop.met"
                if (!(c != EOF&& NextChar())) ;
#line 571 "metachop.met"
#line 572 "metachop.met"
                {
#line 572 "metachop.met"
                    firstOnLine = 0 ; 
#line 572 "metachop.met"
                    tokenAhead =1;
#line 572 "metachop.met"
                    lexEl.Value=SLASEGAL;
#line 572 "metachop.met"
                    PUT_COORD_CALL;
#line 572 "metachop.met"
                    return(1);
#line 572 "metachop.met"
                }
#line 572 "metachop.met"
#line 572 "metachop.met"
#line 572 "metachop.met"
            } else {
#line 572 "metachop.met"
#line 575 "metachop.met"
                {
#line 575 "metachop.met"
                    firstOnLine = 0 ; 
#line 575 "metachop.met"
                    tokenAhead =1;
#line 575 "metachop.met"
                    lexEl.Value=SLAS;
#line 575 "metachop.met"
                    PUT_COORD_CALL;
#line 575 "metachop.met"
                    return(1);
#line 575 "metachop.met"
                }
#line 575 "metachop.met"
            }
#line 575 "metachop.met"
#line 575 "metachop.met"
            break ;
#line 575 "metachop.met"
#line 577 "metachop.met"
        case '.' :
#line 577 "metachop.met"
#line 578 "metachop.met"
#line 579 "metachop.met"
            {
#line 579 "metachop.met"
                lexEl . AddChar(c);
#line 579 "metachop.met"
                NextChar();
#line 579 "metachop.met"
            }
#line 579 "metachop.met"
#line 580 "metachop.met"
            if ((('0' <= c && c <= '9'))){
#line 580 "metachop.met"
#line 581 "metachop.met"
#line 582 "metachop.met"
                while ((('0' <= c && c <= '9'))) { 
#line 582 "metachop.met"
#line 583 "metachop.met"
                    {
#line 583 "metachop.met"
                        lexEl . AddChar(c);
#line 583 "metachop.met"
                        NextChar();
#line 583 "metachop.met"
                    }
#line 583 "metachop.met"
                } 
#line 583 "metachop.met"
#line 584 "metachop.met"
                if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 584 "metachop.met"
#line 585 "metachop.met"
#line 586 "metachop.met"
                    {
#line 586 "metachop.met"
                        lexEl.AddString("e");
#line 586 "metachop.met"
                    }
#line 586 "metachop.met"
#line 587 "metachop.met"
                    if (((c == '+')||(c == '-'))){
#line 587 "metachop.met"
#line 588 "metachop.met"
                        {
#line 588 "metachop.met"
                            lexEl . AddChar(c);
#line 588 "metachop.met"
                            NextChar();
#line 588 "metachop.met"
                        }
#line 588 "metachop.met"
                    }
#line 588 "metachop.met"
#line 589 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 589 "metachop.met"
#line 590 "metachop.met"
                        {
#line 590 "metachop.met"
                            lexEl . AddChar(c);
#line 590 "metachop.met"
                            NextChar();
#line 590 "metachop.met"
                        }
#line 590 "metachop.met"
                    } 
#line 590 "metachop.met"
#line 590 "metachop.met"
#line 590 "metachop.met"
                }
#line 590 "metachop.met"
#line 592 "metachop.met"
                switch (c) {
#line 592 "metachop.met"
#line 593 "metachop.met"
                    case 'f' :
#line 593 "metachop.met"
#line 593 "metachop.met"
                        {
#line 593 "metachop.met"
                            lexEl . AddChar(c);
#line 593 "metachop.met"
                            NextChar();
#line 593 "metachop.met"
                        }
#line 593 "metachop.met"
                        break ;
#line 593 "metachop.met"
#line 594 "metachop.met"
                    case 'F' :
#line 594 "metachop.met"
#line 594 "metachop.met"
                        {
#line 594 "metachop.met"
                            lexEl . AddChar(c);
#line 594 "metachop.met"
                            NextChar();
#line 594 "metachop.met"
                        }
#line 594 "metachop.met"
                        break ;
#line 594 "metachop.met"
#line 595 "metachop.met"
                    case 'l' :
#line 595 "metachop.met"
#line 595 "metachop.met"
                        {
#line 595 "metachop.met"
                            lexEl . AddChar(c);
#line 595 "metachop.met"
                            NextChar();
#line 595 "metachop.met"
                        }
#line 595 "metachop.met"
                        break ;
#line 595 "metachop.met"
#line 596 "metachop.met"
                    case 'L' :
#line 596 "metachop.met"
#line 596 "metachop.met"
                        {
#line 596 "metachop.met"
                            lexEl . AddChar(c);
#line 596 "metachop.met"
                            NextChar();
#line 596 "metachop.met"
                        }
#line 596 "metachop.met"
                        break ;
#line 596 "metachop.met"
                }
#line 596 "metachop.met"
#line 598 "metachop.met"
                {
#line 598 "metachop.met"
                    firstOnLine = 0 ; 
#line 598 "metachop.met"
                    tokenAhead =1;
#line 598 "metachop.met"
                    lexEl.Value=FLOATVAL;
#line 598 "metachop.met"
                    PUT_COORD_CALL;
#line 598 "metachop.met"
                    return(1);
#line 598 "metachop.met"
                }
#line 598 "metachop.met"
#line 598 "metachop.met"
#line 598 "metachop.met"
            } else {
#line 598 "metachop.met"
#line 601 "metachop.met"
#line 602 "metachop.met"
                {
#line 602 "metachop.met"
                    firstOnLine = 0 ; 
#line 602 "metachop.met"
                    tokenAhead =1;
#line 602 "metachop.met"
                    lexEl.Value=POINT;
#line 602 "metachop.met"
                    PUT_COORD_CALL;
#line 602 "metachop.met"
                    return(1);
#line 602 "metachop.met"
                }
#line 602 "metachop.met"
#line 602 "metachop.met"
            }
#line 602 "metachop.met"
#line 602 "metachop.met"
            break ;
#line 602 "metachop.met"
    }
#line 602 "metachop.met"
#line 602 "metachop.met"
#line 605 "metachop.met"
    line = oldLine;
#line 605 "metachop.met"
    LEX_EXIT(0,"")
#line 605 "metachop.met"
    lexEl.Value = -1 ;
#line 605 "metachop.met"
    return -1 ; 
#line 605 "metachop.met"
}
#line 605 "metachop.met"

#line 605 "metachop.met"
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    DPOI
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    LINE_REFERENCE_DIR
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    LINE_REFERENCE_DIR
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    DPOI
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    META
    LANGUAGE
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    LINE_REFERENCE_DIR
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
    LINE_REFERENCE_DIR
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
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
    LINE_REFERENCE_DIR
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 146 -- cplus::assignment_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 147 -- cplus::cast_expression_value
    META
    POUV
-- 148 -- cplus::exclusive_or_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 149 -- cplus::expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 150 -- cplus::main_entry
    ALWAYS
-- 151 -- cplus::multiplicative_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 152 -- cplus::postfix_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 153 -- cplus::primary_expression
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
-- 154 -- cplus::relational_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 155 -- cplus::shift_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 156 -- cplus::statement
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 157 -- old
    ALWAYS
-- 158 -- prog
    META
    LANGUAGE
-- 159 -- take_follow
    META
    INFE
    INFESUPE
-- 160 -- take_follow_list
    ALWAYS
-- 161 -- take_follow_super
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 162 -- chopb::main_entry
    META
    LANGUAGE
-- 163 -- chopb::primary_expression
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
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 164 -- chopb::prog
    META
    LANGUAGE
*/

signed char *metachop::_tokenArray [165] = {
    (signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\140\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\376\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\002\100\000\000\000\000\000\070\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\002\100\000\000\000\000\000\070\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\160\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\200\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\370\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\360\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\170\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\300\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\170\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\214\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\360\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\147\000\100\200\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\140\000\100\200\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\070\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\100\030\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\300\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\010\000\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\010\000\377\377\377\377\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\300\377\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\060\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\370\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\310\377\377\007\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\147\000\100\200\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\140\000\100\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\010\000\377\377\377\377\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\010\000\377\177\000\300\377\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\140\000\100\200\000\000\020\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\360\001\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000"
};
typedef int (metachop::*(DEF_FUNC_TOKEN_ARRAY [165]))() ;
DEF_FUNC_TOKEN_ARRAY metachop::_tokenFuncArray = {
    /*bidon                          */0,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */(&metachop::Lex),
    /*alloc_expression               */(&metachop::Lex),
    /*allocation_expression          */(&metachop::Lex),
    /*and_expression                 */(&metachop::Lex),
    /*arg_declarator                 */(&metachop::Lex),
    /*arg_declarator_base            */(&metachop::Lex),
    /*arg_declarator_followed        */(&metachop::Lex),
    /*arg_declarator_type            */(&metachop::Lex),
    /*arg_typ_declarator             */(&metachop::Lex),
    /*arg_typ_list                   */0,
    /*asm_declaration                */(&metachop::Lex),
    /*assignment_end                 */(&metachop::Lex),
    /*assignment_expression          */(&metachop::Lex),
    /*base_specifier                 */(&metachop::Lex),
    /*base_specifier_elem            */(&metachop::Lex),
    /*bit_field_decl                 */(&metachop::Lex),
    /*cast_expression                */(&metachop::Lex),
    /*cast_expression_value          */(&metachop::Lex),
    /*catch_unit                     */(&metachop::specific),
    /*catch_unit_ansi                */(&metachop::Lex),
    /*class_declaration              */(&metachop::Lex),
    /*comment_eater                  */0,
    /*complete_class_name            */(&metachop::Lex),
    /*compound_statement             */(&metachop::Lex),
    /*conditional_expression         */(&metachop::Lex),
    /*const_or_volatile              */(&metachop::Lex),
    /*constan                        */(&metachop::Lex),
    /*ctor_initializer               */0,
    /*data_decl_exotic               */(&metachop::specific),
    /*data_decl_sc_decl              */(&metachop::Lex),
    /*data_decl_sc_decl_full         */(&metachop::Lex),
    /*data_decl_sc_decl_short        */(&metachop::Lex),
    /*data_decl_sc_ty_decl           */(&metachop::Lex),
    /*data_decl_sc_ty_decl_full      */(&metachop::Lex),
    /*data_decl_sc_ty_decl_short     */(&metachop::Lex),
    /*data_declaration               */0,
    /*data_declaration_for           */(&metachop::Lex),
    /*data_declaration_for_full      */(&metachop::Lex),
    /*data_declaration_for_short     */(&metachop::Lex),
    /*data_declaration_strict        */0,
    /*deallocation_expression        */(&metachop::Lex),
    /*declarator                     */(&metachop::Lex),
    /*declarator_follow              */0,
    /*declarator_list                */(&metachop::Lex),
    /*declarator_list_init           */(&metachop::Lex),
    /*declarator_value               */(&metachop::Lex),
    /*define_dir                     */(&metachop::Lex),
    /*directive                      */(&metachop::Lex),
    /*end_pragma                     */(&metachop::Lex),
    /*end_pragma_managed             */(&metachop::Lex),
    /*enum_declarator                */(&metachop::Lex),
    /*enum_val                       */(&metachop::Lex),
    /*equality_expression            */(&metachop::Lex),
    /*exception                      */(&metachop::specific),
    /*exception_ansi                 */(&metachop::Lex),
    /*exception_list                 */(&metachop::Lex),
    /*exclusive_or_expression        */(&metachop::Lex),
    /*expression                     */(&metachop::Lex),
    /*expression_for                 */(&metachop::Lex),
    /*ext_all                        */0,
    /*ext_all_ext                    */0,
    /*ext_all_no_linkage             */0,
    /*ext_data_decl_sc_ty            */(&metachop::Lex),
    /*ext_data_decl_sc_ty_full       */(&metachop::Lex),
    /*ext_data_decl_sc_ty_short      */(&metachop::Lex),
    /*ext_data_decl_simp             */0,
    /*ext_data_declaration           */0,
    /*ext_decl_dir                   */(&metachop::Lex),
    /*ext_decl_if_dir                */(&metachop::Lex),
    /*ext_decl_ifdef_dir             */(&metachop::Lex),
    /*for_statement                  */(&metachop::Lex),
    /*func_declaration               */(&metachop::Lex),
    /*func_declarator                */(&metachop::Lex),
    /*ident_mul                      */(&metachop::Lex),
    /*include_dir                    */(&metachop::Lex),
    /*inclusive_or_expression        */(&metachop::Lex),
    /*initializer                    */0,
    /*inside_declaration             */0,
    /*inside_declaration1            */(&metachop::Lex),
    /*inside_declaration2            */(&metachop::Lex),
    /*inside_declaration_extension   */0,
    /*label_beg                      */(&metachop::Lex),
    /*linkage_specification          */(&metachop::Lex),
    /*logical_and_expression         */(&metachop::Lex),
    /*logical_or_expression          */(&metachop::Lex),
    /*long_short_int_char            */(&metachop::Lex),
    /*macro                          */(&metachop::specific),
    /*macro_extended                 */0,
    /*main_entry                     */(&metachop::Lex),
    /*member_declarator              */(&metachop::Lex),
    /*message_map                    */(&metachop::specific),
    /*multiplicative_expression      */(&metachop::Lex),
    /*name_space                     */(&metachop::Lex),
    /*new_1                          */(&metachop::Lex),
    /*new_2                          */(&metachop::Lex),
    /*new_declarator                 */0,
    /*new_type_name                  */(&metachop::Lex),
    /*none_statement                 */0,
    /*operator_function_name         */(&metachop::Lex),
    /*other_config                   */(&metachop::LexPragma),
    /*parameter_list                 */(&metachop::Lex),
    /*parameter_list_extended        */(&metachop::Lex),
    /*pm_expression                  */(&metachop::Lex),
    /*postfix_expression             */(&metachop::Lex),
    /*pretty::bidon                  */(&metachop::Lex),
    /*pretty::parse_entry            */(&metachop::Lex),
    /*primary_expression             */(&metachop::Lex),
    /*program                        */0,
    /*protect_declare                */(&metachop::Lex),
    /*ptr_operator                   */(&metachop::Lex),
    /*qualified_name                 */(&metachop::Lex),
    /*qualified_name_elem            */(&metachop::Lex),
    /*quick_prog                     */0,
    /*quick_prog_elem                */0,
    /*range_in_liste                 */(&metachop::Lex),
    /*range_modifier                 */(&metachop::Lex),
    /*range_modifier_function        */(&metachop::Lex),
    /*range_modifier_ident           */0,
    /*range_pragma                   */(&metachop::LexPragma),
    /*relational_expression          */(&metachop::Lex),
    /*sc_specifier                   */0,
    /*shift_expression               */(&metachop::Lex),
    /*simple_type                    */(&metachop::Lex),
    /*simple_type_name               */(&metachop::Lex),
    /*sizeof_type                    */(&metachop::Lex),
    /*stat_all                       */0,
    /*stat_dir                       */(&metachop::Lex),
    /*stat_dir_switch                */(&metachop::Lex),
    /*stat_if_dir                    */(&metachop::Lex),
    /*stat_ifdef_dir                 */(&metachop::Lex),
    /*statement                      */(&metachop::Lex),
    /*statement_expression           */(&metachop::Lex),
    /*string_list                    */(&metachop::Lex),
    /*switch_elem                    */(&metachop::Lex),
    /*switch_list                    */(&metachop::Lex),
    /*template_type                  */(&metachop::Lex),
    /*type_and_declarator            */(&metachop::Lex),
    /*type_descr                     */(&metachop::Lex),
    /*type_name                      */(&metachop::Lex),
    /*type_specifier                 */(&metachop::Lex),
    /*type_specifier_without_param   */(&metachop::Lex),
    /*typedef_and_declarator         */(&metachop::Lex),
    /*unary_expression               */(&metachop::Lex),
    /*cplus::assignment_expression   */(&metachop::Lex),
    /*cplus::cast_expression_value   */(&metachop::Lex),
    /*cplus::exclusive_or_expression */(&metachop::Lex),
    /*cplus::expression              */(&metachop::Lex),
    /*cplus::main_entry              */0,
    /*cplus::multiplicative_expression*/(&metachop::Lex),
    /*cplus::postfix_expression      */(&metachop::Lex),
    /*cplus::primary_expression      */(&metachop::Lex),
    /*cplus::relational_expression   */(&metachop::Lex),
    /*cplus::shift_expression        */(&metachop::Lex),
    /*cplus::statement               */(&metachop::Lex),
    /*old                            */0,
    /*prog                           */(&metachop::Lex),
    /*take_follow                    */(&metachop::Lex),
    /*take_follow_list               */0,
    /*take_follow_super              */(&metachop::Lex),
    /*chopb::main_entry              */(&metachop::Lex),
    /*chopb::primary_expression      */(&metachop::Lex),
    /*chopb::prog                    */(&metachop::Lex)
};
int metachop::_tokenNbFuncArray [165] = {
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
    /*chopb::primary_expression      */1,
    /*chopb::prog                    */1
};
int _arityNode_metachop[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                              , 0 , 1 , 1 , 1 , 1 , -1 , 1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , 1 , -1 , -1 , -1 , -1 , -1 , 1 , -1
                              , -1 , -1 , -1 , -1 , 1 , 1 , 3 , 3 , 3 , -1 , -1
                              , -1 , 2 , -1 , -1 , 3 , -1 , 3 , -1 , -1 , -1 , 1
                              , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , -1 , -1 , 2 , 0 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , -1 , 2 , -1 , -1 , 4 , 1 , -1
                              , -1 , 1 , 1 , 0 , -1 , 1 , -1 , -1 , -1 , -1 , -1
                              , -1 , 1 , 1 , 1 , 2 , -1 , 4 , 3 , -1 , 1 , 2
                              , 2 , 2 , -1 , -1 , 2 , 1 , -1 , -1 , 2 , -1 , -1
                              , -1 , -1 , 4 , 2 , 2 , 1 , -1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 2 , -1
                              , 2 , 2 , 1 , -1 , 1 , 1 , 1 , -1 , 1 , 2 , 2
                              , -1 , 1 , 2 , -1 , 2 , 2 , 2 , 3 , 0 , 2 , 2
                              , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 2
                              , 2 , 2 , 0 , 2 , -1 , 1 , 1 , -1 , 3 , 2 , 1
                              , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 3 , 3 , -1 , -1
                              , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                              , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                              , 1 , 1 , 1 , 1 , -1 , -1 , 2 , 2 , 2 , 2 , 1
                              , -1 , 2 , 1 , 1 , -1 , 2 , 0 , 2 , 9 , -1 , 2
                              , 1 , 2 , 1 , -1 , 2 , -1 , 2 , 0 , 1 , 1 , 0
                              , 2 , 1 , -1 , 2 , 2 , 2 , 2 , 1 , 2 , 0 , -1
                              , -1 , -1 , -1 , -1 , -1 , -1 , 2 , 2 , 2 , 2 , 2
                              , 2 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 2
                              , 2 , 2 , 2 , 2 , 2 , 1 , 0 , 0 , 1 , 1 , -1
                              , 1 , 2 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                              , -1 , -1 , 1 , -1 , -1 , -1 , -1 , -1 , 1 , -1 , -1
                              , -1 , -1 , 3 , -1 , 1 , -1 , 1 , -1 , -1 , 2 , 2
                              , 1 , 0 , 1 , 2 , 0 , 2 , 1 , -1 , 0 , 0 , 0
                              , 1 , 1 , 1 };

    
STRINGELEM * listConst_metachop;
PPTREE bri_parse_entry_metachop(int error_free) {
return metachop() . parse_entry (error_free);
}

int metachop::init = 0 ;

void metachop::InitConst()
{
    if (!metachop::init) {
        metachop::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("metachop::NODE_LIST", 377);
        AddConstVal("metachop::NODE_TREE", 376);
        AddConstVal("metachop::SPACE", 375);
        AddConstVal("metachop::SEP_OMIT", 374);
        AddConstVal("metachop::SEP_BEFORE", 373);
        AddConstVal("metachop::SEP_AFTER", 372);
        AddConstVal("metachop::AFERAFER", 371);
        AddConstVal("metachop::ALINEA", 370);
        AddConstVal("metachop::CHOP_DEF", 369);
        AddConstVal("metachop::NIL", 368);
        AddConstVal("metachop::IN_LANG", 367);
        AddConstVal("metachop::NEXT", 366);
        AddConstVal("metachop::DEF_IDENT", 365);
        AddConstVal("metachop::BOX", 364);
        AddConstVal("metachop::EXPO", 363);
        AddConstVal("metachop::EXPO_AFF", 362);
        AddConstVal("metachop::ETOIETOIEGAL", 361);
        AddConstVal("metachop::IN", 360);
        AddConstVal("metachop::PARSE", 359);
        AddConstVal("metachop::NEXTL", 358);
        AddConstVal("metachop::VALUE", 357);
        AddConstVal("metachop::INFESUPE", 356);
        AddConstVal("metachop::FOREACH", 355);
        AddConstVal("metachop::INFESEPOSUPE", 354);
        AddConstVal("metachop::INFESEPBSUPE", 353);
        AddConstVal("metachop::INFESEPASUPE", 352);
        AddConstVal("metachop::AOUVAOUV", 351);
        AddConstVal("metachop::ARRO", 350);
        AddConstVal("metachop::NL_BEG", 349);
        AddConstVal("metachop::TAB_BEG", 348);
        AddConstVal("metachop::SPACE_BEG", 347);
        AddConstVal("metachop::MAKETREE_SUP", 346);
        AddConstVal("metachop::MAKETREE_INF", 345);
        AddConstVal("metachop::PARSE_ELEM", 344);
        AddConstVal("metachop::SIMP_ETOI", 343);
        AddConstVal("metachop::ETOI_ETOI", 342);
        AddConstVal("metachop::BDECR", 341);
        AddConstVal("metachop::BINCR", 340);
        AddConstVal("metachop::ADDR", 339);
        AddConstVal("metachop::NOT", 338);
        AddConstVal("metachop::LNEG", 337);
        AddConstVal("metachop::POS", 336);
        AddConstVal("metachop::NEG", 335);
        AddConstVal("metachop::PARAM_TYPE", 334);
        AddConstVal("metachop::STRING_LIST", 333);
        AddConstVal("metachop::LABEL", 332);
        AddConstVal("metachop::THROW_ANSI", 331);
        AddConstVal("metachop::ELSE", 330);
        AddConstVal("metachop::TUNSIGNED", 329);
        AddConstVal("metachop::TSIGNED", 328);
        AddConstVal("metachop::TFLOAT", 327);
        AddConstVal("metachop::TDOUBLE", 326);
        AddConstVal("metachop::TIDENT", 325);
        AddConstVal("metachop::RSHI", 324);
        AddConstVal("metachop::LSHI", 323);
        AddConstVal("metachop::LT", 322);
        AddConstVal("metachop::GT", 321);
        AddConstVal("metachop::GEQU", 320);
        AddConstVal("metachop::LEQU", 319);
        AddConstVal("metachop::SPACE_ARROW", 318);
        AddConstVal("metachop::TAB_DIRECTIVE", 317);
        AddConstVal("metachop::ENUM_PARAMETERS_UNDER", 316);
        AddConstVal("metachop::ENUM_VERT_VALUE", 315);
        AddConstVal("metachop::PROTECT_MEMB", 314);
        AddConstVal("metachop::LANGUAGE", 313);
        AddConstVal("metachop::EXP", 312);
        AddConstVal("metachop::ADECR", 311);
        AddConstVal("metachop::AINCR", 310);
        AddConstVal("metachop::ARROW", 309);
        AddConstVal("metachop::REF", 308);
        AddConstVal("metachop::EXP_ARRAY", 307);
        AddConstVal("metachop::EXP_LIST", 306);
        AddConstVal("metachop::ARROW_MEMB", 305);
        AddConstVal("metachop::DOT_MEMB", 304);
        AddConstVal("metachop::POINETOI", 303);
        AddConstVal("metachop::TIRESUPEETOI", 302);
        AddConstVal("metachop::TIRESUPE", 301);
        AddConstVal("metachop::SUPESUPE", 300);
        AddConstVal("metachop::INFEINFE", 299);
        AddConstVal("metachop::SUPEEGAL", 298);
        AddConstVal("metachop::INFEEGAL", 297);
        AddConstVal("metachop::NONE", 296);
        AddConstVal("metachop::NEW_DECLARATOR", 295);
        AddConstVal("metachop::USING_NAMESPACE", 294);
        AddConstVal("metachop::NAMESPACE_ALIAS", 293);
        AddConstVal("metachop::REM", 292);
        AddConstVal("metachop::DIV", 291);
        AddConstVal("metachop::MUL", 290);
        AddConstVal("metachop::POURC", 289);
        AddConstVal("metachop::MESSAGE_MAP", 288);
        AddConstVal("metachop::MACRO", 287);
        AddConstVal("metachop::TCHAR", 286);
        AddConstVal("metachop::TSHORT", 285);
        AddConstVal("metachop::TLONG", 284);
        AddConstVal("metachop::TINT", 283);
        AddConstVal("metachop::OR", 282);
        AddConstVal("metachop::VBARVBAR", 281);
        AddConstVal("metachop::AND", 280);
        AddConstVal("metachop::ETCOETCO", 279);
        AddConstVal("metachop::COMPOUND_EXT", 278);
        AddConstVal("metachop::EXTERNAL", 277);
        AddConstVal("metachop::INITIALIZER", 276);
        AddConstVal("metachop::LOR", 275);
        AddConstVal("metachop::VBAR", 274);
        AddConstVal("metachop::FUNC", 273);
        AddConstVal("metachop::ALL_OF", 272);
        AddConstVal("metachop::STAT_VOID", 271);
        AddConstVal("metachop::TEMPLATE_DECL", 270);
        AddConstVal("metachop::SUPE", 269);
        AddConstVal("metachop::CLASS_PARAM", 268);
        AddConstVal("metachop::EXP_SEQ", 267);
        AddConstVal("metachop::LXOR", 266);
        AddConstVal("metachop::CHAP", 265);
        AddConstVal("metachop::EXCEPTION_LIST", 264);
        AddConstVal("metachop::EXCEPTION_ANSI", 263);
        AddConstVal("metachop::EXCEPTION", 262);
        AddConstVal("metachop::NEQU", 261);
        AddConstVal("metachop::EQU", 260);
        AddConstVal("metachop::EXCLEGAL", 259);
        AddConstVal("metachop::EGALEGAL", 258);
        AddConstVal("metachop::PRAGMA", 257);
        AddConstVal("metachop::PARAMETERS", 256);
        AddConstVal("metachop::FUNC_HEADER", 255);
        AddConstVal("metachop::INDENT_FUNCTION_TYPE", 254);
        AddConstVal("metachop::COMMENT_PLUS", 253);
        AddConstVal("metachop::COMMENT_END", 252);
        AddConstVal("metachop::COMMENT_MIDDLE", 251);
        AddConstVal("metachop::COMMENT_START", 250);
        AddConstVal("metachop::MARGIN_VALUE", 249);
        AddConstVal("metachop::BRACE_ALIGN_VALUE", 248);
        AddConstVal("metachop::DECL_ALIGN", 247);
        AddConstVal("metachop::ASSIGN_ALIGN", 246);
        AddConstVal("metachop::SINGLE_SWITCH_INDENT_VALUE", 245);
        AddConstVal("metachop::SIMPLIFY_VALUE", 244);
        AddConstVal("metachop::SIMPLIFY", 243);
        AddConstVal("metachop::MODE_VALUE", 242);
        AddConstVal("metachop::TAB_VALUE", 241);
        AddConstVal("metachop::CONFIG", 240);
        AddConstVal("metachop::NOT_MANAGED", 239);
        AddConstVal("metachop::NO_PRETTY", 238);
        AddConstVal("metachop::ALINE", 237);
        AddConstVal("metachop::ERROR", 236);
        AddConstVal("metachop::UNDEF", 235);
        AddConstVal("metachop::TYP_AFF_CALL", 234);
        AddConstVal("metachop::MEMBER_DECLARATOR", 233);
        AddConstVal("metachop::TYP_ARRAY", 232);
        AddConstVal("metachop::CFER", 231);
        AddConstVal("metachop::COUV", 230);
        AddConstVal("metachop::FOR_DECLARATION", 229);
        AddConstVal("metachop::DECLARATION", 228);
        AddConstVal("metachop::CTOR_INITIALIZER", 227);
        AddConstVal("metachop::CTOR_INIT", 226);
        AddConstVal("metachop::LONGLONG", 225);
        AddConstVal("metachop::IUNLONGLONG", 224);
        AddConstVal("metachop::IUNLONG", 223);
        AddConstVal("metachop::IUN", 222);
        AddConstVal("metachop::ILONGLONG", 221);
        AddConstVal("metachop::ILONG", 220);
        AddConstVal("metachop::RANGE_MODIFIER", 219);
        AddConstVal("metachop::COND_AFF", 218);
        AddConstVal("metachop::INTE", 217);
        AddConstVal("metachop::COMPOUND", 216);
        AddConstVal("metachop::CLASS_DECL", 215);
        AddConstVal("metachop::AFER", 214);
        AddConstVal("metachop::CATCH_ANSI", 213);
        AddConstVal("metachop::EXCEPT_ANSI_ALL", 212);
        AddConstVal("metachop::CAST", 211);
        AddConstVal("metachop::TYP_BIT", 210);
        AddConstVal("metachop::PROTECT", 209);
        AddConstVal("metachop::BASE_LIST", 208);
        AddConstVal("metachop::XOR_AFF", 207);
        AddConstVal("metachop::OR_AFF", 206);
        AddConstVal("metachop::AND_AFF", 205);
        AddConstVal("metachop::RSH_AFF", 204);
        AddConstVal("metachop::LSH_AFF", 203);
        AddConstVal("metachop::MIN_AFF", 202);
        AddConstVal("metachop::PLU_AFF", 201);
        AddConstVal("metachop::REM_AFF", 200);
        AddConstVal("metachop::DIV_AFF", 199);
        AddConstVal("metachop::MUL_AFF", 198);
        AddConstVal("metachop::AFF", 197);
        AddConstVal("metachop::VAR_LIST", 196);
        AddConstVal("metachop::TYP_LIST", 195);
        AddConstVal("metachop::TYP_AFF", 194);
        AddConstVal("metachop::ABST_DECLARATOR", 193);
        AddConstVal("metachop::DECLARATOR", 192);
        AddConstVal("metachop::POINPOINPOIN", 191);
        AddConstVal("metachop::LAND", 190);
        AddConstVal("metachop::INIT_NEW", 189);
        AddConstVal("metachop::VIRG", 188);
        AddConstVal("metachop::QUALIFIED", 187);
        AddConstVal("metachop::MINUS", 186);
        AddConstVal("metachop::TYP", 185);
        AddConstVal("metachop::PFER", 184);
        AddConstVal("metachop::DESTRUCT", 183);
        AddConstVal("metachop::TYP_REF", 182);
        AddConstVal("metachop::TYP_ADDR", 181);
        AddConstVal("metachop::INFE", 180);
        AddConstVal("metachop::USING", 179);
        AddConstVal("metachop::NAMESPACE", 178);
        AddConstVal("metachop::TYPEDEF", 177);
        AddConstVal("metachop::TEMPLATE", 176);
        AddConstVal("metachop::CATCH", 175);
        AddConstVal("metachop::DPOI", 174);
        AddConstVal("metachop::PUBLIC", 173);
        AddConstVal("metachop::PROTECTED", 172);
        AddConstVal("metachop::PRIVATE", 171);
        AddConstVal("metachop::CHAPEGAL", 170);
        AddConstVal("metachop::VBAREGAL", 169);
        AddConstVal("metachop::ETCOEGAL", 168);
        AddConstVal("metachop::SUPESUPEEGAL", 167);
        AddConstVal("metachop::INFEINFEEGAL", 166);
        AddConstVal("metachop::TIREEGAL", 165);
        AddConstVal("metachop::PLUSEGAL", 164);
        AddConstVal("metachop::POURCEGAL", 163);
        AddConstVal("metachop::ETOIEGAL", 162);
        AddConstVal("metachop::EGAL", 161);
        AddConstVal("metachop::ASM", 160);
        AddConstVal("metachop::VA_ARG", 159);
        AddConstVal("metachop::DELETE", 158);
        AddConstVal("metachop::NEW", 157);
        AddConstVal("metachop::SIZEOF", 156);
        AddConstVal("metachop::TIRETIRE", 155);
        AddConstVal("metachop::PLUSPLUS", 154);
        AddConstVal("metachop::EXCL", 153);
        AddConstVal("metachop::PLUS", 152);
        AddConstVal("metachop::TIRE", 151);
        AddConstVal("metachop::POUV", 150);
        AddConstVal("metachop::DEFAULT", 149);
        AddConstVal("metachop::CASE", 148);
        AddConstVal("metachop::TRY", 147);
        AddConstVal("metachop::THROW", 146);
        AddConstVal("metachop::FORALLSONS", 145);
        AddConstVal("metachop::WHILE", 144);
        AddConstVal("metachop::SWITCH", 143);
        AddConstVal("metachop::RETURN", 142);
        AddConstVal("metachop::PVIR", 141);
        AddConstVal("metachop::IF", 140);
        AddConstVal("metachop::FOR", 139);
        AddConstVal("metachop::AOUV", 138);
        AddConstVal("metachop::DO", 137);
        AddConstVal("metachop::CONTINUE", 136);
        AddConstVal("metachop::BREAK", 135);
        AddConstVal("metachop::OPERATOR", 134);
        AddConstVal("metachop::TILD", 133);
        AddConstVal("metachop::ETCO", 132);
        AddConstVal("metachop::ETOI", 131);
        AddConstVal("metachop::SHORT", 130);
        AddConstVal("metachop::UNSIGNED", 129);
        AddConstVal("metachop::SIGNED", 128);
        AddConstVal("metachop::LONG", 127);
        AddConstVal("metachop::DPOIDPOI", 126);
        AddConstVal("metachop::VOID", 125);
        AddConstVal("metachop::FLOAT", 124);
        AddConstVal("metachop::CHAR", 123);
        AddConstVal("metachop::INT", 122);
        AddConstVal("metachop::DOUBLE", 121);
        AddConstVal("metachop::TYPENAME", 120);
        AddConstVal("metachop::CLASS", 119);
        AddConstVal("metachop::UNION", 118);
        AddConstVal("metachop::STRUCT", 117);
        AddConstVal("metachop::ENUM", 116);
        AddConstVal("metachop::CONST", 115);
        AddConstVal("metachop::FRIEND", 114);
        AddConstVal("metachop::VIRTUAL", 113);
        AddConstVal("metachop::INLINE", 112);
        AddConstVal("metachop::VOLATILE", 111);
        AddConstVal("metachop::REGISTER", 110);
        AddConstVal("metachop::EXTERN", 109);
        AddConstVal("metachop::STATIC", 108);
        AddConstVal("metachop::AUTO", 107);
        AddConstVal("metachop::FUNC_SPEC", 106);
        AddConstVal("metachop::TRY_UPPER", 105);
        AddConstVal("metachop::END_CATCH", 104);
        AddConstVal("metachop::END_CATCH_ALL", 103);
        AddConstVal("metachop::AND_CATCH", 102);
        AddConstVal("metachop::CATCH_UPPER", 101);
        AddConstVal("metachop::CATCH_ALL", 100);
        AddConstVal("metachop::END_MESSAGE_MAP", 99);
        AddConstVal("metachop::BEGIN_MESSAGE_MAP", 98);
        AddConstVal("metachop::DECLARE_MESSAGE_MAP", 97);
        AddConstVal("metachop::IMPLEMENT_SERIAL", 96);
        AddConstVal("metachop::IMPLEMENT_DYNCREATE", 95);
        AddConstVal("metachop::IMPLEMENT_DYNAMIC", 94);
        AddConstVal("metachop::DECLARE_SERIAL", 93);
        AddConstVal("metachop::DECLARE_DYNAMIC", 92);
        AddConstVal("metachop::PUSH_FUNCTION", 91);
        AddConstVal("metachop::PUSH_ARGUMENT", 90);
        AddConstVal("metachop::UNDEF_CONTENT", 89);
        AddConstVal("metachop::SMALL_PRAGMA_CONTENT", 88);
        AddConstVal("metachop::PRAGMA_CONTENT", 87);
        AddConstVal("metachop::PRAGMA_ENUM_VERT", 86);
        AddConstVal("metachop::PRAGMA_SPACE_ARROW", 85);
        AddConstVal("metachop::PRAGMA_PARAMETERS", 84);
        AddConstVal("metachop::PRAGMA_PARAMETERS_UNDER", 83);
        AddConstVal("metachop::PRAGMA_FUNC_HEADER", 82);
        AddConstVal("metachop::PRAGMA_INDENT_FUNCTION_TYPE", 81);
        AddConstVal("metachop::PRAGMA_COMMENT_PLUS", 80);
        AddConstVal("metachop::PRAGMA_COMMENT_END", 79);
        AddConstVal("metachop::PRAGMA_COMMENT_MIDDLE", 78);
        AddConstVal("metachop::PRAGMA_COMMENT_START", 77);
        AddConstVal("metachop::PRAGMA_MARGIN", 76);
        AddConstVal("metachop::PRAGMA_DECL_ALIGN", 75);
        AddConstVal("metachop::PRAGMA_ASSIGN_ALIGN", 74);
        AddConstVal("metachop::PRAGMA_SINGLE_SWITCH_INDENT", 73);
        AddConstVal("metachop::PRAGMA_SIMPLIFY", 72);
        AddConstVal("metachop::PRAGMA_BRACE_ALIGN", 71);
        AddConstVal("metachop::PRAGMA_MODE", 70);
        AddConstVal("metachop::PRAGMA_RANGE", 69);
        AddConstVal("metachop::PRAGMA_TAB", 68);
        AddConstVal("metachop::PRAGMA_TAB_DIRECTIVE", 67);
        AddConstVal("metachop::PRAGMA_CONFIG", 66);
        AddConstVal("metachop::PRAGMA_NOT_MANAGED", 65);
        AddConstVal("metachop::PRAGMA_MANAGED", 64);
        AddConstVal("metachop::PRAGMA_NOPRETTY", 63);
        AddConstVal("metachop::PRAGMA_PRETTY", 62);
        AddConstVal("metachop::INCLUDE_LOCAL", 61);
        AddConstVal("metachop::INCLUDE_SYS", 60);
        AddConstVal("metachop::END_LINE", 59);
        AddConstVal("metachop::DEFINE_NAME", 58);
        AddConstVal("metachop::DEFINED_NOT_CONTINUED", 57);
        AddConstVal("metachop::DEFINED_CONTINUED", 56);
        AddConstVal("metachop::POINT", 55);
        AddConstVal("metachop::SLAS", 54);
        AddConstVal("metachop::SLASEGAL", 53);
        AddConstVal("metachop::CARRIAGE_RETURN", 52);
        AddConstVal("metachop::LINE_REFERENCE_DIR", 51);
        AddConstVal("metachop::UNDEF_DIR", 50);
        AddConstVal("metachop::DEFINE_DIR", 49);
        AddConstVal("metachop::ERROR_DIR", 48);
        AddConstVal("metachop::PRAGMA_DIR", 47);
        AddConstVal("metachop::LINE_DIR", 46);
        AddConstVal("metachop::ENDIF_DIR", 45);
        AddConstVal("metachop::ELIF_DIR", 44);
        AddConstVal("metachop::ELSE_DIR", 43);
        AddConstVal("metachop::IF_DIR", 42);
        AddConstVal("metachop::IFNDEF_DIR", 41);
        AddConstVal("metachop::IFDEF_DIR", 40);
        AddConstVal("metachop::INCLUDE_DIR", 39);
        AddConstVal("metachop::OCTAL", 38);
        AddConstVal("metachop::UOCTAL", 37);
        AddConstVal("metachop::LOCTAL", 36);
        AddConstVal("metachop::ULOCTAL", 35);
        AddConstVal("metachop::LLOCTAL", 34);
        AddConstVal("metachop::ULLOCTAL", 33);
        AddConstVal("metachop::HEXA", 32);
        AddConstVal("metachop::UHEXA", 31);
        AddConstVal("metachop::LHEXA", 30);
        AddConstVal("metachop::LLHEXA", 29);
        AddConstVal("metachop::ULLHEXA", 28);
        AddConstVal("metachop::ULHEXA", 27);
        AddConstVal("metachop::INTEGER", 26);
        AddConstVal("metachop::FLOATVAL", 25);
        AddConstVal("metachop::UINTEGER", 24);
        AddConstVal("metachop::LINTEGER", 23);
        AddConstVal("metachop::LLINTEGER", 22);
        AddConstVal("metachop::ULLINTEGER", 21);
        AddConstVal("metachop::ULINTEGER", 20);
        AddConstVal("metachop::CHARACT", 19);
        AddConstVal("metachop::STRING", 18);
        AddConstVal("metachop::DQUOTE", 17);
        AddConstVal("metachop::IDENT", 16);
        AddConstVal("metachop::GOTO_REL", 15);
        AddConstVal("metachop::GOTO", 14);
        AddConstVal("metachop::STR", 13);
        AddConstVal("metachop::UNMARK", 12);
        AddConstVal("metachop::MARK", 11);
        AddConstVal("metachop::TAB_VIRT", 10);
        AddConstVal("metachop::TAB", 9);
        AddConstVal("metachop::NEWLINE", 8);
        AddConstVal("metachop::ATTRIBUTS", 7);
        AddConstVal("metachop::PLUS____TIRETIRETIRETIRETIRETIRE____", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_metachop = listConst;
        listConst = inter;
        AddLang("metachop",_arityNode_metachop,listConst_metachop,bri_parse_entry_metachop,377,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
