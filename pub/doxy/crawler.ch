///
/// @file crawler.ch
///
/// @brief	Crawler class
///
language erlvalti;

#include "algo/crawler.h"
#include "tree/algo.h"
#include "tree/utils.h"
#include "tree/display.h"
#include "varPointer.h"

///
/// @fn Crawler::Crawler (GeneratorUtils &generatorUtils /*, PTREE &plistModule, TabList &tabFile, SymbolTable &symbTable, std::vector<LineAssoc> &tabLineAssoc
///                                                   , CoverageType coverageType, int &funcVarLevel*/ ) 
///
/// @brief	Constructor
///
/// @param [in,out]	generatorUtils	The generator utilities.
/// 
/// ### param [in,out]	plistModule 	The list of modules of the treated files.
/// ### param [in,out]	tabFile			The list of treated files.
/// ### param [in,out]	symbTable   	The list of symbols of the treated files.
/// ### param [in,out]	tabLineAssoc	The tab line associated.
/// ### param 		  	coverageType	Which condition analysis to perform (mcdc, c1, none)
/// ### param [in,out]	funcVarLevel	The symbol level for the current function.
///
Crawler::Crawler
(
GeneratorUtils &generatorUtils /*, PTREE &plistModule, TabList &tabFile, SymbolTable &symbTable, std::vector<LineAssoc> &tabLineAssoc
                                  , CoverageType coverageType, int &funcVarLevel*/ 
)
    : m_generatorUtils(generatorUtils)
/*,  m_listModule(plistModule),  m_tabFile(tabFile),  m_symbTable(symbTable),  m_tabLineAssoc(tabLineAssoc), m_coverageType(coverageType)
   ,  m_funcVarLevel(funcVarLevel)*/
{
}

///
/// @fn Crawler::~Crawler () 
///
/// @brief	Destructor
///
Crawler::~Crawler ()
{
}

///
/// @fn PTREE   Crawler::Crawl (PTREE &funct, PTREE &condition, PTREE &refTree, int &nbInst, bool noLocal) 
///
/// @brief	Main entry point of the Crawler algorithm
///
/// @param [in,out]	funct	 	The complet function being treated.
/// @param [in,out]	condition	The condition beig crawled.
/// @param [in,out]	refTree  	.
/// @param [in,out]	nbInst   	The number of modified instruction.
/// @param 		   	noLocal  	.
///
/// @returns	A PTREE containing the result of the crawling.
///
PTREE Crawler::Crawl ( PTREE &funct, PTREE &condition, PTREE &refTree, int &nbInst, bool noLocal )
{
    
    PTREE       retList ;      // return value : all the labels to be inserted
    PTREE       newInst ;      // the new labels to be inserted because of a given variable
    PTREE       constPart ;    // the constant
    PTREE       varPart ;      // the variable
    PTREE       treatedNames ; // already treated variables
    PTREE       generated ;    // the list of couple var const
    PTREE       exp1, exp2, elem, list ;
    PTREE       listDescriptor, descriptor ;
    PTREE       constVal1, constVal2, constVal ;
    FindChain   findChain ;
    PTREE       keeper ;
    
    // do a little cleaning on the conditions maybe should test that ident is not a type or ident1 a const to be seen later
    erlvaltic::tree::algo::NormalizeLogicalExpression(condition, ListModule(), TabFile(), SymbTable());
    
    // then generates
    foreach ((),condition,{
        bool    unTreated = true ; // do not move if on place expansion
        while ( unTreated ) {
            unTreated =  false ;
            bool    enCase = false ; // found a logical leaf, should encase in a condition_selector
            
            ///
            /// @fn PTREE   elem (for_elem) 
            ///
            /// @brief elem
            ///
            /// @param [in,out] _param0
            ///
            /// @returns  PTREE
            ///
            PTREE   elem (for_elem _param0) ;
            
            ///
            /// @fn PTREE   conditionElem (for_elem) 
            ///
            /// @brief conditionElem
            ///
            /// @param [in,out] _param0
            ///
            /// @returns  PTREE
            ///
            PTREE   conditionElem (for_elem _param0) ;
            switch ( elem ) {
                case <LEQU,exp1,exp2> : 
                case <GEQU,exp1,exp2> : 
                case <GT,exp1,exp2> : 
                case <LT,exp1,exp2> : 
                    {
                        
                        // normalize to put constant on one side
                        if ( erlvaltic::tree::algo::NormalizeCondition(elem, ListModule(), TabFile(), SymbTable()) ) {
                            elem == <,exp1,exp2>;
                            for_elem      =  elem ;
                            conditionElem =  elem ;
                        }
                        
                        // do the job
                        constPart =  ();
                        varPart   =  exp1 ;
                        enCase    =  true ;
                        
                        // search if some const part
                        constVal1 =  erlvaltic::tree::algo::IsConst(exp1, ListModule(), TabFile(), SymbTable(), ConstVar());
                        constVal2 =  erlvaltic::tree::algo::IsConst(exp2, ListModule(), TabFile(), SymbTable(), ConstVar());
                        if ( constVal1 != () && constVal2 == () ) {
                            constPart =  exp1 ;
                            varPart   =  exp2 ;
                            if ( constVal1 != notNull ) 
                                constVal =  constVal1 ;
                        } else if ( constVal1 == () && constVal2 != () ) {
                            constPart =  exp2 ;
                            varPart   =  exp1 ;
                            if ( constVal2 != notNull ) 
                                constVal =  constVal2 ;
                        } // two constants
                        else if ( constVal1 != () && constVal2 != () ) {
                            erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                            goto for_continue ;
                        }
                        
                        // if var part is a pointer forget it since unusuable
                        {
                            PTREE   normedTypeDeclarator, normedTypeType ;
                            PTREE   normedType
                                = erlvaltic::tree::algo::NormalizedDescript(varPart, ListModule(), TabFile(), SymbTable(), false /* keep array*/ 
                                    , true /* keep enum */ );
                            normedType == <NAME_DESCRIPT,<>,<>,<>,<>,normedTypeType,normedTypeDeclarator>;
                            PTREE   name ;
                            name =  erlvaltic::tree::utils::ConvertDeclToIdent(normedTypeDeclarator);
                            while ( name != () && name != normedType ) {
                                switch ( name ) {
                                    case <TYP_ADDR> : 
                                        erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                                        goto for_continue ;
                                        break ;
                                    default : break ;
                                }
                                name =  name ^ ;
                            }
                        }
                        
                        // if some part is const generate the new instructions
                        int oldNbInst = nbInst ;
                        if ( constPart != () ) {
                            newInst =  CreateNewInst(funct, false, nbInst, varPart, refTree, constPart, constVal, treatedNames, generated, noLocal);
                            if ( newInst == <DUO,descriptor,<COMPOUND,list>> ) {
                                if ( list == <LIST> ) 
                                    retList =  AddListList(retList, list);
                                if ( descriptor == <LIST> ) 
                                    listDescriptor =  AddListList(listDescriptor, descriptor);
                            } else 
                                nbInst =  oldNbInst ;
                        } else {
                            
                            // try to find good variable on one side or the other
                            if ( constVal1 == () ) {
                                newInst =  CreateNewInst(funct, false, nbInst, exp1, refTree, exp2, constVal, treatedNames, generated, noLocal);
                            }
                            if ( newInst == <DUO,descriptor,<COMPOUND,list>> /* && ListLength(descriptor) > 0 */ ) {
                                {
                                    if ( list == <LIST> && Coverage() != CoverageType::None ) 
                                        retList =  AddListList(retList, list);
                                    else 
                                        nbInst =  oldNbInst ;
                                    if ( descriptor == <LIST> ) 
                                        listDescriptor =  AddListList(listDescriptor, descriptor);
                                }
                                {
                                    oldNbInst =  nbInst ;
                                    
                                    // insert the variables on the other side
                                    if ( constVal2 == () ) {
                                        newInst =  CreateNewInst(funct, false, nbInst, exp2, refTree, exp1, constVal, treatedNames, generated, noLocal);
                                    }
                                    if ( newInst == <DUO,descriptor,<COMPOUND,list>> /* && ListLength(descriptor) > 0*/ ) {
                                        if ( descriptor == <LIST> ) 
                                            listDescriptor =  AddListList(listDescriptor, descriptor);
                                        
                                        // for the instructions keep only the two concerning maximum
                                        nbInst =  oldNbInst ;
                                        if ( list == <LIST> && Coverage() != CoverageType::None ) {
                                            PTREE   anInst ;
                                            if ( (anInst = nextl(list)) ) {
                                                retList *= anInst ;
                                                nbInst++ ;
                                            }
                                            if ( (anInst = nextl(list)) ) {
                                                retList *= anInst ;
                                                nbInst++ ;
                                            }
                                        } else 
                                            nbInst =  oldNbInst ;
                                    } else 
                                        nbInst =  oldNbInst ;
                                }
                            } else {
                                nbInst =  oldNbInst ;
                                if ( constVal2 == () ) {
                                    newInst =  CreateNewInst(funct, false, nbInst, exp2, refTree, exp1, constVal, treatedNames, generated, noLocal);
                                }
                                if ( newInst == <DUO,descriptor,<COMPOUND,list>> /* && ListLength(descriptor) > 0 */ ) {
                                    {
                                        if ( list == <LIST> && Coverage() != CoverageType::None ) 
                                            retList =  AddListList(retList, list);
                                        else 
                                            nbInst =  oldNbInst ;
                                        if ( descriptor == <LIST> ) 
                                            listDescriptor =  AddListList(listDescriptor, descriptor);
                                    }
                                } else if ( Coverage() != CoverageType::None ) {
                                    enCase =  false ;
                                    nbInst =  oldNbInst ;
                                    erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                                }
                            }
                            if ( Coverage() == CoverageType::None ) {
                                enCase =  false ;
                                nbInst =  oldNbInst ;
                                erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                            }
                        }
                    }
                    break ;
                case <EQU,exp1,exp2> : 
                case <NEQU,exp1,exp2> : 
                    {
                        
                        // normalize to put constant on one side
                        if ( erlvaltic::tree::algo::NormalizeCondition(elem, ListModule(), TabFile(), SymbTable()) ) {
                            elem == <,exp1,exp2>;
                            for_elem      =  elem ;
                            conditionElem =  elem ;
                        }
                        
                        // do the job
                        constPart =  ();
                        varPart   =  exp1 ;
                        enCase    =  true ;
                        
                        // search if some const part
                        constVal1 =  erlvaltic::tree::algo::IsConst(exp1, ListModule(), TabFile(), SymbTable(), ConstVar());
                        constVal2 =  erlvaltic::tree::algo::IsConst(exp2, ListModule(), TabFile(), SymbTable(), ConstVar());
                        if ( constVal1 != () && constVal2 == () ) {
                            constPart =  exp1 ;
                            varPart   =  exp2 ;
                            if ( constVal1 != notNull ) 
                                constVal =  constVal1 ;
                        } else if ( constVal1 == () && constVal2 != () ) {
                            constPart =  exp2 ;
                            varPart   =  exp1 ;
                            if ( constVal2 != notNull ) 
                                constVal =  constVal2 ;
                        } // two constants
                        else if ( constVal1 != () && constVal2 != () ) {
                            erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                            goto for_continue ;
                        }
                        
                        // if var part is a pointer forget it since unusuable
                        {
                            PTREE   normedTypeDeclarator, normedTypeType ;
                            PTREE   normedType
                                = erlvaltic::tree::algo::NormalizedDescript(varPart, ListModule(), TabFile(), SymbTable(), false /* keep array*/ 
                                    , true /* keep enum */ );
                            normedType == <NAME_DESCRIPT,<>,<>,<>,<>,normedTypeType,normedTypeDeclarator>;
                            PTREE   name ;
                            name =  erlvaltic::tree::utils::ConvertDeclToIdent(normedTypeDeclarator);
                            while ( name != () && name != normedType ) {
                                switch ( name ) {
                                    case <TYP_ADDR> : 
                                        erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                                        goto for_continue ;
                                        break ;
                                    default : break ;
                                }
                                name =  name ^ ;
                            }
                        }
                        
                        // if some part is const generate the new instructions
                        int oldNbInst = nbInst ;
                        if ( constPart != () ) {
                            PTREE   typeVar = ();
                            newInst =  CreateNewInst(funct, true, nbInst, varPart, refTree, constPart, constVal, treatedNames, generated, noLocal);
                            if ( newInst == <DUO,descriptor,<COMPOUND,list>> ) {
                                if ( list == <LIST> ) 
                                    retList =  AddListList(retList, list);
                                if ( descriptor == <LIST> ) 
                                    listDescriptor =  AddListList(listDescriptor, descriptor);
                            } else if ( newInst != <ALREADY_TREATED> ) {
                                nbInst =  oldNbInst ;
                                erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                            }
                        } else {
                            
                            // try to find good variable on one side or the other
                            newInst =  CreateNewInst(funct, true, nbInst, exp1, refTree, exp2, constVal, treatedNames, generated, noLocal);
                            if ( newInst == <DUO,descriptor,<COMPOUND,list>> /* && ListLength(descriptor) > 0 */ ) {
                                if ( list == <LIST> && Coverage() != CoverageType::None ) 
                                    retList =  AddListList(retList, list);
                                else 
                                    nbInst =  oldNbInst ;
                                if ( descriptor == <LIST> ) 
                                    listDescriptor =  AddListList(listDescriptor, descriptor);
                                oldNbInst =  nbInst ;
                                newInst   =  ();
                                if ( constVal2 == () ) {
                                    newInst =  CreateNewInst(funct, true, nbInst, exp2, refTree, exp1, constVal, treatedNames, generated, noLocal);
                                }
                                if ( newInst == <DUO,descriptor,<COMPOUND,list>> /* && ListLength(descriptor) > 0*/ ) {
                                    if ( descriptor == <LIST> ) {
                                        listDescriptor =  AddListList(listDescriptor, descriptor);
                                    }
                                    
                                    // partially incremented in next if
                                    nbInst =  oldNbInst ;
                                    
                                    // for the instructions keep only the two concerning maximum
                                    if ( list == <LIST> && Coverage() != CoverageType::None ) {
                                        PTREE   anInst ;
                                        if ( (anInst = nextl(list)) ) {
                                            retList *= anInst ;
                                            nbInst++ ;
                                        }
                                        if ( (anInst = nextl(list)) ) {
                                            retList *= anInst ;
                                            nbInst++ ;
                                        }
                                    }
                                } else {
                                    nbInst =  oldNbInst ;
                                }
                            } else {
                                nbInst  =  oldNbInst ;
                                newInst =  CreateNewInst(funct, true, nbInst, exp2, refTree, exp1, constVal, treatedNames, generated, noLocal);
                                if ( newInst == <DUO,descriptor,<COMPOUND,list>> /* && ListLength(descriptor) > 0 */ ) {
                                    if ( list == <LIST> && Coverage() != CoverageType::None ) 
                                        retList =  AddListList(retList, list);
                                    else 
                                        nbInst =  oldNbInst ;
                                    if ( descriptor == <LIST> ) 
                                        listDescriptor =  AddListList(listDescriptor, descriptor);
                                } else if ( newInst != <ALREADY_TREATED> && Coverage() != CoverageType::None ) {
                                    erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                                    enCase =  false ;
                                    nbInst =  oldNbInst ;
                                }
                            }
                            if ( Coverage() == CoverageType::None ) {
                                erlvaltic::tree::display::DisplayNoGen(elem, noConstReason, "", TabLineAssoc());
                                enCase =  false ;
                                nbInst =  oldNbInst ;
                            }
                        }
                    }
                    break ;
                case <CONDITION_SELECTOR> : 
                case <CONDITION_SELECTOR_INVALID> : 
                case <OR> : 
                case <AND> : break ;
                case <EXP_SEQ,list> : 
                    {
                        PTREE   subCond ;
                        
                        ///
                        /// @fn PTREE   condition (list) 
                        ///
                        /// @brief condition
                        ///
                        /// @param [in,out] _param0
                        ///
                        /// @returns  PTREE
                        ///
                        PTREE   condition (list _param0) ;
                        while ( (subCond = nextl(list)) ) 
                            condition =  subCond ;
                        for_elem  =  condition ^ ;
                        unTreated =  true ;
                    }
                    break ;
                default : 
                    {
                        /*
                           case <LIST> : 
                           case <EXP> : 
                           
                           // ELV 01/2020 normalize expression before
                           case <NOT> : 
                               {
                                   PTREE   newElem ;
                                   elem == <,exp1>;
                                   newElem =  <EQU,copytree(exp1),<INTEGER,"0">>;
                                   if ( elem == condition ) {
                                       condition =  newElem ;
                                       elem      =  condition ;
                                   } else {
                                       elem += newElem ;
                                       elem =  newElem ;
                                   }
                                   for_elem         =  newElem ;
                                   unTreated =  true ;
                               }
                               break ;
                           default : 
                               {
                                   PTREE   newElem ;
                                   newElem =  <NEQU,copytree(elem),<INTEGER,"0">>;
                                   if ( elem == condition ) {
                                       condition =  newElem ;
                                       elem      =  condition ;
                                   } else {
                                       elem += newElem ;
                                       elem =  newElem ;
                                   }
                                   for_elem         =  newElem ;
                                   unTreated =  true ;
                               }
                               break ;
                           */
                    }
                    break ;
            }
            if ( !unTreated ) {
                if ( enCase ) {
                    PTREE   father = conditionElem ^ ;
                    if ( father ) {
                        unsigned int    rankTree = conditionElem.RankTree();
                        PTREE           newTree = <CONDITION_SELECTOR,conditionElem,(),(),(),()>;
                        father.ReplaceTree(rankTree, newTree);
                        for_elem =  newTree ;
                        goto for_continue ;
                    }
                }
                switch ( elem ) {
                    case <CONDITION_SELECTOR> : 
                    case <CONDITION_SELECTOR_INVALID> : 
                    case <OR> : 
                    case <AND> : 
                    case <LIST> : break ;
                    /*
                       
                       // ELV 01/2020
                       case <EXP_SEQ> : 
                       case <LIST> : 
                       case <EXP> : break ;
                       */
                    default : goto for_continue ;
                }
            }
        }
    })
    return <LIST,listDescriptor,retList>;
}

///
/// @fn PTREE   Crawler::CreateNewInstInt (PTREE funct, bool andType, int &nbInst, PTREE varPart, PTREE refInTree, PTREE constPart, PTREE &constVal, PTREE &treatedNames, PTREE &generated, bool noLocal) 
///
/// @brief	Creates new instruction to insert the labels parameters :
///
/// @param 		   	funct			The function being treated.
/// @param 		   	andType			indicates a == or !=.
/// @param [in,out]	nbInst			The number of added instruction.
/// @param 		   	varPart			the var of expression.
/// @param 		   	refInTree   	.
/// @param 		   	constPart   	the const part of expression.
/// @param [in,out]	constVal		The constant value.
/// @param [in,out]	treatedNames	the list of already treated names.
/// @param [in,out]	generated   	the list of generated.
/// @param 		   	noLocal			.
///
/// @returns	The new created instruction.
///
PTREE Crawler::CreateNewInstInt ( PTREE funct, bool andType, int &nbInst, PTREE varPart, PTREE refInTree, PTREE constPart, PTREE &constVal, PTREE &treatedNames
    , PTREE &generated, bool noLocal )
{
    PTREE   typeVar, typeVarRet ;
    PTREE   declaratorRet ;
    PTREE   newInst ;
    PTREE   wVarPart = varPart, theVar = (), theVal ;
    PTREE   elem ;
    PTREE   variableDescriptor = <VARIABLE_DESCRIPTOR,(),()>;
    PTREE   listConstant, listDescriptor ;
    PTREE   globalIdent ;
    bool    onlyLocal = false ;
    bool    extendedVariable = false ;
    bool    isLocalVar = false ;
    bool    validIdent = true ;
    
    {
        PTREE   ident ;
        if ( wVarPart == <LAND,theVar,theVal> || wVarPart == <LOR,theVar,theVal> || wVarPart == <LXOR,theVar,theVal> ) {
            
            // suppress the OTIMIZE_INIT from varpart
            theVar =  copytree(theVar);
            foreach (<EXP_LIST>,theVar,{
                ///
                /// @fn PTREE   elem (for_elem) 
                ///
                /// @brief elem
                ///
                /// @param [in,out] _param0
                ///
                /// @returns  PTREE
                ///
                PTREE   elem (for_elem _param0) ;
                if ( VString(Value(elem)) == "OPTIMIZE_INIT" ) {
                    PTREE   newVal ;
                    elem == <,<>,<EXP_SEQ,<LIST,<>,<LIST,newVal>>>>;
                    if ( elem == theVar ) 
                        theVar =  newVal ;
                    else 
                        elem += newVal ;
                    for_elem =  newVal ;
                }
            })
            
            // get external ident
            ident      =  GeneratorUtilsPtr()->GetFromLocalToExternal(theVar, refInTree);
            
            // try to get the type for the variable otherwise from inside variable
            typeVarRet =  erlvaltic::tree::algo::NormalizedDescript(theVar, ListModule(), TabFile(), SymbTable(), false);
            PTREE   typeVarRetType ;
            if ( typeVarRet == <NAME_DESCRIPT,<>,<>,<>,<>,typeVarRetType,declaratorRet> ) {
                typeVarRet =  typeVarRetType ;
            } else {
                PTREE   elem = ident ;
                if ( elem == <LIST> ) 
                    elem =  nextl(elem);
                typeVarRet =  erlvaltic::tree::algo::TypeVar(elem, ListModule(), TabFile(), SymbTable());
            }
            globalIdent =  ident ;
        } else {
            
            // suppress the OPTIMIZE_INIT from varpart
            varPart =  copytree(varPart);
            foreach (<EXP_LIST>,varPart,{
                ///
                /// @fn PTREE   elem (for_elem) 
                ///
                /// @brief elem
                ///
                /// @param [in,out] _param0
                ///
                /// @returns  PTREE
                ///
                PTREE   elem (for_elem _param0) ;
                if ( VString(Value(elem)) == "OPTIMIZE_INIT" ) {
                    PTREE   newVal ;
                    elem == <,<>,<EXP_SEQ,<LIST,<>,<LIST,newVal>>>>;
                    if ( elem == varPart ) 
                        varPart =  newVal ;
                    else 
                        elem += newVal ;
                    for_elem =  newVal ;
                }
            })
            
            // get external ident
            ident =  GeneratorUtilsPtr()->GetFromLocalToExternal(varPart, refInTree);
            
            // search ident embedded in expression
            if ( ident == () ) {
                FindChain   findChain ;
                ident =  GeneratorUtilsPtr()->ExternalVarEmbedded(varPart, refInTree, findChain);
                ident =  erlvaltic::tree::algo::SimplifyPoint(ident, ListModule(), TabFile(), SymbTable());
                if ( ident != () ) {
                    EString magicAssigned("MagicAssigner_");
                    if ( VString(Value(ident)).substring(0, magicAssigned.length()) != magicAssigned ) 
                        extendedVariable =  true ;
                }
            }
            
            // suppress types from ident
            {
                if ( ident == <LIST> ) {
                    PTREE   newList ;
                    PTREE   theList = ident ;
                    while ( (elem = nextl(theList)) ) {
                        PTREE   type = SymbTable().GetVar(ident);
                        if ( type != <NAME_DESCRIPT,<>,<TYPDEF>> ) 
                            newList *= elem ;
                    }
                    ident =  newList ;
                } else {
                    PTREE   type = SymbTable().GetVar(ident);
                    if ( type == <NAME_DESCRIPT,<>,<TYPDEF>> ) 
                        ident =  ();
                }
            }
            
            // still nothing will try with the local variable
            if ( ident == () ) {
                bool    atTop = false ;
                PTREE   father = varPart ;
                while ( !atTop ) {
                    switch ( father ) {
                        case <LEQU> : 
                        case <GEQU> : 
                        case <GT> : 
                        case <LT> : 
                        case <EQU> : 
                        case <NEQU> : 
                            {
                                atTop =  true ;
                                break ;
                            }
                            break ;
                        default : 
                            {
                                father =  father ^ ;
                                if ( father == () || father == (PTREE) -1 ) 
                                    atTop =  true ;
                            }
                            break ;
                    }
                }
                if ( noLocal ) {
                    erlvaltic::tree::display::DisplayNoGen(father, localVarNotGeneratedReason, "", TabLineAssoc());
                    return ();
                }
                isLocalVar =  true ;
                
                // it it is really an ident and not external nothing to do it is really a local var
                PTREE   internalIdent = erlvaltic::tree::utils::ConvertDeclToIdent(varPart);
                if ( internalIdent != () ) {
                    onlyLocal =  true ;
                    ident     =  varPart ;
                    erlvaltic::tree::display::DisplayNoGen(varPart, localVarReason, "", TabLineAssoc());
                }
            }
            
            // try to get the type for the variable otherwise from inside variable
            typeVarRet =  ();
            PTREE   convertIdent = erlvaltic::tree::utils::ConvertDeclToIdent(varPart);
            if ( convertIdent != () ) {
                
                // search type
                typeVarRet =  erlvaltic::tree::algo::NormalizedDescript(varPart, ListModule(), TabFile(), SymbTable(), false);
            }
            PTREE   insideType ;
            if ( typeVarRet == <NAME_DESCRIPT,<>,<>,<>,<>,insideType,declaratorRet> ) {
                typeVarRet =  insideType ;
                foreach ((),declaratorRet,{
                    ///
                    /// @fn PTREE   elem (for_elem) 
                    ///
                    /// @brief elem
                    ///
                    /// @param [in,out] _param0
                    ///
                    /// @returns  PTREE
                    ///
                    PTREE   elem (for_elem _param0) ;
                    if ( erlvaltic::tree::utils::GCompareTree(elem, varPart) ) {
                        PTREE   father = elem ^ ;
                        while ( father != () && father == <TYP> ) {
                            father =  father ^ ;
                        }
                        switch ( father ) {
                            case <TYP_ADDR> : 
                            case <TYP_REF> : 
                            case <TYP_ARRAY> : 
                            case <TYP_LIST> : 
                                validIdent = false ;
                                break ;
                            case <TYP_BIT> : 
                                {
                                    PTREE   nbBits ;
                                    father == <TYP_BIT,<>,nbBits>;
                                    typeVarRet =  <TYP_BIT,copytree(typeVarRet),copytree(nbBits)>;
                                    break ;
                                }
                            default : break ;
                        }
                        goto for_break ;
                    }
                })
            } else {
                PTREE   elem = ident ;
                if ( elem == <LIST> ) 
                    elem =  nextl(elem);
                if ( elem != () ) 
                    typeVarRet =  erlvaltic::tree::algo::TypeVar(elem, ListModule(), TabFile(), SymbTable());
            }
            
            //  --
            globalIdent =  ident ;
        }
        typeVar =  typeVarRet ;
        typeVar == <TYPE_MULTI,typeVar>;
    }
    
    PTREE   father ;
    
    // comparaison on pointer or arrays ????? or unknown type not for us
    if ( typeVar == () || !validIdent /* || declaratorRet == <TYP_ADDR> || declaratorRet == <TYP_ARRAY>*/ ) 
        return ();
    
    // suppress useless ()
    while ( theVar == <EXP,theVar> ) 
        ;
    
    // look if we have to put max and min, put them only first time
    bool    firstTime = true ;
    
    {
        PTREE   theList = treatedNames ;
        while ( (elem = nextl(theList)) ) 
            if ( erlvaltic::tree::utils::GCompareTree(elem, varPart) ) 
                firstTime =  false ;
        if ( firstTime ) {
            treatedNames =  <LIST,copytree(varPart),treatedNames>;
        }
    }
    
    // look if not already treated it
    {
        PTREE   toBeTreated = <DUO,copytree(varPart),copytree(constPart)>;
        PTREE   theList = generated ;
        while ( (elem = nextl(theList)) ) 
            if ( erlvaltic::tree::utils::GCompareTree(elem, toBeTreated) ) {
                PTREE   nullTree = <ALREADY_TREATED>;
                return nullTree ;
            }
        generated =  <LIST,toBeTreated,generated>;
    }
    
    int nbGenerated ;
    
    // create the skeleton of generated output
    in cplus {
        {
            if ( theVar != () ) {
                newInst     =  parse (
                    {
                      OPTIMIZE_LABEL($ind1,$trim($val)==$trim($constant),EQU_DIFF($trim($val)-$trim($constant)),1);
                      OPTIMIZE_LABEL($ind2,$trim($val)==$trim($bit),EQU_DIFF($trim($val)-$trim($bit)),0);
                      OPTIMIZE_LABEL($ind3,$trim($val)==$trim(($caster) $funct(0)),EQU_DIFF($trim($val)-$trim(($caster) $funct(0))),1);
                      OPTIMIZE_LABEL($ind4,$trim($val)==$trim(($caster) $funct($bit)),EQU_DIFF($trim($val)-$trim(($caster) $funct($bit))),0);
                    }
                );
                nbGenerated =  4 ;
            } else {
                
                // ELV 08/18 if extentedVariable could be a pointer + sthing so cannot check againt a constant
                if ( firstTime /*&& !extendedVariable */ ) {
                    newInst     =  parse (
                                {
                        __marker0;0;
                        __marker1;OPTIMIZE_LABEL_CHECK_DOWN($ind1,$trim($val)==$trim($MAX_VAL),EQU_DIFF($trim($val)-$trim($MAX_VAL)),1);
                        __marker2;OPTIMIZE_LABEL_CHECK_UP($ind2,$trim($val)==$trim($MIN_VAL),EQU_DIFF($trim($val)-$trim($MIN_VAL)),1);
                        __marker3;OPTIMIZE_LABEL_CHECK($ind3,$trim($val)==$trim($constant),EQU_DIFF($trim($val)-$trim($constant)),0);
                        __marker4;OPTIMIZE_LABEL_CHECK($ind4,$trim($val)==$trim(($constant)+1),EQU_DIFF($trim($val)-$trim(($constant)+1)),0);
                        __marker5;OPTIMIZE_LABEL_CHECK($ind5,$trim($val)==$trim(($constant)-1),EQU_DIFF($trim($val)-$trim(($constant)-1)),0);
                                }
                    );
                    nbGenerated =  5 ;
                } else {
                    newInst     =  parse (
                                      {
                        __marker0;0;
                        __marker3;OPTIMIZE_LABEL_CHECK($ind3,$trim($val)==$trim($constant),EQU_DIFF($trim($val)-$trim($constant)),0);
                        __marker4;OPTIMIZE_LABEL_CHECK($ind4,$trim($val)==$trim(($constant)+1),EQU_DIFF($trim($val)-$trim(($constant)+1)),0);
                        __marker5;OPTIMIZE_LABEL_CHECK($ind5,$trim($val)==$trim(($constant)-1),EQU_DIFF($trim($val)-$trim(($constant)-1)),0);
                             }
                    );
                    nbGenerated =  3 ;
                }
            }
        }
    }
    
    // selected parsing is not correct adapt it 
    erlvaltic::tree::algo::Trim(newInst, SymbTable(), false);
    
    int level ;
    
    if ( theVar != () ) {
        metarep("val", newInst, copytree(theVar));
        PTREE   symb = SymbTable()[theVar];
        level =  SymbTable().LastLevel(); // level in table
        
        // test that we have a variable
        PTREE   testName = erlvaltic::tree::utils::ConvertDeclToIdent(theVar);
        if ( testName == () ) 
            return ();
        
        // treat even local var
        if ( level >= 0 /* && level <= funcVarLevel*/ ) {
            if ( level <= FuncVarLevel() /*|| symb == <NAME_DESCRIPT,<>,<SSVAR>>*/ ) {
                while ( theVar == <EXP,theVar> ) 
                    ;
                variableDescriptor =  <VARIABLE_DESCRIPTOR,erlvaltic::tree::algo::CleanExpArray(theVar, ListModule(), TabFile(), SymbTable()),copytree(typeVar)>;
            } else {
                
                // PTREE   ident = GeneratorUtilsPtr()->GetFromLocalToExternal(theVar, refInTree, listAssoc, ListModule(), TabFile(), SymbTable());
                PTREE   ident = globalIdent ;
                if ( ident != () ) {
                    PTREE   context = ALLOCATE_CLASS(VarPointer(ident));
                    while ( ident == <EXP,ident> ) 
                        ;
                    variableDescriptor
                        =  <VARIABLE_DESCRIPTOR,<LOCAL_VAR,erlvaltic::tree::algo::CleanExpArray(ident, ListModule(), TabFile(), SymbTable()),context>,copytree(typeVar)>;
                } else 
                    variableDescriptor =  ();
            }
            if ( variableDescriptor != () ) {
                listDescriptor =  <LIST,variableDescriptor,listDescriptor>;
            }
        } else {
            theVar =  ();
            return ();
        }
    } else {
        metarep("val", newInst, copytree(varPart));
        if ( firstTime ) {
            if ( typeVarRet == <TYPE_MULTI> ) {
                foreach ((),varPart,{
                    elem =  for_elem ;
                    switch ( elem ) {
                        case <EXP_ARRAY> : 
                        case <TYP_ARRAY> : 
                        case <ARROW> : 
                        case <REF> : 
                        case <POINT> : 
                        case <IDENT> : 
                            {
                                PTREE   type = erlvaltic::tree::algo::TypeVar(elem, ListModule(), TabFile(), SymbTable());
                                PTREE   symb = SymbTable()[elem];
                                level =  SymbTable().LastLevel(); // level in table
                                
                                // test that we have a variable
                                PTREE   testName = erlvaltic::tree::utils::ConvertDeclToIdent(elem);
                                if ( testName == () ) 
                                    return ();
                                
                                // generate
                                if ( level <= FuncVarLevel() /*|| symb == <NAME_DESCRIPT,<>,<SSVAR>>*/ ) {
                                    while ( elem == <EXP,elem> ) 
                                        ;
                                    variableDescriptor
                                        =  <VARIABLE_DESCRIPTOR,erlvaltic::tree::algo::CleanExpArray(elem, ListModule(), TabFile(), SymbTable()),copytree(type)>;
                                } else {
                                    
                                    // PTREE   ident = GeneratorUtilsPtr()->GetFromLocalToExternal(elem, refInTree, listAssoc, ListModule(), TabFile(), SymbTable());
                                    PTREE   ident = globalIdent ;
                                    if ( ident == () ) 
                                        return ident ;
                                    PTREE   context = ALLOCATE_CLASS(VarPointer(ident));
                                    while ( ident == <EXP,ident> ) 
                                        ;
                                    variableDescriptor
                                        =  <VARIABLE_DESCRIPTOR,<LOCAL_VAR,erlvaltic::tree::algo::CleanExpArray(ident, ListModule(), TabFile(), SymbTable()),context>
                                            ,copytree(type)>;
                                }
                                if ( !onlyLocal ) 
                                    listDescriptor =  <LIST,variableDescriptor,listDescriptor>;
                                goto for_continue ;
                            }
                            break ;
                        default : break ;
                    }
                })
            } else {
                if ( globalIdent == () ) 
                    return ();
                if ( !extendedVariable ) {
                    PTREE   symb = SymbTable()[varPart];
                    level =  SymbTable().LastLevel(); // level in table
                    
                    // test that we have a variable
                    PTREE   testName = erlvaltic::tree::utils::ConvertDeclToIdent(varPart);
                    if ( testName == () ) 
                        return ();
                } else {
                    level =  FuncVarLevel() + 1 ;
                }
                
                // generate
                // ELV 16/8
                if ( false && level <= FuncVarLevel() /*|| symb == <NAME_DESCRIPT,<>,<SSVAR>>*/ ) {
                    PTREE   curr = varPart ;
                    while ( curr == <EXP,curr> ) 
                        ;
                    variableDescriptor += <,erlvaltic::tree::algo::CleanExpArray(curr, ListModule(), TabFile(), SymbTable()),copytree(typeVar)>;
                } else {
                    
                    // PTREE   ident = GeneratorUtilsPtr()->GetFromLocalToExternal(varPart, refInTree, listAssoc, ListModule(), TabFile(), SymbTable());
                    PTREE   ident = globalIdent ;
                    if ( ident != () ) {
                        PTREE   context = ALLOCATE_CLASS(VarPointer(ident));
                        while ( ident == <EXP,ident> ) 
                            ;
                        variableDescriptor
                            =  <VARIABLE_DESCRIPTOR,<LOCAL_VAR,erlvaltic::tree::algo::CleanExpArray(ident, ListModule(), TabFile(), SymbTable()),context>
                                ,copytree(typeVar)>;
                    } else 
                        variableDescriptor =  ();
                }
                if ( !onlyLocal && variableDescriptor != () ) 
                    listDescriptor =  <LIST,variableDescriptor,listDescriptor>;
            }
        } else {
            PTREE   listVar = listDescriptor ;
            while ( (elem = nextl(listVar)) ) {
                if ( (EString(Value(elem)) = Value(varPart)) ) 
                    variableDescriptor =  elem ;
            }
        }
    }
    metarep("constant", newInst, <EXP,copytree(constPart)>);
    metarep("bit", newInst, copytree(theVal));
    
    bool            tBitField = false, tInt = false, tChar = false, tDouble = false, tFloat = false, tLong = false, tShort = false, tSigned = false, tUnsigned = false
        , tBool = false ;
    bool            tEnum = false ;
    unsigned int    nbBits = 0 ;
    
    {
        foreach ((),typeVar,{
            PTREE   elem = for_elem ;
            switch ( elem ) {
                case <TYP_BIT> : 
                    {
                        PTREE   nbBitsTree ;
                        tBitField =  true ;
                        elem == <TYP_BIT,<>,nbBitsTree>;
                        nbBits =  atoi(Value(nbBitsTree));
                        break ;
                    }
                case <TINT> : 
                    tInt = true ;
                    break ;
                case <TDOUBLE> : 
                    tDouble = true ;
                    break ;
                case <TCHAR> : 
                    tChar = true ;
                    break ;
                case <TFLOAT> : 
                    tFloat = true ;
                    break ;
                case <TLONG> : 
                    tLong = true ;
                    break ;
                case <ENUM> : 
                    tLong     = true ;
                    tEnum     = true ;
                    tUnsigned = true ;
                    goto for_break ;
                case <TSHORT> : 
                    tShort = true ;
                    break ;
                case <TSIGNED> : 
                    tSigned = true ;
                    break ;
                case <TUNSIGNED> : 
                    tUnsigned = true ;
                    break ;
                default : 
                    {
                        if ( elem == <INTEGER> && tBitField ) {
                            goto for_continue ;
                        }
                        if ( elem == <TIDENT,<IDENT,"bool">> ) {
                            tBool =  true ;
                            goto for_continue ;
                        } else 
                            return ();
                    }
            }
        })
        long int    valMax = 0, valMin = 0 ;
        if ( tBitField ) {
            if ( tUnsigned ) {
                valMax =  (1 << nbBits) - 1 ;
                valMin =  0 ;
            } else {
                valMin =  -(1 << nbBits - 1);
                valMax =  1 << nbBits - 1 - 1 ;
            }
        }
        EString constVal1, constVal1a, constVal1b, constVal2, TRIM_IDENT, MAX_IDENT, MIN_IDENT ;
        if ( tBitField ) {
            constVal1  =  EString((int)valMin);
            constVal1b =  EString((int)valMin);
            constVal1a =  EString((int)(valMin + 1)) + EString("L - 1L");
            constVal2  =  EString((int)valMax);
            TRIM_IDENT =  EString("_TRIM") + EString((int)nbBits);
            MAX_IDENT  =  EString((int)valMax);
            MIN_IDENT  =  EString((int)valMin);
        }
        if ( tShort ) {
            if ( tUnsigned ) {
                if ( !tBitField ) {
                    constVal1  =  "0";
                    constVal2  =  "65535";
                    TRIM_IDENT =  "_TRIMU16";
                    MAX_IDENT  =  "UINT16_MAX";
                    MIN_IDENT  =  "0";
                    metarep("MAX_VAL", newInst, <IDENT,PTREE(MAX_IDENT)>);
                } else {
                    metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                }
                metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                metarep("caster", newInst, <IDENT,"uint16_t">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == constVal2 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == constVal1 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            } else {
                if ( !tBitField ) {
                    constVal1  =  "-32768";
                    constVal2  =  "32767";
                    TRIM_IDENT =  "_TRIM16";
                    MAX_IDENT  =  "INT16_MAX";
                    MIN_IDENT  =  "INT16_MIN";
                    metarep("MIN_VAL", newInst, <IDENT,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <IDENT,PTREE(MAX_IDENT)>);
                } else {
                    metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                }
                metarep("caster", newInst, <IDENT,"int16_t">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == constVal2 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == constVal1 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            }
            metarep("caster", newInst, <IDENT,"INT_16">);
        } else if ( tLong ) {
            if ( tDouble ) {
                metarep("MIN_VAL", newInst, <IDENT,"LONG_DOUBLE_MIN">);
                metarep("MAX_VAL", newInst, <IDENT,"LONG_DOUBLE_MAX">);
                metarep("caster", newInst, <IDENT,"long double">);
                metarep("trim", newInst, <IDENT,"_TRIM_NONE">);
            } else if ( tUnsigned ) {
                if ( !tBitField ) {
                    constVal1  =  "0";
                    constVal2  =  "4294967295";
                    TRIM_IDENT =  "_TRIMU32";
                    MAX_IDENT  =  "UINT32_MAX";
                    MIN_IDENT  =  "0";
                    metarep("MAX_VAL", newInst, <IDENT,PTREE(MAX_IDENT)>);
                } else {
                    metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                }
                metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                metarep("caster", newInst, <IDENT,"UINT32">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == constVal2 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == constVal1 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            } else {
                if ( !tBitField ) {
                    constVal1a =  "-2147483647L - 1L";
                    constVal1b =  "-2147483648";
                    constVal2  =  "2147483647";
                    TRIM_IDENT =  "_TRIM32";
                    MAX_IDENT  =  "INT32_MAX";
                    MIN_IDENT  =  "INT32_MIN";
                    metarep("MIN_VAL", newInst, <IDENT,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <IDENT,PTREE(MAX_IDENT)>);
                } else {
                    metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                }
                metarep("caster", newInst, <IDENT,"int32_t">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == constVal2 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == constVal1a || EString(Value(constVal)) == constVal1b ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            }
        } else if ( tChar ) {
            if ( tUnsigned ) {
                if ( !tBitField ) {
                    constVal1  =  "0";
                    constVal2  =  "255";
                    TRIM_IDENT =  "_TRIMU8";
                    MAX_IDENT  =  "255";
                    MIN_IDENT  =  "0";
                }
                metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                metarep("caster", newInst, <IDENT,"unsigned char">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                if ( EString(Value(constVal)) == constVal2 ) {
                    erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                    erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                }
                if ( EString(Value(constVal)) == constVal1 ) {
                    erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                    erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                }
            } else {
                if ( !tBitField ) {
                    constVal1  =  "-128";
                    constVal2  =  "127";
                    TRIM_IDENT =  "_TRIM8";
                    MAX_IDENT  =  "127";
                    MIN_IDENT  =  "-128";
                }
                metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                metarep("caster", newInst, <IDENT,"char">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == MAX_IDENT ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == MIN_IDENT ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            }
        } else if ( tInt || tUnsigned ) {
            if ( tUnsigned ) {
                if ( !tBitField ) {
                    constVal1  =  "0";
                    constVal2  =  "4294967295";
                    TRIM_IDENT =  "_TRIMU32";
                    MAX_IDENT  =  "UINT32_MAX";
                    MIN_IDENT  =  "UINT32_MIN";
                    metarep("MIN_VAL", newInst, <IDENT,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <IDENT,PTREE(MAX_IDENT)>);
                } else {
                    metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                    metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                }
                metarep("caster", newInst, <IDENT,"uint32_t">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == constVal2 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == constVal1 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            } else {
                if ( !tBitField ) {
                    constVal1a =  "-2147483647L - 1L";
                    constVal1b =  "-2147483648";
                    constVal2  =  "2147483647";
                    TRIM_IDENT =  "_TRIM32";
                    MAX_IDENT  =  "INT32_MAX";
                    MIN_IDENT  =  "INT32_MIN";
                    metarep("MIN_VAL", newInst, <IDENT,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <IDENT,PTREE(MAX_IDENT)>);
                } else {
                    metarep("MIN_VAL", newInst, <INTEGER,PTREE(MIN_IDENT)>);
                    metarep("MAX_VAL", newInst, <INTEGER,PTREE(MAX_IDENT)>);
                }
                metarep("caster", newInst, <IDENT,"int32_t">);
                metarep("trim", newInst, <IDENT,PTREE(TRIM_IDENT)>);
                if ( constVal != (PTREE)0 ) {
                    if ( EString(Value(constVal)) == constVal2 ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker1");
                    }
                    if ( EString(Value(constVal)) == constVal1a || EString(Value(constVal)) == constVal1b ) {
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
                        erlvaltic::tree::utils::InhibateInstr(newInst, "__marker2");
                    }
                }
            }
        } else if ( tFloat ) {
            metarep("MIN_VAL", newInst, <IDENT,"FLOAT_MIN">);
            metarep("MAX_VAL", newInst, <IDENT,"FLOAT_MAX">);
            metarep("caster", newInst, <IDENT,"float">);
            metarep("trim", newInst, <IDENT,"_TRIM_NONE">);
        } else if ( tDouble ) {
            metarep("MIN_VAL", newInst, <IDENT,"DOUBLE_MIN">);
            metarep("MAX_VAL", newInst, <IDENT,"DOUBLE_MAX">);
            metarep("caster", newInst, <IDENT,"double">);
            metarep("trim", newInst, <IDENT,"_TRIM_NONE">);
        }
        if ( tBitField ) {
            EString funct = EString("INT") + EString((int)nbBits) + EString("_BIT_REVERSE");
            metarep("funct", newInst, <IDENT,PTREE(funct)>);
        } else if ( tShort ) {
            metarep("funct", newInst, <IDENT,"INT16_BIT_REVERSE">);
        } else if ( tLong ) {
            metarep("funct", newInst, <IDENT,"INT32_BIT_REVERSE">);
        } else if ( tChar ) {
            metarep("funct", newInst, <IDENT,"INT8_BIT_REVERSE">);
        } else if ( tInt ) {
            metarep("funct", newInst, <IDENT,"INT_BIT_REVERSE">);
        }
        if ( tBool ) {
            metarep("MIN_VAL", newInst, <IDENT,"true">);
            metarep("MAX_VAL", newInst, <IDENT,"false">);
            metarep("trim", newInst, <IDENT,"_TRIMU1">);
            erlvaltic::tree::utils::InhibateInstr(newInst, "__marker3");
            erlvaltic::tree::utils::InhibateInstr(newInst, "__marker4");
            erlvaltic::tree::utils::InhibateInstr(newInst, "__marker5");
        }
    }
    GeneratorUtilsPtr()->ReplaceIncrement(newInst, "ind1", nbInst);
    GeneratorUtilsPtr()->ReplaceIncrement(newInst, "ind2", nbInst);
    GeneratorUtilsPtr()->ReplaceIncrement(newInst, "ind3", nbInst);
    GeneratorUtilsPtr()->ReplaceIncrement(newInst, "ind4", nbInst);
    GeneratorUtilsPtr()->ReplaceIncrement(newInst, "ind5", nbInst);
    
    // suppresse the remaining markers
    EString val ;
    
    foreach (<IDENT>,newInst,{
        PTREE   elem = for_elem ;
        PTREE   next ;
        val =  EString(Value(elem)).substring(0, 8);
        if ( val == "__marker" ) {
            father =  elem ^ ;
            
            // suppress also 0 instr in case of marker 0 if not enum
            if ( VString(Value(elem)) == "__marker0" && !tEnum ) {
                father == <LIST,<>,<LIST,<>,next>>;
            } else {
                father == <LIST,<>,next>;
            }
            father   += next ;
            for_elem =  next ;
        } else if ( isLocalVar ) {
            
            // if local variable
            // do not do tickle otherwise unexpected effect since programmer is not expecting it
            if ( EString(Value(elem)) == "OPTIMIZE_LABEL_CHECK"
                    || EString(Value(elem)) == "OPTIMIZE_LABEL_CHECK_UP"
                    || EString(Value(elem)) == "OPTIMIZE_LABEL_CHECK_DOWN" ) {
                PTREE   newIdent = <IDENT,PTREE("OPTIMIZE_LABEL")>;
                for_elem =  elem += newIdent ;
            }
        }
    })
    
    // suppress call to trim of 0, which causes problem with pointer
    // do not known if int or pointer
    erlvaltic::tree::algo::Trim(newInst, SymbTable(), false /* expand macro*/ );
    foreach (<EXP_LIST>,newInst,{
        ///
        /// @fn PTREE   elem (for_elem) 
        ///
        /// @brief elem
        ///
        /// @param [in,out] _param0
        ///
        /// @returns  PTREE
        ///
        PTREE   elem (for_elem _param0) ;
        VString functName ;
        functName =  Value(elem);
        if ( TRIM_FUNCTION(functName) ) {
            PTREE   data, leaf ;
            elem == <,<>,data>;
            leaf =  data ;
            while ( leaf == <EXP,leaf>
                        || leaf == <HEXA,leaf>
                        || leaf == <IUN,leaf>
                        || leaf == <IUNLONG,leaf>
                        || leaf == <IUNLONGLONG,leaf>
                        || leaf == <ILONG,leaf>
                        || leaf == <ILONGLONG,leaf>
                        || leaf == <OCTAL,leaf>
                        || leaf == <CAST,<>,leaf> ) 
                ;
            if ( leaf == <INTEGER> && erlvaltic::tree::utils::IsZeroVal(leaf) ) {
                elem     += data ;
                for_elem =  data ;
            }
            leaf =  data ;
            while ( leaf == <EXP,leaf>
                        || leaf == <HEXA,leaf>
                        || leaf == <IUN,leaf>
                        || leaf == <IUNLONG,leaf>
                        || leaf == <IUNLONGLONG,leaf>
                        || leaf == <ILONG,leaf>
                        || leaf == <ILONGLONG,leaf>
                        || leaf == <OCTAL,leaf> ) 
                ;
            if ( leaf == <INTEGER> && erlvaltic::tree::utils::IsZeroVal(leaf) ) {
                PTREE   nData ;
                nData    =  <EXP,<CAST,<ABST_DECLARATOR,<TINT>,()>,copytree(leaf)>>;
                data     += nData ;
                for_elem =  nData ;
            }
        }
    })
    
    // return result
    return <DUO,listDescriptor,newInst>;
}

///
/// @fn PTREE   Crawler::CreateNewInst (PTREE funct, bool andType, int &nbInst, PTREE varPart, PTREE refInTree, PTREE constPart, PTREE &constVal, PTREE &treatedNames, PTREE &generated, bool noLocal) 
///
/// @brief	CreateNewInst : Creates new instruction to insert the labels parameters :
///
/// @param 		   	funct			The function being treated.
/// @param 		   	andType			indicates a == or !=.
/// @param [in,out]	nbInst			The number of added instruction.
/// @param 		   	varPart			the var of expression.
/// @param 		   	refInTree   	.
/// @param 		   	constPart   	the const part of expression.
/// @param [in,out]	constVal		The constant value.
/// @param [in,out]	treatedNames	the list of already treated names.
/// @param [in,out]	generated   	the list of generated.
/// @param 		   	noLocal			.
///
/// @returns	The new created instruction.
///
PTREE Crawler::CreateNewInst ( PTREE funct, bool andType, int &nbInst, PTREE varPart, PTREE refInTree, PTREE constPart, PTREE &constVal, PTREE &treatedNames
    , PTREE &generated, bool noLocal )
{
    PTREE   theVar, theVal ;
    
    // suppress cast and exp
    while ( varPart == <CAST,<>,varPart> || andType && varPart == <EXP,varPart> ) 
        ;
    if ( varPart == <LAND,theVar,theVal> || varPart == <LOR,theVar,theVal> || varPart == <LXOR,theVar,theVal> ) {
        PTREE   duo ;
        if ( !erlvaltic::tree::algo::IsConst(theVar, ListModule(), TabFile(), SymbTable(), ConstVar()) ) {
            duo =  CreateNewInstInt(funct, andType, nbInst, varPart, refInTree, constPart, constVal, treatedNames, generated, noLocal);
        }
        
        // generate with the variable part old right
        if ( !erlvaltic::tree::algo::IsConst(theVal, ListModule(), TabFile(), SymbTable(), ConstVar()) ) {
            PTREE   exp1 ;
            PTREE   exp2 ;
            varPart =  copytree(varPart);
            varPart == <,exp1,exp2>;
            varPart += <,exp2,exp1>;
            PTREE   duo2 = CreateNewInstInt(funct, andType, nbInst, varPart, refInTree, constPart, constVal, treatedNames, generated, noLocal);
            if ( duo2 == <DUO> ) {
                if ( duo == <DUO> ) {
                    PTREE   list_11, list_12, list_12_list ;
                    PTREE   list_21, list_22, list_22_list ;
                    duo == <,list_11,list_12>;
                    duo2 == <,list_21,list_22>;
                    list_12_list =  list_12 ;
                    list_12_list == <COMPOUND,list_12_list>;
                    list_22_list =  list_22 ;
                    list_22_list == <COMPOUND,list_22_list>;
                    if ( list_21 == <LIST> ) {
                        list_11 =  AddListList(list_11, list_21);
                    }
                    if ( list_22_list == <LIST> ) {
                        list_12_list =  AddListList(list_12_list, list_22_list);
                        if ( list_12 == <COMPOUND> ) {
                            list_12 += <,list_12_list>;
                        } else {
                            list_12 =  <COMPOUND,list_12_list>;
                        }
                    }
                    duo =  <DUO,list_11,list_12>;
                } else 
                    duo =  duo2 ;
            }
        }
        return duo ;
    } else 
        return CreateNewInstInt(funct, andType, nbInst, varPart, refInTree, constPart, constVal, treatedNames, generated, noLocal);
}


