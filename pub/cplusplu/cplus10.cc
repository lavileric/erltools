/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

int cplus::SortKeyWord ( int defaultValue )
{
    register int    Value ;
    
    Value = strcmp(lexEl.string(), "int");
    if ( Value > 0 ) {
        Value = strcmp(lexEl.string(), "switch");
        if ( Value > 0 ) {
            Value = strcmp(lexEl.string(), "unsigned");
            if ( Value > 0 ) {
                Value = strcmp(lexEl.string(), "void");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "while");
                    if ( Value > 0 ) {
                        return (defaultValue);
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "volatile") ) {
                            return (VOLATILE);
                        }
                    } else 
                        return (WHILE);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "va_arg");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "virtual") ) {
                            return (VIRTUAL);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "using") ) {
                            return (USING);
                        }
                    } else 
                        return (VA_ARG);
                } else 
                    return (VOID);
            } else if ( Value < 0 ) {
                Value = strcmp(lexEl.string(), "typedef");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "union");
                    if ( Value > 0 ) {
                        return (defaultValue);
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "typename") ) {
                            return (TYPENAME);
                        }
                    } else 
                        return (UNION);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "throw");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "try") ) {
                            return (TRY);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "template") ) {
                            return (TEMPLATE);
                        }
                    } else 
                        return (THROW);
                } else 
                    return (TYPEDEF);
            } else 
                return (UNSIGNED);
        } else if ( Value < 0 ) {
            Value = strcmp(lexEl.string(), "register");
            if ( Value > 0 ) {
                Value = strcmp(lexEl.string(), "sizeof");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "struct");
                    if ( Value > 0 ) {
                        return (defaultValue);
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "static") ) {
                            return (STATIC);
                        }
                    } else 
                        return (STRUCT);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "short");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "signed") ) {
                            return (SIGNED);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "return") ) {
                            return (RETURN);
                        }
                    } else 
                        return (SHORT);
                } else 
                    return (SIZEOF);
            } else if ( Value < 0 ) {
                Value = strcmp(lexEl.string(), "operator");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "protected");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "public") ) {
                            return (PUBLIC);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "private") ) {
                            return (PRIVATE);
                        }
                    } else 
                        return (PROTECTED);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "namespace");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "new") ) {
                            return (NEW);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "long") ) {
                            return (LONG);
                        }
                    } else 
                        return (NAMESPACE);
                } else 
                    return (OPERATOR);
            } else 
                return (REGISTER);
        } else 
            return (SWITCH);
    } else if ( Value < 0 ) {
        Value = strcmp(lexEl.string(), "default");
        if ( Value > 0 ) {
            Value = strcmp(lexEl.string(), "float");
            if ( Value > 0 ) {
                Value = strcmp(lexEl.string(), "goto");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "inline");
                    if ( Value > 0 ) {
                        return (defaultValue);
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "if") ) {
                            return (IF);
                        }
                    } else 
                        return (INLINE);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "forallsons");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "friend") ) {
                            return (FRIEND);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "for") ) {
                            return (FOR);
                        }
                    } else 
                        return (FORALLSONS);
                } else 
                    return (GOTO);
            } else if ( Value < 0 ) {
                Value = strcmp(lexEl.string(), "else");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "extern");
                    if ( Value > 0 ) {
                        return (defaultValue);
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "enum") ) {
                            return (ENUM);
                        }
                    } else 
                        return (EXTERN);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "do");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "double") ) {
                            return (DOUBLE);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "delete") ) {
                            return (DELETE);
                        }
                    } else 
                        return (DO);
                } else 
                    return (ELSE);
            } else 
                return (FLOAT);
        } else if ( Value < 0 ) {
            Value = strcmp(lexEl.string(), "catch");
            if ( Value > 0 ) {
                Value = strcmp(lexEl.string(), "constexpr");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "decltype");
                    if ( Value > 0 ) {
                        return (defaultValue);
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "continue") ) {
                            return (CONTINUE);
                        }
                    } else 
                        return (DECLTYPE);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "class");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "const") ) {
                            return (CONST);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "char") ) {
                            return (CHAR);
                        }
                    } else 
                        return (CLASS);
                } else 
                    return (CONSTEXPR);
            } else if ( Value < 0 ) {
                Value = strcmp(lexEl.string(), "asm");
                if ( Value > 0 ) {
                    Value = strcmp(lexEl.string(), "break");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "case") ) {
                            return (CASE);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "auto") ) {
                            return (AUTO);
                        }
                    } else 
                        return (BREAK);
                } else if ( Value < 0 ) {
                    Value = strcmp(lexEl.string(), "__asm__");
                    if ( Value > 0 ) {
                        if ( !strcmp(lexEl.string(), "__attribute__") ) {
                            return (__ATTRIBUTE__);
                        }
                    } else if ( Value < 0 ) {
                        if ( !strcmp(lexEl.string(), "+____------____") ) {
                            return (PLUS____TIRETIRETIRETIRETIRETIRE____);
                        }
                    } else 
                        return (__ASM__);
                } else 
                    return (ASM);
            } else 
                return (CATCH);
        } else 
            return (DEFAULT);
    } else 
        return (INT);
    return (defaultValue);
}

int cplus::UpSortKeyWord ( int value )
{
    register char   *ptSource = lexEl.string();
    
    for (; *ptSource ; ptSource++ ) 
        *ptSource = toupper(*ptSource);
    return SortKeyWord(value);
}

int cplus::Lex ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 1 ;
        return 1 ;
    }
    if ( !(keepCarriage) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    
    int keepCurrCol = col ;
    
    switch ( c ) {
        case '*' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::ETOIEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken2 : 
                    ;
                default : 
                    lexEl.Value = cplus::ETOI ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '&' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::ETCOEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                case '&' : 
                    NextChar();
                    lexEl.Value = cplus::ETCOETCO ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken4 : 
                    ;
                default : 
                    lexEl.Value = cplus::ETCO ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '~' : 
            NextChar();
            lexEl.Value = cplus::TILD ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '(' : 
            NextChar();
            lexEl.Value = cplus::POUV ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case ')' : 
            NextChar();
            lexEl.Value = cplus::PFER ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '+' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::PLUSEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                case '+' : 
                    NextChar();
                    lexEl.Value = cplus::PLUSPLUS ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken10 : 
                    ;
                default : 
                    lexEl.Value = cplus::PLUS ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '-' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::TIREEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                case '-' : 
                    NextChar();
                    lexEl.Value = cplus::TIRETIRE ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                case '>' : 
                    NextChar();
                    switch ( c ) {
                        case '*' : 
                            NextChar();
                            lexEl.Value = cplus::TIRESUPEETOI ;
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            PUT_COORD_CALL ;
                            return 1 ;
                            break ;
                        _exitDumpToken16 : 
                            ;
                        default : 
                            lexEl.Value = cplus::TIRESUPE ;
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            PUT_COORD_CALL ;
                            return 1 ;
                    }
                    break ;
                _exitDumpToken13 : 
                    ;
                default : 
                    lexEl.Value = cplus::TIRE ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case ':' : 
            NextChar();
            switch ( c ) {
                case ':' : 
                    NextChar();
                    lexEl.Value = cplus::DPOIDPOI ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken18 : 
                    ;
                default : 
                    lexEl.Value = cplus::DPOI ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case ',' : 
            NextChar();
            lexEl.Value = cplus::VIRG ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '.' : 
            NextChar();
            switch ( c ) {
                case '.' : 
                    NextChar();
                    if ( GetStringS(".", 1) ) {
                        lexEl.Value = cplus::POINPOINPOIN ;
                        firstOnLine = 0 ;
                        tokenAhead = 1 ;
                        PUT_COORD_CALL ;
                        return 1 ;
                    } else {
                        UnputChar(1);
                        goto _exitDumpToken21 ;
                    }
                    break ;
                case '*' : 
                    NextChar();
                    lexEl.Value = cplus::POINETOI ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken21 : 
                    ;
                default : 
                    UnputChar(1);
                    goto _exitDumpToken0 ;
            }
            break ;
        case '=' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::EGALEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken24 : 
                    ;
                default : 
                    lexEl.Value = cplus::EGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case ']' : 
            NextChar();
            lexEl.Value = cplus::CFER ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '%' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::POURCEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken27 : 
                    ;
                default : 
                    lexEl.Value = cplus::POURC ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '<' : 
            NextChar();
            switch ( c ) {
                case '<' : 
                    NextChar();
                    switch ( c ) {
                        case '=' : 
                            NextChar();
                            lexEl.Value = cplus::INFEINFEEGAL ;
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            PUT_COORD_CALL ;
                            return 1 ;
                            break ;
                        _exitDumpToken30 : 
                            ;
                        default : 
                            lexEl.Value = cplus::INFEINFE ;
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            PUT_COORD_CALL ;
                            return 1 ;
                    }
                    break ;
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::INFEEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken29 : 
                    ;
                default : 
                    lexEl.Value = cplus::INFE ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '>' : 
            NextChar();
            switch ( c ) {
                case '>' : 
                    NextChar();
                    switch ( c ) {
                        case '=' : 
                            NextChar();
                            lexEl.Value = cplus::SUPESUPEEGAL ;
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            PUT_COORD_CALL ;
                            return 1 ;
                            break ;
                        _exitDumpToken34 : 
                            ;
                        default : 
                            lexEl.Value = cplus::SUPESUPE ;
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            PUT_COORD_CALL ;
                            return 1 ;
                    }
                    break ;
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::SUPEEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken33 : 
                    ;
                default : 
                    lexEl.Value = cplus::SUPE ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '|' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::VBAREGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                case '|' : 
                    NextChar();
                    lexEl.Value = cplus::VBARVBAR ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken37 : 
                    ;
                default : 
                    lexEl.Value = cplus::VBAR ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '^' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::CHAPEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken40 : 
                    ;
                default : 
                    lexEl.Value = cplus::CHAP ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '{' : 
            NextChar();
            lexEl.Value = cplus::AOUV ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '}' : 
            NextChar();
            lexEl.Value = cplus::AFER ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '?' : 
            NextChar();
            lexEl.Value = cplus::INTE ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case ';' : 
            NextChar();
            lexEl.Value = cplus::PVIR ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '[' : 
            NextChar();
            lexEl.Value = cplus::COUV ;
            firstOnLine = 0 ;
            tokenAhead = 1 ;
            PUT_COORD_CALL ;
            return 1 ;
            break ;
        case '!' : 
            NextChar();
            switch ( c ) {
                case '=' : 
                    NextChar();
                    lexEl.Value = cplus::EXCLEGAL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
                    break ;
                _exitDumpToken47 : 
                    ;
                default : 
                    lexEl.Value = cplus::EXCL ;
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    PUT_COORD_CALL ;
                    return 1 ;
            }
            break ;
        case '_' : 
            NextChar();
            if ( GetStringS("_extension__", 1) ) {
                lexEl.Value = cplus::__EXTENSION__ ;
                firstOnLine = 0 ;
                tokenAhead = 1 ;
                PUT_COORD_CALL ;
                return 1 ;
            } else {
                UnputChar(1);
                goto _exitDumpToken0 ;
            }
            break ;
        _exitDumpToken0 : 
            ;
        default : break ;
    }
    col = keepCurrCol ;
    if ( ptStockBuf > -1 ) 
        UnputBuf();
    lexEl.Erase();
    tokenAhead = 0 ;
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    switch ( c ) {
        case 'a' : 
        case 'b' : 
        case 'c' : 
        case 'd' : 
        case 'e' : 
        case 'f' : 
        case 'g' : 
        case 'h' : 
        case 'i' : 
        case 'j' : 
        case 'k' : 
        case 'l' : 
        case 'm' : 
        case 'n' : 
        case 'o' : 
        case 'p' : 
        case 'q' : 
        case 'r' : 
        case 's' : 
        case 't' : 
        case 'u' : 
        case 'v' : 
        case 'w' : 
        case 'x' : 
        case 'y' : 
        case 'z' : 
        case 'A' : 
        case 'B' : 
        case 'C' : 
        case 'D' : 
        case 'E' : 
        case 'F' : 
        case 'G' : 
        case 'H' : 
        case 'I' : 
        case 'J' : 
        case 'K' : 
        case 'L' : 
        case 'M' : 
        case 'N' : 
        case 'O' : 
        case 'P' : 
        case 'Q' : 
        case 'R' : 
        case 'S' : 
        case 'T' : 
        case 'U' : 
        case 'V' : 
        case 'W' : 
        case 'X' : 
        case 'Y' : 
        case 'Z' : 
        case '_' : 
            while ( 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || c == '_' || '0' <= c && c <= '9' ) {
                {
                    lexEl.AddChar(c);
                    NextChar();
                }
            }
            {
                firstOnLine = 0 ;
                tokenAhead = 1 ;
                lexEl.Value = SortKeyWord(IDENT);
                PUT_COORD_CALL ;
                return 1 ;
            }
            break ;
        case '"' : 
            if ( noString ) {
                {
                    lexEl.AddChar(c);
                    NextChar();
                }
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = DQUOTE ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else {
                if ( !(c == '"' && NextChar()) ) {}
                while ( c != EOF ) {
                    switch ( c ) {
                        case '\r' : 
                        case '\n' : 
                            {
                                firstOnLine = 0 ;
                                tokenAhead = 1 ;
                                lexEl.Value = STRING ;
                                PUT_COORD_CALL ;
                                return 1 ;
                            }
                            break ;
                        case '"' : 
                            NextChar();
                            {
                                firstOnLine = 0 ;
                                tokenAhead = 1 ;
                                lexEl.Value = STRING ;
                                PUT_COORD_CALL ;
                                return 1 ;
                            }
                            break ;
                        case '\\' : 
                            NextChar();
                            {
                                lexEl.AddString("\\");
                            }
                            if ( !(c == '\r') ) {
                                {
                                    lexEl.AddChar(c);
                                    NextChar();
                                }
                            } else {
                                if ( !(c != EOF && NextChar()) ) {}
                            }
                            break ;
                        default : 
                            if ( c != EOF ) {
                                {
                                    lexEl.AddChar(c);
                                    NextChar();
                                }
                            }
                            break ;
                    }
                }
            }
            break ;
        case '\'' : 
            NextChar();
            while ( c != EOF ) {
                switch ( c ) {
                    case '\\' : 
                        NextChar();
                        {
                            lexEl.AddString("\\");
                        }
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                        break ;
                    case '\'' : 
                        NextChar();
                        {
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            lexEl.Value = CHARACT ;
                            PUT_COORD_CALL ;
                            return 1 ;
                        }
                        break ;
                    default : 
                        if ( c != EOF ) {
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                        }
                        break ;
                }
            }
            break ;
        case '1' : 
        case '2' : 
        case '3' : 
        case '4' : 
        case '5' : 
        case '6' : 
        case '7' : 
        case '8' : 
        case '9' : 
            while ( '0' <= c && c <= '9' ) {
                {
                    lexEl.AddChar(c);
                    NextChar();
                }
            }
            if ( !(c != EOF) ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = INTEGER ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            }
            switch ( c ) {
                case 'l' : 
                case 'L' : 
                    NextChar();
                    switch ( c ) {
                        case 'u' : 
                        case 'U' : 
                            NextChar();
                            {
                                firstOnLine = 0 ;
                                tokenAhead = 1 ;
                                lexEl.Value = ULINTEGER ;
                                PUT_COORD_CALL ;
                                return 1 ;
                            }
                            break ;
                        case 'L' : 
                        case 'l' : 
                            NextChar();
                            switch ( c ) {
                                case 'u' : 
                                case 'U' : 
                                    NextChar();
                                    {
                                        firstOnLine = 0 ;
                                        tokenAhead = 1 ;
                                        lexEl.Value = ULLINTEGER ;
                                        PUT_COORD_CALL ;
                                        return 1 ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = LLINTEGER ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                            break ;
                        default : 
                            if ( c != EOF ) {
                                {
                                    firstOnLine = 0 ;
                                    tokenAhead = 1 ;
                                    lexEl.Value = LINTEGER ;
                                    PUT_COORD_CALL ;
                                    return 1 ;
                                }
                            }
                            break ;
                    }
                    break ;
                case 'u' : 
                case 'U' : 
                    NextChar();
                    switch ( c ) {
                        case 'l' : 
                        case 'L' : 
                            NextChar();
                            switch ( c ) {
                                case 'L' : 
                                case 'l' : 
                                    NextChar();
                                    {
                                        firstOnLine = 0 ;
                                        tokenAhead = 1 ;
                                        lexEl.Value = ULLINTEGER ;
                                        PUT_COORD_CALL ;
                                        return 1 ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = ULINTEGER ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                            break ;
                        default : 
                            if ( c != EOF ) {
                                {
                                    firstOnLine = 0 ;
                                    tokenAhead = 1 ;
                                    lexEl.Value = UINTEGER ;
                                    PUT_COORD_CALL ;
                                    return 1 ;
                                }
                            }
                            break ;
                    }
                    break ;
                case 'e' : 
                case 'E' : 
                    NextChar();
                    {
                        lexEl.AddString("e");
                    }
                    if ( c == '+' || c == '-' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    while ( '0' <= c && c <= '9' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    switch ( c ) {
                        case 'f' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'F' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'l' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'L' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                    }
                    {
                        firstOnLine = 0 ;
                        tokenAhead = 1 ;
                        lexEl.Value = FLOATVAL ;
                        PUT_COORD_CALL ;
                        return 1 ;
                    }
                    break ;
                case '.' : 
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                    while ( '0' <= c && c <= '9' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    if ( (c == 'e' || c == 'E') && NextChar() ) {
                        {
                            lexEl.AddString("e");
                        }
                        if ( c == '+' || c == '-' ) {
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                        }
                        while ( '0' <= c && c <= '9' ) {
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                        }
                    }
                    switch ( c ) {
                        case 'f' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'F' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'l' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'L' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                    }
                    {
                        firstOnLine = 0 ;
                        tokenAhead = 1 ;
                        lexEl.Value = FLOATVAL ;
                        PUT_COORD_CALL ;
                        return 1 ;
                    }
                    break ;
                default : 
                    if ( c != EOF ) {
                        {
                            firstOnLine = 0 ;
                            tokenAhead = 1 ;
                            lexEl.Value = INTEGER ;
                            PUT_COORD_CALL ;
                            return 1 ;
                        }
                    }
                    break ;
            }
            break ;
        case '0' : 
            NextChar();
            if ( !(c != EOF) ) {
                {
                    lexEl.AddString("0");
                }
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = INTEGER ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            }
            switch ( c ) {
                case 'x' : 
                case 'X' : 
                    NextChar();
                    while ( '0' <= c && c <= '9' || 'a' <= c && c <= 'f' || 'A' <= c && c <= 'F' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    switch ( c ) {
                        case 'l' : 
                        case 'L' : 
                            NextChar();
                            switch ( c ) {
                                case 'u' : 
                                case 'U' : 
                                    NextChar();
                                    {
                                        firstOnLine = 0 ;
                                        tokenAhead = 1 ;
                                        lexEl.Value = ULHEXA ;
                                        PUT_COORD_CALL ;
                                        return 1 ;
                                    }
                                    break ;
                                case 'L' : 
                                case 'l' : 
                                    NextChar();
                                    switch ( c ) {
                                        case 'u' : 
                                        case 'U' : 
                                            NextChar();
                                            {
                                                firstOnLine = 0 ;
                                                tokenAhead = 1 ;
                                                lexEl.Value = ULLHEXA ;
                                                PUT_COORD_CALL ;
                                                return 1 ;
                                            }
                                            break ;
                                        default : 
                                            if ( c != EOF ) {
                                                {
                                                    firstOnLine = 0 ;
                                                    tokenAhead = 1 ;
                                                    lexEl.Value = LLHEXA ;
                                                    PUT_COORD_CALL ;
                                                    return 1 ;
                                                }
                                            }
                                            break ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = LHEXA ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                            break ;
                        case 'u' : 
                        case 'U' : 
                            NextChar();
                            switch ( c ) {
                                case 'l' : 
                                case 'L' : 
                                    NextChar();
                                    switch ( c ) {
                                        case 'L' : 
                                        case 'l' : 
                                            NextChar();
                                            {
                                                firstOnLine = 0 ;
                                                tokenAhead = 1 ;
                                                lexEl.Value = ULLHEXA ;
                                                PUT_COORD_CALL ;
                                                return 1 ;
                                            }
                                            break ;
                                        default : 
                                            if ( c != EOF ) {
                                                {
                                                    firstOnLine = 0 ;
                                                    tokenAhead = 1 ;
                                                    lexEl.Value = ULHEXA ;
                                                    PUT_COORD_CALL ;
                                                    return 1 ;
                                                }
                                            }
                                            break ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = UHEXA ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                            break ;
                        default : 
                            if ( c != EOF ) {
                                {
                                    firstOnLine = 0 ;
                                    tokenAhead = 1 ;
                                    lexEl.Value = HEXA ;
                                    PUT_COORD_CALL ;
                                    return 1 ;
                                }
                            }
                            break ;
                    }
                    break ;
                case '0' : 
                case '1' : 
                case '2' : 
                case '3' : 
                case '4' : 
                case '5' : 
                case '6' : 
                case '7' : 
                    while ( '0' <= c && c <= '7' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    switch ( c ) {
                        case 'l' : 
                        case 'L' : 
                            NextChar();
                            switch ( c ) {
                                case 'L' : 
                                case 'l' : 
                                    NextChar();
                                    switch ( c ) {
                                        case 'u' : 
                                        case 'U' : 
                                            NextChar();
                                            {
                                                firstOnLine = 0 ;
                                                tokenAhead = 1 ;
                                                lexEl.Value = ULLOCTAL ;
                                                PUT_COORD_CALL ;
                                                return 1 ;
                                            }
                                            break ;
                                        default : 
                                            if ( c != EOF ) {
                                                {
                                                    firstOnLine = 0 ;
                                                    tokenAhead = 1 ;
                                                    lexEl.Value = LLOCTAL ;
                                                    PUT_COORD_CALL ;
                                                    return 1 ;
                                                }
                                            }
                                            break ;
                                    }
                                    break ;
                                case 'u' : 
                                case 'U' : 
                                    NextChar();
                                    {
                                        firstOnLine = 0 ;
                                        tokenAhead = 1 ;
                                        lexEl.Value = ULOCTAL ;
                                        PUT_COORD_CALL ;
                                        return 1 ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = LOCTAL ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                            break ;
                        case 'u' : 
                        case 'U' : 
                            NextChar();
                            switch ( c ) {
                                case 'l' : 
                                case 'L' : 
                                    NextChar();
                                    switch ( c ) {
                                        case 'L' : 
                                        case 'l' : 
                                            NextChar();
                                            {
                                                firstOnLine = 0 ;
                                                tokenAhead = 1 ;
                                                lexEl.Value = ULLOCTAL ;
                                                PUT_COORD_CALL ;
                                                return 1 ;
                                            }
                                            break ;
                                        default : 
                                            if ( c != EOF ) {
                                                {
                                                    firstOnLine = 0 ;
                                                    tokenAhead = 1 ;
                                                    lexEl.Value = ULOCTAL ;
                                                    PUT_COORD_CALL ;
                                                    return 1 ;
                                                }
                                            }
                                            break ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = UOCTAL ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                            break ;
                        default : 
                            if ( c != EOF ) {
                                {
                                    firstOnLine = 0 ;
                                    tokenAhead = 1 ;
                                    lexEl.Value = OCTAL ;
                                    PUT_COORD_CALL ;
                                    return 1 ;
                                }
                            }
                            break ;
                    }
                    break ;
                case '.' : 
                    {
                        lexEl.AddString("0");
                    }
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                    while ( '0' <= c && c <= '9' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    if ( (c == 'e' || c == 'E') && NextChar() ) {
                        {
                            lexEl.AddString("e");
                        }
                        if ( c == '+' || c == '-' ) {
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                        }
                        while ( '0' <= c && c <= '9' ) {
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                        }
                    }
                    switch ( c ) {
                        case 'f' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'F' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'l' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case 'L' : 
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                    }
                    {
                        firstOnLine = 0 ;
                        tokenAhead = 1 ;
                        lexEl.Value = FLOATVAL ;
                        PUT_COORD_CALL ;
                        return 1 ;
                    }
                    break ;
                default : 
                    if ( c != EOF ) {
                        if ( c != EOF ) {
                            {
                                lexEl.AddString("0");
                            }
                            switch ( c ) {
                                case 'l' : 
                                case 'L' : 
                                    NextChar();
                                    switch ( c ) {
                                        case 'u' : 
                                        case 'U' : 
                                            NextChar();
                                            {
                                                firstOnLine = 0 ;
                                                tokenAhead = 1 ;
                                                lexEl.Value = ULINTEGER ;
                                                PUT_COORD_CALL ;
                                                return 1 ;
                                            }
                                            break ;
                                        default : 
                                            if ( c != EOF ) {
                                                {
                                                    firstOnLine = 0 ;
                                                    tokenAhead = 1 ;
                                                    lexEl.Value = LINTEGER ;
                                                    PUT_COORD_CALL ;
                                                    return 1 ;
                                                }
                                            }
                                            break ;
                                    }
                                    break ;
                                case 'u' : 
                                case 'U' : 
                                    NextChar();
                                    switch ( c ) {
                                        case 'l' : 
                                        case 'L' : 
                                            NextChar();
                                            {
                                                firstOnLine = 0 ;
                                                tokenAhead = 1 ;
                                                lexEl.Value = ULINTEGER ;
                                                PUT_COORD_CALL ;
                                                return 1 ;
                                            }
                                            break ;
                                        default : 
                                            if ( c != EOF ) {
                                                {
                                                    firstOnLine = 0 ;
                                                    tokenAhead = 1 ;
                                                    lexEl.Value = UINTEGER ;
                                                    PUT_COORD_CALL ;
                                                    return 1 ;
                                                }
                                            }
                                            break ;
                                    }
                                    break ;
                                default : 
                                    if ( c != EOF ) {
                                        {
                                            firstOnLine = 0 ;
                                            tokenAhead = 1 ;
                                            lexEl.Value = INTEGER ;
                                            PUT_COORD_CALL ;
                                            return 1 ;
                                        }
                                    }
                                    break ;
                            }
                        }
                    }
                    break ;
            }
            break ;
        case '#' : 
            NextChar();
            while ( c == ' ' || c == '\t' ) {
                if ( !(c != EOF && NextChar()) ) {}
            }
            if ( GetString("include", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = INCLUDE_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("ifdef", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = IFDEF_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("ifndef", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = IFNDEF_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("if", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = IF_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("else", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = ELSE_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("elif", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = ELIF_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("endif", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = ENDIF_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("line", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = LINE_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("pragma", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = PRAGMA_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("error", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = ERROR_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("define", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = DEFINE_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( GetString("undef", 1) && NextChar() ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = UNDEF_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( '0' <= c && c <= '9' ) {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = LINE_REFERENCE_DIR ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else if ( c != EOF ) {
                {
                    lexEl.AddString("#");
                }
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = SHARP_VAL ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else {
            }
            break ;
        case '\r' : 
        case '\n' : 
            NextChar();
            {
                firstOnLine = 0 ;
                tokenAhead = 1 ;
                lexEl.Value = CARRIAGE_RETURN ;
                firstOnLine = 1 ;
                PUT_COORD_CALL ;
                return 1 ;
            }
            break ;
        case '/' : 
            NextChar();
            if ( c == '=' ) {
                if ( !(c != EOF && NextChar()) ) {}
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = SLASEGAL ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = SLAS ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            }
            break ;
        case '.' : 
            {
                lexEl.AddChar(c);
                NextChar();
            }
            if ( '0' <= c && c <= '9' ) {
                while ( '0' <= c && c <= '9' ) {
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                }
                if ( (c == 'e' || c == 'E') && NextChar() ) {
                    {
                        lexEl.AddString("e");
                    }
                    if ( c == '+' || c == '-' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                    while ( '0' <= c && c <= '9' ) {
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                    }
                }
                switch ( c ) {
                    case 'f' : 
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                        break ;
                    case 'F' : 
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                        break ;
                    case 'l' : 
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                        break ;
                    case 'L' : 
                        {
                            lexEl.AddChar(c);
                            NextChar();
                        }
                        break ;
                }
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = FLOATVAL ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            } else {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 1 ;
                    lexEl.Value = POINT ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            }
            break ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexComment ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    if ( !(keepCarriage) && !(keepAll) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    switch ( c ) {
        case '/' : 
            NextChar();
            switch ( c ) {
                case '/' : 
                    begin_comment();
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                    while ( c != EOF ) {
                        switch ( c ) {
                            case '\r' : 
                            case '\n' : 
                                {
                                    store_comment_line(lexEl.length());
                                    lexEl.Erase();
                                    ptStockBuf = -1 ;
                                }
                                {
                                    firstOnLine = 0 ;
                                    tokenAhead = 2 ;
                                    tokenAhead = 0 ;
                                    lexCallLex = 1 ;
                                    return _Tak(LexComment)();
                                }
                                break ;
                            default : 
                                if ( c != EOF ) {
                                    {
                                        lexEl.AddChar(c);
                                        NextChar();
                                    }
                                }
                                break ;
                        }
                    }
                    {
                        store_comment_line(lexEl.length());
                        lexEl.Erase();
                        ptStockBuf = -1 ;
                    }
                    break ;
                case '*' : 
                    NextChar();
                    {
                        int level = 0 ;
                        int nbCaract = 0 ;
                        begin_comment();
                        while ( c != EOF ) {
                            if ( GetString("/*", 1) && NextChar() ) {
                                level++ ;
                                {
                                    lexEl.AddString("/*");
                                }
                            } else if ( GetString("*/", 1) && NextChar() ) {
                                if ( !level ) {
                                    {
                                        store_comment_line(lexEl.length());
                                        lexEl.Erase();
                                        ptStockBuf = -1 ;
                                    }
                                    {
                                        firstOnLine = 0 ;
                                        tokenAhead = 2 ;
                                        tokenAhead = 0 ;
                                        lexCallLex = 1 ;
                                        return _Tak(LexComment)();
                                    }
                                } else {
                                    level-- ;
                                    {
                                        lexEl.AddString("*/");
                                    }
                                }
                            } else if ( c == '\n' && NextChar() ) {
                                {
                                    store_comment_line(lexEl.length());
                                    lexEl.Erase();
                                    ptStockBuf = -1 ;
                                }
                                nbCaract = 0 ;
                            } else if ( c == '\r' && NextChar() ) {
                            } else if ( c != EOF ) {
                                if ( nbCaract++ > 254 ) {
                                    {
                                        store_comment_line(lexEl.length());
                                        lexEl.Erase();
                                        ptStockBuf = -1 ;
                                    }
                                    begin_comment();
                                    nbCaract = 0 ;
                                }
                                {
                                    lexEl.AddChar(c);
                                    NextChar();
                                }
                            } else {
                            }
                        }
                        {
                            store_comment_line(lexEl.length());
                            lexEl.Erase();
                            ptStockBuf = -1 ;
                        }
                    }
                    break ;
                default : 
                    if ( c != EOF ) {
                        if ( ptStockBuf > -1 ) 
                            UnputBuf();
                        lexEl.Erase();
                        tokenAhead = 0 ;
                        if ( lastContextPos && !lastContextPos -> nbRef ) 
                            FreePos(lastContextPos);
                        lastContextPos = (PFILE_POSITION)0 ;
                    }
                    break ;
            }
            break ;
    }
    if ( lexCallLex ) {
        PUT_COORD_AFTER_COMMENTS_CALL ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexDefine ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 3 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( c != EOF ) {
        while ( c != EOF ) {
            while ( c != EOF && !(c == '\n' || c == '\r' || c == '\\') ) {
                if ( GetString("/*", 1) && NextChar() ) {
                    nbOpenComment += 1 ;
                    {
                        lexEl.AddString("/*");
                    }
                } else if ( GetString("*/", 1) && NextChar() ) {
                    if ( nbOpenComment > 0 ) 
                        nbOpenComment -= 1 ;
                    {
                        lexEl.AddString("*/");
                    }
                } else if ( c != EOF ) {
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                } else {
                }
            }
            if ( c == '\\' || nbOpenComment ) {
                if ( c == '\\' ) {
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                }
                if ( c == '\n' || c == '\r' ) {
                    while ( c == '\n' || c == '\r' ) {
                        if ( !(c != EOF && NextChar()) ) {}
                    }
                    {
                        firstOnLine = 0 ;
                        tokenAhead = 3 ;
                        lexEl.Value = DEFINED_CONTINUED ;
                        PUT_COORD_CALL ;
                        return 1 ;
                    }
                }
            } else {
                {
                    firstOnLine = 0 ;
                    tokenAhead = 3 ;
                    lexEl.Value = DEFINED_NOT_CONTINUED ;
                    PUT_COORD_CALL ;
                    return 1 ;
                }
            }
        }
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexDefineName ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 4 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    while ( c == ' ' || c == '\t' || c == '' ) 
        NextChar();
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    oldLine = line, oldCol = col ;
    if ( !lexCallLex ) {
        PUT_COORD_CALL ;
    }
    while ( 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || c == '_' || '0' <= c && c <= '9' ) {
        {
            lexEl.AddChar(c);
            NextChar();
        }
    }
    {
        firstOnLine = 0 ;
        tokenAhead = 4 ;
        lexEl.Value = DEFINE_NAME ;
        PUT_COORD_CALL ;
        return 1 ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexEndLine ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 5 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( c != EOF ) {
        while ( c != EOF && !(c == '\n' || c == '\r') ) {
            {
                lexEl.AddChar(c);
                NextChar();
            }
        }
        while ( c == '\n' || c == '\r' ) {
            if ( !(c != EOF && NextChar()) ) {}
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 5 ;
            lexEl.Value = END_LINE ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexInclude ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 6 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    while ( c == ' ' || c == '\t' ) 
        NextChar();
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    oldLine = line, oldCol = col ;
    if ( !lexCallLex ) {
        PUT_COORD_CALL ;
    }
    switch ( c ) {
        case '<' : 
            NextChar();
            while ( !(c == '>' || c == '\r' || c == '\n') ) {
                {
                    lexEl.AddChar(c);
                    NextChar();
                }
            }
            if ( !(c != EOF && NextChar()) ) {}
            {
                firstOnLine = 0 ;
                tokenAhead = 6 ;
                lexEl.Value = INCLUDE_SYS ;
                PUT_COORD_CALL ;
                return 1 ;
            }
            break ;
        case '"' : 
            NextChar();
            while ( !(c == '"' || c == '\r' || c == '\n') ) {
                {
                    lexEl.AddChar(c);
                    NextChar();
                }
            }
            if ( !(c != EOF && NextChar()) ) {}
            {
                firstOnLine = 0 ;
                tokenAhead = 6 ;
                lexEl.Value = INCLUDE_LOCAL ;
                PUT_COORD_CALL ;
                return 1 ;
            }
            break ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexMeta ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( !(keepCarriage) && !(keepAll) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    switch ( c ) {
        case '$' : 
            NextChar();
            if ( !(c == '(') ) {
                while ( 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || '0' <= c && c <= '9' || c == '_' ) {
                    {
                        lexEl.AddChar(c);
                        NextChar();
                    }
                }
            } else {
                int nbPar = 0 ;
                {
                    lexEl.AddChar(c);
                    NextChar();
                }
                while ( c != EOF ) {
                    switch ( c ) {
                        case '(' : 
                            nbPar++ ;
                            {
                                lexEl.AddChar(c);
                                NextChar();
                            }
                            break ;
                        case ')' : 
                            if ( !nbPar ) {
                                {
                                    lexEl.AddChar(c);
                                    NextChar();
                                }
                                {
                                    firstOnLine = 0 ;
                                    tokenAhead = 7 ;
                                    lexEl.Value = META ;
                                    PUT_COORD_CALL ;
                                    return 1 ;
                                }
                            } else {
                                {
                                    lexEl.AddChar(c);
                                    NextChar();
                                }
                                nbPar-- ;
                            }
                            break ;
                        default : 
                            if ( c != EOF ) {
                                {
                                    lexEl.AddChar(c);
                                    NextChar();
                                }
                            }
                            break ;
                    }
                }
            }
            {
                firstOnLine = 0 ;
                tokenAhead = 7 ;
                lexEl.Value = META ;
                PUT_COORD_CALL ;
                return 1 ;
            }
            break ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexPragma ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 8 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    while ( c == '\t' || c == ' ' || c == '' ) 
        NextChar();
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    oldLine = line, oldCol = col ;
    if ( !lexCallLex ) {
        PUT_COORD_CALL ;
    }
    if ( GetString("pretty", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_PRETTY ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("nopretty", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_NOPRETTY ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("managed", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_MANAGED ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("notmanaged", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_NOT_MANAGED ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("config", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_CONFIG ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("tab_directive", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_TAB_DIRECTIVE ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("tab", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_TAB ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("range", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_RANGE ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("mode", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_MODE ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("brace_align", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_BRACE_ALIGN ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("simplify", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_SIMPLIFY ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("single_switch_indent", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_SINGLE_SWITCH_INDENT ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("assign_align", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_ASSIGN_ALIGN ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("decl_align", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_DECL_ALIGN ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("margin", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_MARGIN ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("comment", 1) && NextChar() ) {
        ptStockBuf = -1 ;
        while ( c == ' ' || c == '\t' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
        if ( GetString("start", 1) && NextChar() ) {
            {
                firstOnLine = 0 ;
                tokenAhead = 8 ;
                lexEl.Value = PRAGMA_COMMENT_START ;
                PUT_COORD_CALL ;
                return 1 ;
            }
        } else if ( GetString("middle", 1) && NextChar() ) {
            {
                firstOnLine = 0 ;
                tokenAhead = 8 ;
                lexEl.Value = PRAGMA_COMMENT_MIDDLE ;
                PUT_COORD_CALL ;
                return 1 ;
            }
        } else if ( GetString("end", 1) && NextChar() ) {
            {
                firstOnLine = 0 ;
                tokenAhead = 8 ;
                lexEl.Value = PRAGMA_COMMENT_END ;
                PUT_COORD_CALL ;
                return 1 ;
            }
        } else if ( GetString("plus", 1) && NextChar() ) {
            {
                firstOnLine = 0 ;
                tokenAhead = 8 ;
                lexEl.Value = PRAGMA_COMMENT_PLUS ;
                PUT_COORD_CALL ;
                return 1 ;
            }
        } else {
        }
    } else if ( GetString("indent_function_type", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_INDENT_FUNCTION_TYPE ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("func_header", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_FUNC_HEADER ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("parameters_under_tab", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_PARAMETERS_UNDER ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("parameters", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_PARAMETERS ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("space_arrow", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_SPACE_ARROW ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("enum_vert", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_ENUM_VERT ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( c != EOF ) {
        while ( !(c == '\n' || c == '\r') && c != EOF ) {
            {
                lexEl.AddChar(c);
                NextChar();
            }
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 8 ;
            lexEl.Value = PRAGMA_CONTENT ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else {
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexPragmaSmall ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 9 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    while ( c == ' ' || c == '\t' ) 
        NextChar();
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    oldLine = line, oldCol = col ;
    if ( !lexCallLex ) {
        PUT_COORD_CALL ;
    }
    while ( c != EOF
                && ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || c == '_' || '0' <= c && c <= '9')
                && !(c == '\n' || c == '\r') ) {
        {
            lexEl.AddChar(c);
            NextChar();
        }
    }
    {
        firstOnLine = 0 ;
        tokenAhead = 9 ;
        lexEl.Value = SMALL_PRAGMA_CONTENT ;
        PUT_COORD_CALL ;
        return 1 ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::LexUndef ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 10 ;
        return 1 ;
    }
    ptStockBuf = -1 ;
    while ( c == ' ' || c == '\t' || c == '' ) 
        NextChar();
    ptStockBuf = -1 ;
    lexEl.Erase();
    tokenAhead = 0 ;
    oldLine = line, oldCol = col ;
    if ( !lexCallLex ) {
        PUT_COORD_CALL ;
    }
    while ( 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || c == '_' || '0' <= c && c <= '9' ) {
        {
            lexEl.AddChar(c);
            NextChar();
        }
    }
    while ( c == ' ' || c == '\t' ) {
        if ( !(c != EOF && NextChar()) ) {}
    }
    {
        firstOnLine = 0 ;
        tokenAhead = 10 ;
        lexEl.Value = UNDEF_CONTENT ;
        PUT_COORD_CALL ;
        return 1 ;
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::PushArgument ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 11 ;
        return 1 ;
    }
    if ( !(keepCarriage) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    if ( c != EOF ) {
        while ( c != EOF && !(c == ',' || c == '\r' || c == '\n') ) {
            {
                lexEl.AddChar(c);
                NextChar();
            }
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 11 ;
            lexEl.Value = PUSH_ARGUMENT ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::PushFunction ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 12 ;
        return 1 ;
    }
    if ( !(keepCarriage) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    if ( GetString("NPUSH_CALL_AFF_VERIF", 1) && NextChar() ) {
        {
            lexEl.AddString("NPUSH_CALL_AFF_VERIF");
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 12 ;
            lexEl.Value = PUSH_FUNCTION ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("NPUSH_CALL_AFF", 1) && NextChar() ) {
        {
            lexEl.AddString("NPUSH_CALL_AFF");
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 12 ;
            lexEl.Value = PUSH_FUNCTION ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("PUSH_CALL_AFF_VERIF", 1) && NextChar() ) {
        {
            lexEl.AddString("PUSH_CALL_AFF_VERIF");
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 12 ;
            lexEl.Value = PUSH_FUNCTION ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("PUSH_CALL_AFF", 1) && NextChar() ) {
        {
            lexEl.AddString("PUSH_CALL_AFF");
        }
        {
            firstOnLine = 0 ;
            tokenAhead = 12 ;
            lexEl.Value = PUSH_FUNCTION ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else {
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::specific ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 13 ;
        return 1 ;
    }
    if ( !(keepCarriage) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    if ( GetString("DECLARE_DYNAMIC", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = DECLARE_DYNAMIC ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("DECLARE_SERIAL", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = DECLARE_SERIAL ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("IMPLEMENT_DYNAMIC", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = IMPLEMENT_DYNAMIC ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("IMPLEMENT_DYNCREATE", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = IMPLEMENT_DYNCREATE ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("IMPLEMENT_SERIAL", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = IMPLEMENT_SERIAL ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("DECLARE_MESSAGE_MAP", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = DECLARE_MESSAGE_MAP ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("BEGIN_MESSAGE_MAP", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = BEGIN_MESSAGE_MAP ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("END_MESSAGE_MAP", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = END_MESSAGE_MAP ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("CATCH_ALL", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = CATCH_ALL ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("CATCH", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = CATCH_UPPER ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("AND_CATCH", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = AND_CATCH ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("END_CATCH_ALL", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = END_CATCH_ALL ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("END_CATCH", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = END_CATCH ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else if ( GetString("TRY", 1) && NextChar() ) {
        {
            firstOnLine = 0 ;
            tokenAhead = 13 ;
            lexEl.Value = TRY_UPPER ;
            PUT_COORD_CALL ;
            return 1 ;
        }
    } else {
    }
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

int cplus::the_exit ()
{
    if ( lastContextPos && !lastContextPos -> nbRef ) 
        FreePos(lastContextPos);
    lastContextPos = (PFILE_POSITION)0 ;
    if ( tokenAhead && tokenAhead != -1 ) 
        ExtUnputBuf();
#ifdef DUMP_COORD
    if ( !lexCallLex && dumpCoord ) 
        store_pos_as_comment(line, col, 0);
#endif
    
    int _bidon = (oldLine = line, oldCol = col);
    int _bidon1 = (oldLineEntry = line, oldColEntry = col);
    
    tokenAhead = 0 ;
    if ( LexMeta() != -1 ) {
        tokenAhead = 14 ;
        return 1 ;
    }
    if ( !(keepCarriage) ) {
        ptStockBuf = -1 ;
        while ( c == '\t' || c == ' ' || c == '\r' || c == '\n' || c == '' ) 
            NextChar();
        ptStockBuf = -1 ;
        lexEl.Erase();
        tokenAhead = 0 ;
        oldLine = line, oldCol = col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
    } else {
        if ( !(keepAll) ) {
            ptStockBuf = -1 ;
            while ( c == '\t' || c == ' ' || c == '' ) 
                NextChar();
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            oldLine = line, oldCol = col ;
            if ( !lexCallLex ) {
                PUT_COORD_CALL ;
            }
        } else {
            ptStockBuf = -1 ;
            lexEl.Erase();
            tokenAhead = 0 ;
            if ( lastContextPos && !lastContextPos -> nbRef ) 
                FreePos(lastContextPos);
            lastContextPos = (PFILE_POSITION)0 ;
        }
    }
    if ( GetString("TOKEN_EXIT", 1) && NextChar() ) {
        {
            lexEl.AddString("TOKEN_EXIT");
        }
    } else if ( GetString("PROG_EXIT", 1) && NextChar() ) {
        {
            lexEl.AddString("PROG_EXIT");
        }
    } else if ( GetString("CASE_EXIT", 1) && NextChar() ) {
        {
            lexEl.AddString("CASE_EXIT");
        }
    } else if ( GetString("LEX_EXIT", 1) && NextChar() ) {
        {
            lexEl.AddString("LEX_EXIT");
        }
    } else if ( c != EOF ) {
        goto fin ;
    } else {
    }
    {
        firstOnLine = 0 ;
        tokenAhead = 14 ;
        lexEl.Value = FUNC_SPEC ;
        PUT_COORD_CALL ;
        return 1 ;
    }
fin : 
    line = oldLine ;
    LEX_EXIT(0, "");
    lexEl.Value = -1 ;
    return -1 ;
}

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
       ALWAYS
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
   -- 153 -- unsigned_type
       META
       UNSIGNED
   */
signed char *cplus::_tokenArray [154]
    = {(signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\077\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\200\377\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\020\000\002\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\020\000\002\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\340\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\101\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\370\377\177\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\340\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\200\300\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\340\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\300\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\014\000\010\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\120\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\000\000\000\000\014\000\010\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\002\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\200\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\374\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\100\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\020\000\360\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\020\000\360\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
        , (signed char *)"\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\003\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\100\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\377\377\377\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\004\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\200\307\017\000\000\000\000\000\000\000\000\000\000\000\000\006\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\360\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\001\000\000\000\000\000\000\000\000\000\000\220\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\375\377\177\000\000\000\000\000\000\000\000\020\000\360\377\017\000\370\037\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
        , (signed char *)"\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"};

typedef int (cplus::*(DEF_FUNC_TOKEN_ARRAY [154]))() ;

DEF_FUNC_TOKEN_ARRAY    cplus::_tokenFuncArray
    = { /*bidon                          */ 0, /*parse_entry                    */ 0
        , /*abstract_declarator            */ 0, /*additive_expression            */ &cplus::Lex
        , /*alloc_expression               */ &cplus::Lex, /*allocation_expression          */ &cplus::Lex
        , /*and_expression                 */ &cplus::Lex, /*arg_declarator                 */ &cplus::Lex
        , /*arg_declarator_base            */ &cplus::Lex, /*arg_declarator_followed        */ &cplus::Lex
        , /*arg_declarator_type            */ &cplus::Lex, /*arg_typ_declarator             */ &cplus::Lex
        , /*arg_typ_list                   */ 0, /*array_expression_follow        */ &cplus::Lex
        , /*asm_call                       */ &cplus::Lex, /*asm_declaration                */ &cplus::Lex
        , /*assignment_end                 */ &cplus::Lex, /*assignment_expression          */ &cplus::Lex
        , /*attribute_call                 */ &cplus::Lex, /*base_specifier                 */ &cplus::Lex
        , /*base_specifier_elem            */ &cplus::Lex, /*bit_field_decl                 */ &cplus::Lex
        , /*cast_expression                */ &cplus::Lex, /*cast_expression_value          */ &cplus::Lex
        , /*catch_unit                     */ &cplus::specific, /*catch_unit_ansi                */ &cplus::Lex
        , /*class_declaration              */ &cplus::Lex, /*comment_eater                  */ 0
        , /*complete_class_name            */ &cplus::Lex, /*compound_statement             */ &cplus::Lex
        , /*conditional_expression         */ &cplus::Lex, /*const_or_volatile              */ &cplus::Lex
        , /*constan                        */ &cplus::Lex, /*ctor_initializer               */ 0
        , /*data_decl_exotic               */ &cplus::specific, /*data_decl_sc_decl              */ &cplus::Lex
        , /*data_decl_sc_decl_full         */ &cplus::Lex, /*data_decl_sc_decl_short        */ &cplus::Lex
        , /*data_decl_sc_ty_decl           */ &cplus::Lex, /*data_decl_sc_ty_decl_full      */ &cplus::Lex
        , /*data_decl_sc_ty_decl_short     */ &cplus::Lex, /*data_declaration               */ 0
        , /*data_declaration_for           */ &cplus::Lex, /*data_declaration_for_full      */ &cplus::Lex
        , /*data_declaration_for_short     */ &cplus::Lex, /*data_declaration_strict        */ 0
        , /*deallocation_expression        */ &cplus::Lex, /*declarator                     */ &cplus::Lex
        , /*declarator_follow              */ 0, /*declarator_list                */ &cplus::Lex
        , /*declarator_list_init           */ &cplus::Lex, /*declarator_value               */ &cplus::Lex
        , /*define_dir                     */ &cplus::Lex, /*directive                      */ &cplus::Lex
        , /*end_pragma                     */ &cplus::Lex, /*end_pragma_managed             */ &cplus::Lex
        , /*enum_declarator                */ &cplus::Lex, /*enum_val                       */ &cplus::Lex
        , /*equality_expression            */ &cplus::Lex, /*exception                      */ &cplus::specific
        , /*exception_ansi                 */ &cplus::Lex, /*exception_list                 */ &cplus::Lex
        , /*exclusive_or_expression        */ &cplus::Lex, /*expression                     */ &cplus::Lex
        , /*expression_for                 */ &cplus::Lex, /*ext_all                        */ 0
        , /*ext_all_ext                    */ 0, /*ext_all_no_linkage             */ 0
        , /*ext_data_decl_sc_ty            */ &cplus::Lex, /*ext_data_decl_sc_ty_full       */ &cplus::Lex
        , /*ext_data_decl_sc_ty_short      */ &cplus::Lex, /*ext_data_decl_simp             */ 0
        , /*ext_data_declaration           */ 0, /*ext_decl_dir                   */ &cplus::Lex
        , /*ext_decl_if_dir                */ &cplus::Lex, /*ext_decl_ifdef_dir             */ &cplus::Lex
        , /*for_statement                  */ &cplus::Lex, /*func_declaration               */ &cplus::Lex
        , /*func_declarator                */ &cplus::Lex, /*ident_mul                      */ &cplus::Lex
        , /*include_dir                    */ &cplus::Lex, /*inclusive_or_expression        */ &cplus::Lex
        , /*initializer                    */ 0, /*inline_namespace               */ &cplus::Lex
        , /*inside_declaration             */ 0, /*inside_declaration1            */ &cplus::Lex
        , /*inside_declaration2            */ &cplus::Lex, /*inside_declaration_extension   */ 0
        , /*label_beg                      */ &cplus::Lex, /*linkage_specification          */ &cplus::Lex
        , /*logical_and_expression         */ &cplus::Lex, /*logical_or_expression          */ &cplus::Lex
        , /*long_type                      */ &cplus::Lex, /*macro                          */ &cplus::specific
        , /*macro_extended                 */ 0, /*main_entry                     */ 0
        , /*member_declarator              */ &cplus::Lex, /*message_map                    */ &cplus::specific
        , /*multiplicative_expression      */ &cplus::Lex, /*name_space                     */ &cplus::Lex
        , /*new_1                          */ &cplus::Lex, /*new_2                          */ &cplus::Lex
        , /*new_declarator                 */ 0, /*new_type_name                  */ &cplus::Lex
        , /*none_statement                 */ 0, /*operator_function_name         */ &cplus::Lex
        , /*other_config                   */ &cplus::LexPragma, /*parameter_list                 */ &cplus::Lex
        , /*parameter_list_extended        */ &cplus::Lex, /*pm_expression                  */ &cplus::Lex
        , /*postfix_expression             */ &cplus::Lex, /*pretty::bidon                  */ &cplus::Lex
        , /*pretty::parse_entry            */ &cplus::Lex, /*primary_expression             */ &cplus::Lex
        , /*program                        */ 0, /*protect_declare                */ &cplus::Lex
        , /*ptr_operator                   */ &cplus::Lex, /*qualified_name                 */ &cplus::Lex
        , /*qualified_name_elem            */ &cplus::Lex, /*quick_prog                     */ 0
        , /*quick_prog_elem                */ 0, /*range_in_liste                 */ &cplus::Lex
        , /*range_modifier                 */ &cplus::Lex, /*range_modifier_function        */ &cplus::Lex
        , /*range_modifier_ident           */ 0, /*range_pragma                   */ &cplus::LexPragma
        , /*relational_expression          */ &cplus::Lex, /*sc_specifier                   */ 0
        , /*shift_expression               */ &cplus::Lex, /*short_long_int_char            */ &cplus::Lex
        , /*signed_type                    */ &cplus::Lex, /*simple_ident                   */ &cplus::Lex
        , /*simple_type                    */ &cplus::Lex, /*simple_type_name               */ &cplus::Lex
        , /*sizeof_type                    */ &cplus::Lex, /*stat_all                       */ 0
        , /*stat_dir                       */ &cplus::Lex, /*stat_dir_switch                */ &cplus::Lex
        , /*stat_if_dir                    */ &cplus::Lex, /*stat_ifdef_dir                 */ &cplus::Lex
        , /*statement                      */ &cplus::Lex, /*statement_expression           */ &cplus::Lex
        , /*string_list                    */ &cplus::Lex, /*switch_elem                    */ &cplus::Lex
        , /*switch_list                    */ &cplus::Lex, /*template_type                  */ &cplus::Lex
        , /*type_and_declarator            */ &cplus::Lex, /*type_descr                     */ &cplus::Lex
        , /*type_name                      */ &cplus::Lex, /*type_specifier                 */ &cplus::Lex
        , /*type_specifier_without_param   */ &cplus::Lex, /*typedef_and_declarator         */ &cplus::Lex
        , /*unary_expression               */ &cplus::Lex, /*unsigned_type                  */ &cplus::Lex };
int                     cplus::_tokenNbFuncArray [154]
    = { /*bidon                          */ 0, /*parse_entry                    */ 0
        , /*abstract_declarator            */ 0, /*additive_expression            */ 1
        , /*alloc_expression               */ 1, /*allocation_expression          */ 1
        , /*and_expression                 */ 1, /*arg_declarator                 */ 1
        , /*arg_declarator_base            */ 1, /*arg_declarator_followed        */ 1
        , /*arg_declarator_type            */ 1, /*arg_typ_declarator             */ 1
        , /*arg_typ_list                   */ 0, /*array_expression_follow        */ 1
        , /*asm_call                       */ 1, /*asm_declaration                */ 1
        , /*assignment_end                 */ 1, /*assignment_expression          */ 1
        , /*attribute_call                 */ 1, /*base_specifier                 */ 1
        , /*base_specifier_elem            */ 1, /*bit_field_decl                 */ 1
        , /*cast_expression                */ 1, /*cast_expression_value          */ 1
        , /*catch_unit                     */ 13, /*catch_unit_ansi                */ 1
        , /*class_declaration              */ 1, /*comment_eater                  */ 0
        , /*complete_class_name            */ 1, /*compound_statement             */ 1
        , /*conditional_expression         */ 1, /*const_or_volatile              */ 1
        , /*constan                        */ 1, /*ctor_initializer               */ 0
        , /*data_decl_exotic               */ 13, /*data_decl_sc_decl              */ 1
        , /*data_decl_sc_decl_full         */ 1, /*data_decl_sc_decl_short        */ 1
        , /*data_decl_sc_ty_decl           */ 1, /*data_decl_sc_ty_decl_full      */ 1
        , /*data_decl_sc_ty_decl_short     */ 1, /*data_declaration               */ 0
        , /*data_declaration_for           */ 1, /*data_declaration_for_full      */ 1
        , /*data_declaration_for_short     */ 1, /*data_declaration_strict        */ 0
        , /*deallocation_expression        */ 1, /*declarator                     */ 1
        , /*declarator_follow              */ 0, /*declarator_list                */ 1
        , /*declarator_list_init           */ 1, /*declarator_value               */ 1
        , /*define_dir                     */ 1, /*directive                      */ 1
        , /*end_pragma                     */ 1, /*end_pragma_managed             */ 1
        , /*enum_declarator                */ 1, /*enum_val                       */ 1
        , /*equality_expression            */ 1, /*exception                      */ 13
        , /*exception_ansi                 */ 1, /*exception_list                 */ 1
        , /*exclusive_or_expression        */ 1, /*expression                     */ 1
        , /*expression_for                 */ 1, /*ext_all                        */ 0
        , /*ext_all_ext                    */ 0, /*ext_all_no_linkage             */ 0
        , /*ext_data_decl_sc_ty            */ 1, /*ext_data_decl_sc_ty_full       */ 1
        , /*ext_data_decl_sc_ty_short      */ 1, /*ext_data_decl_simp             */ 0
        , /*ext_data_declaration           */ 0, /*ext_decl_dir                   */ 1
        , /*ext_decl_if_dir                */ 1, /*ext_decl_ifdef_dir             */ 1
        , /*for_statement                  */ 1, /*func_declaration               */ 1
        , /*func_declarator                */ 1, /*ident_mul                      */ 1
        , /*include_dir                    */ 1, /*inclusive_or_expression        */ 1
        , /*initializer                    */ 0, /*inline_namespace               */ 1
        , /*inside_declaration             */ 0, /*inside_declaration1            */ 1
        , /*inside_declaration2            */ 1, /*inside_declaration_extension   */ 0
        , /*label_beg                      */ 1, /*linkage_specification          */ 1
        , /*logical_and_expression         */ 1, /*logical_or_expression          */ 1
        , /*long_type                      */ 1, /*macro                          */ 13
        , /*macro_extended                 */ 0, /*main_entry                     */ 0
        , /*member_declarator              */ 1, /*message_map                    */ 13
        , /*multiplicative_expression      */ 1, /*name_space                     */ 1
        , /*new_1                          */ 1, /*new_2                          */ 1
        , /*new_declarator                 */ 0, /*new_type_name                  */ 1
        , /*none_statement                 */ 0, /*operator_function_name         */ 1
        , /*other_config                   */ 8, /*parameter_list                 */ 1
        , /*parameter_list_extended        */ 1, /*pm_expression                  */ 1
        , /*postfix_expression             */ 1, /*pretty::bidon                  */ 1
        , /*pretty::parse_entry            */ 1, /*primary_expression             */ 1
        , /*program                        */ 0, /*protect_declare                */ 1
        , /*ptr_operator                   */ 1, /*qualified_name                 */ 1
        , /*qualified_name_elem            */ 1, /*quick_prog                     */ 0
        , /*quick_prog_elem                */ 0, /*range_in_liste                 */ 1
        , /*range_modifier                 */ 1, /*range_modifier_function        */ 1
        , /*range_modifier_ident           */ 0, /*range_pragma                   */ 8
        , /*relational_expression          */ 1, /*sc_specifier                   */ 0
        , /*shift_expression               */ 1, /*short_long_int_char            */ 1
        , /*signed_type                    */ 1, /*simple_ident                   */ 1
        , /*simple_type                    */ 1, /*simple_type_name               */ 1
        , /*sizeof_type                    */ 1, /*stat_all                       */ 0
        , /*stat_dir                       */ 1, /*stat_dir_switch                */ 1
        , /*stat_if_dir                    */ 1, /*stat_ifdef_dir                 */ 1
        , /*statement                      */ 1, /*statement_expression           */ 1
        , /*string_list                    */ 1, /*switch_elem                    */ 1
        , /*switch_list                    */ 1, /*template_type                  */ 1
        , /*type_and_declarator            */ 1, /*type_descr                     */ 1
        , /*type_name                      */ 1, /*type_specifier                 */ 1
        , /*type_specifier_without_param   */ 1, /*typedef_and_declarator         */ 1
        , /*unary_expression               */ 1, /*unsigned_type                  */ 1 };
int                     _arityNode_cplus []
    = { 2, 1, 1, 1, 1, 2, -1, 3, 1, 1, 1, 0, 0, 1, 1, 1, 1, -1, 1, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1
        , -1, -1, -1, -1, -1, 1, 1, 3, 3, 3, -1, -1, -1, 2, -1, -1, 3, -1, 3, -1, -1, -1, -1, 1, -1, -1, -1, -1, -1, -1
        , -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
        , -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
        , -1, 4, -1, -1, 4, 1, -1, -1, 1, 0, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 2, -1, 4, 3, -1, 1, 2, 2, 2
        , -1, -1, 2, 1, -1, -1, 2, -1, -1, -1, -1, 4, 2, 2, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
        , -1, 2, 3, 1, -1, 1, 1, 1, -1, 1, 2, 2, -1, 1, 2, -1, 2, 2, 2, 4, 0, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1
        , 1, 2, 2, 2, 0, 2, -1, 1, 1, -1, 3, 2, 1, 1, 1, 1, 1, 1, 3, 0, 1, 3, 3, -1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1
        , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, 2, 2, 2, 2, 1, -1, 2, 1, -1, 1, -1, 2, 2, 0, -1, 1, 2
        , 11, 0, -1, 2, 1, 1, 2, 1, -1, 2, -1, 2, 1, 0, 0, 2, 1, -1, 2, 2, 2, 2, 2, 2, 0, -1, -1, -1, -1, -1, -1, -1, 2
        , 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 0, 0, 1, 1, 1, 1, -1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1
        , 1, 1 };
STRINGELEM              *listConst_cplus ;

PPTREE bri_parse_entry_cplus ( int error_free )
{
    return cplus().parse_entry(error_free);
}

int cplus::init = 0 ;

void cplus::InitConst ()
{
    if ( !cplus::init ) {
        cplus::init = 1 ;
        STRINGELEM  *inter = listConst ;
        listConst = (STRINGELEM *)0 ;
        AddConstVal("cplus::TUNSIGNED", 357);
        AddConstVal("cplus::BDECR", 356);
        AddConstVal("cplus::BINCR", 355);
        AddConstVal("cplus::ADDR", 354);
        AddConstVal("cplus::NOT", 353);
        AddConstVal("cplus::LNEG", 352);
        AddConstVal("cplus::POS", 351);
        AddConstVal("cplus::NEG", 350);
        AddConstVal("cplus::PARAM_TYPE", 349);
        AddConstVal("cplus::STRING_LIST", 348);
        AddConstVal("cplus::LABEL", 347);
        AddConstVal("cplus::THROW_ANSI", 346);
        AddConstVal("cplus::ELSE", 345);
        AddConstVal("cplus::DECL_TYPE", 344);
        AddConstVal("cplus::TIDENT", 343);
        AddConstVal("cplus::TSIGNED", 342);
        AddConstVal("cplus::TSHORT", 341);
        AddConstVal("cplus::TCHAR", 340);
        AddConstVal("cplus::TINT", 339);
        AddConstVal("cplus::RSHI", 338);
        AddConstVal("cplus::LSHI", 337);
        AddConstVal("cplus::LT", 336);
        AddConstVal("cplus::GT", 335);
        AddConstVal("cplus::GEQU", 334);
        AddConstVal("cplus::LEQU", 333);
        AddConstVal("cplus::SPACE_ARROW", 332);
        AddConstVal("cplus::TAB_DIRECTIVE", 331);
        AddConstVal("cplus::ENUM_PARAMETERS_UNDER", 330);
        AddConstVal("cplus::ENUM_VERT_VALUE", 329);
        AddConstVal("cplus::PROTECT_MEMB", 328);
        AddConstVal("cplus::LANGUAGE", 327);
        AddConstVal("cplus::EXP", 326);
        AddConstVal("cplus::ADECR", 325);
        AddConstVal("cplus::AINCR", 324);
        AddConstVal("cplus::ARROW", 323);
        AddConstVal("cplus::REF", 322);
        AddConstVal("cplus::EXP_BRA", 321);
        AddConstVal("cplus::EXP_LIST", 320);
        AddConstVal("cplus::ARROW_MEMB", 319);
        AddConstVal("cplus::DOT_MEMB", 318);
        AddConstVal("cplus::POINETOI", 317);
        AddConstVal("cplus::TIRESUPEETOI", 316);
        AddConstVal("cplus::TIRESUPE", 315);
        AddConstVal("cplus::SUPESUPE", 314);
        AddConstVal("cplus::INFEINFE", 313);
        AddConstVal("cplus::SUPEEGAL", 312);
        AddConstVal("cplus::INFEEGAL", 311);
        AddConstVal("cplus::NONE", 310);
        AddConstVal("cplus::NEW_DECLARATOR", 309);
        AddConstVal("cplus::USING_NAMESPACE", 308);
        AddConstVal("cplus::NAMESPACE_ALIAS", 307);
        AddConstVal("cplus::REM", 306);
        AddConstVal("cplus::DIV", 305);
        AddConstVal("cplus::MUL", 304);
        AddConstVal("cplus::POURC", 303);
        AddConstVal("cplus::MESSAGE_MAP", 302);
        AddConstVal("cplus::MACRO", 301);
        AddConstVal("cplus::TDOUBLE", 300);
        AddConstVal("cplus::TFLOAT", 299);
        AddConstVal("cplus::TLONG", 298);
        AddConstVal("cplus::OR", 297);
        AddConstVal("cplus::VBARVBAR", 296);
        AddConstVal("cplus::AND", 295);
        AddConstVal("cplus::ETCOETCO", 294);
        AddConstVal("cplus::COMPOUND_EXT", 293);
        AddConstVal("cplus::EXTERNAL", 292);
        AddConstVal("cplus::INLINE_NAMESPACE", 291);
        AddConstVal("cplus::INITIALIZER", 290);
        AddConstVal("cplus::LOR", 289);
        AddConstVal("cplus::VBAR", 288);
        AddConstVal("cplus::DELETE_FUNCTION", 287);
        AddConstVal("cplus::FUNC", 286);
        AddConstVal("cplus::ALL_OF", 285);
        AddConstVal("cplus::EXTENSION", 284);
        AddConstVal("cplus::__EXTENSION__", 283);
        AddConstVal("cplus::STAT_VOID", 282);
        AddConstVal("cplus::TYPEDEF", 281);
        AddConstVal("cplus::TEMPLATE_DECL", 280);
        AddConstVal("cplus::SUPE", 279);
        AddConstVal("cplus::CLASS_PARAM", 278);
        AddConstVal("cplus::TEMPLATE", 277);
        AddConstVal("cplus::EXP_SEQ", 276);
        AddConstVal("cplus::LXOR", 275);
        AddConstVal("cplus::CHAP", 274);
        AddConstVal("cplus::EXCEPTION_LIST", 273);
        AddConstVal("cplus::EXCEPTION_ANSI", 272);
        AddConstVal("cplus::EXCEPTION", 271);
        AddConstVal("cplus::NEQU", 270);
        AddConstVal("cplus::EQU", 269);
        AddConstVal("cplus::EXCLEGAL", 268);
        AddConstVal("cplus::EGALEGAL", 267);
        AddConstVal("cplus::ENUM_CLASS", 266);
        AddConstVal("cplus::PRAGMA", 265);
        AddConstVal("cplus::PARAMETERS", 264);
        AddConstVal("cplus::FUNC_HEADER", 263);
        AddConstVal("cplus::INDENT_FUNCTION_TYPE", 262);
        AddConstVal("cplus::COMMENT_PLUS", 261);
        AddConstVal("cplus::COMMENT_END", 260);
        AddConstVal("cplus::COMMENT_MIDDLE", 259);
        AddConstVal("cplus::COMMENT_START", 258);
        AddConstVal("cplus::MARGIN_VALUE", 257);
        AddConstVal("cplus::BRACE_ALIGN_VALUE", 256);
        AddConstVal("cplus::DECL_ALIGN", 255);
        AddConstVal("cplus::ASSIGN_ALIGN", 254);
        AddConstVal("cplus::SINGLE_SWITCH_INDENT_VALUE", 253);
        AddConstVal("cplus::SIMPLIFY_VALUE", 252);
        AddConstVal("cplus::SIMPLIFY", 251);
        AddConstVal("cplus::MODE_VALUE", 250);
        AddConstVal("cplus::TAB_VALUE", 249);
        AddConstVal("cplus::CONFIG", 248);
        AddConstVal("cplus::NOT_MANAGED", 247);
        AddConstVal("cplus::NO_PRETTY", 246);
        AddConstVal("cplus::ALINE", 245);
        AddConstVal("cplus::ERROR", 244);
        AddConstVal("cplus::UNDEF", 243);
        AddConstVal("cplus::TYP_AFF_BRA", 242);
        AddConstVal("cplus::TYP_AFF_CALL", 241);
        AddConstVal("cplus::MEMBER_DECLARATOR", 240);
        AddConstVal("cplus::TYP_ARRAY", 239);
        AddConstVal("cplus::COUV", 238);
        AddConstVal("cplus::FOR_DECLARATION", 237);
        AddConstVal("cplus::DECLARATION", 236);
        AddConstVal("cplus::CTOR_INITIALIZER", 235);
        AddConstVal("cplus::BRACE_MARKER", 234);
        AddConstVal("cplus::CTOR_INIT", 233);
        AddConstVal("cplus::LONGLONG", 232);
        AddConstVal("cplus::IUNLONGLONG", 231);
        AddConstVal("cplus::IUNLONG", 230);
        AddConstVal("cplus::IUN", 229);
        AddConstVal("cplus::ILONGLONG", 228);
        AddConstVal("cplus::ILONG", 227);
        AddConstVal("cplus::RANGE_MODIFIER", 226);
        AddConstVal("cplus::COND_AFF", 225);
        AddConstVal("cplus::INTE", 224);
        AddConstVal("cplus::COMPOUND", 223);
        AddConstVal("cplus::CLASS_DECL", 222);
        AddConstVal("cplus::AFER", 221);
        AddConstVal("cplus::CATCH_ANSI", 220);
        AddConstVal("cplus::EXCEPT_ANSI_ALL", 219);
        AddConstVal("cplus::CAST", 218);
        AddConstVal("cplus::TYP_BIT", 217);
        AddConstVal("cplus::PROTECT", 216);
        AddConstVal("cplus::BASE_LIST", 215);
        AddConstVal("cplus::ATTRIBUTE_CALL", 214);
        AddConstVal("cplus::XOR_AFF", 213);
        AddConstVal("cplus::OR_AFF", 212);
        AddConstVal("cplus::AND_AFF", 211);
        AddConstVal("cplus::RSH_AFF", 210);
        AddConstVal("cplus::LSH_AFF", 209);
        AddConstVal("cplus::MIN_AFF", 208);
        AddConstVal("cplus::PLU_AFF", 207);
        AddConstVal("cplus::REM_AFF", 206);
        AddConstVal("cplus::DIV_AFF", 205);
        AddConstVal("cplus::MUL_AFF", 204);
        AddConstVal("cplus::AFF", 203);
        AddConstVal("cplus::ASM_CALL", 202);
        AddConstVal("cplus::EXP_ARRAY", 201);
        AddConstVal("cplus::VAR_LIST", 200);
        AddConstVal("cplus::TYP_LIST", 199);
        AddConstVal("cplus::TYP_AFF", 198);
        AddConstVal("cplus::ABST_DECLARATOR", 197);
        AddConstVal("cplus::DECLARATOR", 196);
        AddConstVal("cplus::POINPOINPOIN", 195);
        AddConstVal("cplus::LAND", 194);
        AddConstVal("cplus::INIT_NEW", 193);
        AddConstVal("cplus::VIRG", 192);
        AddConstVal("cplus::QUALIFIED", 191);
        AddConstVal("cplus::MINUS", 190);
        AddConstVal("cplus::TYP", 189);
        AddConstVal("cplus::PFER", 188);
        AddConstVal("cplus::DESTRUCT", 187);
        AddConstVal("cplus::TYP_REF", 186);
        AddConstVal("cplus::TYP_ADDR", 185);
        AddConstVal("cplus::INFE", 184);
        AddConstVal("cplus::USING", 183);
        AddConstVal("cplus::NAMESPACE", 182);
        AddConstVal("cplus::CATCH", 181);
        AddConstVal("cplus::DPOI", 180);
        AddConstVal("cplus::PUBLIC", 179);
        AddConstVal("cplus::PROTECTED", 178);
        AddConstVal("cplus::PRIVATE", 177);
        AddConstVal("cplus::CHAPEGAL", 176);
        AddConstVal("cplus::VBAREGAL", 175);
        AddConstVal("cplus::ETCOEGAL", 174);
        AddConstVal("cplus::SUPESUPEEGAL", 173);
        AddConstVal("cplus::INFEINFEEGAL", 172);
        AddConstVal("cplus::TIREEGAL", 171);
        AddConstVal("cplus::PLUSEGAL", 170);
        AddConstVal("cplus::POURCEGAL", 169);
        AddConstVal("cplus::ETOIEGAL", 168);
        AddConstVal("cplus::EGAL", 167);
        AddConstVal("cplus::ASM", 166);
        AddConstVal("cplus::CFER", 165);
        AddConstVal("cplus::VA_ARG", 164);
        AddConstVal("cplus::DELETE", 163);
        AddConstVal("cplus::NEW", 162);
        AddConstVal("cplus::SIZEOF", 161);
        AddConstVal("cplus::TIRETIRE", 160);
        AddConstVal("cplus::PLUSPLUS", 159);
        AddConstVal("cplus::EXCL", 158);
        AddConstVal("cplus::PLUS", 157);
        AddConstVal("cplus::TIRE", 156);
        AddConstVal("cplus::POUV", 155);
        AddConstVal("cplus::DEFAULT", 154);
        AddConstVal("cplus::CASE", 153);
        AddConstVal("cplus::TRY", 152);
        AddConstVal("cplus::THROW", 151);
        AddConstVal("cplus::FORALLSONS", 150);
        AddConstVal("cplus::WHILE", 149);
        AddConstVal("cplus::SWITCH", 148);
        AddConstVal("cplus::RETURN", 147);
        AddConstVal("cplus::PVIR", 146);
        AddConstVal("cplus::IF", 145);
        AddConstVal("cplus::FOR", 144);
        AddConstVal("cplus::AOUV", 143);
        AddConstVal("cplus::DO", 142);
        AddConstVal("cplus::CONTINUE", 141);
        AddConstVal("cplus::BREAK", 140);
        AddConstVal("cplus::OPERATOR", 139);
        AddConstVal("cplus::TILD", 138);
        AddConstVal("cplus::ETCO", 137);
        AddConstVal("cplus::ETOI", 136);
        AddConstVal("cplus::UNSIGNED", 135);
        AddConstVal("cplus::SIGNED", 134);
        AddConstVal("cplus::SHORT", 133);
        AddConstVal("cplus::LONG", 132);
        AddConstVal("cplus::CHAR", 131);
        AddConstVal("cplus::INT", 130);
        AddConstVal("cplus::DPOIDPOI", 129);
        AddConstVal("cplus::VOID", 128);
        AddConstVal("cplus::FLOAT", 127);
        AddConstVal("cplus::DOUBLE", 126);
        AddConstVal("cplus::DECLTYPE", 125);
        AddConstVal("cplus::TYPENAME", 124);
        AddConstVal("cplus::CLASS", 123);
        AddConstVal("cplus::UNION", 122);
        AddConstVal("cplus::STRUCT", 121);
        AddConstVal("cplus::ENUM", 120);
        AddConstVal("cplus::CONSTEXPR", 119);
        AddConstVal("cplus::CONST", 118);
        AddConstVal("cplus::FRIEND", 117);
        AddConstVal("cplus::VIRTUAL", 116);
        AddConstVal("cplus::INLINE", 115);
        AddConstVal("cplus::__ASM__", 114);
        AddConstVal("cplus::__ATTRIBUTE__", 113);
        AddConstVal("cplus::VOLATILE", 112);
        AddConstVal("cplus::REGISTER", 111);
        AddConstVal("cplus::EXTERN", 110);
        AddConstVal("cplus::STATIC", 109);
        AddConstVal("cplus::AUTO", 108);
        AddConstVal("cplus::FUNC_SPEC", 107);
        AddConstVal("cplus::TRY_UPPER", 106);
        AddConstVal("cplus::END_CATCH", 105);
        AddConstVal("cplus::END_CATCH_ALL", 104);
        AddConstVal("cplus::AND_CATCH", 103);
        AddConstVal("cplus::CATCH_UPPER", 102);
        AddConstVal("cplus::CATCH_ALL", 101);
        AddConstVal("cplus::END_MESSAGE_MAP", 100);
        AddConstVal("cplus::BEGIN_MESSAGE_MAP", 99);
        AddConstVal("cplus::DECLARE_MESSAGE_MAP", 98);
        AddConstVal("cplus::IMPLEMENT_SERIAL", 97);
        AddConstVal("cplus::IMPLEMENT_DYNCREATE", 96);
        AddConstVal("cplus::IMPLEMENT_DYNAMIC", 95);
        AddConstVal("cplus::DECLARE_SERIAL", 94);
        AddConstVal("cplus::DECLARE_DYNAMIC", 93);
        AddConstVal("cplus::PUSH_FUNCTION", 92);
        AddConstVal("cplus::PUSH_ARGUMENT", 91);
        AddConstVal("cplus::UNDEF_CONTENT", 90);
        AddConstVal("cplus::SMALL_PRAGMA_CONTENT", 89);
        AddConstVal("cplus::PRAGMA_CONTENT", 88);
        AddConstVal("cplus::PRAGMA_ENUM_VERT", 87);
        AddConstVal("cplus::PRAGMA_SPACE_ARROW", 86);
        AddConstVal("cplus::PRAGMA_PARAMETERS", 85);
        AddConstVal("cplus::PRAGMA_PARAMETERS_UNDER", 84);
        AddConstVal("cplus::PRAGMA_FUNC_HEADER", 83);
        AddConstVal("cplus::PRAGMA_INDENT_FUNCTION_TYPE", 82);
        AddConstVal("cplus::PRAGMA_COMMENT_PLUS", 81);
        AddConstVal("cplus::PRAGMA_COMMENT_END", 80);
        AddConstVal("cplus::PRAGMA_COMMENT_MIDDLE", 79);
        AddConstVal("cplus::PRAGMA_COMMENT_START", 78);
        AddConstVal("cplus::PRAGMA_MARGIN", 77);
        AddConstVal("cplus::PRAGMA_DECL_ALIGN", 76);
        AddConstVal("cplus::PRAGMA_ASSIGN_ALIGN", 75);
        AddConstVal("cplus::PRAGMA_SINGLE_SWITCH_INDENT", 74);
        AddConstVal("cplus::PRAGMA_SIMPLIFY", 73);
        AddConstVal("cplus::PRAGMA_BRACE_ALIGN", 72);
        AddConstVal("cplus::PRAGMA_MODE", 71);
        AddConstVal("cplus::PRAGMA_RANGE", 70);
        AddConstVal("cplus::PRAGMA_TAB", 69);
        AddConstVal("cplus::PRAGMA_TAB_DIRECTIVE", 68);
        AddConstVal("cplus::PRAGMA_CONFIG", 67);
        AddConstVal("cplus::PRAGMA_NOT_MANAGED", 66);
        AddConstVal("cplus::PRAGMA_MANAGED", 65);
        AddConstVal("cplus::PRAGMA_NOPRETTY", 64);
        AddConstVal("cplus::PRAGMA_PRETTY", 63);
        AddConstVal("cplus::INCLUDE_LOCAL", 62);
        AddConstVal("cplus::INCLUDE_SYS", 61);
        AddConstVal("cplus::END_LINE", 60);
        AddConstVal("cplus::DEFINE_NAME", 59);
        AddConstVal("cplus::DEFINED_NOT_CONTINUED", 58);
        AddConstVal("cplus::DEFINED_CONTINUED", 57);
        AddConstVal("cplus::POINT", 56);
        AddConstVal("cplus::SLAS", 55);
        AddConstVal("cplus::SLASEGAL", 54);
        AddConstVal("cplus::CARRIAGE_RETURN", 53);
        AddConstVal("cplus::SHARP_VAL", 52);
        AddConstVal("cplus::LINE_REFERENCE_DIR", 51);
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
        AddConstVal("cplus::FLOATVAL", 26);
        AddConstVal("cplus::UINTEGER", 25);
        AddConstVal("cplus::LINTEGER", 24);
        AddConstVal("cplus::LLINTEGER", 23);
        AddConstVal("cplus::ULLINTEGER", 22);
        AddConstVal("cplus::ULINTEGER", 21);
        AddConstVal("cplus::INTEGER", 20);
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
        AddConstVal("LIST", 0);
        listConst_cplus = listConst ;
        listConst = inter ;
        AddLang("cplus", _arityNode_cplus, listConst_cplus, bri_parse_entry_cplus, 357, (OVER_LANG *)0);
    }
}

/*Well done my boy */

