/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "pretty.h"



#line 15 "pretty.met"

#line 15 "pretty.met"
int pretty::SortKeyWord (int defaultValue)
#line 15 "pretty.met"
{
#line 15 "pretty.met"
    register int Value;
#line 15 "pretty.met"
    if(!strcmp(lexEl.string(),"+____------____")) {
#line 15 "pretty.met"
        return(PLUS____TIRETIRETIRETIRETIRETIRE____) ;
#line 15 "pretty.met"
    }
#line 15 "pretty.met"
    return(defaultValue);
#line 15 "pretty.met"
}
#line 15 "pretty.met"

#line 15 "pretty.met"
int pretty::UpSortKeyWord(int value) 
#line 15 "pretty.met"
{
#line 15 "pretty.met"
    register char * ptSource=lexEl.string();
#line 15 "pretty.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 15 "pretty.met"
    return SortKeyWord (value);
#line 15 "pretty.met"
}
#line 15 "pretty.met"
/* 
-- 0 -- bidon
    ALWAYS
-- 1 -- parse_entry
    ALWAYS
*/

signed char *pretty::_tokenArray [2] = {
    (signed char *) "\377\377\377"
    ,(signed char *) "\377\377\377"
};
typedef int (pretty::*(DEF_FUNC_TOKEN_ARRAY [2]))() ;
DEF_FUNC_TOKEN_ARRAY pretty::_tokenFuncArray = {
    /*bidon                          */0,
    /*parse_entry                    */0
};
int pretty::_tokenNbFuncArray [2] = {
    /*bidon                          */0,
    /*parse_entry                    */0
};
int _arityNode_pretty[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                            , 0 , 1 , 1 , 1 };

    
STRINGELEM * listConst_pretty;
PPTREE bri_parse_entry_pretty(int error_free) {
return pretty() . parse_entry (error_free);
}

int pretty::init = 0 ;

void pretty::InitConst()
{
    if (!pretty::init) {
        pretty::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("pretty::GOTO_REL", 15);
        AddConstVal("pretty::GOTO", 14);
        AddConstVal("pretty::STR", 13);
        AddConstVal("pretty::UNMARK", 12);
        AddConstVal("pretty::MARK", 11);
        AddConstVal("pretty::TAB_VIRT", 10);
        AddConstVal("pretty::TAB", 9);
        AddConstVal("pretty::NEWLINE", 8);
        AddConstVal("pretty::ATTRIBUTS", 7);
        AddConstVal("pretty::PLUS____TIRETIRETIRETIRETIRETIRE____", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_pretty = listConst;
        listConst = inter;
        AddLang("pretty",_arityNode_pretty,listConst_pretty,bri_parse_entry_pretty,15,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
