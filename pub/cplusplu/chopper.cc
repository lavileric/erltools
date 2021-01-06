
#line 23 "chopper.ch"
/*************************************************************************/
#line 23 "chopper.ch"
/*                                                                       */
#line 23 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 23 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 23 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 23 "chopper.ch"
/*                                                                       */
#line 23 "chopper.ch"
/*************************************************************************/
#line 23 "chopper.ch"

#line 23 "chopper.ch"
#include "token.h"
#line 23 "chopper.ch"
#define decomp decomp_cplus
#line 23 "chopper.ch"

#line 23 "chopper.ch"
#ifndef for_elem
#line 23 "chopper.ch"
#line 23 "chopper.ch"
#define for_elem _for_elem

#line 23 "chopper.ch"
#line 23 "chopper.ch"

#line 23 "chopper.ch"
#endif
#ifdef INCONNU
#line 23 "chopper.ch"
#line 23 "chopper.ch"
PTREE   for_elem ;
#line 23 "chopper.ch"

#line 23 "chopper.ch"
#line 23 "chopper.ch"

#line 23 "chopper.ch"
#endif
#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>

class SDecomp : public DecompCplus {
    
    public :
    
#line 35 "chopper.ch"
        
#line 35 "chopper.ch"
        SDecomp ()
#line 35 "chopper.ch"
            : DecompCplus()
#line 35 "chopper.ch"
        
#line 35 "chopper.ch"
        {
#line 35 "chopper.ch"
#line 35 "chopper.ch"
            int _nextVal ;
            
#line 35 "chopper.ch"
#line 38 "chopper.ch"
            
#line 38 "chopper.ch"
#line 38 "chopper.ch"
        }
#line 38 "chopper.ch"
        
#line 40 "chopper.ch"
        
#line 40 "chopper.ch"
        virtual ~SDecomp ()
#line 40 "chopper.ch"
        {
#line 40 "chopper.ch"
#line 40 "chopper.ch"
            int _nextVal ;
            
#line 40 "chopper.ch"
#line 42 "chopper.ch"
            
#line 42 "chopper.ch"
#line 42 "chopper.ch"
        }
#line 42 "chopper.ch"
        
#line 44 "chopper.ch"
        
#line 44 "chopper.ch"
        virtual void copy ( void )
#line 44 "chopper.ch"
        {
#line 44 "chopper.ch"
#line 44 "chopper.ch"
            int _nextVal ;
            
#line 44 "chopper.ch"
#line 46 "chopper.ch"
            
#line 46 "chopper.ch"
#line 46 "chopper.ch"
        }
#line 46 "chopper.ch"
        
};
DecompCplus *DecompCplus::ptDecomp = 0 ;
int nbOpenComment = 0 ;
char    *DecToIdent (PTREE) ;
int hasGotError = 0 ;

typedef struct type_def {
    char    *name ;
    struct type_def *next ;
}   TYP_DEF,    *PTYP_DEF ;

PTYP_DEF    listTypDef = (PTYP_DEF)0 ;

#line 62 "chopper.ch"

#line 62 "chopper.ch"
void AllocTypDef ( char *name )
#line 62 "chopper.ch"
{
#line 62 "chopper.ch"
#line 62 "chopper.ch"
    int _nextVal ;
    
#line 62 "chopper.ch"
#line 65 "chopper.ch"
    
    PTYP_DEF    point = (PTYP_DEF)malloc(sizeof(TYP_DEF));
    
#line 65 "chopper.ch"
#line 67 "chopper.ch"
    point -> next = listTypDef ;
#line 67 "chopper.ch"
#line 68 "chopper.ch"
    point -> name = AllocString(name);
#line 68 "chopper.ch"
#line 69 "chopper.ch"
    listTypDef = point ;
#line 69 "chopper.ch"
#line 70 "chopper.ch"
    
#line 70 "chopper.ch"
#line 70 "chopper.ch"
}
#line 70 "chopper.ch"

#line 74 "chopper.ch"

#line 74 "chopper.ch"
int IsTypDef ( char *name )
#line 74 "chopper.ch"
{
#line 74 "chopper.ch"
#line 74 "chopper.ch"
    int _nextVal ;
    
#line 74 "chopper.ch"
#line 77 "chopper.ch"
    
    register PTYP_DEF   point = listTypDef ;
    
#line 77 "chopper.ch"
#line 79 "chopper.ch"
    while ( point ) {
#line 79 "chopper.ch"
#line 80 "chopper.ch"
                        if ( !strcmp(point -> name, name) ) 
#line 80 "chopper.ch"
#line 81 "chopper.ch"
                            return 1 ;
                        
#line 81 "chopper.ch"
#line 82 "chopper.ch"
                        point = point -> next ;
#line 82 "chopper.ch"
#line 83 "chopper.ch"
                        
#line 83 "chopper.ch"
#line 83 "chopper.ch"
                     }
#line 83 "chopper.ch"
#line 84 "chopper.ch"
    return 0 ;
    
#line 84 "chopper.ch"
#line 85 "chopper.ch"
    
#line 85 "chopper.ch"
#line 85 "chopper.ch"
}
#line 85 "chopper.ch"

#line 89 "chopper.ch"

#line 89 "chopper.ch"
void TypDef ( PTREE tree )
#line 89 "chopper.ch"
{
#line 89 "chopper.ch"
    register PPTREE _inter ;
#line 89 "chopper.ch"

#line 89 "chopper.ch"
#line 89 "chopper.ch"
    int _nextVal ;
    
#line 89 "chopper.ch"
#line 92 "chopper.ch"
    
    PTREE   list = (PTREE)0 ;
#line 92 "chopper.ch"
    
#line 92 "chopper.ch"
#line 92 "chopper.ch"
    (list=tree);
#line 92 "chopper.ch"
    
#line 92 "chopper.ch"
#line 94 "chopper.ch"
    while ( list ) {
#line 94 "chopper.ch"
#line 95 "chopper.ch"
                        (tree=SonTree(list, 1));
#line 95 "chopper.ch"
                        
#line 95 "chopper.ch"
#line 96 "chopper.ch"
                        (list=SonTree(list, 2));
#line 96 "chopper.ch"
                        
#line 96 "chopper.ch"
#line 97 "chopper.ch"
                        while ( !(((_inter = (PPTREE)tree,1) && 
#line 97 "chopper.ch"
                                        (NumberTree(_inter) == TERM_TREE) &&
#line 97 "chopper.ch"
                                        1)) ) {
#line 97 "chopper.ch"
#line 98 "chopper.ch"
                                                if ( !(((_inter = (PPTREE)tree,1) && 
#line 98 "chopper.ch"
                                                            (NumberTree(_inter) == cplus::RANGE_MODIFIER) &&
#line 98 "chopper.ch"
                                                            ((tree=SonTree(_inter,2)),1) &&
#line 98 "chopper.ch"
                                                            1)) ) 
#line 98 "chopper.ch"
#line 99 "chopper.ch"
                                                    ((_inter = (PPTREE)tree,1) && 
#line 99 "chopper.ch"
                                                        ((tree=SonTree(_inter,1)),1) &&
#line 99 "chopper.ch"
                                                        1);
#line 99 "chopper.ch"
                                                    ;
#line 99 "chopper.ch"
#line 100 "chopper.ch"
                                                
#line 100 "chopper.ch"
#line 100 "chopper.ch"
                                              }
#line 100 "chopper.ch"
#line 101 "chopper.ch"
                        AllocTypDef(BrainyValue(tree));
#line 101 "chopper.ch"
#line 102 "chopper.ch"
                        
#line 102 "chopper.ch"
#line 102 "chopper.ch"
                    }
#line 102 "chopper.ch"
#line 103 "chopper.ch"
    
#line 103 "chopper.ch"
#line 103 "chopper.ch"
}
#line 103 "chopper.ch"

typedef struct range_modif {
    char    *name ;
    struct range_modif *next ;
}   RANGE_MODIF,    *PRANGE_MODIF ;

PRANGE_MODIF    listRangeModifier = (PRANGE_MODIF)0 ;

#line 114 "chopper.ch"

#line 114 "chopper.ch"
static  void AllocRange ( char *name )
#line 114 "chopper.ch"
{
#line 114 "chopper.ch"
#line 114 "chopper.ch"
    int _nextVal ;
    
#line 114 "chopper.ch"
#line 117 "chopper.ch"
    
    PRANGE_MODIF    point = (PRANGE_MODIF)malloc(sizeof(RANGE_MODIF));
    
#line 117 "chopper.ch"
#line 119 "chopper.ch"
    point -> next = listRangeModifier ;
#line 119 "chopper.ch"
#line 120 "chopper.ch"
    point -> name = AllocString(name);
#line 120 "chopper.ch"
#line 121 "chopper.ch"
    listRangeModifier = point ;
#line 121 "chopper.ch"
#line 122 "chopper.ch"
    
#line 122 "chopper.ch"
#line 122 "chopper.ch"
}
#line 122 "chopper.ch"

#line 126 "chopper.ch"

#line 126 "chopper.ch"
int IsRange ( char *name )
#line 126 "chopper.ch"
{
#line 126 "chopper.ch"
#line 126 "chopper.ch"
    int _nextVal ;
    
#line 126 "chopper.ch"
#line 129 "chopper.ch"
    
    register PRANGE_MODIF   point = listRangeModifier ;
    
#line 129 "chopper.ch"
#line 131 "chopper.ch"
    while ( point ) {
#line 131 "chopper.ch"
#line 132 "chopper.ch"
                        if ( !strcmp(point -> name, name) ) 
#line 132 "chopper.ch"
#line 133 "chopper.ch"
                            return 1 ;
                        
#line 133 "chopper.ch"
#line 134 "chopper.ch"
                        point = point -> next ;
#line 134 "chopper.ch"
#line 135 "chopper.ch"
                        
#line 135 "chopper.ch"
#line 135 "chopper.ch"
                     }
#line 135 "chopper.ch"
#line 136 "chopper.ch"
    return 0 ;
    
#line 136 "chopper.ch"
#line 137 "chopper.ch"
    
#line 137 "chopper.ch"
#line 137 "chopper.ch"
}
#line 137 "chopper.ch"

#line 141 "chopper.ch"

#line 141 "chopper.ch"
void Range ( PTREE tree )
#line 141 "chopper.ch"
{
#line 141 "chopper.ch"
#line 141 "chopper.ch"
    int _nextVal ;
    
#line 141 "chopper.ch"
#line 144 "chopper.ch"
    AllocRange(BrainyValue(tree));
#line 144 "chopper.ch"
#line 145 "chopper.ch"
    
#line 145 "chopper.ch"
#line 145 "chopper.ch"
}
#line 145 "chopper.ch"

#line 149 "chopper.ch"

#line 149 "chopper.ch"
void AnalyseRange ( char *content )
#line 149 "chopper.ch"
{
#line 149 "chopper.ch"
#line 149 "chopper.ch"
    int _nextVal ;
    
#line 149 "chopper.ch"
#line 152 "chopper.ch"
    AllocRange(content);
#line 152 "chopper.ch"
#line 153 "chopper.ch"
    
#line 153 "chopper.ch"
#line 153 "chopper.ch"
}
#line 153 "chopper.ch"

#line 157 "chopper.ch"

#line 157 "chopper.ch"
void AnalyzeTab ( PPTREE tree )
#line 157 "chopper.ch"
{
#line 157 "chopper.ch"
#line 157 "chopper.ch"
    int _nextVal ;
    
#line 157 "chopper.ch"
#line 160 "chopper.ch"
    
    int i ;
    
#line 160 "chopper.ch"
#line 162 "chopper.ch"
    sscanf(BrainyValue(tree), "%d", &i);
#line 162 "chopper.ch"
#line 163 "chopper.ch"
    tabValue = i ;
#line 163 "chopper.ch"
#line 164 "chopper.ch"
    
#line 164 "chopper.ch"
#line 164 "chopper.ch"
}
#line 164 "chopper.ch"

#line 168 "chopper.ch"

#line 168 "chopper.ch"
void AnalyzeMargin ( PPTREE tree )
#line 168 "chopper.ch"
{
#line 168 "chopper.ch"
#line 168 "chopper.ch"
    int _nextVal ;
    
#line 168 "chopper.ch"
#line 171 "chopper.ch"
    
    int i ;
    
#line 171 "chopper.ch"
#line 173 "chopper.ch"
    sscanf(BrainyValue(tree), "%d", &i);
#line 173 "chopper.ch"
#line 174 "chopper.ch"
    rightMargin = i ;
#line 174 "chopper.ch"
#line 175 "chopper.ch"
    
#line 175 "chopper.ch"
#line 175 "chopper.ch"
}
#line 175 "chopper.ch"

int ansiMode = 0 ;

#line 182 "chopper.ch"

#line 182 "chopper.ch"
void AnalyzeMode ( PPTREE tree )
#line 182 "chopper.ch"
{
#line 182 "chopper.ch"
#line 182 "chopper.ch"
    int _nextVal ;
    
#line 182 "chopper.ch"
#line 184 "chopper.ch"
    ansiMode = !strcmp(BrainyValue(tree), "ansi");
#line 184 "chopper.ch"
#line 185 "chopper.ch"
    
#line 185 "chopper.ch"
#line 185 "chopper.ch"
}
#line 185 "chopper.ch"

bool    enumVert = false ;

#line 192 "chopper.ch"

#line 192 "chopper.ch"
void AnalyzeEnumVert ( PPTREE tree )
#line 192 "chopper.ch"
{
#line 192 "chopper.ch"
#line 192 "chopper.ch"
    int _nextVal ;
    
#line 192 "chopper.ch"
#line 194 "chopper.ch"
    
    EString mode = EString(Value(tree)).ToUpper();
    
#line 194 "chopper.ch"
#line 196 "chopper.ch"
    enumVert = mode == "TRUE";
#line 196 "chopper.ch"
#line 197 "chopper.ch"
    
#line 197 "chopper.ch"
#line 197 "chopper.ch"
}
#line 197 "chopper.ch"

bool    parameterUnderTab = false ;

#line 204 "chopper.ch"

#line 204 "chopper.ch"
void AnalyzeParameterFunctUnd ( PPTREE tree )
#line 204 "chopper.ch"
{
#line 204 "chopper.ch"
#line 204 "chopper.ch"
    int _nextVal ;
    
#line 204 "chopper.ch"
#line 206 "chopper.ch"
    
    EString mode = EString(Value(tree)).ToUpper();
    
#line 206 "chopper.ch"
#line 208 "chopper.ch"
    parameterUnderTab = mode == "TRUE";
#line 208 "chopper.ch"
#line 209 "chopper.ch"
    
#line 209 "chopper.ch"
#line 209 "chopper.ch"
}
#line 209 "chopper.ch"

bool    tabDirective = true ;

#line 216 "chopper.ch"

#line 216 "chopper.ch"
void AnalyzeTabDirective ( PPTREE tree )
#line 216 "chopper.ch"
{
#line 216 "chopper.ch"
#line 216 "chopper.ch"
    int _nextVal ;
    
#line 216 "chopper.ch"
#line 218 "chopper.ch"
    
    EString mode = EString(Value(tree)).ToUpper();
    
#line 218 "chopper.ch"
#line 220 "chopper.ch"
    tabDirective = mode == "TRUE";
#line 220 "chopper.ch"
#line 221 "chopper.ch"
    
#line 221 "chopper.ch"
#line 221 "chopper.ch"
}
#line 221 "chopper.ch"

bool    spaceArrow = false ;

#line 228 "chopper.ch"

#line 228 "chopper.ch"
void AnalyzeSpaceArrow ( PPTREE tree )
#line 228 "chopper.ch"
{
#line 228 "chopper.ch"
#line 228 "chopper.ch"
    int _nextVal ;
    
#line 228 "chopper.ch"
#line 230 "chopper.ch"
    
    EString mode = EString(Value(tree)).ToUpper();
    
#line 230 "chopper.ch"
#line 232 "chopper.ch"
    spaceArrow = mode == "TRUE";
#line 232 "chopper.ch"
#line 233 "chopper.ch"
    
#line 233 "chopper.ch"
#line 233 "chopper.ch"
}
#line 233 "chopper.ch"

bool    braceAlign = false ;
bool    braceAlignTabFunc = false ;
bool    braceAlignNoFunc = false ;

#line 242 "chopper.ch"

#line 242 "chopper.ch"
void AnalyzeBraceAlign ( PPTREE tree )
#line 242 "chopper.ch"
{
#line 242 "chopper.ch"
#line 242 "chopper.ch"
    int _nextVal ;
    
#line 242 "chopper.ch"
#line 244 "chopper.ch"
    braceAlign = !strcmp(BrainyValue(tree), "code");
#line 244 "chopper.ch"
#line 245 "chopper.ch"
    braceAlignTabFunc = !strcmp(BrainyValue(tree), "code_tab_func");
#line 245 "chopper.ch"
#line 246 "chopper.ch"
    braceAlignNoFunc = !strcmp(BrainyValue(tree), "code_no_func");
#line 246 "chopper.ch"
#line 247 "chopper.ch"
    if ( braceAlignTabFunc ) {
#line 247 "chopper.ch"
#line 248 "chopper.ch"
                                braceAlign = true ;
#line 248 "chopper.ch"
#line 249 "chopper.ch"
                                braceAlignNoFunc = false ;
#line 249 "chopper.ch"
#line 250 "chopper.ch"
                                
#line 250 "chopper.ch"
#line 250 "chopper.ch"
                              }
#line 250 "chopper.ch"
#line 251 "chopper.ch"
    if ( braceAlignNoFunc ) {
#line 251 "chopper.ch"
#line 252 "chopper.ch"
                                braceAlign = true ;
#line 252 "chopper.ch"
#line 253 "chopper.ch"
                                braceAlignTabFunc = false ;
#line 253 "chopper.ch"
#line 254 "chopper.ch"
                                
#line 254 "chopper.ch"
#line 254 "chopper.ch"
                             }
#line 254 "chopper.ch"
#line 255 "chopper.ch"
    if ( braceAlign || braceAlignTabFunc || braceAlignNoFunc ) 
#line 255 "chopper.ch"
#line 256 "chopper.ch"
        ansiMode = 1 ;
#line 256 "chopper.ch"
#line 257 "chopper.ch"
    
#line 257 "chopper.ch"
#line 257 "chopper.ch"
}
#line 257 "chopper.ch"

int indentFunctionType = 0 ;

#line 264 "chopper.ch"

#line 264 "chopper.ch"
void AnalyzeIndentFunctionType ( PPTREE tree )
#line 264 "chopper.ch"
{
#line 264 "chopper.ch"
#line 264 "chopper.ch"
    int _nextVal ;
    
#line 264 "chopper.ch"
#line 266 "chopper.ch"
    indentFunctionType = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 266 "chopper.ch"
#line 267 "chopper.ch"
    
#line 267 "chopper.ch"
#line 267 "chopper.ch"
}
#line 267 "chopper.ch"

int assignAlign = 0 ;

#line 274 "chopper.ch"

#line 274 "chopper.ch"
void AnalyzeAssignAlign ( PPTREE tree )
#line 274 "chopper.ch"
{
#line 274 "chopper.ch"
#line 274 "chopper.ch"
    int _nextVal ;
    
#line 274 "chopper.ch"
#line 276 "chopper.ch"
    assignAlign = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 276 "chopper.ch"
#line 277 "chopper.ch"
    
#line 277 "chopper.ch"
#line 277 "chopper.ch"
}
#line 277 "chopper.ch"

int declAlign = 1 ;

#line 284 "chopper.ch"

#line 284 "chopper.ch"
void AnalyzeDeclAlign ( PPTREE tree )
#line 284 "chopper.ch"
{
#line 284 "chopper.ch"
#line 284 "chopper.ch"
    int _nextVal ;
    
#line 284 "chopper.ch"
#line 286 "chopper.ch"
    declAlign = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 286 "chopper.ch"
#line 287 "chopper.ch"
    
#line 287 "chopper.ch"
#line 287 "chopper.ch"
}
#line 287 "chopper.ch"

#line 291 "chopper.ch"

#line 291 "chopper.ch"
void AnalyzeSimplify ( PPTREE tree )
#line 291 "chopper.ch"
{
#line 291 "chopper.ch"
#line 291 "chopper.ch"
    int _nextVal ;
    
#line 291 "chopper.ch"
#line 294 "chopper.ch"
    DecompCplus::ptDecomp -> simplifyExpression = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 294 "chopper.ch"
#line 295 "chopper.ch"
    
#line 295 "chopper.ch"
#line 295 "chopper.ch"
}
#line 295 "chopper.ch"

int singleSwitchIndent = 1 ;

#line 303 "chopper.ch"

#line 303 "chopper.ch"
void AnalyzeSingleSwitchIndent ( PPTREE tree )
#line 303 "chopper.ch"
{
#line 303 "chopper.ch"
#line 303 "chopper.ch"
    int _nextVal ;
    
#line 303 "chopper.ch"
#line 305 "chopper.ch"
    singleSwitchIndent = !strcmp(BrainyValue(tree), "On") || !strcmp(BrainyValue(tree), "ON") || !strcmp(BrainyValue(tree), "on");
#line 305 "chopper.ch"
#line 306 "chopper.ch"
    
#line 306 "chopper.ch"
#line 306 "chopper.ch"
}
#line 306 "chopper.ch"

#line 312 "chopper.ch"

#line 312 "chopper.ch"
void AnalyzeComment ( PPTREE tree )
#line 312 "chopper.ch"
{
#line 312 "chopper.ch"
#line 312 "chopper.ch"
    int _nextVal ;
    
#line 312 "chopper.ch"
#line 315 "chopper.ch"
    tree = sontree(tree, 1);
#line 315 "chopper.ch"
#line 316 "chopper.ch"
    switch ( NumberTree(tree) ) {
#line 316 "chopper.ch"
#line 317 "chopper.ch"
        case COMMENT_START_cplus : 
#line 317 "chopper.ch"
#line 318 "chopper.ch"
            DecompCplus::ptDecomp -> startComment = AllocString(BrainyValue(tree));
#line 318 "chopper.ch"
#line 319 "chopper.ch"
            break ;
            
#line 319 "chopper.ch"
#line 320 "chopper.ch"
        case COMMENT_MIDDLE_cplus : 
#line 320 "chopper.ch"
#line 321 "chopper.ch"
            DecompCplus::ptDecomp -> middleComment = AllocString(BrainyValue(tree));
#line 321 "chopper.ch"
#line 322 "chopper.ch"
            break ;
            
#line 322 "chopper.ch"
#line 323 "chopper.ch"
        case COMMENT_END_cplus : 
#line 323 "chopper.ch"
#line 324 "chopper.ch"
            DecompCplus::ptDecomp -> endComment = AllocString(BrainyValue(tree));
#line 324 "chopper.ch"
#line 325 "chopper.ch"
            break ;
            
#line 325 "chopper.ch"
#line 326 "chopper.ch"
        case COMMENT_PLUS_cplus : 
#line 326 "chopper.ch"
#line 327 "chopper.ch"
            DecompCplus::ptDecomp -> plusComment = AllocString(BrainyValue(tree));
#line 327 "chopper.ch"
#line 328 "chopper.ch"
            break ;
            
#line 328 "chopper.ch"
    }
#line 328 "chopper.ch"
    
#line 328 "chopper.ch"
#line 330 "chopper.ch"
    
#line 330 "chopper.ch"
#line 330 "chopper.ch"
}
#line 330 "chopper.ch"

#line 334 "chopper.ch"

#line 334 "chopper.ch"
char *DecToIdent ( PTREE tree )
#line 334 "chopper.ch"
{
#line 334 "chopper.ch"
#line 334 "chopper.ch"
    int _nextVal ;
    
#line 334 "chopper.ch"
#line 337 "chopper.ch"
    while ( NumberTree(tree) == RANGE_MODIFIER_cplus ) 
#line 337 "chopper.ch"
#line 338 "chopper.ch"
        (tree=SonTree(tree, 2));
#line 338 "chopper.ch"
    
#line 338 "chopper.ch"
#line 339 "chopper.ch"
    return AllocString(BrainyValue(tree));
    
#line 339 "chopper.ch"
#line 340 "chopper.ch"
    
#line 340 "chopper.ch"
#line 340 "chopper.ch"
}
#line 340 "chopper.ch"

extern int  ptOldBuf, line, col, posBufInput, lBufInput, tokenAhead ;
extern long posFileInput ;

#line 347 "chopper.ch"

#line 347 "chopper.ch"
void ReadIncludeS ( const char *name, int here )
#line 347 "chopper.ch"
{
#line 347 "chopper.ch"
#line 347 "chopper.ch"
    int _nextVal ;
    
#line 347 "chopper.ch"
#line 350 "chopper.ch"
    FreeTree(QuickCplus().ReadInclude(name, here));
#line 350 "chopper.ch"
#line 351 "chopper.ch"
    
#line 351 "chopper.ch"
#line 351 "chopper.ch"
}
#line 351 "chopper.ch"

#line 355 "chopper.ch"

#line 355 "chopper.ch"
void AnalyzeFuncHeader ( PPTREE tree )
#line 355 "chopper.ch"
{
#line 355 "chopper.ch"
#line 355 "chopper.ch"
    int _nextVal ;
    
#line 355 "chopper.ch"
#line 358 "chopper.ch"
    DecompCplus::ptDecomp -> funcHeader = AllocString(BrainyValue(tree));
#line 358 "chopper.ch"
#line 359 "chopper.ch"
    
#line 359 "chopper.ch"
#line 359 "chopper.ch"
}
#line 359 "chopper.ch"

#line 363 "chopper.ch"

#line 363 "chopper.ch"
void AnalyzeParameters ( PPTREE tree )
#line 363 "chopper.ch"
{
#line 363 "chopper.ch"
#line 363 "chopper.ch"
    int _nextVal ;
    
#line 363 "chopper.ch"
#line 366 "chopper.ch"
    DecompCplus::ptDecomp -> parameters = AllocString(BrainyValue(tree));
#line 366 "chopper.ch"
#line 367 "chopper.ch"
    
#line 367 "chopper.ch"
#line 367 "chopper.ch"
}
#line 367 "chopper.ch"

#line 367 "chopper.ch"
#line 367 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 367 "chopper.ch"
/*Well done my boy */ 
#line 367 "chopper.ch"

