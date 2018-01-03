
#line 24 "chopper.ch"
/*************************************************************************/
#line 24 "chopper.ch"
/*                                                                       */
#line 24 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "chopper.ch"
/*                                                                       */
#line 24 "chopper.ch"
/*************************************************************************/
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#include "token.h"
#line 24 "chopper.ch"
#define decomp decomp_cplus
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#ifndef for_elem
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#define for_elem _for_elem
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#endif
#ifdef INCONNU
#line 24 "chopper.ch"
#line 24 "chopper.ch"
PTREE   for_elem ;
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#endif
#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>

DecompCplus *DecompCplus::ptDecomp = 0 ;
int nbOpenComment = 0 ;
char    *DecToIdent (PTREE) ;
int hasGotError = 0 ;

typedef struct type_def {
    char    *name ;
    struct type_def *next ;
}   TYP_DEF,    *PTYP_DEF ;

PTYP_DEF    listTypDef = (PTYP_DEF)0 ;

#line 46 "chopper.ch"
#line 46 "chopper.ch"
void AllocTypDef ( char *name )
#line 46 "chopper.ch"
{
#line 46 "chopper.ch"
#line 46 "chopper.ch"
    int _nextVal ;
#line 46 "chopper.ch"
#line 49 "chopper.ch"
    PTYP_DEF    point = (PTYP_DEF)malloc(sizeof(TYP_DEF));
#line 49 "chopper.ch"
#line 51 "chopper.ch"
    point -> next = listTypDef ;
#line 51 "chopper.ch"
#line 52 "chopper.ch"
    point -> name = AllocString(name);
#line 52 "chopper.ch"
#line 53 "chopper.ch"
    listTypDef = point ;
#line 53 "chopper.ch"
#line 54 "chopper.ch"
#line 54 "chopper.ch"
#line 54 "chopper.ch"
}
#line 54 "chopper.ch"

#line 58 "chopper.ch"
#line 58 "chopper.ch"
int IsTypDef ( char *name )
#line 58 "chopper.ch"
{
#line 58 "chopper.ch"
#line 58 "chopper.ch"
    int _nextVal ;
#line 58 "chopper.ch"
#line 61 "chopper.ch"
    register PTYP_DEF   point = listTypDef ;
#line 61 "chopper.ch"
#line 63 "chopper.ch"
    while ( point ) {
#line 63 "chopper.ch"
#line 64 "chopper.ch"
                        if ( !strcmp(point -> name, name) ) 
#line 64 "chopper.ch"
#line 65 "chopper.ch"
                            return 1 ;
#line 65 "chopper.ch"
#line 66 "chopper.ch"
                        point = point -> next ;
#line 66 "chopper.ch"
#line 67 "chopper.ch"
#line 67 "chopper.ch"
#line 67 "chopper.ch"
                     }
#line 67 "chopper.ch"
#line 68 "chopper.ch"
    return 0 ;
#line 68 "chopper.ch"
#line 69 "chopper.ch"
#line 69 "chopper.ch"
#line 69 "chopper.ch"
}
#line 69 "chopper.ch"

#line 73 "chopper.ch"
#line 73 "chopper.ch"
void TypDef ( PTREE tree )
#line 73 "chopper.ch"
{
#line 73 "chopper.ch"
    register PPTREE _inter ;
#line 73 "chopper.ch"
#line 73 "chopper.ch"
#line 73 "chopper.ch"
    int _nextVal ;
#line 73 "chopper.ch"
#line 76 "chopper.ch"
    PTREE   list = (PTREE)0 ;
#line 76 "chopper.ch"
#line 76 "chopper.ch"
#line 76 "chopper.ch"
    (list=tree);
#line 76 "chopper.ch"
#line 76 "chopper.ch"
#line 78 "chopper.ch"
    while ( list ) {
#line 78 "chopper.ch"
#line 79 "chopper.ch"
                        (tree=SonTree(list, 1));
#line 79 "chopper.ch"
#line 79 "chopper.ch"
#line 80 "chopper.ch"
                        (list=SonTree(list, 2));
#line 80 "chopper.ch"
#line 80 "chopper.ch"
#line 81 "chopper.ch"
                        while ( !(((_inter = (PPTREE)tree,1) && 
#line 81 "chopper.ch"
                                        (NumberTree(_inter) == TERM_TREE) &&
#line 81 "chopper.ch"
                                        1)) ) {
#line 81 "chopper.ch"
#line 82 "chopper.ch"
                                                if ( !(((_inter = (PPTREE)tree,1) && 
#line 82 "chopper.ch"
                                                            (NumberTree(_inter) == cplus::RANGE_MODIFIER) &&
#line 82 "chopper.ch"
                                                            ((tree=SonTree(_inter,2)),1) &&
#line 82 "chopper.ch"
                                                            1)) ) 
#line 82 "chopper.ch"
#line 83 "chopper.ch"
                                                    ((_inter = (PPTREE)tree,1) && 
#line 83 "chopper.ch"
                                                        ((tree=SonTree(_inter,1)),1) &&
#line 83 "chopper.ch"
                                                        1);
#line 83 "chopper.ch"
                                                    ;
#line 83 "chopper.ch"
#line 84 "chopper.ch"
#line 84 "chopper.ch"
#line 84 "chopper.ch"
                                              }
#line 84 "chopper.ch"
#line 85 "chopper.ch"
                        AllocTypDef(BrainyValue(tree));
#line 85 "chopper.ch"
#line 86 "chopper.ch"
#line 86 "chopper.ch"
#line 86 "chopper.ch"
                    }
#line 86 "chopper.ch"
#line 87 "chopper.ch"
#line 87 "chopper.ch"
#line 87 "chopper.ch"
}
#line 87 "chopper.ch"

typedef struct range_modif {
    char    *name ;
    struct range_modif *next ;
}   RANGE_MODIF,    *PRANGE_MODIF ;

PRANGE_MODIF    listRangeModifier = (PRANGE_MODIF)0 ;

#line 98 "chopper.ch"
#line 98 "chopper.ch"
static  void AllocRange ( char *name )
#line 98 "chopper.ch"
{
#line 98 "chopper.ch"
#line 98 "chopper.ch"
    int _nextVal ;
#line 98 "chopper.ch"
#line 101 "chopper.ch"
    PRANGE_MODIF    point = (PRANGE_MODIF)malloc(sizeof(RANGE_MODIF));
#line 101 "chopper.ch"
#line 103 "chopper.ch"
    point -> next = listRangeModifier ;
#line 103 "chopper.ch"
#line 104 "chopper.ch"
    point -> name = AllocString(name);
#line 104 "chopper.ch"
#line 105 "chopper.ch"
    listRangeModifier = point ;
#line 105 "chopper.ch"
#line 106 "chopper.ch"
#line 106 "chopper.ch"
#line 106 "chopper.ch"
}
#line 106 "chopper.ch"

#line 110 "chopper.ch"
#line 110 "chopper.ch"
int IsRange ( char *name )
#line 110 "chopper.ch"
{
#line 110 "chopper.ch"
#line 110 "chopper.ch"
    int _nextVal ;
#line 110 "chopper.ch"
#line 113 "chopper.ch"
    register PRANGE_MODIF   point = listRangeModifier ;
#line 113 "chopper.ch"
#line 115 "chopper.ch"
    while ( point ) {
#line 115 "chopper.ch"
#line 116 "chopper.ch"
                        if ( !strcmp(point -> name, name) ) 
#line 116 "chopper.ch"
#line 117 "chopper.ch"
                            return 1 ;
#line 117 "chopper.ch"
#line 118 "chopper.ch"
                        point = point -> next ;
#line 118 "chopper.ch"
#line 119 "chopper.ch"
#line 119 "chopper.ch"
#line 119 "chopper.ch"
                     }
#line 119 "chopper.ch"
#line 120 "chopper.ch"
    return 0 ;
#line 120 "chopper.ch"
#line 121 "chopper.ch"
#line 121 "chopper.ch"
#line 121 "chopper.ch"
}
#line 121 "chopper.ch"

#line 125 "chopper.ch"
#line 125 "chopper.ch"
void Range ( PTREE tree )
#line 125 "chopper.ch"
{
#line 125 "chopper.ch"
#line 125 "chopper.ch"
    int _nextVal ;
#line 125 "chopper.ch"
#line 128 "chopper.ch"
    AllocRange(BrainyValue(tree));
#line 128 "chopper.ch"
#line 129 "chopper.ch"
#line 129 "chopper.ch"
#line 129 "chopper.ch"
}
#line 129 "chopper.ch"

#line 133 "chopper.ch"
#line 133 "chopper.ch"
void AnalyseRange ( char *content )
#line 133 "chopper.ch"
{
#line 133 "chopper.ch"
#line 133 "chopper.ch"
    int _nextVal ;
#line 133 "chopper.ch"
#line 136 "chopper.ch"
    AllocRange(content);
#line 136 "chopper.ch"
#line 137 "chopper.ch"
#line 137 "chopper.ch"
#line 137 "chopper.ch"
}
#line 137 "chopper.ch"

#line 141 "chopper.ch"
#line 141 "chopper.ch"
void AnalyzeTab ( PPTREE tree )
#line 141 "chopper.ch"
{
#line 141 "chopper.ch"
#line 141 "chopper.ch"
    int _nextVal ;
#line 141 "chopper.ch"
#line 144 "chopper.ch"
    int i ;
#line 144 "chopper.ch"
#line 146 "chopper.ch"
    sscanf(BrainyValue(tree), "%d", &i);
#line 146 "chopper.ch"
#line 147 "chopper.ch"
    tabValue = i ;
#line 147 "chopper.ch"
#line 148 "chopper.ch"
#line 148 "chopper.ch"
#line 148 "chopper.ch"
}
#line 148 "chopper.ch"

#line 152 "chopper.ch"
#line 152 "chopper.ch"
void AnalyzeMargin ( PPTREE tree )
#line 152 "chopper.ch"
{
#line 152 "chopper.ch"
#line 152 "chopper.ch"
    int _nextVal ;
#line 152 "chopper.ch"
#line 155 "chopper.ch"
    int i ;
#line 155 "chopper.ch"
#line 157 "chopper.ch"
    sscanf(BrainyValue(tree), "%d", &i);
#line 157 "chopper.ch"
#line 158 "chopper.ch"
    rightMargin = i ;
#line 158 "chopper.ch"
#line 159 "chopper.ch"
#line 159 "chopper.ch"
#line 159 "chopper.ch"
}
#line 159 "chopper.ch"

int ansiMode = 0 ;

#line 166 "chopper.ch"
#line 166 "chopper.ch"
void AnalyzeMode ( PPTREE tree )
#line 166 "chopper.ch"
{
#line 166 "chopper.ch"
#line 166 "chopper.ch"
    int _nextVal ;
#line 166 "chopper.ch"
#line 168 "chopper.ch"
    ansiMode = !strcmp(BrainyValue(tree), "ansi");
#line 168 "chopper.ch"
#line 169 "chopper.ch"
#line 169 "chopper.ch"
#line 169 "chopper.ch"
}
#line 169 "chopper.ch"

bool    enumVert = false ;

#line 176 "chopper.ch"
#line 176 "chopper.ch"
void AnalyzeEnumVert ( PPTREE tree )
#line 176 "chopper.ch"
{
#line 176 "chopper.ch"
#line 176 "chopper.ch"
    int _nextVal ;
#line 176 "chopper.ch"
#line 178 "chopper.ch"
    EString mode = EString(Value(tree)).ToUpper();
#line 178 "chopper.ch"
#line 180 "chopper.ch"
    enumVert = mode == "TRUE";
#line 180 "chopper.ch"
#line 181 "chopper.ch"
#line 181 "chopper.ch"
#line 181 "chopper.ch"
}
#line 181 "chopper.ch"

bool    parameterUnderTab = false ;

#line 188 "chopper.ch"
#line 188 "chopper.ch"
void AnalyzeParameterFunctUnd ( PPTREE tree )
#line 188 "chopper.ch"
{
#line 188 "chopper.ch"
#line 188 "chopper.ch"
    int _nextVal ;
#line 188 "chopper.ch"
#line 190 "chopper.ch"
    EString mode = EString(Value(tree)).ToUpper();
#line 190 "chopper.ch"
#line 192 "chopper.ch"
    parameterUnderTab = mode == "TRUE";
#line 192 "chopper.ch"
#line 193 "chopper.ch"
#line 193 "chopper.ch"
#line 193 "chopper.ch"
}
#line 193 "chopper.ch"

bool    tabDirective = true ;

#line 200 "chopper.ch"
#line 200 "chopper.ch"
void AnalyzeTabDirective ( PPTREE tree )
#line 200 "chopper.ch"
{
#line 200 "chopper.ch"
#line 200 "chopper.ch"
    int _nextVal ;
#line 200 "chopper.ch"
#line 202 "chopper.ch"
    EString mode = EString(Value(tree)).ToUpper();
#line 202 "chopper.ch"
#line 204 "chopper.ch"
    tabDirective = mode == "TRUE";
#line 204 "chopper.ch"
#line 205 "chopper.ch"
#line 205 "chopper.ch"
#line 205 "chopper.ch"
}
#line 205 "chopper.ch"

bool    spaceArrow = false ;

#line 212 "chopper.ch"
#line 212 "chopper.ch"
void AnalyzeSpaceArrow ( PPTREE tree )
#line 212 "chopper.ch"
{
#line 212 "chopper.ch"
#line 212 "chopper.ch"
    int _nextVal ;
#line 212 "chopper.ch"
#line 214 "chopper.ch"
    EString mode = EString(Value(tree)).ToUpper();
#line 214 "chopper.ch"
#line 216 "chopper.ch"
    spaceArrow = mode == "TRUE";
#line 216 "chopper.ch"
#line 217 "chopper.ch"
#line 217 "chopper.ch"
#line 217 "chopper.ch"
}
#line 217 "chopper.ch"

bool    braceAlign = false ;
bool    braceAlignTabFunc = false ;
bool    braceAlignNoFunc = false ;

#line 226 "chopper.ch"
#line 226 "chopper.ch"
void AnalyzeBraceAlign ( PPTREE tree )
#line 226 "chopper.ch"
{
#line 226 "chopper.ch"
#line 226 "chopper.ch"
    int _nextVal ;
#line 226 "chopper.ch"
#line 228 "chopper.ch"
    braceAlign = !strcmp(BrainyValue(tree), "code");
#line 228 "chopper.ch"
#line 229 "chopper.ch"
    braceAlignTabFunc = !strcmp(BrainyValue(tree), "code_tab_func");
#line 229 "chopper.ch"
#line 230 "chopper.ch"
    braceAlignNoFunc = !strcmp(BrainyValue(tree), "code_no_func");
#line 230 "chopper.ch"
#line 231 "chopper.ch"
    if ( braceAlignTabFunc ) {
#line 231 "chopper.ch"
#line 232 "chopper.ch"
                                braceAlign = true ;
#line 232 "chopper.ch"
#line 233 "chopper.ch"
                                braceAlignNoFunc = false ;
#line 233 "chopper.ch"
#line 234 "chopper.ch"
#line 234 "chopper.ch"
#line 234 "chopper.ch"
                              }
#line 234 "chopper.ch"
#line 235 "chopper.ch"
    if ( braceAlignNoFunc ) {
#line 235 "chopper.ch"
#line 236 "chopper.ch"
                                braceAlign = true ;
#line 236 "chopper.ch"
#line 237 "chopper.ch"
                                braceAlignTabFunc = false ;
#line 237 "chopper.ch"
#line 238 "chopper.ch"
#line 238 "chopper.ch"
#line 238 "chopper.ch"
                             }
#line 238 "chopper.ch"
#line 239 "chopper.ch"
    if ( braceAlign || braceAlignTabFunc || braceAlignNoFunc ) 
#line 239 "chopper.ch"
#line 240 "chopper.ch"
        ansiMode = 1 ;
#line 240 "chopper.ch"
#line 241 "chopper.ch"
#line 241 "chopper.ch"
#line 241 "chopper.ch"
}
#line 241 "chopper.ch"

int indentFunctionType = 0 ;

#line 248 "chopper.ch"
#line 248 "chopper.ch"
void AnalyzeIndentFunctionType ( PPTREE tree )
#line 248 "chopper.ch"
{
#line 248 "chopper.ch"
#line 248 "chopper.ch"
    int _nextVal ;
#line 248 "chopper.ch"
#line 250 "chopper.ch"
    indentFunctionType = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 250 "chopper.ch"
#line 251 "chopper.ch"
#line 251 "chopper.ch"
#line 251 "chopper.ch"
}
#line 251 "chopper.ch"

int assignAlign = 0 ;

#line 258 "chopper.ch"
#line 258 "chopper.ch"
void AnalyzeAssignAlign ( PPTREE tree )
#line 258 "chopper.ch"
{
#line 258 "chopper.ch"
#line 258 "chopper.ch"
    int _nextVal ;
#line 258 "chopper.ch"
#line 260 "chopper.ch"
    assignAlign = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 260 "chopper.ch"
#line 261 "chopper.ch"
#line 261 "chopper.ch"
#line 261 "chopper.ch"
}
#line 261 "chopper.ch"

int declAlign = 1 ;

#line 268 "chopper.ch"
#line 268 "chopper.ch"
void AnalyzeDeclAlign ( PPTREE tree )
#line 268 "chopper.ch"
{
#line 268 "chopper.ch"
#line 268 "chopper.ch"
    int _nextVal ;
#line 268 "chopper.ch"
#line 270 "chopper.ch"
    declAlign = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 270 "chopper.ch"
#line 271 "chopper.ch"
#line 271 "chopper.ch"
#line 271 "chopper.ch"
}
#line 271 "chopper.ch"

#line 275 "chopper.ch"
#line 275 "chopper.ch"
void AnalyzeSimplify ( PPTREE tree )
#line 275 "chopper.ch"
{
#line 275 "chopper.ch"
#line 275 "chopper.ch"
    int _nextVal ;
#line 275 "chopper.ch"
#line 278 "chopper.ch"
    DecompCplus::ptDecomp -> simplifyExpression = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 278 "chopper.ch"
#line 280 "chopper.ch"
#line 280 "chopper.ch"
#line 280 "chopper.ch"
}
#line 280 "chopper.ch"

int singleSwitchIndent = 1 ;

#line 288 "chopper.ch"
#line 288 "chopper.ch"
void AnalyzeSingleSwitchIndent ( PPTREE tree )
#line 288 "chopper.ch"
{
#line 288 "chopper.ch"
#line 288 "chopper.ch"
    int _nextVal ;
#line 288 "chopper.ch"
#line 290 "chopper.ch"
    singleSwitchIndent = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 290 "chopper.ch"
#line 291 "chopper.ch"
#line 291 "chopper.ch"
#line 291 "chopper.ch"
}
#line 291 "chopper.ch"

#line 297 "chopper.ch"
#line 297 "chopper.ch"
void AnalyzeComment ( PPTREE tree )
#line 297 "chopper.ch"
{
#line 297 "chopper.ch"
#line 297 "chopper.ch"
    int _nextVal ;
#line 297 "chopper.ch"
#line 300 "chopper.ch"
    tree = sontree(tree, 1);
#line 300 "chopper.ch"
#line 301 "chopper.ch"
    switch ( NumberTree(tree) ) {
#line 301 "chopper.ch"
#line 302 "chopper.ch"
        case COMMENT_START_cplus : 
#line 302 "chopper.ch"
#line 303 "chopper.ch"
            DecompCplus::ptDecomp -> startComment = AllocString(BrainyValue(tree));
#line 303 "chopper.ch"
#line 304 "chopper.ch"
            break ;
#line 304 "chopper.ch"
#line 305 "chopper.ch"
        case COMMENT_MIDDLE_cplus : 
#line 305 "chopper.ch"
#line 306 "chopper.ch"
            DecompCplus::ptDecomp -> middleComment = AllocString(BrainyValue(tree));
#line 306 "chopper.ch"
#line 307 "chopper.ch"
            break ;
#line 307 "chopper.ch"
#line 308 "chopper.ch"
        case COMMENT_END_cplus : 
#line 308 "chopper.ch"
#line 309 "chopper.ch"
            DecompCplus::ptDecomp -> endComment = AllocString(BrainyValue(tree));
#line 309 "chopper.ch"
#line 310 "chopper.ch"
            break ;
#line 310 "chopper.ch"
#line 311 "chopper.ch"
        case COMMENT_PLUS_cplus : 
#line 311 "chopper.ch"
#line 312 "chopper.ch"
            DecompCplus::ptDecomp -> plusComment = AllocString(BrainyValue(tree));
#line 312 "chopper.ch"
#line 313 "chopper.ch"
            break ;
#line 313 "chopper.ch"
    }
#line 313 "chopper.ch"
#line 313 "chopper.ch"
#line 315 "chopper.ch"
#line 315 "chopper.ch"
#line 315 "chopper.ch"
}
#line 315 "chopper.ch"

#line 319 "chopper.ch"
#line 319 "chopper.ch"
char *DecToIdent ( PTREE tree )
#line 319 "chopper.ch"
{
#line 319 "chopper.ch"
#line 319 "chopper.ch"
    int _nextVal ;
#line 319 "chopper.ch"
#line 322 "chopper.ch"
    while ( NumberTree(tree) == RANGE_MODIFIER_cplus ) 
#line 322 "chopper.ch"
#line 323 "chopper.ch"
        (tree=SonTree(tree, 2));
#line 323 "chopper.ch"
#line 323 "chopper.ch"
#line 324 "chopper.ch"
    return AllocString(BrainyValue(tree));
#line 324 "chopper.ch"
#line 325 "chopper.ch"
#line 325 "chopper.ch"
#line 325 "chopper.ch"
}
#line 325 "chopper.ch"

extern int  ptOldBuf, line, col, posBufInput, lBufInput, tokenAhead ;
extern long posFileInput ;

#line 332 "chopper.ch"
#line 332 "chopper.ch"
void ReadIncludeS ( const char *name, int here )
#line 332 "chopper.ch"
{
#line 332 "chopper.ch"
#line 332 "chopper.ch"
    int _nextVal ;
#line 332 "chopper.ch"
#line 335 "chopper.ch"
    FreeTree(QuickCplus().ReadInclude(name, here));
#line 335 "chopper.ch"
#line 336 "chopper.ch"
#line 336 "chopper.ch"
#line 336 "chopper.ch"
}
#line 336 "chopper.ch"

#line 340 "chopper.ch"
#line 340 "chopper.ch"
void AnalyzeFuncHeader ( PPTREE tree )
#line 340 "chopper.ch"
{
#line 340 "chopper.ch"
#line 340 "chopper.ch"
    int _nextVal ;
#line 340 "chopper.ch"
#line 343 "chopper.ch"
    DecompCplus::ptDecomp -> funcHeader = AllocString(BrainyValue(tree));
#line 343 "chopper.ch"
#line 344 "chopper.ch"
#line 344 "chopper.ch"
#line 344 "chopper.ch"
}
#line 344 "chopper.ch"

#line 348 "chopper.ch"
#line 348 "chopper.ch"
void AnalyzeParameters ( PPTREE tree )
#line 348 "chopper.ch"
{
#line 348 "chopper.ch"
#line 348 "chopper.ch"
    int _nextVal ;
#line 348 "chopper.ch"
#line 351 "chopper.ch"
    DecompCplus::ptDecomp -> parameters = AllocString(BrainyValue(tree));
#line 351 "chopper.ch"
#line 352 "chopper.ch"
#line 352 "chopper.ch"
#line 352 "chopper.ch"
}
#line 352 "chopper.ch"

#line 352 "chopper.ch"
#line 352 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 352 "chopper.ch"
/*Well done my boy */ 
#line 352 "chopper.ch"

