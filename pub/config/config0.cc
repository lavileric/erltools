/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "config.h"



#line 43 "config.met"

#line 43 "config.met"
int config::SortKeyWord (int defaultValue)
#line 43 "config.met"
{
#line 43 "config.met"
    register int Value;
#line 43 "config.met"
    return(defaultValue);
#line 43 "config.met"
    return(defaultValue);
#line 43 "config.met"
}
#line 43 "config.met"

#line 43 "config.met"
int config::UpSortKeyWord(int value) 
#line 43 "config.met"
{
#line 43 "config.met"
    register char * ptSource=lexEl.string();
#line 43 "config.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 43 "config.met"
    return SortKeyWord (value);
#line 43 "config.met"
}
#line 43 "config.met"
#line 7 "config.met"
int config::Lex ()
#line 7 "config.met"
{
#line 7 "config.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 7 "config.met"
        FreePos(lastContextPos);
#line 7 "config.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 7 "config.met"
    if ( tokenAhead && tokenAhead != -1)
#line 7 "config.met"
        ExtUnputBuf();
#line 7 "config.met"
    #ifdef DUMP_COORD
#line 7 "config.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 7 "config.met"
    #endif
#line 7 "config.met"
    
#line 7 "config.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 7 "config.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 7 "config.met"
#line 7 "config.met"
    ptStockBuf = -1;
#line 7 "config.met"
    while ((c == '\r'))
#line 7 "config.met"
        NextChar() ;
#line 7 "config.met"
    ptStockBuf = -1;
#line 7 "config.met"
    lexEl.Erase();
#line 7 "config.met"
    tokenAhead = 0;
#line 7 "config.met"
    oldLine=line,oldCol=col;
#line 7 "config.met"
    if ( !lexCallLex) {
#line 7 "config.met"
        PUT_COORD_CALL;
#line 7 "config.met"
    }
#line 7 "config.met"
#line 9 "config.met"
#line 10 "config.met"
    if((GetString("foo",1)&& NextChar())){
#line 10 "config.met"
#line 10 "config.met"
        {
#line 10 "config.met"
            firstOnLine = 0 ; 
#line 10 "config.met"
            tokenAhead =1;
#line 10 "config.met"
            lexEl.Value=FOO_LOW;
#line 10 "config.met"
            PUT_COORD_CALL;
#line 10 "config.met"
            return(1);
#line 10 "config.met"
        }
#line 10 "config.met"
    } else 
#line 10 "config.met"
#line 11 "config.met"
    if((GetString("FOO",1)&& NextChar())){
#line 11 "config.met"
#line 11 "config.met"
        {
#line 11 "config.met"
            firstOnLine = 0 ; 
#line 11 "config.met"
            tokenAhead =1;
#line 11 "config.met"
            lexEl.Value=FOO_UPP;
#line 11 "config.met"
            PUT_COORD_CALL;
#line 11 "config.met"
            return(1);
#line 11 "config.met"
        }
#line 11 "config.met"
    } else 
#line 11 "config.met"
     ;
#line 11 "config.met"
#line 13 "config.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 13 "config.met"
    lexEl.Erase();
#line 13 "config.met"
    tokenAhead = 0;
#line 13 "config.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 13 "config.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 13 "config.met"
#line 14 "config.met"
    {
#line 14 "config.met"
        lexEl . AddChar(c);
#line 14 "config.met"
        NextChar();
#line 14 "config.met"
    }
#line 14 "config.met"
#line 15 "config.met"
    {
#line 15 "config.met"
        firstOnLine = 0 ; 
#line 15 "config.met"
        tokenAhead =1;
#line 15 "config.met"
        lexEl.Value=CHARACTER;
#line 15 "config.met"
        PUT_COORD_CALL;
#line 15 "config.met"
        return(1);
#line 15 "config.met"
    }
#line 15 "config.met"
#line 15 "config.met"
#line 15 "config.met"
    
#line 16 "config.met"
    line = oldLine;
#line 16 "config.met"
    LEX_EXIT(0,"")
#line 16 "config.met"
    lexEl.Value = -1 ;
#line 16 "config.met"
    return -1 ; 
#line 16 "config.met"
}
#line 16 "config.met"

#line 16 "config.met"
/* 
-- 0 -- langage
    ALWAYS
-- 1 -- main_entry
    ALWAYS
-- 2 -- parse_entry
    ALWAYS
*/

signed char *config::_tokenArray [3] = {
    (signed char *) "\377\377"
    ,(signed char *) "\377\377"
    ,(signed char *) "\377\377"
};
typedef int (config::*(DEF_FUNC_TOKEN_ARRAY [3]))() ;
DEF_FUNC_TOKEN_ARRAY config::_tokenFuncArray = {
    /*langage                        */0,
    /*main_entry                     */0,
    /*parse_entry                    */0
};
int config::_tokenNbFuncArray [3] = {
    /*langage                        */0,
    /*main_entry                     */0,
    /*parse_entry                    */0
};
int _arityNode_config[] = {   2 , 1 , 1 , 1 , 1 , 2 };

    
STRINGELEM * listConst_config;
PPTREE bri_parse_entry_config(int error_free) {
return config() . parse_entry (error_free);
}

int config::init = 0 ;

void config::InitConst()
{
    if (!config::init) {
        config::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("config::CHARACTER", 8);
        AddConstVal("config::FOO_UPP", 7);
        AddConstVal("config::FOO_LOW", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_config = listConst;
        listConst = inter;
        AddLang("config",_arityNode_config,listConst_config,bri_parse_entry_config,5,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
