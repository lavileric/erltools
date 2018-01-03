/* Copyright(C) 1995 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   
   
   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to 
   the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   */
language msch;

#include "compute.h"
#include "tablist.h"

static EString  currentClass(""); // current class where we are 

#define MODULE_MAX 2000
#define FUNCTION_MAX 120
#define CYCLO_MAX 20
#define COMM_MIN 5
#define NESTING_MAX 8

#ifdef CHOPB
#   include "msch.h"
#   include "decchopb.h"
    
    // DECOMP : hide decomp_chopb
    // parameters :
    //              tree : the tree to be unparsed
    inline void DECOMP ( PTREE tree )
    {
        
        PTREE   inter ; // copy of tree parameter
        PTREE   elem ;  // an elem    
        
        // suppress pos comments in tree
        inter =  copytree(tree);
        foreach ((),inter,{
            elem =  for_elem ;
            DestroyPosComment(elem);
        })
        
        // decomp tree
        decomp_chopb(inter);
    }
    
#else 
#   include "msc.h"
#   include "deccplus.h"
    
    // DECOMP : hide decomp_cplus
    // parameters :
    //              tree : the tree to be unparsed
    inline void DECOMP ( PTREE tree )
    {
        
        PTREE   inter ; // copy of tree parameter
        PTREE   elem ;  // an elem
        
        // suppress pos comments in tree
        inter =  copytree(tree);
        foreach ((),inter,{
            elem =  for_elem ;
            DestroyPosComment(elem);
        })
        
        // decomp tree
        decomp_cplus(inter);
    }
    
#endif
#ifdef FOR_METACHOP
    extern PTREE    pTree ;       // a tree
    extern PTREE    pMetricList ; // result of metric for all functions
#endif

// DisplayPos : Display the parsing pos of a tree
//
// parameters :
//              tree : the tree where to seach pos
void DisplayPos ( PTREE tree )
{
    
    int     line ;        // the line
    int     col ;         // the column
    char    string [20];  // display storage
    int     okPos ;       // tell if there is a pos
    
    // get the line col
    okPos =  SearchPos(tree, &line, &col);
    
    // display the line
    if ( okPos ) {
        sprintf(string, "%d", line);
        " #line " PrintString(string);
    }
}

// add a metric cell for a function
// parameters :
//              name : name of function
//              line : number of lines
//              cLine : number of comment lines
//              complexity : complexity number
//              maxDepth : depth of function
void Metric::AddFunctionCell ( PTREE name, int line, int cLine, int complexity, int maxDepth )
{
    
    char    string [10];  // storage for writing
    PTREE   cell ;        // cell to be added to the list
    
    // compute cell
    cell =  <NUMBER_FUNC,copytree(name),(),(),(),()>;
    sprintf(string, "%d", line);
    cell += <,<>,MakeString(string)>;
    sprintf(string, "%d", cLine);
    cell += <,<>,<>,MakeString(string)>;
    sprintf(string, "%d", complexity);
    cell += <,<>,<>,<>,MakeString(string)>;
    sprintf(string, "%d", maxDepth);
    cell        += <,<>,<>,<>,<>,MakeString(string)>;
    
    // add in list
    pMetricList =  cell * pMetricList ;
}

// computation of tree metric
void Metric::ComputeTree ()
{
    
    PTREE   elem ; // an element in listResult
    PTREE   list ; // a list
    
    // computation of metrics for whole tree
    pNbLine =  pNbCLine = 0 ;
    pDepth  =  pCurrDepth = pMaxDepth = 0 ;
    ComputeNumber(pTree);
    
    // reverse list
    {
        PTREE   reversedList ; // reversed list
        list =  pMetricList ;
        while ( (elem = nextl(list)) ) 
            reversedList =  elem * reversedList ;
        pMetricList =  reversedList ;
    }
    
    // add program result to the function result list    
    pNbCLine += ComputeCLine(pTree);
    AddFunctionCell((), pNbLine, pNbCLine, pNbComplexity, pMaxDepth);
}

#pragma metric exclude ComputeNumber

// ComputeNumber : compute the numbers on a tree
//
// parameters :
//              tree : the tree where to compute the numbers
void Metric::ComputeNumber ( PTREE tree )
{
    
    PTREE   elem ;     // some tree
    PTREE   list ;     // some list
    PTREE   list1 ;    // some list
    PTREE   list2 ;    // some list
    PTREE   elem1 ;    // some tree
    PTREE   elem2 ;    // some tree
    PTREE   compound ; // a compound
    
    foreach ((),tree,{
        switch ( for_elem ) {
            case list = <LIST> : 
                while ( (elem = nextl(list)) ) {
                    ComputeNumber(elem);
                }
                goto for_continue ;
                break ;
            case <TERM_TREE> : ;
            case <ASM> : ;
            case <LINE_DIR> : ;
            case <UNDEF> : ;
            case <ERROR> : ;
            case <CONFIG> : ;
            case <PRAGMA> : ;
            case <INCLUDE_DIR> : 
            case <ENUM> : 
            case <TIDENT> : 
            case <TLONG> : 
            case <TSIGNED> : 
            case <TUNSIGNED> : 
            case <TINT> : 
            case <TSHORT> : 
            case <TCHAR> : 
            case <MACRO> : 
            case <COND_AFF> : 
            case <OR> : 
            case <AND> : 
            case <LOR> : 
            case <LXOR> : 
            case <LAND> : 
            case <EQU> : 
            case <NEQU> : 
            case <LEQU> : 
            case <GEQU> : 
            case <GT> : 
            case <LT> : 
            case <LSHI> : 
            case <RSHI> : 
            case <PLUS> : 
            case <MINUS> : 
            case <MUL> : 
            case <DIV> : 
            case <REM> : 
            case <DOT_MEMB> : 
            case <ARROW_MEMB> : 
            case <CAST> : 
            case <NEG> : 
            case <POS> : 
            case <LNEG> : 
            case <NOT> : 
            case <POINT> : 
            case <ADDR> : 
            case <BINCR> : 
            case <BDECR> : 
            case <QUALIFIED> : 
            case <NEW> : 
            case <INIT_NEW> : 
            case <DELETE> : 
            case <TYP_ARRAY> : 
            case <EXP_LIST> : 
            case <EXP_ARRAY> : 
            case <REF> : 
            case <ARROW> : 
            case <AINCR> : 
            case <ADECR> : 
            case <STRING> : 
            case <EXP> : 
            case <META> : 
            case <VA_ARG> : 
            case <INTEGER> : 
            case <IUNLONG> : 
            case <HEXA> : 
            case <IUN> : 
            case <LONG> : 
            case <OCTAL> : 
            case <ILONG> : 
            case <FLOAT> : 
            case <CHAR> : 
            case <IDENT> : 
            case <CTOR_INIT> : 
            case <BREAK> : 
            case <CONTINUE> : 
            case <GOTO> : 
            case <STAT_VOID> : 
            case <RETURN> : 
            case <FUNC_SPEC> : 
            case <EXCLUDE> : 
            case <VOID> : 
                pNbLine += 1 ;
                goto for_continue ;
                break ;
            case <FUNC,<>,<>,<>,<>,<>,elem,<>,compound> : 
                {
                    int nbFLine ;       // number of line for function
                    int nbFCLine ;      // number of comment lines 
                    
                    // for function
                    int nbFComplexity ; // complexity for function
                    
                    // keep old values of metric
                    nbFLine       =  pNbLine ;
                    nbFCLine      =  pNbCLine ;
                    nbFComplexity =  pNbComplexity - 1 ;
                    pCurrDepth    =  0 ;
                    pDepth++ ;
                    if ( pDepth > pCurrDepth ) 
                        pCurrDepth =  pDepth ;
                    if ( pDepth > pMaxDepth ) 
                        pMaxDepth =  pDepth ;
                    
                    // start usual computation
                    pNbLine += 2 ;
                    
                    // compute old mode declarations size
                    ComputeNumber(elem);
                    
                    // then compute compound
                    ComputeNumber(compound);
                    
                    // insert result for the function
                    pNbCLine += ComputeCLine(for_elem, 1);
                    AddFunctionCell(for_elem, pNbLine - nbFLine, pNbCLine - nbFCLine, pNbComplexity - nbFComplexity, pCurrDepth);
                    
                    // continue
                    pDepth-- ;
                    goto for_continue ;
                    break ;
                }
            case <TEMPLATE_DECL,<>,elem> : 
                if ( elem ) 
                    for_elem =  elem ;
                else 
                    goto for_continue ;
                break ;
            case <CATCH> : 
            case <EXP_SEQ> : 
            case <LANGUAGE> : break ;
            case <EXTERNAL,<>,elem> : 
            case <DEFINE_DIR,<>,<>,elem> : 
                if ( elem ) 
                    for_elem =  elem ;
                else {
                    pNbLine += 1 ;
                    goto for_continue ;
                }
                break ;
            case <NO_PRETTY> : 
            case <MESSAGE_MAP> : 
            case <EXCEPTION> : 
                pNbLine += 2 ;
                break ;
            case <IF_DIR,<>,list1,list2> : 
            case <IFDEF_DIR,<>,list1,list2> : 
            case <IFNDEF_DIR,<>,list1,list2> : 
                pNbLine += 2 ;
                pNbComplexity++ ;
                
                // compute #elseif and #else if necessary
                if ( list1 ) 
                    pNbLine += 1 ;
                if ( list2 ) 
                    pNbLine += 1 ;
                
                // compute list
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                ComputeNumber(list1);
                ComputeNumber(list2);
                pDepth-- ;
                goto for_continue ;
                break ;
            case <PROTECT_MEMB,<>,elem> : 
                pNbLine += 1 ;
                if ( elem ) 
                    for_elem =  elem ;
                else 
                    goto for_continue ;
                break ;
            case <DECLARATION,<>,elem> : 
            case <TYPEDEF,elem> : 
            case <RANGE_MODIFIER,<>,elem> : 
            case <PARAM_TYPE,elem> : 
            case <CLASS,<>,<>,<>,elem> : 
                
                // it depends on the type simple or structured
                if ( elem ) 
                    ComputeNumber(elem);
                else 
                    pNbLine += 1 ;
                goto for_continue ;
            case <AFF> : 
            case <MUL_AFF> : 
            case <DIV_AFF> : 
            case <REM_AFF> : 
            case <PLU_AFF> : 
            case <MIN_AFF> : 
            case <LSH_AFF> : 
            case <RSH_AFF> : 
            case <AND_AFF> : 
            case <OR_AFF> : 
            case <XOR_AFF> : 
                pNbLine += 1 ;
                for_elem == <,<>,elem>;
                switch ( elem ) {
                    case <AFF> : 
                    case <MUL_AFF> : 
                    case <DIV_AFF> : 
                    case <REM_AFF> : 
                    case <PLU_AFF> : 
                    case <MIN_AFF> : 
                    case <LSH_AFF> : 
                    case <RSH_AFF> : 
                    case <AND_AFF> : 
                    case <OR_AFF> : 
                    case <XOR_AFF> : 
                        ComputeNumber(elem);
                        break ;
                }
                goto for_continue ;
                break ;
            case <COMPOUND_EXT,elem> : 
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                pNbLine += 1 ;
                ComputeNumber(elem);
                pDepth-- ;
                goto for_continue ;
                break ;
            case <CLASS_DECL,elem> : 
            case <COMPOUND,elem> : 
                pNbLine += 1 ;
                ComputeNumber(elem);
                goto for_continue ;
                break ;
            case <WHILE,<>,elem> : 
            case <DO,elem> : 
            case <FOR,<>,<>,<>,elem> : 
            case <FORALLSONS,<>,elem> : 
                pNbLine += 1 ;
                pNbComplexity++ ;
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                ComputeNumber(elem);
                pDepth-- ;
                goto for_continue ;
                break ;
            case <SWITCH,<>,elem> : 
                pNbLine++ ;
                pNbComplexity++ ;
            case <LABEL,<>,elem> : 
            case <DEFAULT,elem> : 
            case <CASE,<>,elem> : 
                pNbLine += 1 ;
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                ComputeNumber(elem);
                pDepth-- ;
                goto for_continue ;
                break ;
            case <IF,<>,elem1,elem2> : 
                pNbLine += 1 ;
                pNbComplexity++ ;
                if ( elem1 || elem2 ) {
                    if ( elem2 ) 
                        pNbLine++ ;
                    pDepth++ ;
                    if ( pDepth > pCurrDepth ) 
                        pCurrDepth =  pDepth ;
                    if ( pDepth > pMaxDepth ) 
                        pMaxDepth =  pDepth ;
                    ComputeNumber(elem1);
                    ComputeNumber(elem2);
                    pDepth-- ;
                }
                goto for_continue ;
                break ;
            case <EXCEPTION_ANSI,elem1,elem2> : 
                pNbLine += 1 ;
                pNbComplexity++ ;
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                ComputeNumber(elem1);
                ComputeNumber(elem2);
                pDepth-- ;
                goto for_continue ;
                break ;
            case <CATCH_ANSI,<>,elem> : 
                pNbLine += 1 ;
                ComputeNumber(elem);
                goto for_continue ;
                break ;
            case <THROW_ANSI> : 
                pNbLine += 1 ;
                goto for_continue ;
                break ;
            case <TFLOAT> : 
            case <TYP_AFF> : 
            case <DECLARATOR> : 
            case <ABST_DECLARATOR> : 
            case <STRING_LIST> : 
                pNbLine += 1 ;
                goto for_continue ;
            case <NONE> : goto for_continue ;
            default : 
                switch ( ComputeChopbNumber(for_elem) ) {
                    case -1 : goto for_continue ;
                    case 1 : break ;
                    case 0 : 
                        {
                            char    string [20];         // storage for writing
                            int     oldOutput = output ; // keep output
#                           if !defined(ON_W)
                                output =  2 ;
#                           else 
                                output =  1 ;
#                           endif
                            <NL>
                            "Unknown Operator ";
                            _itoa(numbertree(for_elem), string, 10);
                            WriteString(string) <NL>
                            output =  oldOutput ;
                            break ;
                        }
                }
                break ;
        }
    })
}

// computation of chopb metric
// 
// paramters :
//             tree : the tree where to compute
// return : -1 if recognized tree 0 otherwise
int Metric::ComputeChopbNumber ( PTREE tree )
{
    
    int     treated = 1 ; // indicates if node was treated
    PTREE   elem ;        // some tree
    PTREE   list ;        // some list
    
#   ifdef CHOPB
        
        // look each specific chopb nodes
        switch ( tree ) {
            
            // chop_def
            case <CHOP_DEF,<>,elem> : 
                if ( elem ) {
                    ComputeNumber(elem);
                } else {
                    pNbLine += 1 ;
                }
                treated = -1 ;
                break ;
            
            // terminal nodes
            case <EXPO_AFF> : 
            case <DEF_IDENT> : 
            case <VALUE> : 
            case <NODE_LIST> : 
            case <NODE_TREE> : 
            case <NEXT> : 
            case <IN> : 
            case <SPACE> : 
            case <TAB> : 
            case <NEWLINE> : 
            case <NIL> : 
            case <FUNC_SPEC> : 
            case <ARRO> : 
            case <SEP_AFTER> : 
            case <SEP_BEFORE> : 
            case <SEP_OMIT> : 
                pNbLine += 1 ;
                treated = -1 ;
                break ;
            
            // foreach
            case <FOREACH,<>,<>,elem> : 
                pNbLine += 2 ;
                pNbComplexity++ ;
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                ComputeNumber(elem);
                pDepth-- ;
                treated = -1 ;
                break ;
            
            // in_lang
            case <IN_LANG,<>,elem> : 
                pNbLine += 1 ;
                pNbComplexity++ ;
                pDepth++ ;
                if ( pDepth > pCurrDepth ) 
                    pCurrDepth =  pDepth ;
                if ( pDepth > pMaxDepth ) 
                    pMaxDepth =  pDepth ;
                ComputeNumber(elem);
                pDepth-- ;
                treated = -1 ;
                break ;
            
            // box
            case <BOX,elem> : 
            case <ALINEA,elem> : 
                pNbLine += 1 ;
                ComputeNumber(elem);
                treated = -1 ;
                break ;
            
            // parse
            case <PARSE,list> : 
                while ( (elem = nextl(list)) ) {
                    pNbLine++ ;
                }
                treated = -1 ;
                break ;
            
            // default : we found nothing
            default : treated = 0 ;
        }
        return treated ;
#   else 
        
        // if c/c++ we have treated nothing here
        return 0 ;
#   endif
}

// compute number of comment line in a tree
//
// parameters :
//              tree : where to compute comment comment lines number
//              goInFunction : to tell if we go compute comment inside function
// return : the number of comment lines
int Metric::ComputeCLine ( PTREE tree, int goInFunction )
{
    int numberCLine = 0 ; //  the number of comment lines
    
    foreach ((),tree,{
        if ( for_elem == <FUNC> && !goInFunction ) {
            goto for_continue ;
        }
        numberCLine += SizeComm(for_elem);
    })
    return numberCLine ;
}

/*************************************************************************/
/*   AnalyzeMetric : analyze values defined in config file               */
/*************************************************************************/
static int      functionLength = FUNCTION_MAX ; // keep limit for function length
static int      moduleLength = MODULE_MAX ;     // keep limit for file length
static int      commentRatio = COMM_MIN ;       // keep ratio between 
                                                // instruction and comment line
static int      cycloValue = CYCLO_MAX ;        // keep max complexity cyclomatic 
                                                // number
static int      nestingValue = NESTING_MAX ;    // keep max for nesting value
static int      commentParam = 0 ;              // indicating if parameters 
                                                // must be commented
static int      commentDecl = 0 ;               // indicating if declaration 
                                                // must be commented
static int      litteralValue = 0 ;             // indicates if we must verify 
                                                // that litteral values are not 
                                                // used  in prog
static int      identMin = 0 ;                  // min length number for ident
static int      identMax = 0 ;                  // max length number for ident
static int      forbidGoto = 0 ;                // verify that there is no goto
static int      assignCond = 0 ;                // verify that there is no 
                                                // assignment in condition
static int      assignCall = 0 ;                // verify that there is no 
                                                // list assignment in call
static PTREE    listExclude = (PTREE)0 ;        // list of exclude functions

// assignment in parameter of call
//
// AnalyzeMetric : called by the parser to store
//                 values stored inside the config file
//     parameters :
//
//     paramTree : a tree containing the config value to be changed
//
void AnalyzeMetric ( PPTREE paramTree )
{
    PTREE   tree = copytree(paramTree); // copy of paramTree
    
    switch ( tree ) {
        case <MODULE_LENGTH> : 
            
            // length of program
            moduleLength = atoi(Value(tree));
            break ;
        case <FUNCTION_LENGTH> : 
            
            // length of a function 
            functionLength = atoi(Value(tree));
            break ;
        case <COMMENT_RATIO> : 
            
            // comment ratio
            commentRatio = atoi(Value(tree));
            break ;
        case <CYCLO> : 
            
            // cyclomatic complexity number
            cycloValue = atoi(Value(tree));
            break ;
        case <NESTING> : 
            
            // maximum depth
            nestingValue = atoi(Value(tree));
            break ;
        case <COMMENT_DECL> : 
            
            // verify declaration commentaries
            commentDecl = !strcmp(Value(tree), "on") || !strcmp(Value(tree), "ON");
            break ;
        case <COMMENT_PARAM> : 
            
            // verify parameters commentaries
            commentParam = !strcmp(Value(tree), "on") || !strcmp(Value(tree), "ON");
            break ;
        case <LITTERAL_VALUE> : 
            
            // verify that litteral values are not used in program
            litteralValue = !strcmp(Value(tree), "on") || !strcmp(Value(tree), "ON");
            break ;
        case <IDENT_MIN> : 
            
            // ident min value
            identMin = atoi(Value(tree));
            break ;
        case <IDENT_MAX> : 
            
            // ident max value
            identMax = atoi(Value(tree));
            break ;
        case <FORBID_GOTO> : 
            
            // verify declaration commentaries
            forbidGoto = !strcmp(Value(tree), "on") || !strcmp(Value(tree), "ON");
            break ;
        case <ASSIGN_COND> : 
            
            // verify declaration commentaries
            assignCond = !strcmp(Value(tree), "on") || !strcmp(Value(tree), "ON");
            break ;
        case <ASSIGN_CALL> : 
            
            // verify declaration commentaries
            assignCall = !strcmp(Value(tree), "on") || !strcmp(Value(tree), "ON");
            break ;
        case <EXCLUDE> : 
            
            // verify declaration commentaries
            listExclude *= <IDENT,MakeString(Value(tree))>;
            break ;
    }
}

// 
// DisplayAValue : display a value
//
// parameters :
//              label : label of value measured
//              content : string to be displayed
static  void DisplayAValue ( const char *label, const char *content )
{
    char    string [20]; // string for display
    
    //display label
    PrintString(label);
    
    // indent
    gotocol(30);
    ":";
    gotocol(35);
    
    // display string 
    PrintString(content) <NL>
}

// 
// DisplayAValue : display a value
//
// parameters :
//              label : label of value measured
//              val : the intvalue to be displayed
static  void DisplayAValue ( const char *label, int val )
{
    char    string [20]; // string for display
    
    sprintf(string, "%d", val);
    //display label
    PrintString(label);
    
    // indent
    gotocol(30);
    ":";
    gotocol(35);
    
    // display string 
    PrintString(string) <NL>
}

// 
// DisplayHeader : display header of function measurement
//
static  void DisplayHeader ()
{
    char    string [20]; // holder for temporary strings
    
    // display value of each constraint
    //
    // function length
    //
    DisplayAValue("Function Length ", functionLength);
    
    //  
    // module length
    //
    DisplayAValue("Module Length ", moduleLength);
    
    //  
    // comment ratio
    //
    DisplayAValue("Comment Ration ", commentRatio);
    
    //  
    // cyclomatic number
    //
    DisplayAValue("Complexity Cyclomatic Number ", cycloValue);
    
    //  
    // nesting value
    //
    DisplayAValue("Block Nesting ", nestingValue);
    
    //  
    // commentaries on declaration
    //
    DisplayAValue("Declaration Commentaries ", commentDecl ? "on" : "off");
    
    //  
    // commentaries on parameters
    //
    DisplayAValue("Parameters Commentaries ", commentParam ? "on" : "off");
    
    //  
    // literal value
    //
    DisplayAValue("Litteral Values ", litteralValue ? "on" : "off");
    
    //  
    // use of goto
    //
    DisplayAValue("Check Goto ", forbidGoto ? "on" : "off");
    
    //  
    // Assignment in condition
    //
    DisplayAValue("Assignment in Cond ", assignCond ? "on" : "off");
    
    //  
    // Assignment in func call
    //
    DisplayAValue("Assignment in Func Call ", assignCall ? "on" : "off");
    
    //  
    // ident min length
    //
    DisplayAValue("Ident Min Length ", identMin);
    
    //    
    // ident max length
    //
    DisplayAValue("Ident Max Length ", identMax);
    <NL,3>
    
    // display header for each column
    // for each element goto col and display header
    " ";
    gotocol(25);
    "Line";
    gotocol(31);
    "CLine";
    gotocol(38);
    "Cyclo";
    gotocol(45);
    "Depth" <NL>
}

//
// DeclaratorToName : get name out of a declarator
//
// parameters :
//               declarator : declarator to be searched
// return : the name
PTREE DeclaratorToName ( PTREE declarator )
{
    PTREE   name = declarator ; // variable to be put on name
    
    // go down in declarator searching for first <IDENT>    
    while ( name && name != <IDENT> ) {
        switch ( name ) {
            case <QUALIFIED,<>,name> : break ;
            case <RANGE_MODIFIER,<>,name> : break ;
            case <OPERATOR,name> : 
                {
                    EString newName(""); // string for computing operator sthing
                    name == <FOR_DECLARATION,<>,name>;
                    newName =  EString("operator ") + (const char *)Value(name);
                    return MakeString((char *)(const char *)newName);
                }
                break ;
            default : name = name [1];
        }
    }
    return name ;
}

// 
// IsDestructor : tell if name is a destructor name
//
// parameters :
//             name : name where to detect destructor
// return : if it is a destructor
int IsDestructor ( PTREE name )
{
    
    // go down in declarator searching for destruct
    while ( name && name != <IDENT> ) {
        switch ( name ) {
            case <DESTRUCT> : return 1 ;
            case <QUALIFIED,<>,name> : break ;
            case <RANGE_MODIFIER,<>,name> : break ;
            case <OPERATOR,name> : return 0 ;
            default : name = name [1];
        }
    }
    return 0 ;
}

// 
// Try to find current class in name
//
// parameters :
//              name : name to be searched for class
// return : the name of class
EString FindClass ( PTREE name )
{
    
    // go down in declarator searching for destruct
    while ( name && name != <IDENT> ) {
        switch ( name ) {
            case <DESTRUCT> : return currentClass ;
            case <QUALIFIED,name> : 
                return EString(Value(name));
                break ;
            case <RANGE_MODIFIER,<>,name> : break ;
            case <OPERATOR,name> : return currentClass ;
            default : name = name [1];
        }
    }
    return currentClass ;
}

//
// DiplayFunctionValue : display the values for a function 
//
// parameters :
//              elem : the result for a function
static  void DisplayFunctionValue ( PTREE elem )
{
    
    PTREE   function ;   // function declarator
    PTREE   line ;       // number of line
    PTREE   cLine ;      // number of comment line
    PTREE   complexity ; // cyclomatic complexity number
    PTREE   depth ;      // depth of function 
    PTREE   name ;       // name of function    
    
    // get values
    elem == <,name,line,cLine,complexity,depth>;
    
    // display it, *** for module
    if ( name ) 
        WriteString(Value(name)) 
    else 
        "***" 
    
    // display the values
    gotocol(25);
    WriteString(Value(line));
    gotocol(32);
    WriteString(Value(cLine));
    gotocol(39);
    WriteString(Value(complexity));
    gotocol(46);
    WriteString(Value(depth)) <NL>
}

//
// DisplayFunctionError : verify function and indicates errors
//
// parameters :
//              elem : the result for a function
// return : if we got an error
static  int DisplayFunctionError ( PTREE elem )
{
    
    PTREE   function ;    // function declarator
    PTREE   line ;        // number of line
    PTREE   cLine ;       // number of comment line
    PTREE   complexity ;  // cyclomatic complexity number
    PTREE   depth ;       // depth of function 
    PTREE   name ;        // name of function    
    int     inError = 0 ; // indicates whether there is an error    
    
    // get function values
    elem == <,name,line,cLine,complexity,depth>;
    
    // check for program length
    if ( name == () && atoi(Value(line)) > moduleLength ) {
        "***";
        gotocol(25);
        "==> ERROR <== Module too long" <NL>
        inError =  1 ;
    }
    
    // check for function length
    if ( name != () && atoi(Value(line)) > functionLength && !ListFind(listExclude, name) ) {
        WriteString(Value(name));
        DisplayPos(name);
        gotocol(25);
        "==> ERROR <== Function too long" <NL>
        inError =  1 ;
    }
    
    // check for comment ratio
    if ( atoi(Value(cLine)) * commentRatio < atoi(Value(line)) && !ListFind(listExclude, name) ) {
        if ( name ) {
            WriteString(Value(name));
            DisplayPos(name);
        } else 
            "***" 
        gotocol(25);
        "==> ERROR <== Not Enough Comments" <NL>
        inError =  1 ;
    }
    
    // check for cyclomatic number
    if ( name != () && atoi(Value(complexity)) > cycloValue && !ListFind(listExclude, name) ) {
        if ( name ) {
            WriteString(Value(name));
            DisplayPos(name);
        } else 
            "***" 
        gotocol(25);
        "==> ERROR <== Complexity too high" <NL>
        inError =  1 ;
    }
    
    // check for depth value
    if ( atoi(Value(depth)) > nestingValue && !ListFind(listExclude, name) ) {
        if ( name ) {
            WriteString(Value(name));
            DisplayPos(name);
        } else 
            "***" 
        gotocol(25);
        "==> ERROR <== Nesting too high" <NL>
        inError =  1 ;
    }
    
    // return 1 if we got an error
    return inError ;
}

//
// VerifyParameter : Verify if parameters of a function are
//                   Described in header of function
//
// parameters :
//              function : the function to be verified
//              name : name of funct
//              type : returned type of function
//              parameter : the parameters of funct
// return : if ok
int VerifyParameter ( PTREE function, PTREE name, PTREE type, PTREE parameter )
{
    
    PTREE   listParameter ;  // list of parameter name
    PTREE   nameParameter ;  // a parameter name
    PTREE   listDeclarator ; // a list of declarator
    
    // do verification if asked for
    if ( !commentParam ) 
        return 0 ;
    else {
        {
            bool    firstParameter = true ; // look if first parameter
            
            // compute a liste of all the variable
            // searching the parameter list 
            foreach ((),parameter,{
                switch ( for_elem ) {
                    case <ABST_DECLARATOR> : 
                        
                        // if there are only abstract declarator it is ok
                        // in fact it should be a variable declaration with init
                        if ( firstParameter ) {
                            
                            // look if there are only abst_declarator
                            PTREE   list = for_elem ^ ;  // list of params
                            PTREE   val ;                // an elem of list
                            while ( (val = nextl(list)) ) 
                                if ( val != <ABST_DECLARATOR> ) 
                                    break ;
                            
                            // if end of list, it is not a funct declaration
                            if ( !val ) 
                                return 0 ;
                        }
                        {
                            WriteString(Value(name));
                            gotocol(25);
                            "==> WARNING <== Comment on abstract declarator cannot be checked" <NL>
                        }
                        firstParameter = false ;
                        goto for_continue ;
                    case <DECLARATOR,<>,nameParameter> : 
                        if ( (nameParameter = DeclaratorToName(nameParameter)) ) 
                            listParameter *= copytree(nameParameter);
                        firstParameter = false ;
                        goto for_continue ;
                    default : break ;
                }
            })
            
            // if returned value is not void must indicate
            // what is returned if not constructor
            while ( type == <RANGE_MODIFIER,<>,type> ) 
                ;
            if ( type != <VOID> && strcmp(Value(name), (char *)(const char *)currentClass) ) {
                listParameter *= MakeString("return");
            }
            
            // if there is no pre-comment on function error
            if ( !IsCommNotPos(function, PRE) ) {
                WriteString(Value(name));
                DisplayPos(function);
                gotocol(25);
                "==> ERROR <== No Header" <NL>
                return 1 ;
            }
            
            // then search the header of the function for
            // the parameters
            {
                TabList tabParameter (listParameter) ; // array to manage 
                
                // parameter list
                PTREE   comm = GetComm(function);      // the parameters 
                
                // of function
                PTREE   listComm ;                     // a list of comment 
                char    *comment ;                     // a comment
                char    string [100];                  // temporary string 
                
                // holder
                while ( comm ) {
                    listComm =  SonTree(SonTree(comm, 1), 1);
                    while ( listComm ) {
                        comment =  Value(listComm);
                        
                        // remove in the table all the comments described there
                        {
                            listParameter =  tabParameter.List();
                            while ( (nameParameter = nextl(listParameter)) ) {
                                
                                // if parameter followed by : is found it is ok
                                strcpy(string, Value(nameParameter));
                                strcat(string, " :");
                                if ( strstr(comment, string)
                                        || !strcmp(Value(nameParameter), "return")
                                            && (strstr(comment, "retour :") || strstr(comment, "RETOUR") || strstr(comment, "RETURN")) ) {
                                    tabParameter.Remove((PPTREE)nameParameter);
                                    break ;
                                }
                            }
                        }
                        listComm =  SonTree(listComm, 2);
                    }
                    comm =  SonTree(comm, 2);
                }
                
                // if all parameter have not been found it is an error
                if ( (listParameter = tabParameter.List()) ) {
                    
                    // display all param without comment
                    while ( (nameParameter = nextl(listParameter)) ) {
                        WriteString(Value(name));
                        DisplayPos(function);
                        gotocol(25);
                        "==> ERROR <== No Comment On Param : ";
                        if ( !strcmp(Value(nameParameter), "return") ) 
                            WriteString("Returned Value") 
                        else 
                            WriteString(Value(nameParameter)) 
                        <NL>
                    }
                    return 1 ;
                }
            }
        }
    }
    return 0 ;
}

//
// VerifyCommentaries : Verify if declaration and parameters are
//                      commented
//
// parameters :
//              tree : the tree to be verified
//              name : name of funct
// return : if ok
int VerifyCommentaries ( PTREE tree, PTREE name )
{
    
    PTREE   sc_specifier ; // storage class specifier
    PTREE   type ;         // type of element
    PTREE   listVariable ; // list of declarator
    PTREE   parameter ;    // parameter of a function
    PTREE   funcContent ;  // content part of function definition
    PTREE   declarator ;   // a declarator in declarator list
    int     inError = 0 ;  // indicates if we found an error
    PTREE   className ;    // name of current class
    PTREE   classDef ;     // definition of current class
    
    foreach ((),tree,{
        switch ( for_elem ) {
            case <CLASS,<>,className,<>,classDef> : 
                {
                    EString oldCurrentClass = currentClass ; // keep currentClass
                    currentClass =  Value(DeclaratorToName(className));
                    inError      =  VerifyCommentaries(classDef, name) || inError ;
                    
                    // restore currentClass
                    currentClass =  oldCurrentClass ;
                    goto for_continue ;
                }
                break ;
            case <DECLARATION,sc_specifier,type,listVariable> : 
                if ( commentDecl ) {
                    
                    // we suppose that there is a variable 
                    // declared for one declaration
                    // and that there is a comment behind
                    // look first if there is only one declaration
                    if ( ListLength(listVariable) > 1 ) {
                        if ( name ) 
                            WriteString(Value(name)) 
                        else 
                            "***" 
                        DisplayPos(for_elem);
                        gotocol(25);
                        "==> ERROR <== More than One Declaration" <NL>
                        " ";
                        gotocol(4);
                        DECOMP(for_elem);
                        <NL>
                        inError =  1 ;
                    }
                    
                    // look if there is a comment behind or before
                    if ( listVariable && !IsCommNotPos(for_elem, POST) /* || IsCommNotPos(for_elem, PRE)*/ ) {
                        
                        // don't take into account function declaration
                        listVariable == <,declarator>;
                        while ( declarator == <TYP_ADDR,declarator> || declarator == <TYP_REF,declarator> || declarator == <TYP_ARRAY,declarator> ) 
                            ;
                        if ( declarator != <TYP_LIST> ) {
                            if ( name ) 
                                WriteString(Value(name)) 
                            else 
                                "***" 
                            DisplayPos(for_elem);
                            gotocol(25);
                            "==> ERROR <== Variable is not commented" <NL>
                            " ";
                            gotocol(4);
                            DECOMP(for_elem);
                            <NL>
                            inError =  1 ;
                        } else {
                            declarator == <TYP_LIST,name,parameter>;
                            if ( IsDestructor(name) ) 
                                break ;
                            name    =  DeclaratorToName(name);
                            inError =  VerifyParameter(for_elem, name, type, parameter) || inError ;
                        }
                    } else if ( listVariable && listVariable == <,<TYP_LIST,name,parameter>> ) {
                        declarator =  listVariable [1];
                        if ( IsDestructor(name) ) 
                            break ;
                        name    =  DeclaratorToName(name);
                        inError =  VerifyParameter(for_elem, name, type, parameter) || inError ;
                    }
                }
                break ;
            case <FUNC,sc_specifier,type,name,parameter,<>,<>,<>,funcContent> : 
                {
                    EString oldCurrentClass = currentClass ; // keep currentClass
                    
                    // find the name inside the declarator
                    if ( name == <TYP_LIST> || IsDestructor(name) ) 
                        goto for_continue ;
                    currentClass =  FindClass(name);
                    name         =  DeclaratorToName(name);
                    
                    // verify if parameters are described in header
                    // of function
                    inError      =  VerifyParameter(for_elem, name, type, parameter) || inError ;
                    
                    // then verify func
                    inError      =  VerifyCommentaries(funcContent, name) || inError ;
                    name         =  ();
                    
                    // restore currentClass
                    currentClass =  oldCurrentClass ;
                }
                goto for_continue ;
        }
    })
    
    // return the fact that we have found an error
    return inError ;
}

static PTREE    listOutIdent ; // ident not verifying length constraint

//
// VerifyIdent : verify that ident are in the allowed limits
//
// parameters :
//              tree : the tree to be verifed
//              name : name of function
// return : if ok
int VerifyIdent ( PTREE tree, PTREE name )
{
    
    PTREE   sc_specifier ; // storage class specifier
    PTREE   type ;         // type of element
    PTREE   funcContent ;  // content part of function definition
    PTREE   listNode ;     // list of son of NODE_TREE
    int     inError = 0 ;  // indicates if there is an error
    
    foreach ((),tree,{
        switch ( for_elem ) {
            case <DEFINE_DIR> : 
                {
                    
                    // litteral are allowed in #define
                    goto for_continue ;
                }
            case <IDENT> : 
                
                // if ident too short display an error message
                if ( identMin && (int)strlen(Value(for_elem)) < identMin && !ListFind(listOutIdent, for_elem) ) {
                    if ( name ) 
                        WriteString(Value(name)) 
                    else 
                        "***" 
                    DisplayPos(for_elem);
                    gotocol(25);
                    "==> ERROR <== ident too short : " WriteString(Value(for_elem)) <NL>
                    inError      =  1 ;
                    listOutIdent *= MakeString(Value(for_elem));
                }
                
                // if ident is too long display an error message
                if ( identMax && (int)strlen(Value(for_elem)) > identMax && !ListFind(listOutIdent, for_elem) ) {
                    if ( name ) 
                        WriteString(Value(name)) 
                    else 
                        "***" 
                    DisplayPos(for_elem);
                    gotocol(25);
                    "==> ERROR <== ident too long : " WriteString(Value(for_elem)) <NL>
                    inError      =  1 ;
                    listOutIdent *= MakeString(Value(for_elem));
                }
                break ;
            case <FUNC,sc_specifier,type,name,<>,<>,<>,<>,funcContent> : 
                listOutIdent = ();
                
                // find the name inside the declarator
                if ( name == <TYP_LIST> ) 
                    goto for_continue ;
                name    = DeclaratorToName(name);
                
                // then verify func
                inError = VerifyIdent(funcContent, name) || inError ;
                name    = ();
                goto for_continue ;
            default : 
#               ifdef CHOPB
                    switch ( for_elem ) {
                        case <NODE_TREE,listNode> : 
                            
                            // don't verify the NODE NAME
                            nextl(listNode);
                            for_elem = listNode ;
                            break ;
                        default : break ;
                    }
#               endif
        }
    })
    return inError ;
}

//
// VerifyLitteral : Verify that litteral values are not used inside programs
//
// parameters :
//              tree : the tree to be verified
//              name : name of function 
// return : if ok
int VerifyLitteral ( PTREE tree, PTREE name )
{
    
    PTREE   elem ;        // a son where search will continue
    PTREE   funcContent ; // function content
    int     inError = 0 ; // indicates whether there is an error
    
    if ( !litteralValue ) 
        return 0 ;
    foreach ((),tree,{
        switch ( for_elem ) {
            
            // on following instructions don't check
            case <CONFIG> : 
            case <LINE_DIR> : 
            case <INCLUDE_DIR> : 
            case <ASM> : 
            case <DEFINE_DIR> : goto for_continue ;
            case <EXTERNAL,elem> : 
                for_elem = elem ;
                goto for_continue ;
            
            // verify integer values
            case <INTEGER> : 
                
                // authorize 0
                if ( !strcmp(Value(for_elem), "0") ) 
                    goto for_continue ;
                
                // write function name or ***
                if ( name ) 
                    WriteString(Value(name)) 
                else 
                    "***" 
                DisplayPos(for_elem);
                
                // display error
                gotocol(25);
                "==> ERROR <== illegal use of litteral Value : " WriteString(Value(for_elem)) <NL>
                inError = 1 ;
                break ;
            
            // verify string values
            case <STRING> : 
                
                // authorise ""
                if ( !*Value(for_elem) ) 
                    goto for_continue ;
                
                // write function name or ***
                if ( name ) 
                    WriteString(Value(name)) 
                else 
                    "***" 
                DisplayPos(for_elem);
                
                // display error
                gotocol(25);
                "==> ERROR <== illegal use of litteral Value : \"" WriteString(Value(for_elem)) "\"" <NL>
                inError = 1 ;
                goto for_continue ;
            
            // verify char values
            case <CHAR> : 
                
                // authorize \0
                if ( !strcmp(Value(for_elem), "\\0") ) 
                    goto for_continue ;
                
                // display function name or ***
                if ( name ) 
                    WriteString(Value(name)) 
                else 
                    "***" 
                DisplayPos(for_elem);
                
                // display error
                gotocol(25);
                "==> ERROR <== illegal use of litteral Value : '" WriteString(Value(for_elem)) "'" <NL>
                inError = 1 ;
                goto for_continue ;
            
            // verify real values
            case <ILONG> : 
            case <IUNLONG> : 
            case <IUN> : 
            case <HEXA> : 
            case <LONG> : 
            case <OCTAL> : 
            case <FLOAT> : 
                
                // write function name or ***
                if ( name ) 
                    WriteString(Value(name)) 
                else 
                    "***" 
                DisplayPos(for_elem);
                
                // display error
                gotocol(25);
                "==> ERROR <== illegal use of litteral Value : " WriteString(Value(for_elem)) <NL>
                inError = 1 ;
                goto for_continue ;
            
            // store functions name
            case <FUNC,<>,<>,name,<>,<>,<>,<>,funcContent> : 
                listOutIdent = ();
                
                // find the name inside the declarator
                if ( name == <TYP_LIST> ) 
                    goto for_continue ;
                name    = DeclaratorToName(name);
                
                // then verify func
                inError = VerifyLitteral(funcContent, name) || inError ;
                name    = ();
                goto for_continue ;
        }
    })
    return inError ;
}

//
// VerifyGoto : Verify goto are not used inside programs
//
// parameters :
//              tree : tree to be verified
//              name : name of func
// return : if ok
int VerifyGoto ( PTREE tree, PTREE name )
{
    
    PTREE   elem ;        // a son where search will continue
    PTREE   funcContent ; // function content
    int     inError = 0 ; // indicates whether there is an error
    
    if ( !forbidGoto ) 
        return 0 ;
    foreach ((),tree,{
        switch ( for_elem ) {
            case <GOTO> : 
                WriteString(Value(name));
                DisplayPos(for_elem);
                gotocol(25);
                "==> ERROR <== illegal use of goto : ";
                DECOMP(for_elem);
                <NL>
                inError = 1 ;
                goto for_continue ;
            case <FUNC,<>,<>,name,<>,<>,<>,<>,funcContent> : 
                listOutIdent = ();
                
                // find the name inside the declarator
                if ( name == <TYP_LIST> ) 
                    goto for_continue ;
                name    = DeclaratorToName(name);
                
                // then verify func
                inError = VerifyGoto(funcContent, name) || inError ;
                name    = ();
                goto for_continue ;
        }
    })
    return inError ;
}

//
//  FindAssign : Find an assignment in a tree
//
// parameter :
//       tree : tree to be searched
// return : the assign or nil
PTREE FindAssign ( PTREE tree )
{
    
    // if there is an affectation in tree return it
    foreach ((),tree,{
        switch ( for_elem ) {
            
            // if assignment node return it
            case <AFF> : 
            case <MUL_AFF> : 
            case <DIV_AFF> : 
            case <REM_AFF> : 
            case <PLU_AFF> : 
            case <MIN_AFF> : 
            case <LSH_AFF> : 
            case <RSH_AFF> : 
            case <AND_AFF> : 
            case <OR_AFF> : 
            case <XOR_AFF> : return for_elem ;
            default : 
#               ifdef CHOB
                    switch ( for_elem ) {
                        case <EXPO_AFF> : return for_elem ;
                        
                        // not an assignment
                        default : break ;
                    }
#               endif
                
                // not an assignment
                break ;
        }
    })
    
    // no affectation so return nil pointer
    return (PTREE)0 ;
}

//
// VerifyAssign : Verify that assignments are not illegaly used
//
// parameters :
//              tree : the tree to be verified
//              name : name of function
// return : if ok
int VerifyAssign ( PTREE tree, PTREE name )
{
    
    PTREE   elem ;        // a son where search will continue
    PTREE   funcContent ; // function content
    int     inError = 0 ; // indicates whether there is an error
    PTREE   condition ;   // condition to be verified
    
    if ( !assignCond && !assignCall ) 
        return 0 ;
    foreach ((),tree,{
        switch ( for_elem ) {
            case <WHILE,condition> : 
            case <FOR,<>,condition> : 
            case <IF,condition> : 
            case <SWITCH,condition> : 
            case <DO,condition> : 
                
                // verify that there is no assigment in condition
                // otherwise display an error message
                if ( assignCond && FindAssign(condition) ) {
                    WriteString(Value(name));
                    DisplayPos(condition);
                    gotocol(25);
                    "==> ERROR <== illegal use of assignment : ";
                    DECOMP(condition);
                    <NL>
                    inError =  1 ;
                }
                break ;
            case <EXP_LIST,<>,elem> : 
                
                // verify that there is no assigment in condition
                // otherwise display an error message
                if ( assignCall && FindAssign(elem) ) {
                    WriteString(Value(name));
                    DisplayPos(elem);
                    gotocol(25);
                    "==> ERROR <== illegal use of assignment : ";
                    DECOMP(elem);
                    <NL>
                    inError =  1 ;
                }
                break ;
            case <FUNC,<>,<>,name,<>,<>,<>,<>,funcContent> : 
                listOutIdent = ();
                
                // find the name inside the declarator
                if ( name == <TYP_LIST> ) 
                    goto for_continue ;
                name    = DeclaratorToName(name);
                
                // then verify func
                inError = VerifyAssign(funcContent, name) || inError ;
                name    = ();
                goto for_continue ;
        }
    })
    return inError ;
}

/*************************************************************************/
/*   ChopTree : chop the tree : here c    decomp                         */
/*   parameter :                                                         */
/*          tree : the tree to be chopped                                */
/*          noHeader : tell not display header explaining metrics        */
/*          fileName : name of parsed file                               */
/*   return :                                                            */
/*          1 if no error 0 otherwise                                    */
/*************************************************************************/
int ChopTree ( PTREE tree, bool noHeader, char *fileName )
{
    
    PTREE   list ;        // list of result for each function 
    PTREE   listPointer ; // a pointer in the list
    PTREE   elem ;        // an elem of above list
    PTREE   name ;        // name of function
    Metric  treeMetric (tree) ;
    int     inError = 0 ; // indicates whether there is an error in prog    
    
    // output on std error
#   if defined(ON_W)
        output =  1 ;
#   else 
        output =  2 ;
#   endif
    
    // get results
    treeMetric.ComputeTree();
    list =  treeMetric.Result();
    
    // display header for measurements
    if ( !noHeader ) 
        DisplayHeader();
    
    // modify the list so as to contain only the name of funtion
    // in first parameter
    listPointer =  list = copytree(list);
    while ( (elem = nextl(listPointer)) ) {
        elem == <,elem>;
        
        // store pos of function
        int line = 0 ; // line for funct
        int col = 0 ;  // column for funct
        SearchPos(elem, &line, &col);
        
        // search the name of the function 
        if ( elem ) {
            
            // search name of function
            elem == <,<>,<>,name>;
            name =  DeclaratorToName(name);
        } else {
            name =  ();
        }
        
        // put back pos on name 
        SetPos(name, PRE, line, col);
        
        // put name instead of function
        elem += name ;
    }
    
    // sort functions
    TabList(list).Sort();
    
    // take each element of the list of value and
    // display the given function measurement
    listPointer =  list ;
    while ( (elem = nextl(listPointer)) ) {
        DisplayFunctionValue(elem);
    }
    
    // display error for each function
    <NL,2>
    "Errors " <NL>
    "--------" <NL,2>
    listPointer =  list ;
    while ( (elem = nextl(listPointer)) ) {
        inError =  DisplayFunctionError(elem) || inError ;
    }
    
    // verify use of commentaries for parameters and declaration
    inError =  VerifyCommentaries(tree, ()) || inError ;
    
    // verify ident length
    inError =  VerifyIdent(tree, ()) || inError ;
    
    // verify litteral use
    inError =  VerifyLitteral(tree, ()) || inError ;
    
    // verify use of goto 
    inError =  VerifyGoto(tree, ()) || inError ;
    
    // verify assign
    inError =  VerifyAssign(tree, ()) || inError ;
    
    // return false if got an error
    if ( !inError ) {
        <NL,2>
        "No Error Found in : " PrintString(fileName) <NL>
        return 0 ;
    } else {
        <NL,2>
        "Error(s) Found in :" PrintString(fileName) <NL>
        return 1 ;
    }
}

/******************************************************************
   
     copy : copyright ;
   
   *******************************************************************/
void copy ()
{
    const char  *str ; // string used as intermediate pointer
    
    // display all necessary warning
    // warning vary depending on erlms or erlmsch
#   ifdef CHOPB
        
        // c/c++ version
        str =  "\n\r CH ErlMs version 1.0, CopyRight(C) 95-200 Eric Lavillonniere \n\r";
        _write(output, str, strlen(str));
        str =  " CH ErlMs  comes with ABSOLUTELY NO WARRANTY.\n\r";
        _write(output, str, strlen(str));
#   else 
        
        // ch version
        str =  "\n\r C ErlMs version 1.0, CopyRight(C) 95-97 Eric Lavillonniere \n\r";
        _write(output, str, strlen(str));
        str =  " C ErlMs  comes with ABSOLUTELY NO WARRANTY.\n\r";
        _write(output, str, strlen(str));
#   endif
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(output, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(output, str, strlen(str));
    str =  " For details see file COPYING in ErlMs directory.\n\r\n\r";
    _write(output, str, strlen(str));
}


