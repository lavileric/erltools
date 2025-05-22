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
    Value = strcmp(lexEl.string(),"in");
#line 24 "metachop.met"
    if (Value > 0) {
#line 24 "metachop.met"
        Value = strcmp(lexEl.string(),"static");
#line 24 "metachop.met"
        if (Value > 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"unsigned");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"virtual");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"volatile");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"while")) {
#line 24 "metachop.met"
                            return(WHILE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"void")) {
#line 24 "metachop.met"
                            return(VOID) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(VOLATILE);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"va_arg");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"value")) {
#line 24 "metachop.met"
                            return(VALUE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"using")) {
#line 24 "metachop.met"
                            return(USING) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(VA_ARG);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(VIRTUAL);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"try");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"typename");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"union")) {
#line 24 "metachop.met"
                            return(UNION) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"typedef")) {
#line 24 "metachop.met"
                            return(TYPEDEF) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(TYPENAME);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"template");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"throw")) {
#line 24 "metachop.met"
                            return(THROW) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"switch");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
#line 24 "metachop.met"
                        } else if (Value < 0) {
#line 24 "metachop.met"
                            if(!strcmp(lexEl.string(),"struct")) {
#line 24 "metachop.met"
                                return(STRUCT) ;
#line 24 "metachop.met"
                            }
#line 24 "metachop.met"
                        } else 
#line 24 "metachop.met"
                            return(SWITCH);
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(TEMPLATE);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(TRY);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(UNSIGNED);
#line 24 "metachop.met"
        } else if (Value < 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"parse");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"return");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"signed");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"sizeof")) {
#line 24 "metachop.met"
                            return(SIZEOF) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"short")) {
#line 24 "metachop.met"
                            return(SHORT) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(SIGNED);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"public");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"register")) {
#line 24 "metachop.met"
                            return(REGISTER) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"protected");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
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
                    } else 
#line 24 "metachop.met"
                        return(PUBLIC);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(RETURN);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"namespace");
#line 24 "metachop.met"
                if (Value > 0) {
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
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"language");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"long")) {
#line 24 "metachop.met"
                            return(LONG) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"int");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
#line 24 "metachop.met"
                        } else if (Value < 0) {
#line 24 "metachop.met"
                            if(!strcmp(lexEl.string(),"inline")) {
#line 24 "metachop.met"
                                return(INLINE) ;
#line 24 "metachop.met"
                            }
#line 24 "metachop.met"
                        } else 
#line 24 "metachop.met"
                            return(INT);
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(LANGUAGE);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(NAMESPACE);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(PARSE);
#line 24 "metachop.met"
        } else 
#line 24 "metachop.met"
            return(STATIC);
#line 24 "metachop.met"
    } else if (Value < 0) {
#line 24 "metachop.met"
        Value = strcmp(lexEl.string(),"const");
#line 24 "metachop.met"
        if (Value > 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"enum");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"foreach");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"goto");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"if")) {
#line 24 "metachop.met"
                            return(IF) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"friend")) {
#line 24 "metachop.met"
                            return(FRIEND) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(GOTO);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"for");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"forallsons")) {
#line 24 "metachop.met"
                            return(FORALLSONS) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"float");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
#line 24 "metachop.met"
                        } else if (Value < 0) {
#line 24 "metachop.met"
                            if(!strcmp(lexEl.string(),"extern")) {
#line 24 "metachop.met"
                                return(EXTERN) ;
#line 24 "metachop.met"
                            }
#line 24 "metachop.met"
                        } else 
#line 24 "metachop.met"
                            return(FLOAT);
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(FOR);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(FOREACH);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"delete");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"double");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"else")) {
#line 24 "metachop.met"
                            return(ELSE) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"do")) {
#line 24 "metachop.met"
                            return(DO) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(DOUBLE);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"decltype");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"default")) {
#line 24 "metachop.met"
                            return(DEFAULT) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"continue");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
#line 24 "metachop.met"
                        } else if (Value < 0) {
#line 24 "metachop.met"
                            if(!strcmp(lexEl.string(),"constexpr")) {
#line 24 "metachop.met"
                                return(CONSTEXPR) ;
#line 24 "metachop.met"
                            }
#line 24 "metachop.met"
                        } else 
#line 24 "metachop.met"
                            return(CONTINUE);
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(DECLTYPE);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(DELETE);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(ENUM);
#line 24 "metachop.met"
        } else if (Value < 0) {
#line 24 "metachop.met"
            Value = strcmp(lexEl.string(),"_typedef_protectedArray");
#line 24 "metachop.met"
            if (Value > 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"case");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"char");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"class")) {
#line 24 "metachop.met"
                            return(CLASS) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"catch")) {
#line 24 "metachop.met"
                            return(CATCH) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(CHAR);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"auto");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"break")) {
#line 24 "metachop.met"
                            return(BREAK) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"asm");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
#line 24 "metachop.met"
                        } else if (Value < 0) {
#line 24 "metachop.met"
                            if(!strcmp(lexEl.string(),"_typedef_protectedArray_s")) {
#line 24 "metachop.met"
                                return(_TYPEDEF_PROTECTEDARRAY_S) ;
#line 24 "metachop.met"
                            }
#line 24 "metachop.met"
                        } else 
#line 24 "metachop.met"
                            return(ASM);
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(AUTO);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(CASE);
#line 24 "metachop.met"
            } else if (Value < 0) {
#line 24 "metachop.met"
                Value = strcmp(lexEl.string(),"_protectedArray");
#line 24 "metachop.met"
                if (Value > 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"_protectedPointer");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"_protectedPointer_s")) {
#line 24 "metachop.met"
                            return(_PROTECTEDPOINTER_S) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"_protectedArray_s")) {
#line 24 "metachop.met"
                            return(_PROTECTEDARRAY_S) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else 
#line 24 "metachop.met"
                        return(_PROTECTEDPOINTER);
#line 24 "metachop.met"
                } else if (Value < 0) {
#line 24 "metachop.met"
                    Value = strcmp(lexEl.string(),"__asm__");
#line 24 "metachop.met"
                    if (Value > 0) {
#line 24 "metachop.met"
                        if(!strcmp(lexEl.string(),"__attribute__")) {
#line 24 "metachop.met"
                            return(__ATTRIBUTE__) ;
#line 24 "metachop.met"
                        }
#line 24 "metachop.met"
                    } else if (Value < 0) {
#line 24 "metachop.met"
                        Value = strcmp(lexEl.string(),"+____------____");
#line 24 "metachop.met"
                        if (Value > 0) {
#line 24 "metachop.met"
                            return(defaultValue);
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
                        return(__ASM__);
#line 24 "metachop.met"
                } else 
#line 24 "metachop.met"
                    return(_PROTECTEDARRAY);
#line 24 "metachop.met"
            } else 
#line 24 "metachop.met"
                return(_TYPEDEF_PROTECTEDARRAY);
#line 24 "metachop.met"
        } else 
#line 24 "metachop.met"
            return(CONST);
#line 24 "metachop.met"
    } else 
#line 24 "metachop.met"
        return(IN);
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
                        goto _exitDumpToken109;
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken109 :;
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
                _exitDumpToken112 :;
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
                _exitDumpToken118 :;
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
                        _exitDumpToken124 :;
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
                _exitDumpToken121 :;
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
                _exitDumpToken126 :;
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
                        goto _exitDumpToken129;
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
                _exitDumpToken129 :;
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
                _exitDumpToken132 :;
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
                _exitDumpToken135 :;
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
                        _exitDumpToken138 :;
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
                                        goto _exitDumpToken144;
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
                                        goto _exitDumpToken144;
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
                                        goto _exitDumpToken144;
#line 317 "metachop.met"
                                    }
#line 317 "metachop.met"
                                    break;
#line 317 "metachop.met"
                                _exitDumpToken144 :;
#line 317 "metachop.met"
                                default :
#line 317 "metachop.met"
                                    UnputChar(3);
#line 317 "metachop.met"
                                goto _exitDumpToken137;
#line 317 "metachop.met"
                            }
#line 317 "metachop.met"
                        } else {
#line 317 "metachop.met"
                            UnputChar(2);
#line 317 "metachop.met"
                            goto _exitDumpToken137;
#line 317 "metachop.met"
                        }
#line 317 "metachop.met"
                    } else {
#line 317 "metachop.met"
                        UnputChar(1);
#line 317 "metachop.met"
                        goto _exitDumpToken137;
#line 317 "metachop.met"
                    }
#line 317 "metachop.met"
                    break;
#line 317 "metachop.met"
                _exitDumpToken137 :;
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
                        _exitDumpToken149 :;
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
                _exitDumpToken148 :;
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
                _exitDumpToken152 :;
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
                _exitDumpToken155 :;
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
                _exitDumpToken157 :;
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
                _exitDumpToken159 :;
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
                _exitDumpToken164 :;
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
        case '_' :
#line 317 "metachop.met"
            NextChar();
#line 317 "metachop.met"
            if (GetStringS("_extension__",1)) {
#line 317 "metachop.met"
                lexEl.Value = metachop::__EXTENSION__;
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
                goto _exitDumpToken0;
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
            if (! (c != EOF)){
#line 377 "metachop.met"
#line 378 "metachop.met"
#line 379 "metachop.met"
                {
#line 379 "metachop.met"
                    firstOnLine = 0 ; 
#line 379 "metachop.met"
                    tokenAhead =1;
#line 379 "metachop.met"
                    lexEl.Value=INTEGER;
#line 379 "metachop.met"
                    PUT_COORD_CALL;
#line 379 "metachop.met"
                    return(1);
#line 379 "metachop.met"
                }
#line 379 "metachop.met"
#line 379 "metachop.met"
#line 379 "metachop.met"
            }
#line 379 "metachop.met"
#line 381 "metachop.met"
            switch (c) {
#line 381 "metachop.met"
#line 382 "metachop.met"
                case 'l' :
#line 382 "metachop.met"
                case 'L' :
#line 382 "metachop.met"
                    NextChar();
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
                                lexEl.Value=ULINTEGER;
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
                        case 'L' :
#line 385 "metachop.met"
                        case 'l' :
#line 385 "metachop.met"
                            NextChar();
#line 385 "metachop.met"
#line 386 "metachop.met"
#line 387 "metachop.met"
                            switch (c) {
#line 387 "metachop.met"
#line 388 "metachop.met"
                                case 'u' :
#line 388 "metachop.met"
                                case 'U' :
#line 388 "metachop.met"
                                    NextChar();
#line 388 "metachop.met"
#line 388 "metachop.met"
                                    {
#line 388 "metachop.met"
                                        firstOnLine = 0 ; 
#line 388 "metachop.met"
                                        tokenAhead =1;
#line 388 "metachop.met"
                                        lexEl.Value=ULLINTEGER;
#line 388 "metachop.met"
                                        PUT_COORD_CALL;
#line 388 "metachop.met"
                                        return(1);
#line 388 "metachop.met"
                                    }
#line 388 "metachop.met"
                                    break ;
#line 388 "metachop.met"
#line 389 "metachop.met"
                                default : 
#line 389 "metachop.met"
                                     if (c!= EOF) {
#line 389 "metachop.met"
#line 389 "metachop.met"
                                        {
#line 389 "metachop.met"
                                            firstOnLine = 0 ; 
#line 389 "metachop.met"
                                            tokenAhead =1;
#line 389 "metachop.met"
                                            lexEl.Value=LLINTEGER;
#line 389 "metachop.met"
                                            PUT_COORD_CALL;
#line 389 "metachop.met"
                                            return(1);
#line 389 "metachop.met"
                                        }
#line 389 "metachop.met"
                                    }
#line 389 "metachop.met"
                                    break ;
#line 389 "metachop.met"
                            }
#line 389 "metachop.met"
#line 389 "metachop.met"
                            break ;
#line 389 "metachop.met"
#line 392 "metachop.met"
                        default : 
#line 392 "metachop.met"
                             if (c!= EOF) {
#line 392 "metachop.met"
#line 392 "metachop.met"
                                {
#line 392 "metachop.met"
                                    firstOnLine = 0 ; 
#line 392 "metachop.met"
                                    tokenAhead =1;
#line 392 "metachop.met"
                                    lexEl.Value=LINTEGER;
#line 392 "metachop.met"
                                    PUT_COORD_CALL;
#line 392 "metachop.met"
                                    return(1);
#line 392 "metachop.met"
                                }
#line 392 "metachop.met"
                            }
#line 392 "metachop.met"
                            break ;
#line 392 "metachop.met"
                    }
#line 392 "metachop.met"
                    break ;
#line 392 "metachop.met"
#line 394 "metachop.met"
                case 'u' :
#line 394 "metachop.met"
                case 'U' :
#line 394 "metachop.met"
                    NextChar();
#line 394 "metachop.met"
#line 395 "metachop.met"
                    switch (c) {
#line 395 "metachop.met"
#line 396 "metachop.met"
                        case 'l' :
#line 396 "metachop.met"
                        case 'L' :
#line 396 "metachop.met"
                            NextChar();
#line 396 "metachop.met"
#line 397 "metachop.met"
#line 398 "metachop.met"
                            switch (c) {
#line 398 "metachop.met"
#line 399 "metachop.met"
                                case 'L' :
#line 399 "metachop.met"
                                case 'l' :
#line 399 "metachop.met"
                                    NextChar();
#line 399 "metachop.met"
#line 399 "metachop.met"
                                    {
#line 399 "metachop.met"
                                        firstOnLine = 0 ; 
#line 399 "metachop.met"
                                        tokenAhead =1;
#line 399 "metachop.met"
                                        lexEl.Value=ULLINTEGER;
#line 399 "metachop.met"
                                        PUT_COORD_CALL;
#line 399 "metachop.met"
                                        return(1);
#line 399 "metachop.met"
                                    }
#line 399 "metachop.met"
                                    break ;
#line 399 "metachop.met"
#line 400 "metachop.met"
                                default : 
#line 400 "metachop.met"
                                     if (c!= EOF) {
#line 400 "metachop.met"
#line 400 "metachop.met"
                                        {
#line 400 "metachop.met"
                                            firstOnLine = 0 ; 
#line 400 "metachop.met"
                                            tokenAhead =1;
#line 400 "metachop.met"
                                            lexEl.Value=ULINTEGER;
#line 400 "metachop.met"
                                            PUT_COORD_CALL;
#line 400 "metachop.met"
                                            return(1);
#line 400 "metachop.met"
                                        }
#line 400 "metachop.met"
                                    }
#line 400 "metachop.met"
                                    break ;
#line 400 "metachop.met"
                            }
#line 400 "metachop.met"
#line 400 "metachop.met"
                            break ;
#line 400 "metachop.met"
#line 403 "metachop.met"
                        default : 
#line 403 "metachop.met"
                             if (c!= EOF) {
#line 403 "metachop.met"
#line 403 "metachop.met"
                                {
#line 403 "metachop.met"
                                    firstOnLine = 0 ; 
#line 403 "metachop.met"
                                    tokenAhead =1;
#line 403 "metachop.met"
                                    lexEl.Value=UINTEGER;
#line 403 "metachop.met"
                                    PUT_COORD_CALL;
#line 403 "metachop.met"
                                    return(1);
#line 403 "metachop.met"
                                }
#line 403 "metachop.met"
                            }
#line 403 "metachop.met"
                            break ;
#line 403 "metachop.met"
                    }
#line 403 "metachop.met"
                    break ;
#line 403 "metachop.met"
#line 405 "metachop.met"
                case 'e' :
#line 405 "metachop.met"
                case 'E' :
#line 405 "metachop.met"
                    NextChar();
#line 405 "metachop.met"
#line 406 "metachop.met"
#line 407 "metachop.met"
                    {
#line 407 "metachop.met"
                        lexEl.AddString("e");
#line 407 "metachop.met"
                    }
#line 407 "metachop.met"
#line 408 "metachop.met"
                    if (((c == '+')||(c == '-'))){
#line 408 "metachop.met"
#line 409 "metachop.met"
                        {
#line 409 "metachop.met"
                            lexEl . AddChar(c);
#line 409 "metachop.met"
                            NextChar();
#line 409 "metachop.met"
                        }
#line 409 "metachop.met"
                    }
#line 409 "metachop.met"
#line 410 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 410 "metachop.met"
#line 411 "metachop.met"
                        {
#line 411 "metachop.met"
                            lexEl . AddChar(c);
#line 411 "metachop.met"
                            NextChar();
#line 411 "metachop.met"
                        }
#line 411 "metachop.met"
                    } 
#line 411 "metachop.met"
#line 412 "metachop.met"
                    switch (c) {
#line 412 "metachop.met"
#line 413 "metachop.met"
                        case 'f' :
#line 413 "metachop.met"
#line 413 "metachop.met"
                            {
#line 413 "metachop.met"
                                lexEl . AddChar(c);
#line 413 "metachop.met"
                                NextChar();
#line 413 "metachop.met"
                            }
#line 413 "metachop.met"
                            break ;
#line 413 "metachop.met"
#line 414 "metachop.met"
                        case 'F' :
#line 414 "metachop.met"
#line 414 "metachop.met"
                            {
#line 414 "metachop.met"
                                lexEl . AddChar(c);
#line 414 "metachop.met"
                                NextChar();
#line 414 "metachop.met"
                            }
#line 414 "metachop.met"
                            break ;
#line 414 "metachop.met"
#line 415 "metachop.met"
                        case 'l' :
#line 415 "metachop.met"
#line 415 "metachop.met"
                            {
#line 415 "metachop.met"
                                lexEl . AddChar(c);
#line 415 "metachop.met"
                                NextChar();
#line 415 "metachop.met"
                            }
#line 415 "metachop.met"
                            break ;
#line 415 "metachop.met"
#line 416 "metachop.met"
                        case 'L' :
#line 416 "metachop.met"
#line 416 "metachop.met"
                            {
#line 416 "metachop.met"
                                lexEl . AddChar(c);
#line 416 "metachop.met"
                                NextChar();
#line 416 "metachop.met"
                            }
#line 416 "metachop.met"
                            break ;
#line 416 "metachop.met"
                    }
#line 416 "metachop.met"
#line 418 "metachop.met"
                    {
#line 418 "metachop.met"
                        firstOnLine = 0 ; 
#line 418 "metachop.met"
                        tokenAhead =1;
#line 418 "metachop.met"
                        lexEl.Value=FLOATVAL;
#line 418 "metachop.met"
                        PUT_COORD_CALL;
#line 418 "metachop.met"
                        return(1);
#line 418 "metachop.met"
                    }
#line 418 "metachop.met"
#line 418 "metachop.met"
                    break ;
#line 418 "metachop.met"
#line 420 "metachop.met"
                case '.' :
#line 420 "metachop.met"
#line 421 "metachop.met"
#line 422 "metachop.met"
                    {
#line 422 "metachop.met"
                        lexEl . AddChar(c);
#line 422 "metachop.met"
                        NextChar();
#line 422 "metachop.met"
                    }
#line 422 "metachop.met"
#line 423 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 423 "metachop.met"
#line 424 "metachop.met"
                        {
#line 424 "metachop.met"
                            lexEl . AddChar(c);
#line 424 "metachop.met"
                            NextChar();
#line 424 "metachop.met"
                        }
#line 424 "metachop.met"
                    } 
#line 424 "metachop.met"
#line 425 "metachop.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 425 "metachop.met"
#line 426 "metachop.met"
#line 427 "metachop.met"
                        {
#line 427 "metachop.met"
                            lexEl.AddString("e");
#line 427 "metachop.met"
                        }
#line 427 "metachop.met"
#line 428 "metachop.met"
                        if (((c == '+')||(c == '-'))){
#line 428 "metachop.met"
#line 429 "metachop.met"
                            {
#line 429 "metachop.met"
                                lexEl . AddChar(c);
#line 429 "metachop.met"
                                NextChar();
#line 429 "metachop.met"
                            }
#line 429 "metachop.met"
                        }
#line 429 "metachop.met"
#line 430 "metachop.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 430 "metachop.met"
#line 431 "metachop.met"
                            {
#line 431 "metachop.met"
                                lexEl . AddChar(c);
#line 431 "metachop.met"
                                NextChar();
#line 431 "metachop.met"
                            }
#line 431 "metachop.met"
                        } 
#line 431 "metachop.met"
#line 431 "metachop.met"
#line 431 "metachop.met"
                    }
#line 431 "metachop.met"
#line 433 "metachop.met"
                    switch (c) {
#line 433 "metachop.met"
#line 434 "metachop.met"
                        case 'f' :
#line 434 "metachop.met"
#line 434 "metachop.met"
                            {
#line 434 "metachop.met"
                                lexEl . AddChar(c);
#line 434 "metachop.met"
                                NextChar();
#line 434 "metachop.met"
                            }
#line 434 "metachop.met"
                            break ;
#line 434 "metachop.met"
#line 435 "metachop.met"
                        case 'F' :
#line 435 "metachop.met"
#line 435 "metachop.met"
                            {
#line 435 "metachop.met"
                                lexEl . AddChar(c);
#line 435 "metachop.met"
                                NextChar();
#line 435 "metachop.met"
                            }
#line 435 "metachop.met"
                            break ;
#line 435 "metachop.met"
#line 436 "metachop.met"
                        case 'l' :
#line 436 "metachop.met"
#line 436 "metachop.met"
                            {
#line 436 "metachop.met"
                                lexEl . AddChar(c);
#line 436 "metachop.met"
                                NextChar();
#line 436 "metachop.met"
                            }
#line 436 "metachop.met"
                            break ;
#line 436 "metachop.met"
#line 437 "metachop.met"
                        case 'L' :
#line 437 "metachop.met"
#line 437 "metachop.met"
                            {
#line 437 "metachop.met"
                                lexEl . AddChar(c);
#line 437 "metachop.met"
                                NextChar();
#line 437 "metachop.met"
                            }
#line 437 "metachop.met"
                            break ;
#line 437 "metachop.met"
                    }
#line 437 "metachop.met"
#line 439 "metachop.met"
                    {
#line 439 "metachop.met"
                        firstOnLine = 0 ; 
#line 439 "metachop.met"
                        tokenAhead =1;
#line 439 "metachop.met"
                        lexEl.Value=FLOATVAL;
#line 439 "metachop.met"
                        PUT_COORD_CALL;
#line 439 "metachop.met"
                        return(1);
#line 439 "metachop.met"
                    }
#line 439 "metachop.met"
#line 439 "metachop.met"
                    break ;
#line 439 "metachop.met"
#line 441 "metachop.met"
                default : 
#line 441 "metachop.met"
                     if (c!= EOF) {
#line 441 "metachop.met"
#line 441 "metachop.met"
                        {
#line 441 "metachop.met"
                            firstOnLine = 0 ; 
#line 441 "metachop.met"
                            tokenAhead =1;
#line 441 "metachop.met"
                            lexEl.Value=INTEGER;
#line 441 "metachop.met"
                            PUT_COORD_CALL;
#line 441 "metachop.met"
                            return(1);
#line 441 "metachop.met"
                        }
#line 441 "metachop.met"
                    }
#line 441 "metachop.met"
                    break ;
#line 441 "metachop.met"
            }
#line 441 "metachop.met"
#line 441 "metachop.met"
            break ;
#line 441 "metachop.met"
#line 444 "metachop.met"
        case '0' :
#line 444 "metachop.met"
            NextChar();
#line 444 "metachop.met"
#line 445 "metachop.met"
#line 446 "metachop.met"
            if (! (c != EOF)){
#line 446 "metachop.met"
#line 447 "metachop.met"
#line 448 "metachop.met"
                {
#line 448 "metachop.met"
                    lexEl.AddString("0");
#line 448 "metachop.met"
                }
#line 448 "metachop.met"
#line 449 "metachop.met"
                {
#line 449 "metachop.met"
                    firstOnLine = 0 ; 
#line 449 "metachop.met"
                    tokenAhead =1;
#line 449 "metachop.met"
                    lexEl.Value=INTEGER;
#line 449 "metachop.met"
                    PUT_COORD_CALL;
#line 449 "metachop.met"
                    return(1);
#line 449 "metachop.met"
                }
#line 449 "metachop.met"
#line 449 "metachop.met"
#line 449 "metachop.met"
            }
#line 449 "metachop.met"
#line 451 "metachop.met"
            switch (c) {
#line 451 "metachop.met"
#line 452 "metachop.met"
                case 'x' :
#line 452 "metachop.met"
                case 'X' :
#line 452 "metachop.met"
                    NextChar();
#line 452 "metachop.met"
#line 453 "metachop.met"
#line 454 "metachop.met"
                    while ((('0' <= c && c <= '9')||('a' <= c && c <= 'f')||('A' <= c && c <= 'F'))) { 
#line 454 "metachop.met"
#line 455 "metachop.met"
                        {
#line 455 "metachop.met"
                            lexEl . AddChar(c);
#line 455 "metachop.met"
                            NextChar();
#line 455 "metachop.met"
                        }
#line 455 "metachop.met"
                    } 
#line 455 "metachop.met"
#line 456 "metachop.met"
                    switch (c) {
#line 456 "metachop.met"
#line 457 "metachop.met"
                        case 'l' :
#line 457 "metachop.met"
                        case 'L' :
#line 457 "metachop.met"
                            NextChar();
#line 457 "metachop.met"
#line 458 "metachop.met"
                            switch (c) {
#line 458 "metachop.met"
#line 459 "metachop.met"
                                case 'u' :
#line 459 "metachop.met"
                                case 'U' :
#line 459 "metachop.met"
                                    NextChar();
#line 459 "metachop.met"
#line 459 "metachop.met"
                                    {
#line 459 "metachop.met"
                                        firstOnLine = 0 ; 
#line 459 "metachop.met"
                                        tokenAhead =1;
#line 459 "metachop.met"
                                        lexEl.Value=ULHEXA;
#line 459 "metachop.met"
                                        PUT_COORD_CALL;
#line 459 "metachop.met"
                                        return(1);
#line 459 "metachop.met"
                                    }
#line 459 "metachop.met"
                                    break ;
#line 459 "metachop.met"
#line 460 "metachop.met"
                                case 'L' :
#line 460 "metachop.met"
                                case 'l' :
#line 460 "metachop.met"
                                    NextChar();
#line 460 "metachop.met"
#line 461 "metachop.met"
#line 462 "metachop.met"
                                    switch (c) {
#line 462 "metachop.met"
#line 463 "metachop.met"
                                        case 'u' :
#line 463 "metachop.met"
                                        case 'U' :
#line 463 "metachop.met"
                                            NextChar();
#line 463 "metachop.met"
#line 463 "metachop.met"
                                            {
#line 463 "metachop.met"
                                                firstOnLine = 0 ; 
#line 463 "metachop.met"
                                                tokenAhead =1;
#line 463 "metachop.met"
                                                lexEl.Value=ULLHEXA;
#line 463 "metachop.met"
                                                PUT_COORD_CALL;
#line 463 "metachop.met"
                                                return(1);
#line 463 "metachop.met"
                                            }
#line 463 "metachop.met"
                                            break ;
#line 463 "metachop.met"
#line 464 "metachop.met"
                                        default : 
#line 464 "metachop.met"
                                             if (c!= EOF) {
#line 464 "metachop.met"
#line 464 "metachop.met"
                                                {
#line 464 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 464 "metachop.met"
                                                    tokenAhead =1;
#line 464 "metachop.met"
                                                    lexEl.Value=LLHEXA;
#line 464 "metachop.met"
                                                    PUT_COORD_CALL;
#line 464 "metachop.met"
                                                    return(1);
#line 464 "metachop.met"
                                                }
#line 464 "metachop.met"
                                            }
#line 464 "metachop.met"
                                            break ;
#line 464 "metachop.met"
                                    }
#line 464 "metachop.met"
#line 464 "metachop.met"
                                    break ;
#line 464 "metachop.met"
#line 467 "metachop.met"
                                default : 
#line 467 "metachop.met"
                                     if (c!= EOF) {
#line 467 "metachop.met"
#line 467 "metachop.met"
                                        {
#line 467 "metachop.met"
                                            firstOnLine = 0 ; 
#line 467 "metachop.met"
                                            tokenAhead =1;
#line 467 "metachop.met"
                                            lexEl.Value=LHEXA;
#line 467 "metachop.met"
                                            PUT_COORD_CALL;
#line 467 "metachop.met"
                                            return(1);
#line 467 "metachop.met"
                                        }
#line 467 "metachop.met"
                                    }
#line 467 "metachop.met"
                                    break ;
#line 467 "metachop.met"
                            }
#line 467 "metachop.met"
                            break ;
#line 467 "metachop.met"
#line 469 "metachop.met"
                        case 'u' :
#line 469 "metachop.met"
                        case 'U' :
#line 469 "metachop.met"
                            NextChar();
#line 469 "metachop.met"
#line 470 "metachop.met"
                            switch (c) {
#line 470 "metachop.met"
#line 471 "metachop.met"
                                case 'l' :
#line 471 "metachop.met"
                                case 'L' :
#line 471 "metachop.met"
                                    NextChar();
#line 471 "metachop.met"
#line 472 "metachop.met"
#line 473 "metachop.met"
                                    switch (c) {
#line 473 "metachop.met"
#line 474 "metachop.met"
                                        case 'L' :
#line 474 "metachop.met"
                                        case 'l' :
#line 474 "metachop.met"
                                            NextChar();
#line 474 "metachop.met"
#line 474 "metachop.met"
                                            {
#line 474 "metachop.met"
                                                firstOnLine = 0 ; 
#line 474 "metachop.met"
                                                tokenAhead =1;
#line 474 "metachop.met"
                                                lexEl.Value=ULLHEXA;
#line 474 "metachop.met"
                                                PUT_COORD_CALL;
#line 474 "metachop.met"
                                                return(1);
#line 474 "metachop.met"
                                            }
#line 474 "metachop.met"
                                            break ;
#line 474 "metachop.met"
#line 475 "metachop.met"
                                        default : 
#line 475 "metachop.met"
                                             if (c!= EOF) {
#line 475 "metachop.met"
#line 475 "metachop.met"
                                                {
#line 475 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 475 "metachop.met"
                                                    tokenAhead =1;
#line 475 "metachop.met"
                                                    lexEl.Value=ULHEXA;
#line 475 "metachop.met"
                                                    PUT_COORD_CALL;
#line 475 "metachop.met"
                                                    return(1);
#line 475 "metachop.met"
                                                }
#line 475 "metachop.met"
                                            }
#line 475 "metachop.met"
                                            break ;
#line 475 "metachop.met"
                                    }
#line 475 "metachop.met"
#line 475 "metachop.met"
                                    break ;
#line 475 "metachop.met"
#line 478 "metachop.met"
                                default : 
#line 478 "metachop.met"
                                     if (c!= EOF) {
#line 478 "metachop.met"
#line 478 "metachop.met"
                                        {
#line 478 "metachop.met"
                                            firstOnLine = 0 ; 
#line 478 "metachop.met"
                                            tokenAhead =1;
#line 478 "metachop.met"
                                            lexEl.Value=UHEXA;
#line 478 "metachop.met"
                                            PUT_COORD_CALL;
#line 478 "metachop.met"
                                            return(1);
#line 478 "metachop.met"
                                        }
#line 478 "metachop.met"
                                    }
#line 478 "metachop.met"
                                    break ;
#line 478 "metachop.met"
                            }
#line 478 "metachop.met"
                            break ;
#line 478 "metachop.met"
#line 480 "metachop.met"
                        default : 
#line 480 "metachop.met"
                             if (c!= EOF) {
#line 480 "metachop.met"
#line 480 "metachop.met"
                                {
#line 480 "metachop.met"
                                    firstOnLine = 0 ; 
#line 480 "metachop.met"
                                    tokenAhead =1;
#line 480 "metachop.met"
                                    lexEl.Value=HEXA;
#line 480 "metachop.met"
                                    PUT_COORD_CALL;
#line 480 "metachop.met"
                                    return(1);
#line 480 "metachop.met"
                                }
#line 480 "metachop.met"
                            }
#line 480 "metachop.met"
                            break ;
#line 480 "metachop.met"
                    }
#line 480 "metachop.met"
#line 480 "metachop.met"
                    break ;
#line 480 "metachop.met"
#line 483 "metachop.met"
                case '0' :
#line 483 "metachop.met"
                case '1' :
#line 483 "metachop.met"
                case '2' :
#line 483 "metachop.met"
                case '3' :
#line 483 "metachop.met"
                case '4' :
#line 483 "metachop.met"
                case '5' :
#line 483 "metachop.met"
                case '6' :
#line 483 "metachop.met"
                case '7' :
#line 483 "metachop.met"
#line 484 "metachop.met"
#line 485 "metachop.met"
                    while ((('0' <= c && c <= '7'))) { 
#line 485 "metachop.met"
#line 486 "metachop.met"
                        {
#line 486 "metachop.met"
                            lexEl . AddChar(c);
#line 486 "metachop.met"
                            NextChar();
#line 486 "metachop.met"
                        }
#line 486 "metachop.met"
                    } 
#line 486 "metachop.met"
#line 487 "metachop.met"
                    switch (c) {
#line 487 "metachop.met"
#line 488 "metachop.met"
                        case 'l' :
#line 488 "metachop.met"
                        case 'L' :
#line 488 "metachop.met"
                            NextChar();
#line 488 "metachop.met"
#line 489 "metachop.met"
                            switch (c) {
#line 489 "metachop.met"
#line 490 "metachop.met"
                                case 'L' :
#line 490 "metachop.met"
                                case 'l' :
#line 490 "metachop.met"
                                    NextChar();
#line 490 "metachop.met"
#line 491 "metachop.met"
#line 492 "metachop.met"
                                    switch (c) {
#line 492 "metachop.met"
#line 493 "metachop.met"
                                        case 'u' :
#line 493 "metachop.met"
                                        case 'U' :
#line 493 "metachop.met"
                                            NextChar();
#line 493 "metachop.met"
#line 493 "metachop.met"
                                            {
#line 493 "metachop.met"
                                                firstOnLine = 0 ; 
#line 493 "metachop.met"
                                                tokenAhead =1;
#line 493 "metachop.met"
                                                lexEl.Value=ULLOCTAL;
#line 493 "metachop.met"
                                                PUT_COORD_CALL;
#line 493 "metachop.met"
                                                return(1);
#line 493 "metachop.met"
                                            }
#line 493 "metachop.met"
                                            break ;
#line 493 "metachop.met"
#line 494 "metachop.met"
                                        default : 
#line 494 "metachop.met"
                                             if (c!= EOF) {
#line 494 "metachop.met"
#line 494 "metachop.met"
                                                {
#line 494 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 494 "metachop.met"
                                                    tokenAhead =1;
#line 494 "metachop.met"
                                                    lexEl.Value=LLOCTAL;
#line 494 "metachop.met"
                                                    PUT_COORD_CALL;
#line 494 "metachop.met"
                                                    return(1);
#line 494 "metachop.met"
                                                }
#line 494 "metachop.met"
                                            }
#line 494 "metachop.met"
                                            break ;
#line 494 "metachop.met"
                                    }
#line 494 "metachop.met"
#line 494 "metachop.met"
                                    break ;
#line 494 "metachop.met"
#line 497 "metachop.met"
                                case 'u' :
#line 497 "metachop.met"
                                case 'U' :
#line 497 "metachop.met"
                                    NextChar();
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
                                    break ;
#line 497 "metachop.met"
#line 498 "metachop.met"
                                default : 
#line 498 "metachop.met"
                                     if (c!= EOF) {
#line 498 "metachop.met"
#line 498 "metachop.met"
                                        {
#line 498 "metachop.met"
                                            firstOnLine = 0 ; 
#line 498 "metachop.met"
                                            tokenAhead =1;
#line 498 "metachop.met"
                                            lexEl.Value=LOCTAL;
#line 498 "metachop.met"
                                            PUT_COORD_CALL;
#line 498 "metachop.met"
                                            return(1);
#line 498 "metachop.met"
                                        }
#line 498 "metachop.met"
                                    }
#line 498 "metachop.met"
                                    break ;
#line 498 "metachop.met"
                            }
#line 498 "metachop.met"
                            break ;
#line 498 "metachop.met"
#line 500 "metachop.met"
                        case 'u' :
#line 500 "metachop.met"
                        case 'U' :
#line 500 "metachop.met"
                            NextChar();
#line 500 "metachop.met"
#line 501 "metachop.met"
                            switch (c) {
#line 501 "metachop.met"
#line 502 "metachop.met"
                                case 'l' :
#line 502 "metachop.met"
                                case 'L' :
#line 502 "metachop.met"
                                    NextChar();
#line 502 "metachop.met"
#line 503 "metachop.met"
#line 504 "metachop.met"
                                    switch (c) {
#line 504 "metachop.met"
#line 505 "metachop.met"
                                        case 'L' :
#line 505 "metachop.met"
                                        case 'l' :
#line 505 "metachop.met"
                                            NextChar();
#line 505 "metachop.met"
#line 505 "metachop.met"
                                            {
#line 505 "metachop.met"
                                                firstOnLine = 0 ; 
#line 505 "metachop.met"
                                                tokenAhead =1;
#line 505 "metachop.met"
                                                lexEl.Value=ULLOCTAL;
#line 505 "metachop.met"
                                                PUT_COORD_CALL;
#line 505 "metachop.met"
                                                return(1);
#line 505 "metachop.met"
                                            }
#line 505 "metachop.met"
                                            break ;
#line 505 "metachop.met"
#line 506 "metachop.met"
                                        default : 
#line 506 "metachop.met"
                                             if (c!= EOF) {
#line 506 "metachop.met"
#line 506 "metachop.met"
                                                {
#line 506 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 506 "metachop.met"
                                                    tokenAhead =1;
#line 506 "metachop.met"
                                                    lexEl.Value=ULOCTAL;
#line 506 "metachop.met"
                                                    PUT_COORD_CALL;
#line 506 "metachop.met"
                                                    return(1);
#line 506 "metachop.met"
                                                }
#line 506 "metachop.met"
                                            }
#line 506 "metachop.met"
                                            break ;
#line 506 "metachop.met"
                                    }
#line 506 "metachop.met"
#line 506 "metachop.met"
                                    break ;
#line 506 "metachop.met"
#line 509 "metachop.met"
                                default : 
#line 509 "metachop.met"
                                     if (c!= EOF) {
#line 509 "metachop.met"
#line 509 "metachop.met"
                                        {
#line 509 "metachop.met"
                                            firstOnLine = 0 ; 
#line 509 "metachop.met"
                                            tokenAhead =1;
#line 509 "metachop.met"
                                            lexEl.Value=UOCTAL;
#line 509 "metachop.met"
                                            PUT_COORD_CALL;
#line 509 "metachop.met"
                                            return(1);
#line 509 "metachop.met"
                                        }
#line 509 "metachop.met"
                                    }
#line 509 "metachop.met"
                                    break ;
#line 509 "metachop.met"
                            }
#line 509 "metachop.met"
                            break ;
#line 509 "metachop.met"
#line 511 "metachop.met"
                        default : 
#line 511 "metachop.met"
                             if (c!= EOF) {
#line 511 "metachop.met"
#line 511 "metachop.met"
                                {
#line 511 "metachop.met"
                                    firstOnLine = 0 ; 
#line 511 "metachop.met"
                                    tokenAhead =1;
#line 511 "metachop.met"
                                    lexEl.Value=OCTAL;
#line 511 "metachop.met"
                                    PUT_COORD_CALL;
#line 511 "metachop.met"
                                    return(1);
#line 511 "metachop.met"
                                }
#line 511 "metachop.met"
                            }
#line 511 "metachop.met"
                            break ;
#line 511 "metachop.met"
                    }
#line 511 "metachop.met"
#line 511 "metachop.met"
                    break ;
#line 511 "metachop.met"
#line 514 "metachop.met"
                case '.' :
#line 514 "metachop.met"
#line 515 "metachop.met"
#line 516 "metachop.met"
                    {
#line 516 "metachop.met"
                        lexEl.AddString("0");
#line 516 "metachop.met"
                    }
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
#line 518 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 518 "metachop.met"
#line 519 "metachop.met"
                        {
#line 519 "metachop.met"
                            lexEl . AddChar(c);
#line 519 "metachop.met"
                            NextChar();
#line 519 "metachop.met"
                        }
#line 519 "metachop.met"
                    } 
#line 519 "metachop.met"
#line 520 "metachop.met"
                    if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 520 "metachop.met"
#line 521 "metachop.met"
#line 522 "metachop.met"
                        {
#line 522 "metachop.met"
                            lexEl.AddString("e");
#line 522 "metachop.met"
                        }
#line 522 "metachop.met"
#line 523 "metachop.met"
                        if (((c == '+')||(c == '-'))){
#line 523 "metachop.met"
#line 524 "metachop.met"
                            {
#line 524 "metachop.met"
                                lexEl . AddChar(c);
#line 524 "metachop.met"
                                NextChar();
#line 524 "metachop.met"
                            }
#line 524 "metachop.met"
                        }
#line 524 "metachop.met"
#line 525 "metachop.met"
                        while ((('0' <= c && c <= '9'))) { 
#line 525 "metachop.met"
#line 526 "metachop.met"
                            {
#line 526 "metachop.met"
                                lexEl . AddChar(c);
#line 526 "metachop.met"
                                NextChar();
#line 526 "metachop.met"
                            }
#line 526 "metachop.met"
                        } 
#line 526 "metachop.met"
#line 526 "metachop.met"
#line 526 "metachop.met"
                    }
#line 526 "metachop.met"
#line 528 "metachop.met"
                    switch (c) {
#line 528 "metachop.met"
#line 529 "metachop.met"
                        case 'f' :
#line 529 "metachop.met"
#line 529 "metachop.met"
                            {
#line 529 "metachop.met"
                                lexEl . AddChar(c);
#line 529 "metachop.met"
                                NextChar();
#line 529 "metachop.met"
                            }
#line 529 "metachop.met"
                            break ;
#line 529 "metachop.met"
#line 530 "metachop.met"
                        case 'F' :
#line 530 "metachop.met"
#line 530 "metachop.met"
                            {
#line 530 "metachop.met"
                                lexEl . AddChar(c);
#line 530 "metachop.met"
                                NextChar();
#line 530 "metachop.met"
                            }
#line 530 "metachop.met"
                            break ;
#line 530 "metachop.met"
#line 531 "metachop.met"
                        case 'l' :
#line 531 "metachop.met"
#line 531 "metachop.met"
                            {
#line 531 "metachop.met"
                                lexEl . AddChar(c);
#line 531 "metachop.met"
                                NextChar();
#line 531 "metachop.met"
                            }
#line 531 "metachop.met"
                            break ;
#line 531 "metachop.met"
#line 532 "metachop.met"
                        case 'L' :
#line 532 "metachop.met"
#line 532 "metachop.met"
                            {
#line 532 "metachop.met"
                                lexEl . AddChar(c);
#line 532 "metachop.met"
                                NextChar();
#line 532 "metachop.met"
                            }
#line 532 "metachop.met"
                            break ;
#line 532 "metachop.met"
                    }
#line 532 "metachop.met"
#line 534 "metachop.met"
                    {
#line 534 "metachop.met"
                        firstOnLine = 0 ; 
#line 534 "metachop.met"
                        tokenAhead =1;
#line 534 "metachop.met"
                        lexEl.Value=FLOATVAL;
#line 534 "metachop.met"
                        PUT_COORD_CALL;
#line 534 "metachop.met"
                        return(1);
#line 534 "metachop.met"
                    }
#line 534 "metachop.met"
#line 534 "metachop.met"
                    break ;
#line 534 "metachop.met"
#line 540 "metachop.met"
                default : 
#line 540 "metachop.met"
                     if (c!= EOF) {
#line 540 "metachop.met"
#line 537 "metachop.met"
#line 538 "metachop.met"
                        if (c != EOF){
#line 538 "metachop.met"
#line 539 "metachop.met"
#line 540 "metachop.met"
                            {
#line 540 "metachop.met"
                                lexEl.AddString("0");
#line 540 "metachop.met"
                            }
#line 540 "metachop.met"
#line 541 "metachop.met"
                            switch (c) {
#line 541 "metachop.met"
#line 542 "metachop.met"
                                case 'l' :
#line 542 "metachop.met"
                                case 'L' :
#line 542 "metachop.met"
                                    NextChar();
#line 542 "metachop.met"
#line 543 "metachop.met"
                                    switch (c) {
#line 543 "metachop.met"
#line 544 "metachop.met"
                                        case 'u' :
#line 544 "metachop.met"
                                        case 'U' :
#line 544 "metachop.met"
                                            NextChar();
#line 544 "metachop.met"
#line 544 "metachop.met"
                                            {
#line 544 "metachop.met"
                                                firstOnLine = 0 ; 
#line 544 "metachop.met"
                                                tokenAhead =1;
#line 544 "metachop.met"
                                                lexEl.Value=ULINTEGER;
#line 544 "metachop.met"
                                                PUT_COORD_CALL;
#line 544 "metachop.met"
                                                return(1);
#line 544 "metachop.met"
                                            }
#line 544 "metachop.met"
                                            break ;
#line 544 "metachop.met"
#line 545 "metachop.met"
                                        default : 
#line 545 "metachop.met"
                                             if (c!= EOF) {
#line 545 "metachop.met"
#line 545 "metachop.met"
                                                {
#line 545 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 545 "metachop.met"
                                                    tokenAhead =1;
#line 545 "metachop.met"
                                                    lexEl.Value=LINTEGER;
#line 545 "metachop.met"
                                                    PUT_COORD_CALL;
#line 545 "metachop.met"
                                                    return(1);
#line 545 "metachop.met"
                                                }
#line 545 "metachop.met"
                                            }
#line 545 "metachop.met"
                                            break ;
#line 545 "metachop.met"
                                    }
#line 545 "metachop.met"
                                    break ;
#line 545 "metachop.met"
#line 547 "metachop.met"
                                case 'u' :
#line 547 "metachop.met"
                                case 'U' :
#line 547 "metachop.met"
                                    NextChar();
#line 547 "metachop.met"
#line 548 "metachop.met"
                                    switch (c) {
#line 548 "metachop.met"
#line 549 "metachop.met"
                                        case 'l' :
#line 549 "metachop.met"
                                        case 'L' :
#line 549 "metachop.met"
                                            NextChar();
#line 549 "metachop.met"
#line 549 "metachop.met"
                                            {
#line 549 "metachop.met"
                                                firstOnLine = 0 ; 
#line 549 "metachop.met"
                                                tokenAhead =1;
#line 549 "metachop.met"
                                                lexEl.Value=ULINTEGER;
#line 549 "metachop.met"
                                                PUT_COORD_CALL;
#line 549 "metachop.met"
                                                return(1);
#line 549 "metachop.met"
                                            }
#line 549 "metachop.met"
                                            break ;
#line 549 "metachop.met"
#line 550 "metachop.met"
                                        default : 
#line 550 "metachop.met"
                                             if (c!= EOF) {
#line 550 "metachop.met"
#line 550 "metachop.met"
                                                {
#line 550 "metachop.met"
                                                    firstOnLine = 0 ; 
#line 550 "metachop.met"
                                                    tokenAhead =1;
#line 550 "metachop.met"
                                                    lexEl.Value=UINTEGER;
#line 550 "metachop.met"
                                                    PUT_COORD_CALL;
#line 550 "metachop.met"
                                                    return(1);
#line 550 "metachop.met"
                                                }
#line 550 "metachop.met"
                                            }
#line 550 "metachop.met"
                                            break ;
#line 550 "metachop.met"
                                    }
#line 550 "metachop.met"
                                    break ;
#line 550 "metachop.met"
#line 552 "metachop.met"
                                default : 
#line 552 "metachop.met"
                                     if (c!= EOF) {
#line 552 "metachop.met"
#line 552 "metachop.met"
                                        {
#line 552 "metachop.met"
                                            firstOnLine = 0 ; 
#line 552 "metachop.met"
                                            tokenAhead =1;
#line 552 "metachop.met"
                                            lexEl.Value=INTEGER;
#line 552 "metachop.met"
                                            PUT_COORD_CALL;
#line 552 "metachop.met"
                                            return(1);
#line 552 "metachop.met"
                                        }
#line 552 "metachop.met"
                                    }
#line 552 "metachop.met"
                                    break ;
#line 552 "metachop.met"
                            }
#line 552 "metachop.met"
#line 552 "metachop.met"
#line 553 "metachop.met"
                        }
#line 553 "metachop.met"
#line 553 "metachop.met"
                    }
#line 553 "metachop.met"
                    break ;
#line 553 "metachop.met"
            }
#line 553 "metachop.met"
#line 553 "metachop.met"
            break ;
#line 553 "metachop.met"
#line 558 "metachop.met"
        case '#' :
#line 558 "metachop.met"
            NextChar();
#line 558 "metachop.met"
#line 559 "metachop.met"
#line 560 "metachop.met"
            while (((c == ' ')||(c == '\t'))) { 
#line 560 "metachop.met"
#line 561 "metachop.met"
                if (!(c != EOF&& NextChar())) ;
#line 561 "metachop.met"
            } 
#line 561 "metachop.met"
#line 562 "metachop.met"
#line 563 "metachop.met"
            if((GetString("include",1)&& NextChar())){
#line 563 "metachop.met"
#line 563 "metachop.met"
                {
#line 563 "metachop.met"
                    firstOnLine = 0 ; 
#line 563 "metachop.met"
                    tokenAhead =1;
#line 563 "metachop.met"
                    lexEl.Value=INCLUDE_DIR;
#line 563 "metachop.met"
                    PUT_COORD_CALL;
#line 563 "metachop.met"
                    return(1);
#line 563 "metachop.met"
                }
#line 563 "metachop.met"
            } else 
#line 563 "metachop.met"
#line 564 "metachop.met"
            if((GetString("ifdef",1)&& NextChar())){
#line 564 "metachop.met"
#line 564 "metachop.met"
                {
#line 564 "metachop.met"
                    firstOnLine = 0 ; 
#line 564 "metachop.met"
                    tokenAhead =1;
#line 564 "metachop.met"
                    lexEl.Value=IFDEF_DIR;
#line 564 "metachop.met"
                    PUT_COORD_CALL;
#line 564 "metachop.met"
                    return(1);
#line 564 "metachop.met"
                }
#line 564 "metachop.met"
            } else 
#line 564 "metachop.met"
#line 565 "metachop.met"
            if((GetString("ifndef",1)&& NextChar())){
#line 565 "metachop.met"
#line 565 "metachop.met"
                {
#line 565 "metachop.met"
                    firstOnLine = 0 ; 
#line 565 "metachop.met"
                    tokenAhead =1;
#line 565 "metachop.met"
                    lexEl.Value=IFNDEF_DIR;
#line 565 "metachop.met"
                    PUT_COORD_CALL;
#line 565 "metachop.met"
                    return(1);
#line 565 "metachop.met"
                }
#line 565 "metachop.met"
            } else 
#line 565 "metachop.met"
#line 566 "metachop.met"
            if((GetString("if",1)&& NextChar())){
#line 566 "metachop.met"
#line 566 "metachop.met"
                {
#line 566 "metachop.met"
                    firstOnLine = 0 ; 
#line 566 "metachop.met"
                    tokenAhead =1;
#line 566 "metachop.met"
                    lexEl.Value=IF_DIR;
#line 566 "metachop.met"
                    PUT_COORD_CALL;
#line 566 "metachop.met"
                    return(1);
#line 566 "metachop.met"
                }
#line 566 "metachop.met"
            } else 
#line 566 "metachop.met"
#line 567 "metachop.met"
            if((GetString("else",1)&& NextChar())){
#line 567 "metachop.met"
#line 567 "metachop.met"
                {
#line 567 "metachop.met"
                    firstOnLine = 0 ; 
#line 567 "metachop.met"
                    tokenAhead =1;
#line 567 "metachop.met"
                    lexEl.Value=ELSE_DIR;
#line 567 "metachop.met"
                    PUT_COORD_CALL;
#line 567 "metachop.met"
                    return(1);
#line 567 "metachop.met"
                }
#line 567 "metachop.met"
            } else 
#line 567 "metachop.met"
#line 568 "metachop.met"
            if((GetString("elif",1)&& NextChar())){
#line 568 "metachop.met"
#line 568 "metachop.met"
                {
#line 568 "metachop.met"
                    firstOnLine = 0 ; 
#line 568 "metachop.met"
                    tokenAhead =1;
#line 568 "metachop.met"
                    lexEl.Value=ELIF_DIR;
#line 568 "metachop.met"
                    PUT_COORD_CALL;
#line 568 "metachop.met"
                    return(1);
#line 568 "metachop.met"
                }
#line 568 "metachop.met"
            } else 
#line 568 "metachop.met"
#line 569 "metachop.met"
            if((GetString("endif",1)&& NextChar())){
#line 569 "metachop.met"
#line 569 "metachop.met"
                {
#line 569 "metachop.met"
                    firstOnLine = 0 ; 
#line 569 "metachop.met"
                    tokenAhead =1;
#line 569 "metachop.met"
                    lexEl.Value=ENDIF_DIR;
#line 569 "metachop.met"
                    PUT_COORD_CALL;
#line 569 "metachop.met"
                    return(1);
#line 569 "metachop.met"
                }
#line 569 "metachop.met"
            } else 
#line 569 "metachop.met"
#line 570 "metachop.met"
            if((GetString("line",1)&& NextChar())){
#line 570 "metachop.met"
#line 570 "metachop.met"
                {
#line 570 "metachop.met"
                    firstOnLine = 0 ; 
#line 570 "metachop.met"
                    tokenAhead =1;
#line 570 "metachop.met"
                    lexEl.Value=LINE_DIR;
#line 570 "metachop.met"
                    PUT_COORD_CALL;
#line 570 "metachop.met"
                    return(1);
#line 570 "metachop.met"
                }
#line 570 "metachop.met"
            } else 
#line 570 "metachop.met"
#line 571 "metachop.met"
            if((GetString("pragma",1)&& NextChar())){
#line 571 "metachop.met"
#line 571 "metachop.met"
                {
#line 571 "metachop.met"
                    firstOnLine = 0 ; 
#line 571 "metachop.met"
                    tokenAhead =1;
#line 571 "metachop.met"
                    lexEl.Value=PRAGMA_DIR;
#line 571 "metachop.met"
                    PUT_COORD_CALL;
#line 571 "metachop.met"
                    return(1);
#line 571 "metachop.met"
                }
#line 571 "metachop.met"
            } else 
#line 571 "metachop.met"
#line 572 "metachop.met"
            if((GetString("error",1)&& NextChar())){
#line 572 "metachop.met"
#line 572 "metachop.met"
                {
#line 572 "metachop.met"
                    firstOnLine = 0 ; 
#line 572 "metachop.met"
                    tokenAhead =1;
#line 572 "metachop.met"
                    lexEl.Value=ERROR_DIR;
#line 572 "metachop.met"
                    PUT_COORD_CALL;
#line 572 "metachop.met"
                    return(1);
#line 572 "metachop.met"
                }
#line 572 "metachop.met"
            } else 
#line 572 "metachop.met"
#line 573 "metachop.met"
            if((GetString("define",1)&& NextChar())){
#line 573 "metachop.met"
#line 573 "metachop.met"
                {
#line 573 "metachop.met"
                    firstOnLine = 0 ; 
#line 573 "metachop.met"
                    tokenAhead =1;
#line 573 "metachop.met"
                    lexEl.Value=DEFINE_DIR;
#line 573 "metachop.met"
                    PUT_COORD_CALL;
#line 573 "metachop.met"
                    return(1);
#line 573 "metachop.met"
                }
#line 573 "metachop.met"
            } else 
#line 573 "metachop.met"
#line 574 "metachop.met"
            if((GetString("undef",1)&& NextChar())){
#line 574 "metachop.met"
#line 574 "metachop.met"
                {
#line 574 "metachop.met"
                    firstOnLine = 0 ; 
#line 574 "metachop.met"
                    tokenAhead =1;
#line 574 "metachop.met"
                    lexEl.Value=UNDEF_DIR;
#line 574 "metachop.met"
                    PUT_COORD_CALL;
#line 574 "metachop.met"
                    return(1);
#line 574 "metachop.met"
                }
#line 574 "metachop.met"
            } else 
#line 574 "metachop.met"
#line 575 "metachop.met"
            if(((('0' <= c && c <= '9')))){
#line 575 "metachop.met"
#line 575 "metachop.met"
                {
#line 575 "metachop.met"
                    firstOnLine = 0 ; 
#line 575 "metachop.met"
                    tokenAhead =1;
#line 575 "metachop.met"
                    lexEl.Value=LINE_REFERENCE_DIR;
#line 575 "metachop.met"
                    PUT_COORD_CALL;
#line 575 "metachop.met"
                    return(1);
#line 575 "metachop.met"
                }
#line 575 "metachop.met"
            } else 
#line 575 "metachop.met"
#line 578 "metachop.met"
            if((c != EOF)){
#line 578 "metachop.met"
#line 577 "metachop.met"
#line 578 "metachop.met"
                {
#line 578 "metachop.met"
                    firstOnLine = 0 ; 
#line 578 "metachop.met"
                    tokenAhead =1;
#line 578 "metachop.met"
                    lexEl.Value=SHARP_VAL;
#line 578 "metachop.met"
                    PUT_COORD_CALL;
#line 578 "metachop.met"
                    return(1);
#line 578 "metachop.met"
                }
#line 578 "metachop.met"
#line 578 "metachop.met"
            } else 
#line 578 "metachop.met"
             ;
#line 578 "metachop.met"
#line 578 "metachop.met"
            break ;
#line 578 "metachop.met"
#line 582 "metachop.met"
        case '\r' :
#line 582 "metachop.met"
        case '\n' :
#line 582 "metachop.met"
            NextChar();
#line 582 "metachop.met"
#line 582 "metachop.met"
            {
#line 582 "metachop.met"
                firstOnLine = 0 ; 
#line 582 "metachop.met"
                tokenAhead =1;
#line 582 "metachop.met"
                lexEl.Value=CARRIAGE_RETURN;
#line 582 "metachop.met"
                firstOnLine = 1 ; 
#line 582 "metachop.met"
                PUT_COORD_CALL;
#line 582 "metachop.met"
                return(1);
#line 582 "metachop.met"
            }
#line 582 "metachop.met"
            break ;
#line 582 "metachop.met"
#line 583 "metachop.met"
        case '/' :
#line 583 "metachop.met"
            NextChar();
#line 583 "metachop.met"
#line 584 "metachop.met"
#line 585 "metachop.met"
            if (((c == '='))){
#line 585 "metachop.met"
#line 586 "metachop.met"
#line 587 "metachop.met"
                if (!(c != EOF&& NextChar())) ;
#line 587 "metachop.met"
#line 588 "metachop.met"
                {
#line 588 "metachop.met"
                    firstOnLine = 0 ; 
#line 588 "metachop.met"
                    tokenAhead =1;
#line 588 "metachop.met"
                    lexEl.Value=SLASEGAL;
#line 588 "metachop.met"
                    PUT_COORD_CALL;
#line 588 "metachop.met"
                    return(1);
#line 588 "metachop.met"
                }
#line 588 "metachop.met"
#line 588 "metachop.met"
#line 588 "metachop.met"
            } else {
#line 588 "metachop.met"
#line 591 "metachop.met"
                {
#line 591 "metachop.met"
                    firstOnLine = 0 ; 
#line 591 "metachop.met"
                    tokenAhead =1;
#line 591 "metachop.met"
                    lexEl.Value=SLAS;
#line 591 "metachop.met"
                    PUT_COORD_CALL;
#line 591 "metachop.met"
                    return(1);
#line 591 "metachop.met"
                }
#line 591 "metachop.met"
            }
#line 591 "metachop.met"
#line 591 "metachop.met"
            break ;
#line 591 "metachop.met"
#line 593 "metachop.met"
        case '.' :
#line 593 "metachop.met"
#line 594 "metachop.met"
#line 595 "metachop.met"
            {
#line 595 "metachop.met"
                lexEl . AddChar(c);
#line 595 "metachop.met"
                NextChar();
#line 595 "metachop.met"
            }
#line 595 "metachop.met"
#line 596 "metachop.met"
            if ((('0' <= c && c <= '9'))){
#line 596 "metachop.met"
#line 597 "metachop.met"
#line 598 "metachop.met"
                while ((('0' <= c && c <= '9'))) { 
#line 598 "metachop.met"
#line 599 "metachop.met"
                    {
#line 599 "metachop.met"
                        lexEl . AddChar(c);
#line 599 "metachop.met"
                        NextChar();
#line 599 "metachop.met"
                    }
#line 599 "metachop.met"
                } 
#line 599 "metachop.met"
#line 600 "metachop.met"
                if (((c == 'e')||(c == 'E'))&& NextChar()){
#line 600 "metachop.met"
#line 601 "metachop.met"
#line 602 "metachop.met"
                    {
#line 602 "metachop.met"
                        lexEl.AddString("e");
#line 602 "metachop.met"
                    }
#line 602 "metachop.met"
#line 603 "metachop.met"
                    if (((c == '+')||(c == '-'))){
#line 603 "metachop.met"
#line 604 "metachop.met"
                        {
#line 604 "metachop.met"
                            lexEl . AddChar(c);
#line 604 "metachop.met"
                            NextChar();
#line 604 "metachop.met"
                        }
#line 604 "metachop.met"
                    }
#line 604 "metachop.met"
#line 605 "metachop.met"
                    while ((('0' <= c && c <= '9'))) { 
#line 605 "metachop.met"
#line 606 "metachop.met"
                        {
#line 606 "metachop.met"
                            lexEl . AddChar(c);
#line 606 "metachop.met"
                            NextChar();
#line 606 "metachop.met"
                        }
#line 606 "metachop.met"
                    } 
#line 606 "metachop.met"
#line 606 "metachop.met"
#line 606 "metachop.met"
                }
#line 606 "metachop.met"
#line 608 "metachop.met"
                switch (c) {
#line 608 "metachop.met"
#line 609 "metachop.met"
                    case 'f' :
#line 609 "metachop.met"
#line 609 "metachop.met"
                        {
#line 609 "metachop.met"
                            lexEl . AddChar(c);
#line 609 "metachop.met"
                            NextChar();
#line 609 "metachop.met"
                        }
#line 609 "metachop.met"
                        break ;
#line 609 "metachop.met"
#line 610 "metachop.met"
                    case 'F' :
#line 610 "metachop.met"
#line 610 "metachop.met"
                        {
#line 610 "metachop.met"
                            lexEl . AddChar(c);
#line 610 "metachop.met"
                            NextChar();
#line 610 "metachop.met"
                        }
#line 610 "metachop.met"
                        break ;
#line 610 "metachop.met"
#line 611 "metachop.met"
                    case 'l' :
#line 611 "metachop.met"
#line 611 "metachop.met"
                        {
#line 611 "metachop.met"
                            lexEl . AddChar(c);
#line 611 "metachop.met"
                            NextChar();
#line 611 "metachop.met"
                        }
#line 611 "metachop.met"
                        break ;
#line 611 "metachop.met"
#line 612 "metachop.met"
                    case 'L' :
#line 612 "metachop.met"
#line 612 "metachop.met"
                        {
#line 612 "metachop.met"
                            lexEl . AddChar(c);
#line 612 "metachop.met"
                            NextChar();
#line 612 "metachop.met"
                        }
#line 612 "metachop.met"
                        break ;
#line 612 "metachop.met"
                }
#line 612 "metachop.met"
#line 614 "metachop.met"
                {
#line 614 "metachop.met"
                    firstOnLine = 0 ; 
#line 614 "metachop.met"
                    tokenAhead =1;
#line 614 "metachop.met"
                    lexEl.Value=FLOATVAL;
#line 614 "metachop.met"
                    PUT_COORD_CALL;
#line 614 "metachop.met"
                    return(1);
#line 614 "metachop.met"
                }
#line 614 "metachop.met"
#line 614 "metachop.met"
#line 614 "metachop.met"
            } else {
#line 614 "metachop.met"
#line 617 "metachop.met"
#line 618 "metachop.met"
                {
#line 618 "metachop.met"
                    firstOnLine = 0 ; 
#line 618 "metachop.met"
                    tokenAhead =1;
#line 618 "metachop.met"
                    lexEl.Value=POINT;
#line 618 "metachop.met"
                    PUT_COORD_CALL;
#line 618 "metachop.met"
                    return(1);
#line 618 "metachop.met"
                }
#line 618 "metachop.met"
#line 618 "metachop.met"
            }
#line 618 "metachop.met"
#line 618 "metachop.met"
            break ;
#line 618 "metachop.met"
    }
#line 618 "metachop.met"
#line 618 "metachop.met"
#line 621 "metachop.met"
    line = oldLine;
#line 621 "metachop.met"
    LEX_EXIT(0,"")
#line 621 "metachop.met"
    lexEl.Value = -1 ;
#line 621 "metachop.met"
    return -1 ; 
#line 621 "metachop.met"
}
#line 621 "metachop.met"

#line 621 "metachop.met"
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 8 -- arg_declarator_base
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 9 -- arg_declarator_base_type
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
-- 10 -- arg_declarator_followed
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 11 -- arg_declarator_type
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
-- 12 -- arg_typ_declarator
    META
    POUV
-- 13 -- arg_typ_list
    ALWAYS
-- 14 -- array_expression_follow
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 15 -- asm_call
    META
    __ASM__
-- 16 -- asm_declaration
    META
    ASM
-- 17 -- assignment_end
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
-- 18 -- assignment_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 19 -- attribute_call
    META
    __ATTRIBUTE__
-- 20 -- base_specifier
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 21 -- base_specifier_elem
    META
    IDENT
    VIRTUAL
    DPOIDPOI
    PRIVATE
    PROTECTED
    PUBLIC
-- 22 -- bit_field_decl
    META
    IDENT
    DPOI
-- 23 -- cast_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 24 -- cast_expression_value
    META
    POUV
-- 25 -- catch_unit
    META
    CATCH_ALL
    CATCH_UPPER
    AND_CATCH
-- 26 -- catch_unit_ansi
    META
    CATCH
-- 27 -- class_declaration
    META
    STRUCT
    UNION
    CLASS
-- 28 -- comment_eater
    ALWAYS
-- 29 -- complete_class_name
    META
    IDENT
    DPOIDPOI
-- 30 -- compound_statement
    META
    AOUV
-- 31 -- conditional_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 32 -- const_or_volatile
    META
    VOLATILE
    CONST
-- 33 -- constan
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
-- 34 -- ctor_initializer
    ALWAYS
-- 35 -- data_decl_exotic
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
-- 36 -- data_decl_sc_decl
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 37 -- data_decl_sc_decl_full
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 38 -- data_decl_sc_decl_short
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 39 -- data_decl_sc_ty_decl
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
-- 40 -- data_decl_sc_ty_decl_full
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
-- 41 -- data_decl_sc_ty_decl_short
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
-- 42 -- data_declaration
    ALWAYS
-- 43 -- data_declaration_for
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
-- 44 -- data_declaration_for_full
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
-- 45 -- data_declaration_for_short
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
-- 46 -- data_declaration_strict
    ALWAYS
-- 47 -- deallocation_expression
    META
    DELETE
-- 48 -- declarator
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 49 -- declarator_follow
    ALWAYS
-- 50 -- declarator_list
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 51 -- declarator_list_init
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 52 -- declarator_value
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 53 -- define_dir
    META
    DEFINE_DIR
-- 54 -- directive
    META
    INCLUDE_DIR
    LINE_DIR
    PRAGMA_DIR
    ERROR_DIR
    DEFINE_DIR
    UNDEF_DIR
    LINE_REFERENCE_DIR
-- 55 -- end_pragma
    META
    PRAGMA_DIR
-- 56 -- end_pragma_managed
    META
    PRAGMA_DIR
-- 57 -- enum_declarator
    META
    ENUM
-- 58 -- enum_val
    META
    IDENT
-- 59 -- equality_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 60 -- exception
    META
    TRY_UPPER
-- 61 -- exception_ansi
    META
    TRY
-- 62 -- exception_list
    META
    THROW
-- 63 -- exclusive_or_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 64 -- expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 65 -- expression_for
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 66 -- ext_all
    ALWAYS
-- 67 -- ext_all_ext
    ALWAYS
-- 68 -- ext_all_no_linkage
    ALWAYS
-- 69 -- ext_data_decl_sc_ty
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
-- 70 -- ext_data_decl_sc_ty_full
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
-- 71 -- ext_data_decl_sc_ty_short
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
-- 72 -- ext_data_decl_simp
    ALWAYS
-- 73 -- ext_data_declaration
    ALWAYS
-- 74 -- ext_decl_dir
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
-- 75 -- ext_decl_if_dir
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 76 -- ext_decl_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 77 -- for_statement
    META
    POUV
-- 78 -- func_declaration
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 79 -- func_declarator
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
    POUV
    ETOI
    ETCO
    TILD
    OPERATOR
-- 80 -- ident_mul
    META
    IDENT
    DPOIDPOI
-- 81 -- include_dir
    META
    INCLUDE_DIR
-- 82 -- inclusive_or_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 83 -- initializer
    ALWAYS
-- 84 -- inline_namespace
    META
    INLINE
-- 85 -- inside_declaration
    ALWAYS
-- 86 -- inside_declaration1
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
-- 87 -- inside_declaration2
    META
    IDENT
    DPOI
-- 88 -- inside_declaration_extension
    ALWAYS
-- 89 -- label_beg
    META
    IDENT
-- 90 -- linkage_specification
    META
    EXTERN
-- 91 -- logical_and_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 92 -- logical_or_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 93 -- long_type
    META
    LONG
-- 94 -- macro
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
-- 95 -- macro_extended
    ALWAYS
-- 96 -- main_entry
    META
    LANGUAGE
-- 97 -- member_declarator
    META
    IDENT
    DPOIDPOI
-- 98 -- message_map
    META
    BEGIN_MESSAGE_MAP
-- 99 -- multiplicative_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 100 -- name_space
    META
    NAMESPACE
    USING
-- 101 -- new_1
    META
    POUV
-- 102 -- new_2
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
-- 103 -- new_declarator
    ALWAYS
-- 104 -- new_type_name
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
-- 105 -- none_statement
    ALWAYS
-- 106 -- operator_function_name
    META
    OPERATOR
-- 107 -- other_config
    META
    PRAGMA_CONTENT
-- 108 -- parameter_list
    META
    POUV
-- 109 -- parameter_list_extended
    META
    POUV
-- 110 -- pm_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 111 -- postfix_expression
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
    TILD
    OPERATOR
    VA_ARG
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 112 -- pretty::bidon
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 113 -- pretty::parse_entry
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 114 -- primary_expression
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
    POUV
    TILD
    OPERATOR
    VA_ARG
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 115 -- program
    ALWAYS
-- 116 -- protect_declare
    META
    PRIVATE
    PROTECTED
    PUBLIC
-- 117 -- protected_array_declaration
    META
    _PROTECTEDARRAY
    _PROTECTEDARRAY_S
    _PROTECTEDPOINTER
    _PROTECTEDPOINTER_S
    _TYPEDEF_PROTECTEDARRAY
    _TYPEDEF_PROTECTEDARRAY_S
-- 118 -- ptr_operator
    META
    IDENT
    DPOIDPOI
    ETOI
    ETCO
-- 119 -- qualified_name
    META
    IDENT
    TILD
-- 120 -- qualified_name_elem
    META
    DPOIDPOI
-- 121 -- quick_prog
    ALWAYS
-- 122 -- quick_prog_elem
    ALWAYS
-- 123 -- range_in_liste
    META
    IDENT
-- 124 -- range_modifier
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
-- 125 -- range_modifier_function
    META
    INLINE
    VIRTUAL
    FRIEND
    CONST
    CONSTEXPR
-- 126 -- range_modifier_ident
    ALWAYS
-- 127 -- range_pragma
    META
    PRAGMA_RANGE
-- 128 -- relational_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 129 -- sc_specifier
    ALWAYS
-- 130 -- shift_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 131 -- short_long_int_char
    META
    INT
    CHAR
    LONG
    SHORT
    SIGNED
    UNSIGNED
-- 132 -- signed_type
    META
    SIGNED
-- 133 -- simple_ident
    META
    IDENT
-- 134 -- simple_type
    META
    IDENT
    AUTO
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
-- 135 -- simple_type_name
    META
    IDENT
    AUTO
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
-- 136 -- sizeof_type
    META
    POUV
-- 137 -- stat_all
    ALWAYS
-- 138 -- stat_dir
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
-- 139 -- stat_dir_switch
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
-- 140 -- stat_if_dir
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 141 -- stat_ifdef_dir
    META
    IFDEF_DIR
    IFNDEF_DIR
-- 142 -- statement
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
-- 143 -- statement_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 144 -- string_list
    META
    STRING
-- 145 -- switch_elem
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
-- 146 -- switch_list
    META
    AOUV
-- 147 -- template_type
    META
    INFE
-- 148 -- type_and_declarator
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
-- 149 -- type_descr
    META
    IDENT
-- 150 -- type_name
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
-- 151 -- type_specifier
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
-- 152 -- type_specifier_without_param
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
-- 153 -- typedef_and_declarator
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
-- 154 -- unary_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 155 -- unsigned_type
    META
    UNSIGNED
-- 156 -- cplus::assignment_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 157 -- cplus::cast_expression_value
    META
    POUV
-- 158 -- cplus::exclusive_or_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 159 -- cplus::expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 160 -- cplus::main_entry
    ALWAYS
-- 161 -- cplus::multiplicative_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 162 -- cplus::postfix_expression
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
    TILD
    OPERATOR
    VA_ARG
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 163 -- cplus::primary_expression
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
    POUV
    TILD
    OPERATOR
    VA_ARG
-- 164 -- cplus::relational_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 165 -- cplus::shift_expression
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 166 -- cplus::statement
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
-- 167 -- old
    ALWAYS
-- 168 -- prog
    META
    LANGUAGE
-- 169 -- take_follow
    META
    INFE
    INFESUPE
-- 170 -- take_follow_list
    ALWAYS
-- 171 -- take_follow_super
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
    ETOI
    ETCO
    TILD
    OPERATOR
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
-- 172 -- chopb::main_entry
    META
    LANGUAGE
-- 173 -- chopb::primary_expression
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
    POUV
    TILD
    OPERATOR
    VA_ARG
    INFE
    POINPOINPOIN
    INFESUPE
    VALUE
    NEXTL
    PARSE
    IN
-- 174 -- chopb::prog
    META
    LANGUAGE
*/

signed char *metachop::_tokenArray [175] = {
    (signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\220\377\377\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\220\377\377\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\220\377\377\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\077\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\200\377\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\020\000\002\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\020\000\002\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\101\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\370\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\340\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\300\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\340\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\300\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\031\000\000\020\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\000\031\000\000\020\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\006\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\374\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\020\000\370\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\020\000\370\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\377\377\377\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\376\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\031\000\000\020\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\000\031\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\100\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\377\377\377\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\370\377\037\000\360\037\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\000\031\000\000\020\000\000\100\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\017\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000"
};
typedef int (metachop::*(DEF_FUNC_TOKEN_ARRAY [175]))() ;
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
    /*arg_declarator_base_type       */(&metachop::Lex),
    /*arg_declarator_followed        */(&metachop::Lex),
    /*arg_declarator_type            */(&metachop::Lex),
    /*arg_typ_declarator             */(&metachop::Lex),
    /*arg_typ_list                   */0,
    /*array_expression_follow        */(&metachop::Lex),
    /*asm_call                       */(&metachop::Lex),
    /*asm_declaration                */(&metachop::Lex),
    /*assignment_end                 */(&metachop::Lex),
    /*assignment_expression          */(&metachop::Lex),
    /*attribute_call                 */(&metachop::Lex),
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
    /*inline_namespace               */(&metachop::Lex),
    /*inside_declaration             */0,
    /*inside_declaration1            */(&metachop::Lex),
    /*inside_declaration2            */(&metachop::Lex),
    /*inside_declaration_extension   */0,
    /*label_beg                      */(&metachop::Lex),
    /*linkage_specification          */(&metachop::Lex),
    /*logical_and_expression         */(&metachop::Lex),
    /*logical_or_expression          */(&metachop::Lex),
    /*long_type                      */(&metachop::Lex),
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
    /*protected_array_declaration    */(&metachop::Lex),
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
    /*short_long_int_char            */(&metachop::Lex),
    /*signed_type                    */(&metachop::Lex),
    /*simple_ident                   */(&metachop::Lex),
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
    /*unsigned_type                  */(&metachop::Lex),
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
int metachop::_tokenNbFuncArray [175] = {
    /*bidon                          */0,
    /*parse_entry                    */0,
    /*abstract_declarator            */0,
    /*additive_expression            */1,
    /*alloc_expression               */1,
    /*allocation_expression          */1,
    /*and_expression                 */1,
    /*arg_declarator                 */1,
    /*arg_declarator_base            */1,
    /*arg_declarator_base_type       */1,
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
    /*protected_array_declaration    */1,
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
    /*take_follow_super              */1,
    /*chopb::main_entry              */1,
    /*chopb::primary_expression      */1,
    /*chopb::prog                    */1
};
int _arityNode_metachop[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
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
                              , -1 , -1 , -1 , -1 , -1 , -1 , -1 , 1 , 1 , 1 , 2
                              , -1 , 4 , 3 , -1 , 1 , 2 , 2 , 2 , -1 , -1 , 2
                              , 1 , -1 , 2 , -1 , -1 , -1 , -1 , 4 , 2 , 2 , -1
                              , 1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , 2 , 3 , 1 , -1 , -1 , -1 , -1
                              , -1 , -1 , -1 , 1 , 1 , 1 , -1 , 1 , 2 , 2 , -1
                              , 1 , 2 , -1 , 2 , 2 , 2 , 4 , 0 , 2 , 1 , 2
                              , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1
                              , 1 , 2 , 2 , 2 , 0 , 2 , -1 , 1 , 1 , -1 , 3
                              , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 3 , 0 , 1 , 3
                              , 3 , -1 , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1
                              , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
                              , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , -1 , -1 , 2
                              , 2 , 2 , 2 , 1 , -1 , 2 , 1 , -1 , 1 , -1 , 2
                              , 2 , 0 , -1 , 1 , 2 , 11 , 0 , -1 , 2 , 1 , 1
                              , 2 , 1 , -1 , 2 , -1 , 2 , 1 , 0 , 0 , 2 , 1
                              , -1 , 2 , 2 , 2 , 2 , 2 , 2 , 0 , -1 , -1 , -1
                              , -1 , -1 , -1 , -1 , 2 , 2 , 2 , 2 , 2 , 2 , 1
                              , 1 , 1 , 1 , 2 , 5 , 4 , 5 , 4 , 1 , 1 , 1
                              , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 0 , 0 , 1 , 1
                              , 1 , 1 , 1 , -1 , 1 , 2 , 1 , 2 , 1 , 1 , 1
                              , 1 , 1 , 1 , 1 , 1 , -1 , -1 , 1 , -1 , -1 , -1
                              , -1 , -1 , 1 , -1 , -1 , -1 , -1 , 3 , -1 , 1 , -1
                              , 1 , -1 , -1 , 2 , 2 , 1 , 0 , 1 , 2 , 0 , 2
                              , 1 , -1 , 0 , 0 , 0 , 1 , 1 , 1 };

    
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
        AddConstVal("metachop::NODE_LIST", 404);
        AddConstVal("metachop::NODE_TREE", 403);
        AddConstVal("metachop::SPACE", 402);
        AddConstVal("metachop::SEP_OMIT", 401);
        AddConstVal("metachop::SEP_BEFORE", 400);
        AddConstVal("metachop::SEP_AFTER", 399);
        AddConstVal("metachop::AFERAFER", 398);
        AddConstVal("metachop::ALINEA", 397);
        AddConstVal("metachop::CHOP_DEF", 396);
        AddConstVal("metachop::NIL", 395);
        AddConstVal("metachop::IN_LANG", 394);
        AddConstVal("metachop::NEXT", 393);
        AddConstVal("metachop::DEF_IDENT", 392);
        AddConstVal("metachop::BOX", 391);
        AddConstVal("metachop::EXPO", 390);
        AddConstVal("metachop::EXPO_AFF", 389);
        AddConstVal("metachop::ETOIETOIEGAL", 388);
        AddConstVal("metachop::IN", 387);
        AddConstVal("metachop::PARSE", 386);
        AddConstVal("metachop::NEXTL", 385);
        AddConstVal("metachop::VALUE", 384);
        AddConstVal("metachop::INFESUPE", 383);
        AddConstVal("metachop::FOREACH", 382);
        AddConstVal("metachop::INFESEPOSUPE", 381);
        AddConstVal("metachop::INFESEPBSUPE", 380);
        AddConstVal("metachop::INFESEPASUPE", 379);
        AddConstVal("metachop::AOUVAOUV", 378);
        AddConstVal("metachop::ARRO", 377);
        AddConstVal("metachop::NL_BEG", 376);
        AddConstVal("metachop::TAB_BEG", 375);
        AddConstVal("metachop::SPACE_BEG", 374);
        AddConstVal("metachop::MAKETREE_SUP", 373);
        AddConstVal("metachop::MAKETREE_INF", 372);
        AddConstVal("metachop::PARSE_ELEM", 371);
        AddConstVal("metachop::SIMP_ETOI", 370);
        AddConstVal("metachop::ETOI_ETOI", 369);
        AddConstVal("metachop::TUNSIGNED", 368);
        AddConstVal("metachop::BDECR", 367);
        AddConstVal("metachop::BINCR", 366);
        AddConstVal("metachop::ADDR", 365);
        AddConstVal("metachop::NOT", 364);
        AddConstVal("metachop::LNEG", 363);
        AddConstVal("metachop::POS", 362);
        AddConstVal("metachop::NEG", 361);
        AddConstVal("metachop::PARAM_TYPE", 360);
        AddConstVal("metachop::STRING_LIST", 359);
        AddConstVal("metachop::LABEL", 358);
        AddConstVal("metachop::THROW_ANSI", 357);
        AddConstVal("metachop::ELSE", 356);
        AddConstVal("metachop::DECL_TYPE", 355);
        AddConstVal("metachop::CLASSNAME", 354);
        AddConstVal("metachop::TIDENT", 353);
        AddConstVal("metachop::TSIGNED", 352);
        AddConstVal("metachop::TSHORT", 351);
        AddConstVal("metachop::TCHAR", 350);
        AddConstVal("metachop::TINT", 349);
        AddConstVal("metachop::RSHI", 348);
        AddConstVal("metachop::LSHI", 347);
        AddConstVal("metachop::LT", 346);
        AddConstVal("metachop::GT", 345);
        AddConstVal("metachop::GEQU", 344);
        AddConstVal("metachop::LEQU", 343);
        AddConstVal("metachop::SPACE_ARROW", 342);
        AddConstVal("metachop::TAB_DIRECTIVE", 341);
        AddConstVal("metachop::ENUM_PARAMETERS_UNDER", 340);
        AddConstVal("metachop::ENUM_VERT_VALUE", 339);
        AddConstVal("metachop::PROTECTED_ARRAY_S_TYPEDEF", 338);
        AddConstVal("metachop::PROTECTED_ARRAY_TYPEDEF", 337);
        AddConstVal("metachop::PROTECTED_ARRAY_S", 336);
        AddConstVal("metachop::PROTECTED_ARRAY", 335);
        AddConstVal("metachop::PROTECT_MEMB", 334);
        AddConstVal("metachop::LANGUAGE", 333);
        AddConstVal("metachop::EXP", 332);
        AddConstVal("metachop::ADECR", 331);
        AddConstVal("metachop::AINCR", 330);
        AddConstVal("metachop::ARROW", 329);
        AddConstVal("metachop::REF", 328);
        AddConstVal("metachop::EXP_BRA", 327);
        AddConstVal("metachop::EXP_LIST", 326);
        AddConstVal("metachop::ARROW_MEMB", 325);
        AddConstVal("metachop::DOT_MEMB", 324);
        AddConstVal("metachop::POINETOI", 323);
        AddConstVal("metachop::TIRESUPEETOI", 322);
        AddConstVal("metachop::TIRESUPE", 321);
        AddConstVal("metachop::SUPESUPE", 320);
        AddConstVal("metachop::INFEINFE", 319);
        AddConstVal("metachop::SUPEEGAL", 318);
        AddConstVal("metachop::INFEEGAL", 317);
        AddConstVal("metachop::NONE", 316);
        AddConstVal("metachop::NEW_DECLARATOR", 315);
        AddConstVal("metachop::USING_NAMESPACE", 314);
        AddConstVal("metachop::NAMESPACE_ALIAS", 313);
        AddConstVal("metachop::REM", 312);
        AddConstVal("metachop::DIV", 311);
        AddConstVal("metachop::MUL", 310);
        AddConstVal("metachop::POURC", 309);
        AddConstVal("metachop::MESSAGE_MAP", 308);
        AddConstVal("metachop::MACRO", 307);
        AddConstVal("metachop::TDOUBLE", 306);
        AddConstVal("metachop::TFLOAT", 305);
        AddConstVal("metachop::TLONG", 304);
        AddConstVal("metachop::OR", 303);
        AddConstVal("metachop::VBARVBAR", 302);
        AddConstVal("metachop::AND", 301);
        AddConstVal("metachop::ETCOETCO", 300);
        AddConstVal("metachop::COMPOUND_EXT", 299);
        AddConstVal("metachop::EXTERNAL", 298);
        AddConstVal("metachop::INLINE_NAMESPACE", 297);
        AddConstVal("metachop::INITIALIZER", 296);
        AddConstVal("metachop::LOR", 295);
        AddConstVal("metachop::VBAR", 294);
        AddConstVal("metachop::DELETE_FUNCTION", 293);
        AddConstVal("metachop::FUNC", 292);
        AddConstVal("metachop::ALL_OF", 291);
        AddConstVal("metachop::EXTENSION", 290);
        AddConstVal("metachop::__EXTENSION__", 289);
        AddConstVal("metachop::STAT_VOID", 288);
        AddConstVal("metachop::TYPEDEF", 287);
        AddConstVal("metachop::TEMPLATE_DECL", 286);
        AddConstVal("metachop::SUPE", 285);
        AddConstVal("metachop::CLASS_PARAM", 284);
        AddConstVal("metachop::TEMPLATE", 283);
        AddConstVal("metachop::EXP_SEQ", 282);
        AddConstVal("metachop::LXOR", 281);
        AddConstVal("metachop::CHAP", 280);
        AddConstVal("metachop::EXCEPTION_LIST", 279);
        AddConstVal("metachop::EXCEPTION_ANSI", 278);
        AddConstVal("metachop::EXCEPTION", 277);
        AddConstVal("metachop::NEQU", 276);
        AddConstVal("metachop::EQU", 275);
        AddConstVal("metachop::EXCLEGAL", 274);
        AddConstVal("metachop::EGALEGAL", 273);
        AddConstVal("metachop::ENUM_CLASS", 272);
        AddConstVal("metachop::PRAGMA", 271);
        AddConstVal("metachop::PARAMETERS", 270);
        AddConstVal("metachop::FUNC_HEADER", 269);
        AddConstVal("metachop::INDENT_FUNCTION_TYPE", 268);
        AddConstVal("metachop::COMMENT_PLUS", 267);
        AddConstVal("metachop::COMMENT_END", 266);
        AddConstVal("metachop::COMMENT_MIDDLE", 265);
        AddConstVal("metachop::COMMENT_START", 264);
        AddConstVal("metachop::MARGIN_VALUE", 263);
        AddConstVal("metachop::BRACE_ALIGN_VALUE", 262);
        AddConstVal("metachop::DECL_ALIGN", 261);
        AddConstVal("metachop::ASSIGN_ALIGN", 260);
        AddConstVal("metachop::SINGLE_SWITCH_INDENT_VALUE", 259);
        AddConstVal("metachop::SIMPLIFY_VALUE", 258);
        AddConstVal("metachop::SIMPLIFY", 257);
        AddConstVal("metachop::MODE_VALUE", 256);
        AddConstVal("metachop::TAB_VALUE", 255);
        AddConstVal("metachop::CONFIG", 254);
        AddConstVal("metachop::NOT_MANAGED", 253);
        AddConstVal("metachop::NO_PRETTY", 252);
        AddConstVal("metachop::ALINE", 251);
        AddConstVal("metachop::ERROR", 250);
        AddConstVal("metachop::UNDEF", 249);
        AddConstVal("metachop::TYP_AFF_BRA", 248);
        AddConstVal("metachop::TYP_AFF_CALL", 247);
        AddConstVal("metachop::MEMBER_DECLARATOR", 246);
        AddConstVal("metachop::TYP_ARRAY", 245);
        AddConstVal("metachop::COUV", 244);
        AddConstVal("metachop::FOR_DECLARATION", 243);
        AddConstVal("metachop::DECLARATION", 242);
        AddConstVal("metachop::CTOR_INITIALIZER", 241);
        AddConstVal("metachop::BRACE_MARKER", 240);
        AddConstVal("metachop::CTOR_INIT", 239);
        AddConstVal("metachop::LONGLONG", 238);
        AddConstVal("metachop::IUNLONGLONG", 237);
        AddConstVal("metachop::IUNLONG", 236);
        AddConstVal("metachop::IUN", 235);
        AddConstVal("metachop::ILONGLONG", 234);
        AddConstVal("metachop::ILONG", 233);
        AddConstVal("metachop::RANGE_MODIFIER", 232);
        AddConstVal("metachop::COND_AFF", 231);
        AddConstVal("metachop::INTE", 230);
        AddConstVal("metachop::COMPOUND", 229);
        AddConstVal("metachop::CLASS_DECL", 228);
        AddConstVal("metachop::AFER", 227);
        AddConstVal("metachop::CATCH_ANSI", 226);
        AddConstVal("metachop::EXCEPT_ANSI_ALL", 225);
        AddConstVal("metachop::CAST", 224);
        AddConstVal("metachop::TYP_BIT", 223);
        AddConstVal("metachop::PROTECT", 222);
        AddConstVal("metachop::BASE_LIST", 221);
        AddConstVal("metachop::ATTRIBUTE_CALL", 220);
        AddConstVal("metachop::XOR_AFF", 219);
        AddConstVal("metachop::OR_AFF", 218);
        AddConstVal("metachop::AND_AFF", 217);
        AddConstVal("metachop::RSH_AFF", 216);
        AddConstVal("metachop::LSH_AFF", 215);
        AddConstVal("metachop::MIN_AFF", 214);
        AddConstVal("metachop::PLU_AFF", 213);
        AddConstVal("metachop::REM_AFF", 212);
        AddConstVal("metachop::DIV_AFF", 211);
        AddConstVal("metachop::MUL_AFF", 210);
        AddConstVal("metachop::AFF", 209);
        AddConstVal("metachop::ASM_CALL", 208);
        AddConstVal("metachop::EXP_ARRAY", 207);
        AddConstVal("metachop::VAR_LIST", 206);
        AddConstVal("metachop::TYP_LIST", 205);
        AddConstVal("metachop::TYP_AFF", 204);
        AddConstVal("metachop::ABST_DECLARATOR", 203);
        AddConstVal("metachop::DECLARATOR", 202);
        AddConstVal("metachop::POINPOINPOIN", 201);
        AddConstVal("metachop::LAND", 200);
        AddConstVal("metachop::INIT_NEW", 199);
        AddConstVal("metachop::VIRG", 198);
        AddConstVal("metachop::QUALIFIED", 197);
        AddConstVal("metachop::MINUS", 196);
        AddConstVal("metachop::TYP", 195);
        AddConstVal("metachop::PFER", 194);
        AddConstVal("metachop::DESTRUCT", 193);
        AddConstVal("metachop::TYP_REF", 192);
        AddConstVal("metachop::TYP_ADDR", 191);
        AddConstVal("metachop::INFE", 190);
        AddConstVal("metachop::_TYPEDEF_PROTECTEDARRAY_S", 189);
        AddConstVal("metachop::_TYPEDEF_PROTECTEDARRAY", 188);
        AddConstVal("metachop::_PROTECTEDPOINTER_S", 187);
        AddConstVal("metachop::_PROTECTEDPOINTER", 186);
        AddConstVal("metachop::_PROTECTEDARRAY_S", 185);
        AddConstVal("metachop::_PROTECTEDARRAY", 184);
        AddConstVal("metachop::USING", 183);
        AddConstVal("metachop::NAMESPACE", 182);
        AddConstVal("metachop::CATCH", 181);
        AddConstVal("metachop::DPOI", 180);
        AddConstVal("metachop::PUBLIC", 179);
        AddConstVal("metachop::PROTECTED", 178);
        AddConstVal("metachop::PRIVATE", 177);
        AddConstVal("metachop::CHAPEGAL", 176);
        AddConstVal("metachop::VBAREGAL", 175);
        AddConstVal("metachop::ETCOEGAL", 174);
        AddConstVal("metachop::SUPESUPEEGAL", 173);
        AddConstVal("metachop::INFEINFEEGAL", 172);
        AddConstVal("metachop::TIREEGAL", 171);
        AddConstVal("metachop::PLUSEGAL", 170);
        AddConstVal("metachop::POURCEGAL", 169);
        AddConstVal("metachop::ETOIEGAL", 168);
        AddConstVal("metachop::EGAL", 167);
        AddConstVal("metachop::ASM", 166);
        AddConstVal("metachop::CFER", 165);
        AddConstVal("metachop::VA_ARG", 164);
        AddConstVal("metachop::DELETE", 163);
        AddConstVal("metachop::NEW", 162);
        AddConstVal("metachop::SIZEOF", 161);
        AddConstVal("metachop::TIRETIRE", 160);
        AddConstVal("metachop::PLUSPLUS", 159);
        AddConstVal("metachop::EXCL", 158);
        AddConstVal("metachop::PLUS", 157);
        AddConstVal("metachop::TIRE", 156);
        AddConstVal("metachop::DEFAULT", 155);
        AddConstVal("metachop::CASE", 154);
        AddConstVal("metachop::TRY", 153);
        AddConstVal("metachop::THROW", 152);
        AddConstVal("metachop::FORALLSONS", 151);
        AddConstVal("metachop::WHILE", 150);
        AddConstVal("metachop::SWITCH", 149);
        AddConstVal("metachop::RETURN", 148);
        AddConstVal("metachop::PVIR", 147);
        AddConstVal("metachop::IF", 146);
        AddConstVal("metachop::FOR", 145);
        AddConstVal("metachop::AOUV", 144);
        AddConstVal("metachop::DO", 143);
        AddConstVal("metachop::CONTINUE", 142);
        AddConstVal("metachop::BREAK", 141);
        AddConstVal("metachop::OPERATOR", 140);
        AddConstVal("metachop::TILD", 139);
        AddConstVal("metachop::ETCO", 138);
        AddConstVal("metachop::ETOI", 137);
        AddConstVal("metachop::POUV", 136);
        AddConstVal("metachop::UNSIGNED", 135);
        AddConstVal("metachop::SIGNED", 134);
        AddConstVal("metachop::SHORT", 133);
        AddConstVal("metachop::LONG", 132);
        AddConstVal("metachop::CHAR", 131);
        AddConstVal("metachop::INT", 130);
        AddConstVal("metachop::DPOIDPOI", 129);
        AddConstVal("metachop::VOID", 128);
        AddConstVal("metachop::FLOAT", 127);
        AddConstVal("metachop::DOUBLE", 126);
        AddConstVal("metachop::DECLTYPE", 125);
        AddConstVal("metachop::TYPENAME", 124);
        AddConstVal("metachop::CLASS", 123);
        AddConstVal("metachop::UNION", 122);
        AddConstVal("metachop::STRUCT", 121);
        AddConstVal("metachop::ENUM", 120);
        AddConstVal("metachop::CONSTEXPR", 119);
        AddConstVal("metachop::CONST", 118);
        AddConstVal("metachop::FRIEND", 117);
        AddConstVal("metachop::VIRTUAL", 116);
        AddConstVal("metachop::INLINE", 115);
        AddConstVal("metachop::__ASM__", 114);
        AddConstVal("metachop::__ATTRIBUTE__", 113);
        AddConstVal("metachop::VOLATILE", 112);
        AddConstVal("metachop::REGISTER", 111);
        AddConstVal("metachop::EXTERN", 110);
        AddConstVal("metachop::STATIC", 109);
        AddConstVal("metachop::AUTO", 108);
        AddConstVal("metachop::FUNC_SPEC", 107);
        AddConstVal("metachop::TRY_UPPER", 106);
        AddConstVal("metachop::END_CATCH", 105);
        AddConstVal("metachop::END_CATCH_ALL", 104);
        AddConstVal("metachop::AND_CATCH", 103);
        AddConstVal("metachop::CATCH_UPPER", 102);
        AddConstVal("metachop::CATCH_ALL", 101);
        AddConstVal("metachop::END_MESSAGE_MAP", 100);
        AddConstVal("metachop::BEGIN_MESSAGE_MAP", 99);
        AddConstVal("metachop::DECLARE_MESSAGE_MAP", 98);
        AddConstVal("metachop::IMPLEMENT_SERIAL", 97);
        AddConstVal("metachop::IMPLEMENT_DYNCREATE", 96);
        AddConstVal("metachop::IMPLEMENT_DYNAMIC", 95);
        AddConstVal("metachop::DECLARE_SERIAL", 94);
        AddConstVal("metachop::DECLARE_DYNAMIC", 93);
        AddConstVal("metachop::PUSH_FUNCTION", 92);
        AddConstVal("metachop::PUSH_ARGUMENT", 91);
        AddConstVal("metachop::UNDEF_CONTENT", 90);
        AddConstVal("metachop::SMALL_PRAGMA_CONTENT", 89);
        AddConstVal("metachop::PRAGMA_CONTENT", 88);
        AddConstVal("metachop::PRAGMA_ENUM_VERT", 87);
        AddConstVal("metachop::PRAGMA_SPACE_ARROW", 86);
        AddConstVal("metachop::PRAGMA_PARAMETERS", 85);
        AddConstVal("metachop::PRAGMA_PARAMETERS_UNDER", 84);
        AddConstVal("metachop::PRAGMA_FUNC_HEADER", 83);
        AddConstVal("metachop::PRAGMA_INDENT_FUNCTION_TYPE", 82);
        AddConstVal("metachop::PRAGMA_COMMENT_PLUS", 81);
        AddConstVal("metachop::PRAGMA_COMMENT_END", 80);
        AddConstVal("metachop::PRAGMA_COMMENT_MIDDLE", 79);
        AddConstVal("metachop::PRAGMA_COMMENT_START", 78);
        AddConstVal("metachop::PRAGMA_MARGIN", 77);
        AddConstVal("metachop::PRAGMA_DECL_ALIGN", 76);
        AddConstVal("metachop::PRAGMA_ASSIGN_ALIGN", 75);
        AddConstVal("metachop::PRAGMA_SINGLE_SWITCH_INDENT", 74);
        AddConstVal("metachop::PRAGMA_SIMPLIFY", 73);
        AddConstVal("metachop::PRAGMA_BRACE_ALIGN", 72);
        AddConstVal("metachop::PRAGMA_MODE", 71);
        AddConstVal("metachop::PRAGMA_RANGE", 70);
        AddConstVal("metachop::PRAGMA_TAB", 69);
        AddConstVal("metachop::PRAGMA_TAB_DIRECTIVE", 68);
        AddConstVal("metachop::PRAGMA_CONFIG", 67);
        AddConstVal("metachop::PRAGMA_NOT_MANAGED", 66);
        AddConstVal("metachop::PRAGMA_MANAGED", 65);
        AddConstVal("metachop::PRAGMA_NOPRETTY", 64);
        AddConstVal("metachop::PRAGMA_PRETTY", 63);
        AddConstVal("metachop::INCLUDE_LOCAL", 62);
        AddConstVal("metachop::INCLUDE_SYS", 61);
        AddConstVal("metachop::END_LINE", 60);
        AddConstVal("metachop::DEFINE_NAME", 59);
        AddConstVal("metachop::DEFINED_NOT_CONTINUED", 58);
        AddConstVal("metachop::DEFINED_CONTINUED", 57);
        AddConstVal("metachop::POINT", 56);
        AddConstVal("metachop::SLAS", 55);
        AddConstVal("metachop::SLASEGAL", 54);
        AddConstVal("metachop::CARRIAGE_RETURN", 53);
        AddConstVal("metachop::SHARP_VAL", 52);
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
        AddConstVal("metachop::FLOATVAL", 26);
        AddConstVal("metachop::UINTEGER", 25);
        AddConstVal("metachop::LINTEGER", 24);
        AddConstVal("metachop::LLINTEGER", 23);
        AddConstVal("metachop::ULLINTEGER", 22);
        AddConstVal("metachop::ULINTEGER", 21);
        AddConstVal("metachop::INTEGER", 20);
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
        AddLang("metachop",_arityNode_metachop,listConst_metachop,bri_parse_entry_metachop,404,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
