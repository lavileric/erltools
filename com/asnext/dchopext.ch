language asnext;

#include "decasnext.h"
#include "tablist.h"

//
// decompilation of node particular do extension
//
PTREE DecompAsnExt::IntDecomp ( const PTREE &tree, int )
{
    PTREE   type, def, critical, list, elem, name, list1, elem1 ;
    PTREE   argument, result, error, port, consumer, supplier, val ;
    PTREE   tree1, tree2, treen ;
    
    switch ( tree ) {
        case <SIGNATURE,type> : 
            "SIGNATURE" @type
            break ;
        case <SIGNED,type> : 
            "SIGNED" @type
            break ;
        case <ENCRYPTED,type> : 
            "ENCRYPTED" @type
            break ;
        case <EXTATTRIBUTE,type> : 
            "EXTENSION-ATTRIBUTE" <NL>
                <T> {{
                        @type
                    }} <NL>
            break ;
        case <SECCATEGORY,type> : 
            "SECURITY-CATEGORY" <NL>
                <T> {{
                        @type
                    }} <NL>
            break ;
        case <TOKEN,type> : 
            "TOKEN" @type
            break ;
        case <TOKENDATA,type> : 
            "TOKEN-DATA" @type
            break ;
        case <EXTENSION,type,def,critical> : 
            "EXTENSION";
            if ( type || critical ) {
                <NL>
                    <T> {{
                            @type
                            if ( def ) {
                                <NL>
                                    <T> {{
                                            "DEFAULT ";
                                            if ( def == <SEQUENCE_VALUE,()> ) 
                                                "{}" 
                                            else 
                                                @def 
                                        }}
                            }
                            if ( critical ) {
#                               if 0
                                    if ( type ) {
                                        <NL>
                                    }
#                               endif
                                <NL>
                                    <T> {{
                                            "CRITICAL FOR " value(critical)
                                        }}
                            }
                        }} <NL>
            }
            break ;
        case <ABSTRACT_OPERATION,argument,result,error> : 
            {
                "ABSTRACT-OPERATION" <NL>
                    <T> {{
                            if ( argument ) {
                                "ARGUMENT" @argument
                            }
                            if ( result ) {
                                <NL,1>
                                "RESULT" @result
                            }
                            if ( error ) {
                                <NL,1>
                                "ERRORS" <NL>
                                "{" <NL>
                                    <T> {{
                                            DecompList(error, ",", (char *)0, 1);
                                        }} <NL>
                                "}";
                            }
                        }}
            }
            break ;
        case <ABSTRACT_BIND,port,argument,result,error> : 
            {
                "ABSTRACT-BIND" <NL>
                    <T> {{
                            if ( port ) {
                                "TO {";
                                DecompList(port, ",", (char *)0, 0);
                                "}" <NL>
                            }
                            "BIND";
                            if ( argument ) {
                                <NL,1>
                                "ARGUMENT" @argument
                            }
                            if ( result ) {
                                <NL,1>
                                "RESULT" @result
                            }
                            if ( error ) {
                                <NL,1>
                                "BIND-ERROR" @error
                            }
                        }}
            }
            break ;
        case <ABSTRACT_UNBIND,port> : 
            {
                "ABSTRACT-UNBIND" <NL>
                    <T> {{
                            if ( port ) {
                                "FROM {";
                                DecompList(port, ",", (char *)0, 0);
                                "}";
                            }
                        }}
            }
            break ;
        case <PORT,consumer,supplier> : 
            {
                "PORT" <NL>
                    <T> {{
                            if ( consumer ) {
                                "CONSUMER INVOKES {";
                                DecompList(consumer, ",", (char *)0, 0);
                                "}" <NL>
                            }
                            if ( supplier ) {
                                "SUPPLIER INVOKES {";
                                DecompList(supplier, ",", (char *)0, 0);
                                "}" <NL>
                            }
                        }}
            }
            break ;
        case <ABSTRACT_ERROR,val> : 
            {
                "ABSTRACT-ERROR" <NL>
                    <T> {{
                            "PARAMETER" @val
                        }}
            }
            break ;
        case <NULL_PARAMETER> : 
            "NULL";
            break ;
        case <PARAMETER_VALUE,val,type> : 
            {
                @val @type
            }
            break ;
        case <EXTENSIONS,list> : 
            "EXTENSIONS CHOSEN FROM {" <NL>
                <T> {{
                        DecompList(list, ",", (char *)0, 1);
                        <SEPB> "}";
                    }}
            break ;
        case <IPMS_EXTENSION,type> : 
            "IPMS-EXTENSION" <NL>
                <T> "VALUE" @type <NL>
            break ;
        case <ALGORITHM,type> : 
            "ALGORITHM" <NL>
            if ( type ) {
                    <T> "PARAMETER" @type <NL>
            }
            break ;
        case <DIST_EXTENSION,type> : 
            "DIST-EXTENSION" <NL>
                <T> "VALUE" @type <NL>
            break ;
        case <EXTENDED_BODY,tree1,tree2,val> : 
            {
                "EXTENDED-BODY-PART-TYPE" <NL>
                    <T> {{
                            if ( tree1 ) {
                                "PARAMETERS" @tree1 <NL>
                                    <T> {{
                                            "IDENTIFIED BY" @tree2
                                        }} <NL>
                            }
                            "DATA" @val <NL>
                        }}
            }
            break ;
        case <MS_ATTRIBUTE,type,list,val> : 
            {
                "ATTRIBUTE" <NL>
                    <T> {{
                            "WITH ATTRIBUTE-SYNTAX" @type <NL>
                            if ( list ) {
                                "MATCHES FOR";
                                list == <,list>;
                                DecompList(list, ",", (char *)0, 0);
                                <NL>
                            }
                            switch ( val ) {
                                case <SINGLE> : 
                                    "SINGLE";
                                    break ;
                                case <MULTI> : 
                                    "MULTI";
                                    break ;
                            }
                            "VALUE" <NL>
                        }}
            }
            break ;
        case <ABSTRACT_OBJECT,list> : 
            {
                "OBJECT";
                if ( list ) {
                    list == <PORT_DEF_LIST,list>;
                    "PORTS" <S> "{" <NL>
                        <T> {{
                                while ( (elem = nextl(list)) ) {
                                    elem == <,name,type>;
                                    @name
                                    if ( type ) {
                                        "[";
                                        switch ( type ) {
                                            case <CONSUMER> : 
                                                "C";
                                                break ;
                                            case <SUPPLIER> : 
                                                "S";
                                                break ;
                                        }
                                        "]";
                                    }
                                    if ( list ) {
                                        "," <NL>
                                    }
                                }
                            }} <NL>
                    "}" <NL>
                }
            }
            break ;
        case <REFINE,name,list> : 
            {
                "REFINE" @name "AS" <NL>
                    <T> {{
                            list == <REFINEMENT_LIST,list>;
                            while ( (elem = nextl(list)) ) {
                                elem == <REFINEMENT,name,val,list1>;
                                @name
                                if ( val ) 
                                    "RECURRING" 
                                <NL>
                                if ( list1 == <PORT_PAIR_LIST,list1> ) {
                                        <T> {{
                                                while ( (elem1 = nextl(list1)) ) {
                                                    elem1 == <,name,type,treen>;
                                                    @name
                                                    if ( type ) {
                                                        <S> "[";
                                                        switch ( type ) {
                                                            case <CONSUMER> : 
                                                                "C";
                                                                break ;
                                                            case <SUPPLIER> : 
                                                                "S";
                                                                break ;
                                                        }
                                                        "]" <S>
                                                    }
                                                    if ( treen == <VISIBLE> ) {
                                                        <S> "VISIBLE";
                                                    } else {
                                                        "PAIRED WITH";
                                                        treen == <,treen>;
                                                        while ( (tree1 = nextl(treen)) ) {
                                                            @tree1
                                                            if ( treen ) {
                                                                ",";
                                                            }
                                                        }
                                                    }
                                                    <NL>
                                                }
                                            }} <NL>
                                }
                            }
                        }}
            }
            break ;
        case <ADD,tree1,tree2> : 
            @tree1 <S> "+" <S> @tree2
            break ;
        case <PORT_DEF,treen> : 
            @treen
            break ;
        default : DecompAsn::IntDecomp(tree, 1);
    }
    return (PTREE)0 ;
}

/********************************************************************
       TreatGeometrySpecific : treatment of specific geometry
   *******************************************************************/
int DecompAsnExt::TreatGeometrySpecific ( PTREE tree, int x0, int x )
{
    PTREE   elem, elem1 ;
    
    switch ( tree ) {
        case <PORT,elem,elem1> : 
            TraiterExpListParam(elem, x0);
            TraiterExpListParam(elem1, x0);
            break ;
        case <MS_ATTRIBUTE,<>,elem> : 
            TraiterExpListParam(elem [1], x0);
            break ;
        case <ABSTRACT_BIND,elem> : 
        case <ABSTRACT_UNBIND,elem> : 
        case <PORT_DEF_LIST,elem> : 
        case <REFINEMENT_LIST,elem> : 
            TraiterExpListParam(elem, x0);
            break ;
        default : return DecompAsn::TreatGeometrySpecific(tree, x0, x);
    }
    return 1 ;
}

//
// Verification of a simple extension
//
void DecompAsnExt::VerifySimpleExtension ( PTREE type, PTREE theValue )
{
    
    PTREE   listValue ;      // list in the sequence associated to the value
    PTREE   typExt ;         // type of extension    
    PTREE   selector ;       // selector of extension
    int     verifTypOk = 1 ; // check that type verification succeeded
    PTREE   valueType ;
    PTREE   printList ;      // list for displaying errors    
    
    theValue == <SEQUENCE_VALUE,listValue>;
    valueType =  ();
    
    // if extension is not a valid extension of type
    // print an error 
    typExt    =  ();
    theValue == <SEQUENCE_VALUE,<LIST,<NAMED_VALUE,<>,selector>>>;
    
    // search declaration of value
    //        typExt = FindValue(selector);
    if ( selector ) 
        typExt =  (*tabListValue)[selector];
    
    // if it is not an extension value it is an error
    if ( typExt != <VAL_ASSIGN,<>,<TYP,(),typExt,()>> ) {
        printList =  ();
        printList *= "Value of selector cannot be found";
        printList *= copytree(selector);
        printList *= "In";
        printList *= copytree(theValue ^ );
        DisplayError(printList);
    } else {
        
        // verify the type of the selector
        if ( !strcmp(Value(type), "ExtensionAttribute") ) {
            if ( typExt != <EXTATTRIBUTE,typExt> ) 
                verifTypOk =  0 ;
        } else if ( !strcmp(Value(type), "SecurityCategory") ) {
            if ( typExt != <SECCATEGORY,typExt> ) 
                verifTypOk =  0 ;
        } else if ( !strcmp(Value(type), "Token") ) {
            if ( typExt != <TOKEN,typExt> ) 
                verifTypOk =  0 ;
        } else if ( !strcmp(Value(type), "TokenData") ) {
            if ( typExt != <TOKENDATA,typExt> ) 
                verifTypOk =  0 ;
        }
        if ( !verifTypOk ) {
            printList =  ();
            printList *= "Type of selector is incorrect";
            printList *= copytree(selector);
            printList *= "In";
            printList *= copytree(theValue ^ );
            DisplayError(printList);
        } else {
            
            // in value search for the value part
            verifTypOk =  1 ;
            while ( listValue && listValue != <,<NAMED_VALUE,<>,<ANY_VALUE,<TYP,(),(valueType = <TYP_IDENT>),()>>>> ) 
                nextl(listValue);
            
            // if found check it ( it must be an any value )
            if ( valueType ) {
                typExt == <TYP,(),typExt /* = <TYP_IDENT>*/ >;
                
                // the type indicated in the any value must be the same
                // as in the type associated with the extension number
                if ( !qcomparetree(valueType, typExt) && strcmp(Value(valueType), Value(typExt)) ) 
                    verifTypOk =  0 ;
            } else 
                verifTypOk =  0 ;
            if ( !verifTypOk && typExt ) {
                printList =  ();
                printList *= "The type of the value is not correct";
                printList *= copytree(valueType);
                printList *= "Type should be";
                printList *= copytree(typExt);
                printList *= "In";
                printList *= copytree(theValue ^ );
                DisplayError(printList);
            }
        }
    }
}

//
// Verification of an extension type
//
void DecompAsnExt::VerifyExtensionType ( PTREE type )
{
    
    PTREE   extList ;   // extensions allowed
    PTREE   extElem ;   // an extension
    PTREE   typExt ;    // an extension type
    PTREE   printList ; // display list for error    
    
    // verify that all extension in the type are real extensions
    type == <EXTENSIONS,extList>;
    while ( (extElem = nextl(extList)) ) {
        
        // search declaration of value
        //        typExt = FindValue(extElem);
        typExt =  (*tabListValue)[extElem];
        
        // if it is not an extension value it is an error
        if ( typExt != <VAL_ASSIGN,<>,<TYP,(),(typExt = <EXTENSION>),()>> ) {
            printList =  ();
            printList *= "Value is not an extension";
            printList *= copytree(extElem);
            printList *= "\nIn";
            printList *= copytree(type);
            DisplayError(printList);
        } else {
            VerifyType(typExt, 1);
        }
    }
}

//
// Verification of an extension
//
void DecompAsnExt::VerifyExtension ( PTREE type, PTREE theValue )
{
    
    PTREE   extList ;      // list of extensions
    PTREE   extElem ;      // an element of extension list
    PTREE   typExt ;       // extensions allowed in a type
    PTREE   printList ;    // display list for error
    PTREE   extValueList ; // list of extensions values
    PTREE   extValueElem ; // an element of extension value list
    PTREE   listValue ;    // list of values for an extension
    PTREE   valueType ;    // the type of an extension value
    PTREE   selector ;
    
    //    VerifyExtensionType(type);
    // verify that all the extension chosen are allowed
    // verify that the value given for an extension has a good type 
    type == <EXTENSIONS,extList>;
    theValue == <SEQUENCE_VALUE,extValueList>;
    while ( (extValueElem = nextl(extValueList)) ) {
        typExt =  ();
        extValueElem == <SEQUENCE_VALUE,<LIST,<NAMED_VALUE,<>,typExt>>>;
        
        // for taking info account nato extension with oid
        typExt == <NAMED_VALUE,<>,typExt>;
        
        // if extension is not a valid extension of type
        // print an error 
        if ( extList && !(typExt && ListFind(extList, typExt)) ) {
            printList =  ();
            printList *= "Extension is not allowed";
            printList *= copytree(extValueElem);
            printList *= "\nIn";
            printList *= copytree(type);
            DisplayError(printList);
        }
        
        // verify that the type of value associated to the extension
        // is correct
        {
            int verifTypOk = 1 ; // check that type verification succeeded
            extValueElem == <SEQUENCE_VALUE,listValue>;
            valueType =  ();
            
            // in value search for the value part
            while ( listValue && listValue != <,<NAMED_VALUE,<>,<ANY_VALUE,<TYP,(),valueType /* = <TYP_IDENT> */ ,()>>>> ) 
                nextl(listValue);
            
            // if found check it ( it must be an any value )
            if ( valueType ) {
                
                //                typExt = FindValue(typExt);
                typExt =  (*tabListValue)[selector = typExt];
                
                // if it is not an extension value it is an error
                if ( typExt != <VAL_ASSIGN,<>,<TYP,(),typExt,()>> ) {
                    printList =  ();
                    printList *= "Value of selector cannot be found";
                    printList *= copytree(selector);
                    printList *= "In";
                    printList *= copytree(theValue ^ );
                    DisplayError(printList);
                } else {
                    if ( !strcmp(Value(type), "ExtensionsField")
                            || !strcmp(Value(type), "RecipientExtensionsField")
                            || !strcmp(Value(type), "NotificationExtensionsField")
                            || !strcmp(Value(type), "NRNExtensionsField")
                            || !strcmp(Value(type), "RNExtensionsField") ) {
                        if ( typExt != <IPMS_EXTENSION,typExt> ) 
                            verifTypOk =  0 ;
                    } else if ( typExt != <EXTENSION,typExt> ) {
                        verifTypOk =  0 ;
                    }
                    if ( verifTypOk ) 
                        typExt == <TYP,(),typExt>;
                    
                    // the type indicated in the any value must be the same
                    // as in the type associated with the extension number
                    if ( !qcomparetree(valueType, typExt) && strcmp(Value(valueType), Value(typExt)) ) 
                        verifTypOk =  0 ;
                }
            } else 
                verifTypOk =  0 ;
            
            // else 
            //      verifTypOk = 0 ;
            if ( !verifTypOk && typExt ) {
                printList =  ();
                printList *= "This extension should not have a value of this type";
                printList *= copytree(extValueElem);
                printList *= "Type should be";
                printList *= copytree(typExt);
                DisplayError(printList);
            }
        }
    }
}

//
// Computing the tag of a type
//
PTREE DecompAsnExt::ComputeTypeTag ( const PTREE &type )
{
    PTREE   list, theType ;
    PTREE   val ;
    
    switch ( type ) {
        case <PORT> : 
        case <SECCATEGORY,theType> : 
        case <TOKEN,theType> : 
            {
                return DecompAsn::ComputeTypeTag(<OBJECT_IDENTIFIER,()>);
            }
        case <TOKENDATA,theType> : ;
        case <EXTATTRIBUTE,theType> : 
        case <EXTENSION> : 
            {
                return DecompAsn::ComputeTypeTag(<INTEGER,()>);
            }
        case <SIGNED,theType> : return DecompAsn::ComputeTypeTag(theType);
        case <SIGNATURE,theType> : 
            {
                PTREE   signType = parse (Signature);
                return DecompAsn::ComputeTypeTag(signType);
            }
        case <ENCRYPTED,theType> : 
            {
                PTREE   crypType = parse (Encrypted);
                return DecompAsn::ComputeTypeTag(crypType);
            }
        case <EXTENSIONS,list> : 
            {
                return DecompAsn::ComputeTypeTag(<SET_OF,(),()>);
            }
        default : return DecompAsn::ComputeTypeTag(type);
    }
}

// the decoding of an external field
PTREE DecompAsnExt::DecodeExternal ( PTREE type, PTREE tag, int constructed, PTREE tlv )
{
    
    int     nbType ;           // number of known types
    PTREE   dataName ;         // symbolic data name for data
    PTREE   dataType ;         // type of data
    PTREE   parameterName ;    // object identifier for parameters
    PTREE   parameterType ;    // type of parameters
    PTREE   objIdent ;         // object identifier for data
    PTREE   probe ;            // probe for parsing a value ( type model )
    TabList *currTab ;         // variable table at current level
    PTREE   searchedType ;     // the searched type
    PTREE   searchedValue ;    // the searched value
    PTREE   listSearchedType ; // the list of searched types
    PTREE   foundValue ;       // the value found
    PTREE   objectIdentifier ; // object identifier identifying the data
    PTREE   reference ;        // an object reference
    char    *stringOid1 ;      // first oid string
    char    *stringOid2 ;      // second oid string
    int     stringOidEqual ;   // true if oid strings are equal  
    PTREE   elem ;             // an element  
    PTREE   origType ;         // original searched type
    PTREE   newTlv ;           // newTlv with blind coding (implicit tags)
    
    // search the type of body
    probe            =  parse (
        [UNIVERSAL 8] IMPLICIT SEQUENCE {
            direct-reference OBJECT IDENTIFIER,
            single-ASN1-type [0] INTEGER
        }
    );
    listSearchedType =  () * probe ;
    foundValue       =  InterpretGetValue(tlv, tag, constructed, listSearchedType);
    foreach (<NAMED_VALUE,<IDENT,"direct-reference">>,foundValue [1],{
        for_elem == <,<>,objectIdentifier>;
        goto for_break ;
    })
    
    // if found object identifier try to finish matching
    if ( objectIdentifier != () ) {
        
        // search all the types which define an extended bodypart
        currTab =  tabListValue->GetTabList(0);
        nbType  =  currTab->Size();
        while ( nbType-- ) {
            PTREE   theValue = (*currTab)[nbType]; // an assignment expression
            if ( theValue == <VAL_ASSIGN,dataName,<TYP,(),<EXTENDED_BODY,parameterType,parameterName,dataType>,<>>,objIdent> ) {
                
                // compute oid and data type depending on parameters
                switch ( type ) {
                    case <TYP_IDENT,"ExternallyDefinedParameters"> : 
                        origType  = searchedType = copytree(parameterType);
                        reference = copytree(parameterName);
                        break ;
                    case <TYP_IDENT,"ExternallyDefinedData"> : 
                        origType  = searchedType = copytree(dataType);
                        reference = copytree(dataName);
                        break ;
                }
                
                // look if it is good type
                stringOid1     =  GetStringFromOid(objectIdentifier);
                stringOid2     =  GetStringFromOid(reference);
                stringOidEqual =  !strcmp(stringOid1, stringOid2);
                free(stringOid1);
                free(stringOid2);
                
                // if good construct probe
                if ( stringOidEqual ) {
                    probe            =  parse (
                        [UNIVERSAL 8] IMPLICIT SEQUENCE {
                            direct-reference OBJECT IDENTIFIER,
                            single-ASN1-type [0] EXPLICIT $(searchedType)
                        }
                    );
                    listSearchedType =  () * probe ;
                    break ;
                }
            }
        }
        if ( listSearchedType ) {
            
            // try to match the value
            foundValue =  InterpretGetValue(tlv, tag, constructed, listSearchedType);
            
            // return what we found reinserting symbolic type
            if ( foundValue == <VAL_ASSIGN_PROG,searchedValue,newTlv,searchedType> ) {
                
                // update tlv
                tlv += newTlv ;
                
                // return value
                foreach (<NAMED_VALUE,<IDENT,"direct-reference">>,searchedValue,{
                    for_elem += <,<>,copytree(reference)>;
                    goto for_break ;
                })
                foreach (<NAMED_VALUE,<IDENT,"single-ASN1-type">>,searchedValue,{
                    for_elem == <,<>,elem>;
                    for_elem += <,<>,<ANY_VALUE,copytree(origType),elem>>;
                    goto for_break ;
                })
                searchedValue == <NAMED_VALUE,<TOP_ENTRY>,searchedValue>;
                return searchedValue ;
            }
        }
    }
    
    // the parsing failed
    nbError++ ;
    return IncorrectField(<INVALID_FIELD>, tlv);
}

// the decoding of an external field
PTREE DecompAsnExt::DecodeExtension ( PTREE type, PTREE tag, int constructed, PTREE tlv )
{
    
    int     nbType ;             // number of known types
    PTREE   dataName ;           // symbolic data name for data
    PTREE   dataType ;           // type of data
    PTREE   parameterName ;      // object identifier for parameters
    PTREE   parameterType ;      // type of parameters
    PTREE   objIdent ;           // object identifier for data
    PTREE   probe ;              // probe for parsing a value ( type model )
    TabList *currTab ;           // variable table at current level
    PTREE   searchedType ;       // the searched type
    PTREE   searchedValue ;      // the searched value
    PTREE   listSearchedType ;   // the list of searched types
    PTREE   foundValue ;         // the value found
    PTREE   objectIdentifier ;   // object identifier identifying the data
    PTREE   reference ;          // an object reference
    char    *stringOid1 ;        // first oid string
    char    *stringOid2 ;        // second oid string
    int     stringOidEqual = 0 ; // true if oid strings are equal  
    PTREE   elem ;               // an element  
    PTREE   origType ;           // original searched type
    PTREE   newTlv ;             // newTlv with blind coding (implicit tags)
    
    // search the type of body
    probe            =  parse (
        SEQUENCE
        {
            extension CHOICE
            {
                standard-extension [0] IMPLICIT ExtensionType,
                private-extension [3] IMPLICIT OBJECT IDENTIFIER
            },
            criticality        [1] IMPLICIT Criticality DEFAULT {},
            value              [2] IMPLICIT INTEGER
        }
    );
    listSearchedType =  () * probe ;
    foundValue       =  InterpretGetValue(tlv, tag, constructed, listSearchedType);
    foreach (<NAMED_VALUE,<IDENT,"extension">>,foundValue [1],{
        for_elem == <,<>,<,parameterName,objectIdentifier>>;
        goto for_break ;
    })
    
    // if found object identifier try to finish matching
    if ( objectIdentifier != () ) {
        
        // search all the authorized extension to see it is one of them
        PTREE   list ;
        type == <EXTENSION_FIELD,list>;
        while ( (elem = nextl(list)) ) {
            PTREE   theValue = (*tabListValue)[elem]; // an assignment expression
            if ( theValue == <VAL_ASSIGN,reference,<TYP,(),<EXTENSION,searchedType>,<>>,objIdent> ) {
                origType =  searchedType = copytree(searchedType);
                
                // look if it is good type
                if ( strcmp(Value(parameterName), "private-extension") ) {
                    stringOidEqual =  !strcmp(Value(objectIdentifier), value(objIdent));
                } else if ( objIdent != <NUMB> ) {
                    stringOid1     =  GetStringFromOid(objectIdentifier);
                    stringOid2     =  GetStringFromOid(objIdent);
                    stringOidEqual =  !strcmp(stringOid1, stringOid2);
                    free(stringOid1);
                    free(stringOid2);
                }
                
                // if good construct probe
                if ( stringOidEqual ) {
                    probe            =  parse (
                        SEQUENCE
                        {
                            extension CHOICE
                            {
                                standard-extension [0] IMPLICIT ExtensionType,
                                private-extension [3] IMPLICIT OBJECT IDENTIFIER
                            },
                            criticality        [1] IMPLICIT Criticality DEFAULT {},
                            value              [2] EXPLICIT $(searchedType)
                        }
                    );
                    listSearchedType =  () * probe ;
                    break ;
                }
            }
        }
        if ( listSearchedType ) {
            
            // try to match the value
            foundValue =  InterpretGetValue(tlv, tag, constructed, listSearchedType);
            
            // return what we found reinserting symbolic type
            if ( foundValue == <VAL_ASSIGN_PROG,searchedValue,newTlv,searchedType> ) {
                
                // update tlv
                tlv += newTlv ;
                
                // return value
                foreach (<NAMED_VALUE,<IDENT,"extension">>,searchedValue,{
                    for_elem += <,<>,<,<>,copytree(reference)>>;
                    goto for_break ;
                })
                foreach (<NAMED_VALUE,<IDENT,"value">>,searchedValue,{
                    for_elem == <,<>,elem>;
                    for_elem += <,<>,<ANY_VALUE,copytree(origType),elem>>;
                    goto for_break ;
                })
                searchedValue == <NAMED_VALUE,<TOP_ENTRY>,searchedValue>;
                return searchedValue ;
            }
        }
    }
    
    // the parsing failed
    nbError++ ;
    return IncorrectField(<INVALID_FIELD>, tlv);
}

// decoding an octet string knowing it's type
PTREE DecompAsnExt::DecodeValue ( PTREE type, PTREE tag, int constructed, PTREE tlv )
{
    
    Coding  res (tlv) ;      // result
    PTREE   listValue = ();  // list for complex Values
    PTREE   list ;
    PTREE   elem ;
    PTREE   val ;
    PTREE   theType = type ;
    PTREE   typExt ;
    PTREE   extElem ;
    PTREE   result ;
    
    // if something is null return null pointer and an error
    if ( !type || !tlv ) {
        nbError++ ;
        return (PTREE)0 ;
    }
    
    // if there is a decoding error return an error
    if ( tlv != <,<>,<>,<>,()> ) {
        return IncorrectField(tlv [4], tlv);
    }
    switch ( type ) {
        case <PORT> : 
        case <SECCATEGORY,theType> : 
        case <TOKEN,theType> : 
        case <IPMS_EXTENSION,theType> : 
        case <ALGORITHM,theType> : 
        case <DIST_EXTENSION,theType> : 
        case <MS_ATTRIBUTE,theType> : 
            {
                return DecompAsn::DecodeValue(<OBJECT_IDENTIFIER,()>, tag, constructed, tlv);
            }
        case <TOKENDATA,theType> : ;
        case <EXTATTRIBUTE,theType> : 
        case <EXTENSION> : 
            {
                return DecompAsn::DecodeValue(<INTEGER,()>, tag, constructed, tlv);
            }
        case <SIGNED,theType> : 
            {
                PTREE   signType ;
                PTREE   signValue ;
                PTREE   resSignValue ;
                signType =  (*tabListType)["Signed"];
                signType == <TYP_ASSIGN,<>,signType>;
                
                // replace type to be signed by real value
                signType =  copytree(signType);
                foreach (<NAMED_TYPE,"toBeSigned">,signType,{
                    for_elem += <,<>,copytree(theType)>;
                })
                
                // parse 
                signValue =  DecompAsn::DecodeValue(signType, tag, constructed, tlv);
                
                // replace toBeSigned by an anyvalue
                foreach (<NAMED_VALUE,"toBeSigned">,signValue,{
                    PTREE   elem = for_elem ;
                    elem == <,<>,resSignValue>;
                    for_elem += <,<>,<ANY_VALUE,copytree(theType),resSignValue>>;
                })
                
                // return value
                return signValue ;
            }
        case <SIGNATURE,theType> : 
            {
                PTREE   signType ;
                signType =  parse (Signature);
                return DecompAsn::DecodeValue(signType, tag, constructed, tlv);
            }
        case <ENCRYPTED,theType> : 
            {
                PTREE   cryptType ;
                cryptType =  parse (Encrypted);
                return DecompAsn::DecodeValue(cryptType, tag, constructed, tlv);
            }
        case <EXTENSIONS,list> : 
            {
                return DecompAsn::DecodeValue(<SET_OF,(),<EXTENSION_FIELD,copytree(list)>>, tag, constructed, tlv);
            }
        case <EXTENSION_FIELD,list> : 
            {
                return DecodeExtension(type, tag, constructed, tlv);
            }
        case <TYP_ASSIGN,<>,theType> : 
        case <TYP_IDENT> : 
            {
                int     oldNbError = nbError ;
                PTREE   field1 ;
                PTREE   field2 ;
                PTREE   extensionField ;
                PTREE   extensionName ;
                int     extensionAttribute = 0 ;
                int     secCategory = 0 ;
                int     token = 0 ;
                int     tokenData = 0 ;
                int     algorithmIdentifier = 0 ;
                int     distributionExtensionField = 0 ;
                PTREE   listTag ;
                PTREE   exp ;
                
                // if not a particular value call asn
                switch ( theType ) {
                    case <TYP_IDENT,"ExtensionAttribute"> : 
                        extensionField     = (*tabListType)["ExtensionAttribute"];
                        extensionAttribute = 1 ;
                        break ;
                    case <TYP_IDENT,"SecurityCategory"> : 
                        extensionField = (*tabListType)["SecurityCategory"];
                        secCategory    = 1 ;
                        break ;
                    case <TYP_IDENT,"OriginalMessageToken"> : 
                    case <TYP_IDENT,"Token"> : 
                        extensionField = (*tabListType)["Token"];
                        token          = 1 ;
                        break ;
                    case <TYP_IDENT,"TokenData"> : 
                        extensionField = (*tabListType)["TokenData"];
                        tokenData      = 1 ;
                        break ;
                    case <TYP_IDENT,"AlgorithmIdentifier"> : 
                        extensionField      = (*tabListType)["AlgorithmIdentifier"];
                        algorithmIdentifier = 1 ;
                        break ;
                    case <TYP_IDENT,"DistributionExtensionField"> : 
                        extensionField             = (*tabListType)["DistributionExtensionField"];
                        distributionExtensionField = 1 ;
                        break ;
                    case <TYP_IDENT,"ExtensionField"> : 
                        nbError++ ;
                        return IncorrectField(<INVALID_FIELD>, tlv);
                        break ;
                    case <TYP_IDENT,"ExternallyDefinedParameters"> : 
                    case <TYP_IDENT,"ExternallyDefinedData"> : 
                        return DecodeExternal(theType, tag, constructed, tlv);
                        break ;
                    case <TYP_IDENT,"IPMSExtension"> : 
                        return DecodeIPMSExtension(theType, tag, constructed, tlv);
                        break ;
                    default : return DecompAsn::DecodeValue(type, tag, constructed, tlv);
                }
                type =  theType ;
                if ( extensionField == <TYP_ASSIGN,<>,<TYP,<>,<SEQUENCE,extensionField>>> ) {
                    extensionField =  copytree(extensionField);
                    
                    // get extension field types
                    field1         =  nextl(extensionField);
                    field2         =  nextl(extensionField);
                    field1         =  field1 [1];
                    field2         =  field2 [1];
                    
                    // get value of tag
                    if ( tlv == <CODING,<>,<>,listValue> ) {
                        elem =  nextl(listValue);
                        tag  =  DecodeValue(field1 [2], (PTREE)0, 0, elem);
                        if ( nbError == oldNbError ) {
                            list =  tabListValue->GetTabList(0)->List();
                            if ( secCategory || token || algorithmIdentifier || distributionExtensionField ) {
                                tag =  SimplifyObjectValue(tag [2]);
                            }
                            while ( (typExt = nextl(list)) ) {
                                
                                // if it is not an extension value
                                // it is an error
                                if ( extensionAttribute && typExt != <VAL_ASSIGN,extensionName,<TYP,(),<EXTATTRIBUTE,typExt>,<>>,val> ) 
                                    continue ;
                                if ( secCategory && typExt != <VAL_ASSIGN,extensionName,<TYP,(),<SECCATEGORY,typExt>,<>>,val> ) 
                                    continue ;
                                if ( token && typExt != <VAL_ASSIGN,extensionName,<TYP,(),<TOKEN,typExt>,<>>,val> ) 
                                    continue ;
                                if ( tokenData && typExt != <VAL_ASSIGN,extensionName,<TYP,(),<TOKENDATA,typExt>,<>>,val> ) 
                                    continue ;
                                if ( algorithmIdentifier && typExt != <VAL_ASSIGN,extensionName,<TYP,(),<ALGORITHM,typExt>,<>>,val> ) 
                                    continue ;
                                if ( distributionExtensionField && typExt != <VAL_ASSIGN,extensionName,<TYP,(),<DIST_EXTENSION,typExt>,<>>,val> ) 
                                    continue ;
                                
                                // if the value doesn't match tag
                                // go on
                                if ( (extensionAttribute || tokenData) && strcmp(Value(val), Value(tag [2])) ) 
                                    continue ;
                                if ( secCategory || token || algorithmIdentifier || distributionExtensionField ) {
                                    PTREE   inter = SimplifyObjectValue(ExtendObjectValue(val));
                                    if ( !qcomparetree(inter, tag) ) 
                                        continue ;
                                }
                                typExt == <TYP,(),typExt =  <TYP_IDENT>>;
                                
                                // insert the values
                                result =  () * <NAMED_VALUE,copytree(field1 [1]),copytree(extensionName)>;
                                elem   =  nextl(listValue);
                                if ( typExt ) {
                                    theType =  field2 [2];
                                    
                                    // put an explicit before any because 
                                    // new type will hide any
                                    theType == <,listTag>;
                                    exp =  ();
                                    while ( listTag ) 
                                        exp =  nextl(listTag);
                                    if ( exp != () ) 
                                        exp += <,<>,<>,<TAGSTYLE,"EXPLICIT">>;
                                    
                                    // put type
                                    theType += <,<>,copytree(typExt)>;
                                    
                                    // decode all
                                    elem    =  DecodeValue(theType, (PTREE)0, 0, elem);
                                    if ( elem == <,<TOP_ENTRY>,val> ) {
                                        elem += <,copytree(field2 [1]),<ANY_VALUE,copytree(typExt),val>>;
                                    }
                                    result *= elem ;
                                }
                                return <NAMED_VALUE,<TOP_ENTRY>,<SEQUENCE_VALUE,result>>;
                            }
                        }
                    }
                }
                nbError++ ;
                return IncorrectField(<INVALID_FIELD>, tlv);
            }
        default : return DecompAsn::DecodeValue(type, tag, constructed, tlv);
    }
}

//
// VerifyOperation : verify operation macro value
//
void DecompAsnExt::VerifyOperation ( PTREE type )
{
    PTREE   argument, result, list ;
    PTREE   elem, val, printList, port, error ;
    PTREE   list1, list2 ;
    PTREE   portType ;
    
    switch ( type ) {
        case <ABSTRACT_ERROR,val> : 
            VerifyType(val, 1);
            break ;
        case <ABSTRACT_BIND,port,argument,result,error> : 
            {
                
                // verify port
                while ( (elem = nextl(port)) ) {
                    val =  (*tabListValue)[elem];
                    if ( val != <,<>,<TYP,<>,(portType = <PORT>)>> ) {
                        printList =  ();
                        printList *= "Incorrect port value";
                        printList *= copytree(elem);
                        printList *= "In";
                        printList *= copytree(type);
                        DisplayError(printList);
                    } else {
                        VerifyType(portType, 1);
                    }
                }
                
                // verify arguments ...
                VerifyType(argument, 1);
                VerifyType(result, 1);
                VerifyType(error, 1);
            }
            break ;
        case <ABSTRACT_UNBIND,port> : 
            {
                
                // verify port
                while ( (elem = nextl(port)) ) {
                    val =  (*tabListValue)[elem];
                    if ( val != <,<>,<TYP,<>,(portType = <PORT>)>> ) {
                        printList =  ();
                        printList *= "Incorrect port value";
                        printList *= copytree(elem);
                        printList *= "In";
                        printList *= copytree(type);
                        DisplayError(printList);
                    } else 
                        VerifyType(portType, 1);
                }
            }
            break ;
        case <PORT,list1,list2> : 
            {
                while ( (elem = nextl(list1)) ) {
                    if ( elem == <TYP,<>,(elem = <TYP_IDENT>)> ) {
                        VerifyType(elem, 1);
                        val =  FindTyp(elem);
                    } else 
                        val =  elem ;
                    if ( val != <TYP,<>,<ABSTRACT_OPERATION>> ) {
                        printList =  ();
                        printList *= "Not a correct operation";
                        printList *= copytree(elem);
                        printList *= "In";
                        printList *= copytree(type);
                        DisplayError(printList);
                    }
                }
                while ( (elem = nextl(list2)) ) {
                    if ( elem == <,<>,(elem = <TYP_IDENT>)> ) {
                        VerifyType(elem, 1);
                        val =  FindTyp(elem);
                    } else 
                        val =  elem ;
                    if ( val != <TYP,<>,<ABSTRACT_OPERATION>> ) {
                        printList =  ();
                        printList *= "Not a correct operation";
                        printList *= copytree(elem);
                        printList *= "In";
                        printList *= copytree(type);
                        DisplayError(printList);
                    }
                }
            }
            break ;
        case <ABSTRACT_OPERATION,argument,result,list> : 
            {
                
                // verify argument and result types
                VerifyType(argument, 1);
                VerifyType(result, 1);
                
                // verify that all errors are ABSTRACT_ERROR
                while ( (elem = nextl(list)) ) {
                    if ( elem == <TYP,<>,(elem = <TYP_IDENT>)> ) {
                        VerifyType(elem, 1);
                        val =  FindTyp(elem);
                    } else 
                        val =  elem ;
                    if ( val != <TYP,<>,<ABSTRACT_ERROR>> ) {
                        printList =  ();
                        printList *= "Not an Abstract Error";
                        printList *= copytree(elem);
                        printList *= "In";
                        printList *= copytree(type);
                        DisplayError(printList);
                    }
                }
            }
            break ;
        default : 
    }
}

//
// Extended Body Part Verification
//
int DecompAsnExt::VerifyExtendedBodyPart ( PTREE type, int internal )
{
    int     result = 1 ;
    PTREE   parameters, definition, val ;
    
    type == <,parameters,definition,val>;
    
    // verify parameters part
    if ( parameters ) {
        result =  VerifyType(parameters, internal + 1);
        
        // search object definition
        delete EncodeValue(<OBJECT_IDENTIFIER,()>, definition);
    }
    
    // verify type
    result &= VerifyType(val, internal + 1);
    
    // return result 
    return result ;
}

//
// Verification of abstract object
//
int DecompAsnExt::VerifyAbstractObject ( PTREE object )
{
    PTREE   listPort, port, portType, val, printList ;
    int     result = 1 ;
    
    if ( object == <,<PORT_DEF_LIST,listPort>> ) {
        
        // verify that all ports are declared
        while ( (port = nextl(listPort)) ) {
            val =  (*tabListValue)[port];
            if ( val != <,<>,<TYP,<>,(portType = <PORT>)>> ) {
                printList =  ();
                printList *= "Incorrect port value";
                printList *= copytree(port);
                printList *= "In";
                printList *= copytree(object);
                DisplayError(printList);
                result =  0 ;
            }
        }
    }
    return result ;
}

//
// Verificaton of refine
//
int DecompAsnExt::VerifyRefine ( PTREE refine )
{
    PTREE   name, val, objectList, object, pairList, pair, portType, printList, type ;
    int     result = 1 ;
    
    if ( refine == <,name,<REFINEMENT_LIST,objectList>> ) {
        val =  (*tabListValue)[name];
        if ( val != <,<>,<TYP,<>,<ABSTRACT_OBJECT>>> ) {
            printList =  ();
            printList *= "Incorrect object";
            printList *= copytree(name);
            printList *= "In";
            printList *= copytree(refine);
            DisplayError(printList);
            result =  0 ;
        }
        while ( (object = nextl(objectList)) ) {
            if ( object == <,name,<>,pairList> ) {
                val =  (*tabListValue)[name];
                if ( val != <,<>,<TYP,<>,<ABSTRACT_OBJECT>>> ) {
                    printList =  ();
                    printList *= "Incorrect object";
                    printList *= copytree(name);
                    printList *= "In";
                    printList *= copytree(refine);
                    DisplayError(printList);
                    result =  0 ;
                }
                pairList == <PORT_PAIR_LIST,pairList>;
                while ( (pair = nextl(pairList)) ) {
                    val =  (*tabListValue)[pair];
                    if ( val != <,<>,<TYP,<>,<PORT>>> ) {
                        printList =  ();
                        printList *= "Incorrect port value ";
                        printList *= copytree(pair [1]);
                        printList *= "In";
                        printList *= copytree(refine);
                        DisplayError(printList);
                        result =  0 ;
                    }
                    if ( pair == <PORT_PAIR,<>,<>,<PAIR_LIST,pair>> ) {
                        while ( (val = nextl(pair)) ) {
                            type =  (*tabListValue)[val];
                            if ( type != <,<>,<TYP,<>,<ABSTRACT_OBJECT>>> ) {
                                printList =  ();
                                printList *= "Incorrect object ";
                                printList *= <IDENT,MakeString(Value(val))>;
                                printList *= "In";
                                printList *= copytree(refine);
                                DisplayError(printList);
                                result =  0 ;
                            }
                        }
                    }
                }
            }
        }
    }
    return result ;
}

//
// Type verification 
//
int DecompAsnExt::VerifyType ( const PTREE &type, int internal )
{
    PTREE   theType ;
    PTREE   val ;
    
    switch ( type ) {
        case <TOKEN,theType> : 
        case <TOKENDATA,theType> : ;
        case <EXTATTRIBUTE,theType> : 
        case <SECCATEGORY,theType> : 
        case <SIGNED,theType> : ;
        case <SIGNATURE,theType> : 
        case <ENCRYPTED,theType> : 
        case <EXTENSION,theType> : 
        case <IPMS_EXTENSION,theType> : 
        case <ALGORITHM,theType> : 
        case <DIST_EXTENSION,theType> : 
        case <MS_ATTRIBUTE,theType> : 
            return VerifyType(theType, internal + 1);
            break ;
        case <EXTENDED_BODY> : return VerifyExtendedBodyPart(type);
        case <ABSTRACT_OBJECT> : return VerifyAbstractObject(type);
        case <REFINE> : return VerifyRefine(type);
        case <EXTENSIONS> : 
            {
                VerifyExtensionType(type);
            }
            break ;
        case <NULL_PARAMETER> : break ;
        case <PARAMETER_VALUE,<>,theType> : 
            VerifyType(theType, 1);
            break ;
        case <ABSTRACT_OPERATION> : 
        case <ABSTRACT_ERROR> : 
        case <ABSTRACT_BIND> : 
        case <ABSTRACT_UNBIND> : 
        case <PORT> : 
            VerifyOperation(type);
            break ;
        default : return DecompAsn::VerifyType(type, internal);
    }
    return 1 ;
}

//
// type verification : main function
//
void DecompAsnExt::VerifyAllTypes ( int displayRoot, TabList *inserted )
{
    PTREE   list ;
    PTREE   val ;
    PTREE   typExt ;
    
    // direct verification of types
    DecompAsn::VerifyAllTypes();
    
    // verify the types in particular extension
    if ( tabListValue->GetTabList(0) ) 
        list =  tabListValue->GetTabList(0)->List();
    while ( (val = nextl(list)) ) {
        if ( val == <VAL_ASSIGN,<>,<TYP,(),typExt,()>> ) {
            switch ( typExt ) {
                case <SECCATEGORY> : 
                case <EXTATTRIBUTE> : 
                case <TOKEN> : 
                case <TOKENDATA> : 
                case <PORT> : 
                case <IPMS_EXTENSION> : 
                case <ALGORITHM> : 
                case <DIST_EXTENSION> : 
                case <MS_ATTRIBUTE> : 
                case <EXTENDED_BODY> : 
                case <ABSTRACT_OBJECT> : 
                case <REFINE> : VerifyType(typExt, 1);
                default : 
            }
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

// parser entry for chopb as a C prog for a whole prog
static  PPTREE getTree ( int error_free )
{
    return asnext().program(error_free);
}

extern int  prettyPrint ;

PPTREE ParserAsnExt::ReadInclude ( const char *name, int here, bool tree )
{
    
    // if prettyprinting don't read includes
    if ( prettyPrint ) 
        return (PPTREE)0 ;
    
    // look for asn.1 module
    return Parser::ReadInclude(name, here, tree);
}

// the decoding of an external field
PTREE DecompAsnExt::DecodeIPMSExtension ( PTREE type, PTREE tag, int constructed, PTREE tlv )
{
    
    int     nbType ;           // number of known types
    PTREE   dataName ;         // symbolic data name for data
    PTREE   dataType ;         // type of data
    PTREE   parameterName ;    // object identifier for parameters
    PTREE   parameterType ;    // type of parameters
    PTREE   objIdent ;         // object identifier for data
    PTREE   probe ;            // probe for parsing a value ( type model )
    TabList *currTab ;         // variable table at current level
    PTREE   searchedType ;     // the searched type
    PTREE   searchedValue ;    // the searched value
    PTREE   listSearchedType ; // the list of searched types
    PTREE   foundValue ;       // the value found
    PTREE   objectIdentifier ; // object identifier identifying the data
    PTREE   reference ;        // an object reference
    char    *stringOid1 ;      // first oid string
    char    *stringOid2 ;      // second oid string
    int     stringOidEqual ;   // true if oid strings are equal  
    PTREE   elem ;             // an element  
    PTREE   origType ;         // original searched type
    PTREE   newTlv ;           // newTlv with blind coding (implicit tags)
    
    // search the type of body
    probe            =  parse (
               SEQUENCE  {
                   type  OBJECT IDENTIFIER,
                   value INTEGER
        }
    );
    listSearchedType =  () * probe ;
    foundValue       =  InterpretGetValue(tlv, tag, constructed, listSearchedType);
    foreach (<NAMED_VALUE,<IDENT,"type">>,foundValue [1],{
        for_elem == <,<>,objectIdentifier>;
        goto for_break ;
    })
    
    // if found object identifier try to finish matching
    if ( objectIdentifier != () ) {
        
        // search all the types which define an extended bodypart
        currTab =  tabListValue->GetTabList(0);
        nbType  =  currTab->Size();
        while ( nbType-- ) {
            PTREE   theValue = (*currTab)[nbType]; // an assignment expression
            if ( theValue == <VAL_ASSIGN,reference,<TYP,(),<IPMS_EXTENSION,searchedType>,<>>,objIdent> ) {
                origType       =  searchedType = copytree(searchedType);
                
                // look if it is good type
                stringOid1     =  GetStringFromOid(objectIdentifier);
                stringOid2     =  GetStringFromOid(objIdent);
                stringOidEqual =  !strcmp(stringOid1, stringOid2);
                free(stringOid1);
                free(stringOid2);
                
                // if good construct probe
                if ( stringOidEqual ) {
                    probe            =  parse (
                        SEQUENCE  {
                            type  OBJECT IDENTIFIER,
                            value $(searchedType)
                        }
                    );
                    listSearchedType =  () * probe ;
                    break ;
                }
            }
        }
        if ( listSearchedType ) {
            
            // try to match the value
            foundValue =  InterpretGetValue(tlv, tag, constructed, listSearchedType);
            
            // return what we found reinserting symbolic type
            if ( foundValue == <VAL_ASSIGN_PROG,searchedValue,newTlv,searchedType> ) {
                
                // update tlv
                tlv += newTlv ;
                
                // return value
                foreach (<NAMED_VALUE,<IDENT,"type">>,searchedValue,{
                    for_elem += <,<>,copytree(reference)>;
                    goto for_break ;
                })
                foreach (<NAMED_VALUE,<IDENT,"value">>,searchedValue,{
                    for_elem == <,<>,elem>;
                    for_elem += <,<>,<ANY_VALUE,copytree(origType),elem>>;
                    goto for_break ;
                })
                searchedValue == <NAMED_VALUE,<TOP_ENTRY>,searchedValue>;
                return searchedValue ;
            }
        }
    }
    
    // the parsing failed
    nbError++ ;
    return IncorrectField(<INVALID_FIELD>, tlv);
}


