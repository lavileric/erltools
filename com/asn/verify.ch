language asn;

#include "asndef.h"
#include "asn.h"
#include "decasn.h"

//
// Print of error
//
static int      gotError ;
extern int      printVal ;
extern PTREE    expAssignment ;

void DecompAsn::DisplayError ( const PTREE &printList )
{
    int oldPrintVal = printVal ;
    
    CompForget();
    clpretty::DisplayError(printList, 0);
    gotError =  1 ;
    printVal =  oldPrintVal ;
}

//
// Search duplicates name in a string
//
PTREE DecompAsn::FindDuplicate ( const PTREE &list )
{
    PTREE   first, last ;
    
    first =  list ;
    while ( first != () ) {
        last =  first ;
        nextl(last);
        while ( last != () ) {
            if ( !strcmp(value(first), value(last)) ) 
                return MakeString(value(first));
            nextl(last);
        }
        nextl(first);
    }
    
    // didn't find anything
    return ();
}

//
// Verification of the set type
//
// I should verify unicity of tags
// two untagged type with the same type
// I should take into account components of
PTREE DecompAsn::VerifySetType ( const PTREE &type, int complete )
{
    PTREE   list, elem, ident, defaultVal ;
    PTREE   printList ;         // error list constructed for printing
    PTREE   nameList ;          // list of field names for type
    PTREE   nameOfField ;       // name of field to be added
    int     notNamedField = 0 ; // indicates if the type contains a not
                                // named field
    PTREE   typeElem ;          // type of an element of set   
    int     retValue = 1 ;      // return value if parameter complete is true
    
    type == <,list>;
    while ( (elem = nextl(list)) ) {
        if ( elem != <NAMED_TYPE,ident,typeElem> ) {
            
            // take care of ... in new norms
            if ( elem != <ELEMENT_TYPE,<NAMED_TYPE,ident,typeElem>,defaultVal> ) 
                continue ;
        }
        nameOfField =  ();
        if ( ident == () ) {
            
            // authorize only one unnamed field
            if ( notNamedField ) {
                printList =  ();
                printList *= "More than one UnNamed Field \nIn";
                printList *= copytree(type);
                DisplayError(printList);
            } else {
                nameOfField =  MakeString("#UnNamed");
            }
            
            // 
            notNamedField++ ;
        } else {
            nameOfField =  copytree(ident);
        }
        
        // if there is a default value or an optional construct a cons
        if ( nameOfField != () ) {
            if ( defaultVal != () ) {
                nameOfField =  <CONS,nameOfField,()>;
            }
            
            // add the name we have found to the list of ident
            nameList *= nameOfField ;
        }
        
        // if complete verification verify the type of element
        if ( complete && retValue ) 
            retValue &= VerifyType(typeElem, complete + 1);
    }
    
    // search if two names are the same
    if ( (ident = FindDuplicate(nameList)) ) {
        printList =  ();
        printList *= "Duplicate entry ";
        printList *= copytree(ident);
        printList *= "\nIn";
        printList *= copytree(type);
        DisplayError(printList);
    }
    
    // return the list of ident
    if ( complete && !retValue ) 
        return (PTREE)0 ;
    else 
        return nameList ;
}

//
// Verification of the values for a sequence or a set
//
void DecompAsn::VerifySetValues ( const PTREE &values )
{
    PTREE   list ;
    PTREE   listIdent ;
    PTREE   elem ;
    PTREE   ident ;
    PTREE   printList ;
    int     unNamedValue = 0 ; // indicates the number of unNamed values
    
    values == <,list>;
    while ( (elem = nextl(list)) ) {
        if ( elem == <NAMED_VALUE> ) {
            listIdent *= copytree(elem [1]);
        } else {
            unNamedValue++ ;
            if ( unNamedValue > 1 ) {
                printList =  ();
                printList *= "More than one unNamed value for the assignement";
                printList *= "\nIn";
                printList *= copytree(values);
                DisplayError(printList);
            }
        }
    }
    
    // search if two names are the same
    if ( (ident = FindDuplicate(listIdent)) ) {
        printList =  ();
        printList *= "Duplicate entry ";
        printList *= copytree(ident);
        printList *= "\nIn";
        printList *= copytree(values);
        DisplayError(printList);
    }
}

//
//  Verify that the a set and the value are coherent
//
void DecompAsn::VerifyTypeWithValue ( const PTREE &type, const PTREE &theValue, const PTREE &paramListType, PTREE listValue )
{
    PTREE   elemType ;
    PTREE   elemValue ;
    PTREE   oldElemValue ;
    PTREE   oldListType ;              // keep a pointer on top of listType
    PTREE   oldListValue = listValue ; // keep a pointer on top of listValue
    PTREE   listType ;
    
    // keep a private copy of listtype
    oldListType =  copytree(paramListType);
    
    // verify that all the values are really a value defined in the type
    while ( (elemValue = nextl(listValue)) ) {
        oldElemValue =  elemValue ;
        if ( elemValue != <NAMED_VALUE> ) {
            elemValue =  MakeString("#UnNamed");
        }
        
        // verify that the value is defined in the type
        listType =  oldListType ;
        if ( (elemType = ListFind(oldListType, elemValue)) ) {
            PTREE   father = elemType ^ ;
            PTREE   son ;
            
            // type has a value suppress it
            if ( father != oldListType ) {
                father =  father ^ ;
                father == <,<>,<,<>,son>>;
                father += <,<>,son>;
            } else {
                nextl(oldListType);
            }
        } else {
            
            // if we didn't find the elem send an error message
            PTREE   printList = ();
            printList *= "The Value ";
            printList *= copytree(oldElemValue);
            printList *= "\nis not a value of set ";
            printList *= copytree(type);
            DisplayError(printList);
        }
    }
    
    // verify that all the remaining values are default values
    // or are optional
    listType =  oldListType ;
    if ( !inInterest ) 
        while ( (elemType = nextl(listType)) ) {
            if ( elemType != <CONS> ) {
                PTREE   printList = ();
                printList *= "The entry has received no value \n  ";
                printList *= MakeString(value(elemType));
                printList *= "\nIn";
                printList *= copytree(type);
                printList *= "With";
                printList *= copytree(theValue);
                DisplayError(printList);
            }
        }
}

//
// Verify that a sequence type and it's value declare the values
// in the same order
//
void DecompAsn::VerifySameOrder ( const PTREE &type, PTREE theValue, PTREE listType, PTREE listValue )
{
    PTREE   elemType, elemValue ;
    
    elemValue =  nextl(listValue);
    if ( elemValue == <NAMED_VALUE> ) {
        elemValue =  MakeString(value(elemValue));
    } else {
        elemValue =  MakeString("#UnNamed");
    }
    while ( (elemType = nextl(listType)) ) {
        
        // if same value go on otherwise go on if optional or default
        if ( !strcmp(value(elemType), value(elemValue)) ) {
            elemValue =  nextl(listValue);
            if ( elemValue == <NAMED_VALUE> ) {
                elemValue =  MakeString(value(elemValue));
            } else {
                elemValue =  MakeString("#UnNamed");
            }
        } else if ( elemType != <CONS> && !inInterest ) {
            PTREE   printList = ();
            printList *= "Not the same order for sequence type and value";
            printList *= copytree(theValue);
            DisplayError(printList);
            return ;
        }
    }
    
    // in interest case no message have been printed yet so do it now
    // if there are still values not matched
    if ( listValue ) {
        PTREE   printList = ();
        printList *= "Not the same order for sequence type and value";
        printList *= copytree(theValue);
        DisplayError(printList);
        return ;
    }
}

//
// Verification for a set
//
int DecompAsn::VerifySetAffect ( const PTREE &type, const PTREE &theValue, int forSeq )
{
    PTREE   listType ;
    PTREE   listValue ;
    PTREE   val ;
    
    // didn't find any error yet
    gotError =  0 ;
    if ( theValue == <UN_MINUS,()> ) 
        return 1 ;
    
    // verify that it is a sequence
    if ( theValue != <SEQUENCE_VALUE> ) {
        PTREE   printList = ();
        printList *= copytree(theValue);
        printList *= "Not a sequence value";
        printList *= "\nexpecting";
        printList *= copytree(type);
        DisplayError(printList);
        return 0 ;
    }
    
    // verify the set type
    listType =  VerifySetType(type);
    
    // verify the set values
    VerifySetValues(theValue);
    
    // verify that the values and the type are coherent
    theValue == <,listValue>;
    VerifyTypeWithValue(type, theValue, listType, listValue);
    
    // if it is a sequence verification verify that the two lists
    // are constructed in the same order
    if ( forSeq ) 
        VerifySameOrder(type, theValue, listType, listValue);
    return !gotError ;
}

//
//  VerifyChoiceAffect : verify affect of a choice
//
int DecompAsn::VerifyChoiceAffect ( const PTREE &type, PTREE ident, const PTREE &theValue )
{
    
    //    PTREE   foo ;
    gotError =  0 ;
    
    //    foo = VerifySetType(type);
    if ( ident == () ) 
        ident =  MakeString("#UnNamed");
    if ( !GetChoiceType(type, ident) ) {
        PTREE   printList = ();
        
        // DumpTree(theValue);
        printList *= "Incorrect choice indication \n";
        printList *= copytree(theValue);
        printList *= "\nwith Choice Type ";
        printList *= copytree(expAssignment);
        printList *= "defined as";
        printList *= copytree(type);
        DisplayError(printList);
        return 0 ;
    }
    return !gotError ;
}

//
// VerifyConstraintInteger : verify an integer constraint
//
void DecompAsn::VerifyConstraintInteger ( const PTREE &paramConstraint )
{
    PTREE   elem ;
    PTREE   constraint ;
    
    switch ( paramConstraint ) {
        case <GT_THAN,constraint> : 
        case <LT_THAN,constraint> : ;
        case <SUBTYPE_SPEC,constraint> : 
            VerifyConstraintInteger(constraint);
            return ;
        case <LIST> : 
            constraint = paramConstraint ;
            while ( (elem = nextl(constraint)) ) 
                VerifyConstraintInteger(elem);
            return ;
        case <VALUE_RANGE> : 
            constraint = paramConstraint ;
            VerifyConstraint(constraint);
            return ;
        default : constraint = paramConstraint ;
    }
    if ( constraint != <MIN_VALUE> && constraint != <MAX_VALUE> ) 
        delete EncodeValue(<INTEGER,()>, constraint);
}

//
// VerifyConstraints : verify the constraints
//
void DecompAsn::VerifyConstraint ( const PTREE &paramConstraint )
{
    PTREE   elem ;
    PTREE   exp1, exp2 ;
    PTREE   constraint ;
    
    switch ( paramConstraint ) {
        case <LIST> : 
            constraint = paramConstraint ;
            while ( (elem = nextl(constraint)) ) 
                VerifyConstraint(elem);
            break ;
        case <SIZE,constraint> : 
            VerifyConstraintInteger(constraint);
            break ;
        case <SUBTYPE_SPEC,constraint> : 
            VerifyConstraint(constraint);
            break ;
        case <VALUE_RANGE,exp1,exp2> : 
            VerifyConstraintInteger(exp1);
            VerifyConstraintInteger(exp2);
            break ;
    }
}

//
// VerifyType : make verifications on types
//
int DecompAsn::VerifyType ( const PTREE &type, int internal )
{
    char    string [50];
    PTREE   list, elem, val, ident ;
    PTREE   exp1, exp2, exp3, exp4 ;
    PTREE   constraint ;
    int     result = 1 ;
    PTREE   aType ;
    
    if ( !type ) 
        return 1 ;
    switch ( type ) {
        case <TYP_ASSIGN,<>,aType> : return VerifyType(aType, internal);
        case <TYP,list,val,constraint> : 
            
            // verify constraints
            VerifyConstraint(constraint);
            
            // verify the type itself
            return VerifyType(val, internal + 1);
            break ;
        case <TYP_IDENT,val> : 
            {
                PTREE   valType ;
                
                // type is used somewhere if call is internal
                if ( internal ) 
                    rootTab->Remove(val);
                
                // if type is allready verified do nothing
                if ( (*treatedTypes)[type] ) 
                    return 1 ;
                else 
                    treatedTypes->Insert(copytree(val));
                
                // verification
                valType =  (*tabListType)[val];
                if ( valType != () ) {
                    
                    // if we allready met this type there is a loop
                    // except if there is a choice node 
                    if ( (*pathType)[type] ) {
                        list =  pathType->List();
                        while ( (elem = nextl(list)) ) {
                            PTREE   baseType = FindTyp(elem);
                            while ( baseType == <TYP,<>,baseType> ) 
                                if ( baseType == <TYP_IDENT> ) 
                                    baseType =  FindTyp(baseType);
                            if ( baseType == <CHOICE> ) 
                                return 1 ;
                        }
                        
                        // if there is no choice it is an error 
                        {
                            PTREE   PrintList = () * "Too Deep Nesting during type specification";
                            DisplayError(PrintList);
                            return 0 ;
                        }
                    } else 
                        pathType->Insert(copytree(val));
                    
                    // verify the type
                    if ( !VerifyType(valType, internal + 1) ) {
                        PTREE   PrintList = () * "<<->> " * copytree(valType [1]);
                        DisplayError(PrintList);
                        pathType->Remove(copytree(val));
                        return 0 ;
                    }
                    pathType->Remove(val);
                } else {
                    PTREE   printList ;
                    printList *= "Bad type name\n";
                    printList *= copytree(type);
                    DisplayError(printList);
                }
            }
            break ;
        case <SEQUENCE> : 
        case <SET> : 
        case <CHOICE> : 
            
            // take into account the COMPONENTS OF
            type == <,list>;
            while ( (elem = nextl(list)) ) 
                if ( elem == <COMPONENTS_OF,<TYP,<>,<TYP_IDENT>>> ) {
                    val =  elem [1];
                    val =  val [2];
                    
                    // type is used somewhere
                    rootTab->Remove(val);
                }
            
            // normalize type
            aType = TypeNormalize(type);
            aType == <,list>;
            
            // verify set
            if ( !VerifySetType(aType, internal + 1) ) 
                return 0 ;
            
            // check each type of sequence element
            // on choice there could be artefact loop
            // if we guess there will be a loop stop choice expansion
            while ( (elem = nextl(list)) ) {
                if ( elem == <NAMED_TYPE> ) {
                    if ( !VerifyType(elem [2], internal + 1) ) 
                        return 0 ;
                }
            }
            break ;
        case <SEQUENCE_OF,constraint> : 
        case <SET_OF,constraint> : 
            VerifyConstraint(constraint);
            return VerifyType(type [2], internal + 1);
            break ;
        case <ENUMERATED> : 
        case <INTEGER> : 
        case <REAL_TYPE> : ;
        case <NULL_TYPE> : ;
        case <BOOLEAN> : ;
        case <BITSTRING> : ;
        case <OCTET_STRING> : ;
        case <UTC_TIME> : ;
        case <GENERALIZED_TIME> : ;
        case <CHARACTER> : ;
        case <ANY_TYPE> : ;
        case <EXTERNAL> : ;
        case <OBJECT_IDENTIFIER> : break ;
        default : 
            {
                PTREE   printList ;
                printList *= "Unknown Type\n";
                printList *= copytree(type);
                DisplayError(printList);
            }
    }
    return 1 ;
}

#ifdef FOR_METACHOP
    PTREE   rootList ;
    PTREE   listType ;
    PTREE   listValue ;
#endif

//
//  Verify all types
//
void DecompAsn::VerifyAllTypes ( int displayRoot, TabList *inserted )
{
    PTREE   list, val ;
    
    // compute a list of types
    rootList =  ();
    if ( tabListType->GetTabList(0) ) {
        list =  tabListType->GetTabList(0)->List();
        while ( (val = nextl(list)) ) {
            rootList *= MakeString(Value(val));
        }
    }
    
    // construct quick access
    if ( rootTab != (TabList *)0 ) 
        delete rootTab ;
    rootTab =  new TabList(rootList);
    
    // construct list of allready verified types
    if ( treatedTypes != (TabList *)0 ) 
        delete treatedTypes ;
    treatedTypes =  new TabList ;
    
    // verify all the types
    if ( tabListType->GetTabList(0) ) {
        list =  tabListType->GetTabList(0)->List();
        while ( (val = nextl(list)) ) {
            val == <TYP_ASSIGN,val>;
            
            // reinitialize path of types 
            if ( pathType ) 
                delete pathType ;
            pathType =  new TabList ;
            
            // verify type
            VerifyType(val);
        }
    }
    
    // display root types
    if ( displayRoot ) {
        int     oldOutput = output ;
        PTREE   elem ;
        Flush();
        output =  2 ;
        list   =  rootTab->List();
        "====> root types" <NL,2>
        while ( (elem = nextl(list)) ) 
            if ( !(*inserted)[elem] ) {
                value(elem) <NL,1>
            }
        <NL,2>
        output =  oldOutput ;
    }
}


