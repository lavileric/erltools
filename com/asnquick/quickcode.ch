language asn;

#include "asn.h"
#include "token.h"
#include <sys/types.h>
#include <fcntl.h>
#include <tablist.h>
#include "quickcode.h"

void            ChopTree (PTREE, char *) ;
void            decomp_asn (PTREE) ;
void            DecompAssign (PTREE) ;
extern void     Align (PTREE) ;
extern int      firstError ;
void            OpenTspFile (char *) ;
void            CloseTspFile () ;

// int             prettyPrint = 0 ;
extern PTREE    listInclude ;
static EString  grammar ; // name of grammar

#ifdef FOR_METACHOP
    PTREE   tagDefault ;
#endif

bool    java = false ;

//
// main prog
//
//    parameters :    
//       argc : number of parameters
//       argv : array of arguments
//   return :
//       an error if necessary ( value != 0)
int main ( int argc, char **argv )
{
    
    PTREE   tree ;                // tree resulting from parsing
    char    name [50];            // character array for holding intermediate
                                  // strings
    char    *ptName = (char *)0 ; // argument, string pointer
    
    // initialization    
    MetaInit();
    asn().AsLanguage();
    
    // opening the input file
    if ( argc < 2 ) {
        
        // error if the input files not in line command
        MetaExit(2, "Grammar File  not present \n");
    } else {
        ptName =  *(argv + 1);
    }
    
    // compute name of grammar
    grammar =  ptName ;
    
    // normalize grammar name
    {
        char    *ptGrammar ; // pointer on grammar
        ptGrammar =  (char *)(grammar.c_str());
        
        // put grammar name in lower case
        for (; *ptGrammar ; ptGrammar++ ) {
            *ptGrammar =  tolower(*ptGrammar);
        }
        
        // suppress the suffix at end of the grammar
        unsigned int    indexGrammar ; //  index in the grammar sring
        indexGrammar =  grammar.length() - 1 ;
        while ( grammar [indexGrammar] != '.' ) 
            indexGrammar-- ;
        if ( indexGrammar > 0 ) 
            grammar =  grammar.substring(0, indexGrammar);
    }
    
    // parsing the tree
    asn *pAsn = new asn ;
    
    tree        =  pAsn->ReadFile(ptName);
    listInclude =  pAsn->Includes();
    delete pAsn ;
    AddRef(tree);
    asn().AsLanguage();
    ChopTree(tree, *(argv + 2));
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
    return 0 ;
}

// DecompAsn   *DecompAsn::ptDecomp ;
void ChopTree ( PTREE tree, char *fileName )
{
    
    /* DumpTree(tree); */
    if ( tree == (PTREE) -1 || tree == () ) 
        return ;
    
    // initialize encoder
    QuickAsn    *quickAsn ; // quickAsn compiler object
    
    DecompAsn::ptDecomp =  quickAsn = new QuickAsn ;
    asn().AsLanguage();
    
    // encode tree
    quickAsn->Encoder(tree);
    
    // flush
    output =  2 ;
    NewLine();
}

// Simplify : simplify too complex rules
// parameters :
//              rules : the list of rules
void QuickAsn::Simplify ( PTREE rules )
{
    
    PTREE   type ;          // a type 
    int     indexName = 0 ; // index for generated name 
    
    foreach (<TYP>,rules,{
        type =  for_elem ;
        
        // if in type assign do nothing
        if ( (type ^ ) != <TYP_ASSIGN> ) {
            type == <TYP,<>,type>;
            
            // if type is too complex simplify it
            switch ( type ) {
                case <INTEGER> : 
                case <REAL_TYPE> : 
                case <BOOLEAN> : 
                case <CHARACTER> : 
                case <TYP_IDENT> : 
                case <NULL_TYPE> : 
                case <OCTET_STRING> : 
                case <OBJECT_IDENTIFIER> : 
                    {
                        goto for_continue ;
                    }
                    break ;
                default : 
                    {
                        EString newRuleName ; // name of new rule
                        PTREE   newRule ;     // the new rule
                        newRuleName =  EString("__Rule") + CompactItoa(indexName++);
                        
                        // replace rule at current pos
                        newRule     =  <TYP_IDENT,PTREE(newRuleName)>;
                        for_elem    =  newRule ;
                        type        += newRule ;
                        
                        // construct the new rule
                        newRule     =  <TYP_ASSIGN,copytree(newRule),<TYP,(),type,()>>;
                        rules       *= newRule ;
                    }
            }
        }
    })
}

// Encoder : encoder of tree
// parameters :
//              tree : the tree to be encoded
void QuickAsn::Encoder ( PTREE &tree )
{
    
    PTREE   currentType ;  // current type
    PTREE   name ;         // name of type 
    PTREE   def ;          // definition of type 
    PTREE   listTag ;      // the list of tags for a type
    PTREE   type ;         // a type
    PTREE   val ;          // a val 
    int     firstTag = 1 ; // for first tag
    PTREE   basicType ;    // basic type 
    PTREE   list ;         // a list
    PTREE   elem ;         // an element of list
    
    // create table for var assignments
    tabListValue =  new SymbolTable ;
    
    // create the lists
    // StoreGrammar(copytree(tree));
    // put all the declaration in a list
    
    PTREE   listRules ; // list of rules
    PTREE   keepTagDefault ;
    
    // find the tag default
    tagDefault =  <IDENT,"EXPLICIT">;
    foreach ((),tree,{
        switch ( for_elem ) {
            case <MODULE,<>,tagDefault> : 
                
                // get tag default style
                goto for_break ;
                break ;
            default : break ;
        }
    })
    keepTagDefault =  tagDefault ;
    foreach (<TYP_ASSIGN>,tree,{
        PTREE   val ; // the value
        val       =  for_elem ;
        for_elem  =  val ^ ;
        listRules *= val ;
    })
    
    // simplify too complex rules 
    Simplify(listRules);
    
    // create the lists
    StoreGrammar(copytree(listRules));
    tagDefault =  keepTagDefault ;
    foreach (<VAL_ASSIGN>,tree,{
        PTREE   val ; // the value
        val      =  for_elem ;
        for_elem =  val ^ ;
        tabListValue->AddVar(val);
    })
    
    // create the dll header file 
    {
        output =  _open((EString(grammar) + "_dll.h").c_str(), O_CREAT | O_TRUNC | O_RDWR | O_BINARY, S_IWRITE | S_IREAD);
        "#ifndef " PrintString(grammar.c_str()) <SEPO> "_dll_definition" <NL>
        "#define " PrintString(grammar.c_str()) <SEPO> "_dll_definition 1" <NL>
        "#include \"tabsort.h\"" <NL>
        "#undef EXTERN_FUNC_VOID" <NL>
        "#undef EXTERN_FUNC_PTREE" <NL>
        "#if defined(VISUAL)" <NL>
        "#define EXTERN_FUNC_VOID extern \"C\" _declspec(dllimport) void " <NL>
        "#define EXTERN_FUNC_PTREE extern \"C\" _declspec(dllimport) PPTREE " <NL>
        "#elif defined(BORLAND)" <NL>
        "#define EXTERN_FUNC_VOID void __declspec(dllimport)  " <NL>
        "#define EXTERN_FUNC_PTREE PPTREE __declspec(dllimport)  " <NL>
        "#else" <NL>
        "#define EXTERN_FUNC_VOID extern \"C\" void   " <NL>
        "#define EXTERN_FUNC_PTREE extern \"C\" PPTREE   " <NL>
        "#endif" <NL>
        <NL>
        "EXTERN_FUNC_VOID" PrintString(grammar.c_str()) <SEPO> "SetParam ( char * metaName," <NL>
        "TabSortString ** pptStackString    ," <NL>
        "TabSortEqual<TREE> ** pptStackPtree  ," <NL>
        "bool * pptStackInitialized  ,  void (*ptMetaExit) ( int, const char *));  " // create dll acces to function
                                                                                     "EXTERN_FUNC_PTREE " PrintString(grammar.c_str()) <SEPO> 
            "RootDecode" "(EString & ruleName, EString & val  , CoordString & coord, bool checkTag) ;" <NL>
        "EXTERN_FUNC_VOID  " PrintString(grammar.c_str()) <SEPO> "RootEncode" "(EString & ruleName , EString & resString  , PTREE val) ;" <NL>
        "#endif" <NL>
        <NL>
        
        // close header
        _close(output);
    }
    
    // create the header file
    {
        output =  _open((EString(grammar) + ".h").c_str(), O_CREAT | O_TRUNC | O_RDWR | O_BINARY, S_IWRITE | S_IREAD);
        "#ifndef " PrintString(grammar.c_str()) <SEPO> "_definition" <NL>
        "#define " PrintString(grammar.c_str()) <SEPO> "_definition 1" <NL>
        
        // import header for external functions
        "#include \"quickasn.h\"" <NL>
        "#include <map>" <NL>
        
        // class block
        "class Gramm" <SEPO> PrintString(grammar.c_str()) ": public GenGramm {" <NL>
        "public :" <NL>
        "typedef map<EString,int *,LessString> TabObject ; " <NL>
        "Gramm" <SEPO> PrintString(grammar.c_str()) "(){" <NL>
        ObjectIdentifierArray();
        "}" <NL>
        "~Gramm" <SEPO> PrintString(grammar.c_str()) "(){" <NL>
        "TabObject::iterator iter ; for (iter = pvTabObject.begin(); iter != pvTabObject.end();" <NL>
        "iter++) free ((*iter).second); pvTabObject . erase (pvTabObject.begin()," <NL>
        "pvTabObject.end());" <NL>
        "}" <NL>
        "virtual int * GetObjectDef (EString name) { TabObject::iterator iter ;" <NL>
        "iter = pvTabObject . find (name) ; if (iter != pvTabObject.end()) return (*iter).second;" <NL>
        "else return (int *) 0 ; }" <NL>
        "virtual PTREE DecodeObjectIdentifier ( PTREE objectList ) ; " <NL>
        
        // create a function for each type assign
        foreach (<TYP_ASSIGN>,listRules,{
            currentType =  for_elem ;
            currentType == <,name,def>;
            
            // create function header for decoder
            "virtual PTREE" PrintString(Value(name)) "(EString & val  , CoordString & coord, bool checkTag) ;" <NL>
            
            // create function header for encoder
            "virtual void" PrintString(Value(name)) "(EString & resString  , PTREE val) ;" <NL>
        })
        
        // create function for decoding
        "virtual PTREE DecodeString(EString & ruleName , EString & val  , CoordString & coord, bool checkTag) {" <NL>
        "if (ruleName == \"\") return Root(val,coord,checkTag);" <NL>
        
        // create a function for each type assign
        foreach (<TYP_ASSIGN>,listRules,{
            currentType =  for_elem ;
            currentType == <,name,def>;
            
            // create function header for decoder
            "if ( ruleName == \"" PrintString(Value(name)) "\")" "return" PrintString(Value(name)) "( val  ,  coord,   checkTag) ;" <NL>
        })
        "return PTREE(0);" <NL>
        "}" <NL>
        
        // create function for encoding
        "virtual void EncodeString(EString & ruleName ,EString & resString  , PTREE val) {" <NL>
        "if (ruleName == \"\") Root(resString,val);" <NL>
        
        // create a function for each type assign
        foreach (<TYP_ASSIGN>,listRules,{
            currentType =  for_elem ;
            currentType == <,name,def>;
            
            // create function header for encoder
            "if ( ruleName == \"" PrintString(Value(name)) "\")" "{" PrintString(Value(name)) "(  resString  ,  val) ;" <NL>
            "return ;" <NL>
            "}" <NL>
        })
        "}" <NL>
        "private : TabObject pvTabObject ; " <NL>
        "};" <NL>
        "#endif" <NL>
        <NL>
        
        // close header
        _close(output);
    }
    
    // create the coding file
    {
        output =  _open((EString(grammar) + ".cc").c_str(), O_CREAT | O_TRUNC | O_RDWR | O_BINARY, S_IWRITE | S_IREAD);
        
        // import header for external functions
        "#include \"" PrintString(grammar.c_str()) ".h\"" <NL>
        "#include \"tabsort.h\"" <NL>
        "#if defined(VISUAL)" <NL>
        "#define EXTERN_FUNC_VOID extern \"C\" _declspec(dllexport) void " <NL>
        "#define EXTERN_FUNC_PTREE extern \"C\" _declspec(dllexport) PPTREE " <NL>
        "#elif defined(BORLAND)" <NL>
        "#define EXTERN_FUNC_VOID void __declspec(dllexport)  " <NL>
        "#define EXTERN_FUNC_PTREE PPTREE __declspec(dllexport)  " <NL>
        "#else" <NL>
        "#define EXTERN_FUNC_VOID extern \"C\" void    " <NL>
        "#define EXTERN_FUNC_PTREE extern \"C\" PPTREE    " <NL>
        "#endif" <NL>
        <NL>
        "extern void (*ptMetaExit)(int, const char *) ;" <NL>
        "extern TabSortString (* ptStackString) [ ]   ; " <NL>
        "extern TabSortEqual<TREE> (* ptStackPtree) [ ] ;" <NL>
        "extern bool * ptStackInitialized  ;" <NL>
        "extern int * ptTabPtPos ; " <NL>
        "extern PPTREE * ptTabPt ; " <NL>
        "EXTERN_FUNC_VOID" PrintString(grammar.c_str()) <SEPO> "SetParam ( char * metaName," <NL>
        "TabSortString ** pptStackString    ," <NL>
        "TabSortEqual<TREE> ** pptStackPtree  ," <NL>
        "bool * pptStackInitialized  ,  void (*ptparaMetaExit) ( int, const char *)," <NL>
        "int * ptTabPtPosParam , PPTREE * ptTabPtParam ){  " <NL>
            <T> {{
                    "MetaInit(metaName);" <NL>
                    "ptStackString =( TabSortString (*  ) [ ] )pptStackString;" <NL>
                    "ptStackPtree =( TabSortEqual<TREE> (*  ) [ ]) pptStackPtree;" <NL>
                    "ptStackInitialized = pptStackInitialized;" <NL>
                    "ptMetaExit = ptparaMetaExit;" <NL>
                    "ptTabPtPos = ptTabPtPosParam;" <NL>
                    "ptTabPt  = ptTabPtParam;" <NL>
                }}
        "}" <NL>
        "static PTREE treeKeeper ;" <NL,2>
        
        // create dll acces to function
        "static Gramm" <SEPO> PrintString(grammar.c_str()) "* ptGrammar = 0 ;" <NL>
        "EXTERN_FUNC_PTREE " PrintString(grammar.c_str()) <SEPO> "RootDecode" "(EString & ruleName,EString & val  , CoordString & coord, bool checkTag) {" <NL>
        "if (!ptGrammar) { ptGrammar = new Gramm" <SEPO> PrintString(grammar.c_str()) ";}" <NL>
        "treeKeeper =   ptGrammar -> DecodeString(ruleName,val,coord,checkTag); return (PPTREE) treeKeeper;" <NL>
        "}" <NL>
        "EXTERN_FUNC_VOID  " PrintString(grammar.c_str()) <SEPO> "RootEncode" "(EString & ruleName,EString & resString  , PTREE val) {" <NL>
        "if (!ptGrammar) { ptGrammar = new Gramm" <SEPO> PrintString(grammar.c_str()) ";}" <NL>
        " ptGrammar -> EncodeString(ruleName,resString,val); }" <NL>
        
        // create the functions for object identifier values
        ObjectIdentifierFuncts();
        foreach (<CHOICE>,listRules,{
            PTREE   elem = for_elem ;
            elem += <,<>,()>;
        })
        
        // create a function for each type assign
        foreach (<TYP_ASSIGN>,listRules,{
            currentType =  for_elem ;
            currentType == <,name,def>;
            
            // create function header 
            "PTREE Gramm" <SEPO> PrintString(grammar.c_str()) "::" PrintString(Value(name)) "(EString & val  , CoordString & coord, bool checkTag) {" <NL>
            "int codedLength = coord.length ; " <NL>
            "int codedPos = coord.pos ;" <NL>
            "PTREE __resCoding ;" <NL>
            "CoordString codedCoord(coord.pos,coord.length); " <NL>
            "char __tempo;" <NL>
            
            // encode the type
            EncodeType(def);
            ";" // end of function
                " return __resCoding;}" <NL>
            
            // create function header  
            "void  Gramm" <SEPO> PrintString(grammar.c_str()) "::" PrintString(Value(name)) "(EString & resString  , PTREE val) {" <NL>
            "EString __valString;";
            
            // encode the type
            EEncodeType(def);
            ";"; // end of function
            def == <TYP,<>,type>;
            switch ( type ) {
                case <INTEGER> : 
                case <BOOLEAN> : 
                case <REAL> : 
                case <CHARACTER> : 
                case <TYP_IDENT> : 
                case <NULL_TYPE> : 
                case <OCTET_STRING> : 
                    {
                        "resString +=__valString;" <NL>
                    }
                    break ;
            }
            "  }" <NL>
            
            // go to next
            goto for_continue ;
        })
        <NL>
        
        // close coding module
        _close(output);
    }
    
    // create the java file
    {
        java   =  true ;
        output =  _open((EString(grammar) + ".java").c_str(), O_CREAT | O_TRUNC | O_RDWR | O_BINARY, S_IWRITE | S_IREAD);
        
        // class block
        "class Gramm" <SEPO> PrintString(grammar.c_str()) "extends  GenGramm {" <NL>
        "public Gramm" <SEPO> PrintString(grammar.c_str()) "(){}" <NL>
        
        // create a function for each type assign
        foreach (<TYP_ASSIGN>,listRules,{
            currentType =  for_elem ;
            currentType == <,name,def>;
            
            // create function header for decoder
            "public PTREE" PrintString(Value(name)) "(EString  val  , CoordString coord ," "    boolean checkTag) {" <NL>
            "int codedLength = coord.length ; " <NL>
            "int codedPos = coord.pos ;" <NL>
            "PTREE __resCoding = new PTREE() ;" <NL>
            "CoordString codedCoord = new CoordString(coord.pos,coord.length); " "char __tempo;" <NL>
            
            // encode the type
            EncodeType(def);
            ";" // end of function
                " return __resCoding;" <NL>
            "}" <NL>
            
            // create function header for encoder
            "public  void" PrintString(Value(name)) "(EString   resString  , PTREE val) {" <NL>
            "EString __valString = new EString();" <NL>
            
            // encode the type
            EEncodeType(def);
            ";"; // end of function
            def == <TYP,<>,type>;
            switch ( type ) {
                case <INTEGER> : 
                case <BOOLEAN> : 
                case <CHARACTER> : 
                case <REAL_TYPE> : 
                case <TYP_IDENT> : 
                case <NULL_TYPE> : 
                case <OCTET_STRING> : 
                    {
                        "resString . AddString(__valString);" <NL>
                    }
                    break ;
            }
            "}" <NL>
        })
        "}" <NL>
        <NL>
        
        // close header
        _close(output);
    }
}

// ObjectIdentifierArray : dump the array for object identifiers
void QuickAsn::ObjectIdentifierArray ()
{
    
    // create the object identifier tree
    pvObjectTree =  CreateObjectIdentifierTree();
    
    PTREE   nameObject ;
    PTREE   typeValue ;
    PTREE   listDeriv ;
    PTREE   list ;
    PTREE   elemValue ;
    PTREE   valValue ;
    
    // generates an entry for each object value assignment
    TabList *aTabList = tabListValue->GetTabList(0);
    
    "int * ptInt ;" <NL>
    if ( aTabList ) 
        list =  aTabList->List();
    while ( (elemValue = nextl(list)) ) {
        if ( elemValue == <VAL_ASSIGN,nameObject,typeValue,valValue> && (valValue == <OBJECT_IDENTIFIER_VALUE,listDeriv> || valValue == <SEQUENCE_VALUE,listDeriv>) ) {
            int basicType = 0 ;
            
            // find the basic type of value
            while ( !basicType ) {
                switch ( typeValue ) {
                    case <TYP_IDENT,typeValue> : 
                        typeValue = FindTyp(typeValue);
                        break ;
                    case <TYP,<>,typeValue> : break ;
                    default : basicType = 1 ;
                }
            }
            
            // if the basic type is an object identifier collect the
            // new ident that this object identifier defines
            if ( typeValue == <OBJECT_IDENTIFIER> ) {
                valValue =  ExtendObjectValue(valValue);
                EString nameEntry = Value(nameObject);
                for ( unsigned int pos = 0 ; pos < nameEntry.length() ; pos++ ) {
                    if ( nameEntry [pos] == '-' ) {
                        char    *pt = (char *)(nameEntry.c_str());
                        *(pt + pos) =  '_';
                    }
                }
                nameEntry += "_entry";
                "int " PrintString(nameEntry.c_str()) <SEPO> "[] = {";
                PTREE   listEntry ;
                listEntry =  valValue [1];
                int nbEntry = 1 ;
                while ( listEntry ) {
                    nbEntry++ ;
                    PrintString(Value(listEntry)) ",";
                    nextl(listEntry);
                }
                "-1};" <NL>
                "ptInt = (int *) malloc(" PrintString(CompactItoa(nbEntry)) "* sizeof(int ));" <NL>
                "memcpy(ptInt,(char *)" PrintString(nameEntry.c_str()) "," PrintString(CompactItoa(nbEntry)) " * sizeof(int));" <NL>
                "pvTabObject [\"" PrintString(Value(nameObject)) "\"] = ptInt ;" <NL>
            }
        }
    }
}

// DecodeNodeObject : generate readable value for an object
// parameters :
//				node : the node to be decoded
void QuickAsn::DecodeNodeObject ( PTREE node )
{
    
    PTREE   list ; // a list
    PTREE   elem ; // an elem
    
    "number = atoi(Value(lastList = objectList));" <NL>
    " objectList.Nextl();" <NL>
    "switch (number) {";
    if ( node == <OBJECT_NODE,<>,list> ) {
        while ( (elem = nextl(list)) ) {
            "case " PrintString(Value(elem)) ":{" <NL>
            PTREE   symbVal = elem [3];
            EString symbolic ;
            if ( symbVal ) {
                symbolic =  EString(Value(symbVal)) + "(" + Value(elem) + ")";
            } else 
                symbolic =  Value(elem);
            "retList = AddList(retList," "PTREE(\"" PrintString(symbolic.c_str()) "\"));" <NL>
            DecodeNodeObject(elem);
            "} break;";
        }
    }
    "}";
}

// ObjectIdentifierFuncts : create functions for object identifiers
void QuickAsn::ObjectIdentifierFuncts ()
{
    "PTREE Gramm" <SEPO> PrintString(grammar.c_str()) "::DecodeObjectIdentifier ( PTREE objectList ) { " <NL>
    "int number ;" <NL>
    "PTREE elem ;" <NL>
    "PTREE lastList;" "PTREE retList;" <NL>
    DecodeNodeObject(pvObjectTree);
    "while ( lastList != PTREE(0) ) { " <NL>
    "elem = PTREE(Value(lastList));" <NL>
    "retList = AddList(retList,elem) ;" <NL>
    "lastList.Nextl();" <NL>
    "}" <NL>
    "PTREE objList;" <NL>
    "objList = PTREE(asn::OBJECT_IDENTIFIER_VALUE,1);" <NL>
    "objList.ReplaceTree(1,retList);" <NL>
    "return objList ;" <NL>
    "}" <NL>
}

// BinaryString : convert an hexa string to its binary value
// parameters :
//               string : string to be converted
// return : the binary string
EString QuickAsn::BinaryString ( EString string )
{
    char    *binary ; // binary string
    
    // compute binary string
    binary =  ConvertStringToBin((char *)(string.c_str()), string.length());
    
    // return it as EString
    EString result = EString(binary, string.length() / 2); // result
    
    free(binary);
    return result ;
}

// CharToOctal : convert a char to its octal string
// parameters :
//              toConvert : the char to be converted
// return : the octal string
EString QuickAsn::CharToOctal ( char toConvert )
{
    
    int     div = 0 ; // divided
    EString result ;  // the result 
    
    // char    *ptDiv = (char *)&div ; // to fool compiler 
    // convert number
    // *ptDiv = toConvert ;
    div =  (int)toConvert ;
    div &= 0xff ;
    for ( int index = 0 ; index < 3 ; index++ ) {
        int rem ; // the remainder
        if ( index == 2 ) 
            rem =  div & 0x3 ;
        else 
            rem =  div & 0x7 ;
        result.prepend(EString((char)('0' + rem)));
        div >>= 3 ;
    }
    
    // return result 
    return result ;
}

// DumpOctal : dump a binary string as octal
// parameters :
//              string : the string to be dumped
//              asString : tells to dump as string
void QuickAsn::DumpOctal ( EString &toPrint, bool asString )
{
    unsigned int    pos ; // current pos in string to print
    
    if ( asString ) 
        "\"" 
    else 
        "'" 
    for ( pos = 0 ; pos < toPrint.length() ; pos++ ) {
        
        // convert current character in octal 
        EString octal = CharToOctal(*(toPrint.c_str() + pos)); // the octal string
        
        // dump it
        "\\" PrintString(octal.c_str());
    }
    if ( asString ) 
        "\"" 
    else 
        "'" 
}

// CheckTag : check a tag
// parameters :
//              tag : the tag value 
//              binTag : the binary tag
//              condTest : take checkTag variable into account
//              bool embedded : second level of check tag
void QuickAsn::CheckTag ( PTREE tag, EString binTag, bool condTest, bool embedded )
{
    
    // get tag as binary
    if ( binTag == "" ) 
        binTag =  BinaryString(EncodeTagFast(tag, 0));
    if ( condTest ) {
        
        // check the tag
        "if (checkTag)  {  " <NL>
    }
    
    // suppress construction bit in tag
    char    *ptTag = (char *)(binTag.c_str());
    
    *ptTag &= ~0x20 ;
    
    // dump test
    if ( binTag.length() > 1 ) {
        
        // check tag against real value
        "if (CompareTag(";
        DumpOctal(binTag);
        ",val,";
        if ( java ) {
            " new CoordString(";
            if ( embedded ) 
                "codedCoord" 
            else 
                "coord" ".pos," 
            PrintString(CompactItoa(binTag.length())) ")";
        } else {
            "CoordString (";
            if ( embedded ) 
                "codedCoord" 
            else 
                "coord" ".pos," 
            PrintString(CompactItoa(binTag.length())) ")";
        }
        ")){" <NL>
    } else {
        "if((__tempo = (char) ((val";
        if ( java ) {
            " .charAt(";
            if ( embedded ) 
                "codedCoord" 
            else 
                "coord" ".pos )" ")  & ~0x20 & 0xff)) != 0 && __tempo ==  " 
        } else {
            "[";
            if ( embedded ) 
                "codedCoord" 
            else 
                "coord" ".pos ]" ") & ~0x20 & 0xff)) && __tempo ==  " 
        }
        DumpOctal(binTag, false);
        " ){" <NL>
    }
    
    // decode length
    "if(!TakeTagged(val," PrintString(CompactItoa(binTag.length())) ",";
    if ( embedded ) 
        "codedCoord" 
    else 
        "coord" "," 
    if ( embedded ) 
        "embeddedCodedCoord" 
    else 
        "codedCoord" ")) return" 
    if ( java ) 
        "new" "PTREE(0);" 
}

// ComputeTagChoice : compute the list of tag for choice
PTREE QuickAsn::ComputeTagChoice ( PTREE choice, bool bulk )
{
    PTREE   list, elem ;
    PTREE   taggedList ;
    PTREE   downType ;
    PTREE   name ;
    PTREE   type ;
    PTREE   labeledChoice ;
    
    if ( choice == <CHOICE,list> ) {
        while ( (elem = nextl(list)) ) {
            
            // search if type is a choice
            elem == <NAMED_TYPE,name,type>;
            while ( type == <TYP,(),type> || type == <TYP_IDENT> && (type = FindTyp(type)) ) 
                ;
            
            // if choice expose all possibilites of choice 
            if ( type != <CHOICE> ) {
                char    *valTag = EncodeTagFast(ComputeTypeTag(type), 0);
                elem       =  <TAGGED_NAMED_TYPE,MakeString(valTag),MakeTreeRef(elem)>;
                taggedList *= elem ;
            } else {
                PTREE   tagList = ComputeTagChoice(type);
                if ( !bulk ) {
                    taggedList =  ConcatList(taggedList, tagList);
                } else {
                    
                    // if bulk keep tag by choice entry
                    elem       =  <TAGGED_NAMED_TYPE,tagList,MakeTreeRef(elem)>;
                    taggedList *= elem ;
                }
            }
        }
    }
    return taggedList ;
}

// EncodeType : encoder of type tree
// parameters :
//              tree : the tree to be encoded
//              checkFirstTag : do we have to check first tag
//              embedded : second level
void QuickAsn::EncodeType ( PTREE &tree, bool checkFirstTag, bool embedded )
{
    
    PTREE   currentType ;  // current type
    PTREE   name ;         // name of type 
    PTREE   def ;          // definition of type 
    PTREE   listTag ;      // the list of tags for a type
    PTREE   type ;         // a type
    PTREE   val ;          // a val 
    int     firstTag = 1 ; // for first tag
    PTREE   basicType ;    // basic type 
    PTREE   list ;         // a list
    PTREE   elem ;         // an element of list
    
    // encode depending on type
    switch ( tree ) {
        case <TYP,listTag,type> : 
            {
                PTREE   elem ;            // an elem 
                PTREE   val ;             // a val
                bool    someTag = false ; // there is a tag
                while ( listTag != () ) {
                    
                    // get next tag
                    elem =  nextl(listTag);
                    
                    // get tag type
                    elem == <,<>,<>,val>;
                    
                    // if not indicated get the default tag
                    if ( val == () ) 
                        val =  tagDefault ;
                    
                    // Check the tag
                    if ( checkFirstTag ) {
                        CheckTag(elem);
                        "} else return ";
                        if ( java ) {
                            "new";
                        }
                        "PTREE(0);" <NL>
                        "  }" <NL>
                    } else {
                        someTag       =  true ;
                        checkFirstTag =  false ;
                    }
                    
                    // set the checktag flag
                    if ( !strcmp(value(val), "IMPLICIT") ) {
                        "checkTag = false ;" <NL>
                    } else 
                        "checkTag = true ;" 
                    <NL>
                }
                
                // encode type
                EncodeType(type, checkFirstTag || someTag, embedded);
                ";";
            }
            break ;
        case <TYP_IDENT> : 
            {
                if ( checkFirstTag ) {
                    "__resCoding = " PrintString(Value(tree)) "(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                } else {
                    "__resCoding = " PrintString(Value(tree)) "(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <CHOICE,list> : 
            {
                PTREE   taggedList ;    // the tagged list
                PTREE   taggedListOld ; // to keep taggedList
                PTREE   choiceEntry ;   // the choice entry
                
                // compute the tagged list
                taggedListOld =  taggedList = ComputeTagChoice(tree, true);
                bool    first = true ; // tells if first entry 
                
                // stock the first char
                "char __firstChar = (char) ((val" <NL>
                if ( java ) {
                    " .charAt(";
                    if ( embedded ) 
                        "codedCoord" 
                    else 
                        "coord" ".pos )) " 
                } else {
                    "[";
                    if ( embedded ) 
                        "codedCoord" 
                    else 
                        "coord" ".pos ]) " 
                }
                " &~0x20 & 0xff);" <NL>
                "switch(__firstChar){";
                
                // search the good entry 
                while ( (elem = nextl(taggedList)) ) {
                    EString binTag ; // tag as binary
                    PTREE   tag ;
                    elem == <,tag>;
                    if ( tag != <LIST> ) {
                        binTag =  BinaryString(Value(elem));
                        
                        // if more than one char we have to switch to a if
                        if ( binTag.length() > 1 ) 
                            break ;
                        choiceEntry   =  nextl(list);
                        taggedListOld =  taggedList ;
                        "case ";
                        DumpOctal(binTag, false);
                        ": { " <NL>
                        
                        // decode length
                        "if(!TakeTagged(val," PrintString(CompactItoa(binTag.length())) ",";
                        if ( embedded ) 
                            "codedCoord" 
                        else 
                            "coord" "," 
                        if ( embedded ) 
                            "embeddedCodedCoord" 
                        else 
                            "codedCoord" ")) return" 
                        if ( java ) 
                            "new" "PTREE(0);" 
                        
                        // call decoding on contained value 
                        PTREE   type ; // the type 
                        type =  choiceEntry [2];
                        
                        // "checkTag = false ;" <NL>
                        // type == <TYP,<>,type>;
                        // decode the type for this choice
                        {
                            "{" <NL>
                            EncodeType(type, false);
                            "return CreateNamedNode(\"" PrintString(Value(choiceEntry)) "\",__resCoding);" <NL>
                            "}";
                        }
                        
                        // end of entry
                        " } " <NL>
                    } else {
                        bool    bigTag = false ;
                        PTREE   initTag = tag ;
                        while ( (elem = nextl(tag)) ) {
                            binTag =  BinaryString(Value(elem));
                            
                            // if more than one char we have to switch to a if
                            if ( binTag.length() > 1 ) 
                                bigTag =  true ;
                        }
                        if ( bigTag ) 
                            break ;
                        tag =  initTag ;
                        while ( (elem = nextl(tag)) ) {
                            binTag =  BinaryString(Value(elem));
                            "case ";
                            DumpOctal(binTag, false);
                            ": ";
                        }
                        choiceEntry   =  nextl(list);
                        taggedListOld =  taggedList ;
                        "{ " <NL>
                        
                        // call decoding on contained value 
                        PTREE   type ; // the type 
                        type =  choiceEntry [2];
                        EncodeType(type, true, false);
                        if ( embedded ) 
                            "codedCoord" 
                        else 
                            "coord" "=  " 
                        if ( embedded ) 
                            "embeddedCodedCoord" 
                        else 
                            "codedCoord" ";" 
                        <NL>
                        "return CreateNamedNode(\"" PrintString(Value(choiceEntry)) "\",__resCoding);" <NL>
                        
                        // end of entry
                        " } " <NL>
                    }
                }
                "default : {" <NL>
                taggedList =  taggedListOld ;
                
                // search the good entry 
                while ( (elem = nextl(taggedList)) ) {
                    choiceEntry =  nextl(list);
                    EString binTag ; // tag as binary
                    PTREE   tag ;
                    elem == <,tag>;
                    if ( tag != <LIST> ) {
                        binTag =  BinaryString(Value(elem));
                        
                        // if not first entry put else 
                        if ( !first ) {
                            "else";
                        }
                        
                        // Check tag
                        CheckTag(PTREE(0), binTag, false);
                        
                        // call decoding on contained value 
                        PTREE   type ; // the type 
                        type =  choiceEntry [2];
                        
                        // "checkTag = false ;" <NL>
                        // type == <TYP,<>,type>;
                        // decode the type for this choice
                        {
                            "{" <NL>
                            EncodeType(type, false);
                            "return CreateNamedNode(\"" PrintString(Value(choiceEntry)) "\",__resCoding);" <NL>
                            "}";
                        }
                        
                        // end of entry
                        " } " <NL>
                    } else 
                        while ( (elem = nextl(tag)) ) {
                            binTag =  BinaryString(Value(elem));
                            
                            // if not first entry put else 
                            if ( !first ) {
                                "else";
                            }
                            
                            // Check tag
                            CheckTag(PTREE(0), binTag, false);
                            
                            // call decoding on contained value 
                            PTREE   type ; // the type 
                            type =  choiceEntry [2];
                            EncodeType(type, true, false);
                            "return CreateNamedNode(\"" PrintString(Value(choiceEntry)) "\",__resCoding);" <NL>
                            
                            // end of entry
                            " } " <NL>
                            first =  false ;
                        }
                    
                    // put else now
                    first =  false ;
                }
                
                // end of case 
                "} } " <NL>
            }
            break ;
        case <SEQUENCE,list> : 
            {
                PTREE   sequence ;      // the sequence 
                PTREE   taggedList ;    // the list of tags
                PTREE   elem ;          // an elem 
                PTREE   sequenceEntry ; // a sequence entry
                if ( java ) {
                    "CoordString embeddedCodedCoord = new CoordString(coord.pos,coord.length); " <NL>
                } else {
                    "CoordString embeddedCodedCoord(coord.pos,coord.length); " <NL>
                }
                
                // look tag for sequence 
                if ( checkFirstTag ) {
                    CheckTag(ComputeTypeTag(tree), "", true);
                    "}else return ";
                    if ( java ) {
                        "new";
                    }
                    "PTREE(0);" "}" <NL>
                }
                "checkTag = true ; " <NL>
                
                // compute tagged list
                sequence   =  TypeNormalize(tree);
                taggedList =  ComputeTagSet(sequence);
                if ( java ) {
                    "boolean __analyze = false ;" <NL>
                } else {
                    "bool __analyze = false ;" <NL>
                }
                
                // returned value will be a list
                "PTREE __listSequence ;" <NL>
                "PTREE __listSequencef ;" <NL>
                if ( java ) {
                    "__listSequence = new PTREE() ; __listSequencef = __listSequence ; " <NL>
                }
                
                // search the string
                sequence == <,list>;
                while ( (elem = nextl(taggedList)) ) {
                    sequenceEntry =  nextl(list);
                    EString binTag ; // tag as binary
                    binTag =  BinaryString(Value(elem));
                    "if( codedCoord. length > 0 ) {" <NL>
                    PTREE   type ; // the type 
                    sequenceEntry == <ELEMENT_TYPE,<NAMED_TYPE,<>,type>>;
                    if ( type == <TYP,(),<TYP_IDENT>,()> ) {
                        "if (true ) { " <NL>
                        "checkTag = true ;" <NL>
                        EncodeType(type, true, false);
                    } else {
                        
                        // Check tag
                        CheckTag(PTREE(0), binTag, false, true);
                        
                        // call decoding on contained value 
                        EncodeType(type, false, true);
                    }
                    "PTREE __headTree = CreateNamedNode(\"" PrintString(Value(sequenceEntry)) "\",__resCoding);" <NL>
                    "__listSequencef = AddToList(__listSequence,__headTree,__listSequencef);" <NL>
                    
                    // end of entry
                    "}   else {" <NL>
                    
                    // if optional or default do nothing otherwise get to end
                    PTREE   opt ; // option for type
                    opt =  sequenceEntry [2];
                    if ( opt == () ) {
                        "codedCoord.length = 0 ;" <NL>
                    }
                    "}" <NL>
                    "}" <NL>
                }
                
                // construct return value
                if ( java ) {
                    "PTREE __retValue = new PTREE(asn.SEQUENCE_VALUE,1);" <NL>
                } else {
                    "PTREE __retValue = PTREE(asn::SEQUENCE_VALUE,1);" <NL>
                }
                "__retValue . ReplaceTree(1,__listSequence);" <NL>
                "__resCoding = __retValue;" <NL>
            }
            break ;
        case <SET_OF,<>,type> : 
        case <SEQUENCE_OF,<>,type> : 
            {
                
                // look tag for sequence 
                if ( checkFirstTag ) {
                    CheckTag(ComputeTypeTag(tree), "", true);
                    "}else return ";
                    if ( java ) {
                        "new";
                    }
                    "PTREE(0);" "}" <NL>
                }
                "checkTag = true ;" <NL>
                if ( java ) {
                    
                    // returned value will be a list
                    "PTREE __listSequence = new PTREE();" <NL>
                    "PTREE __listSequencef = __listSequence;" <NL>
                } else {
                    
                    // returned value will be a list
                    "PTREE __listSequence ;" <NL>
                    "PTREE __listSequencef ;" <NL>
                }
                "while (codedCoord.length > 0 ) {" <NL>
                EncodeType(type);
                if ( java ) {
                    "if (__resCoding == null || __resCoding .Empty()) return __resCoding ;" <NL>
                } else {
                    "if (__resCoding == PTREE(0)) return __resCoding ;" <NL>
                }
                
                // "checkTag = true ;" <NL>
                // type == <TYP,<>,type>;
                "__listSequencef = AddToList(__listSequence,__resCoding,__listSequencef);" <NL>
                "}" <NL>
                
                // construct return value
                if ( java ) {
                    "PTREE __retValue = new PTREE(asn.SEQUENCE_VALUE,1);" <NL>
                } else {
                    "PTREE __retValue = PTREE(asn::SEQUENCE_VALUE,1);" <NL>
                }
                "__retValue . ReplaceTree(1,__listSequence);" <NL>
                "__resCoding =  __retValue;";
            }
            break ;
        case <INTEGER> : 
            {
                if ( checkFirstTag ) {
                    "if(true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = GetInteger(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} } else " 
                            <NL>
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} } else " <NL>
                    }
                } else {
                    "__resCoding = GetInteger(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <OBJECT_IDENTIFIER> : 
            {
                if ( checkFirstTag ) {
                    "if (true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = DecodeObjectIdentifier(GetObjectIdentifier(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag))" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} } else ";
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} } else ";
                    }
                    <NL>
                } else {
                    "__resCoding = DecodeObjectIdentifier(GetObjectIdentifier(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false))" 
                    <NL>
                }
            }
            break ;
        case <BOOLEAN> : 
            {
                if ( checkFirstTag ) {
                    "if (true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = GetBoolean(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} } else ";
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} } else ";
                    }
                    <NL>
                } else {
                    "__resCoding = GetBoolean(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <CHARACTER> : 
            {
                if ( checkFirstTag ) {
                    "if (true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = GetIA5String(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} }else ";
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} }else";
                    }
                    <NL>
                } else {
                    "__resCoding = GetIA5String(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <REAL_TYPE> : 
            {
                if ( checkFirstTag ) {
                    "if (true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = GetRealString(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} }else ";
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} }else";
                    }
                    <NL>
                } else {
                    "__resCoding = GetRealString(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <OCTET_STRING> : 
            {
                if ( checkFirstTag ) {
                    "if(true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = GetOctetString(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} } else ";
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} } else ";
                    }
                    <NL>
                } else {
                    "__resCoding = GetOctetString(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <NULL_TYPE> : 
            {
                if ( checkFirstTag ) {
                    "if(true) {int __startPos;" <NL>
                    if ( embedded ) {
                        "__startPos =   embeddedCodedCoord.length;";
                    } else {
                        "__startPos =  codedCoord.length;";
                    }
                    "__resCoding = GetNullType(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",checkTag)" 
                    <NL>
                    if ( embedded ) {
                        ";if (checkTag) {__startPos = __startPos - embeddedCodedCoord.length;"
                            "codedCoord . pos += __startPos ; codedCoord .length -= __startPos;} } else ";
                    } else {
                        ";if (checkTag) {__startPos = __startPos - codedCoord.length;" "coord . pos += __startPos ; coord .length -= __startPos;} } else ";
                    }
                    <NL>
                } else {
                    "__resCoding = GetNullType(val,";
                    if ( embedded ) 
                        "embeddedCodedCoord" 
                    else 
                        "codedCoord" ",false)" 
                    <NL>
                }
            }
            break ;
        case <ENUMERATED,list> : 
        case <BITSTRING,list> : 
            {
                PTREE   elem ;            // an elem 
                bool    firstVal = true ; // tells if first val
                
                // create an array of all the enumerated values
                if ( java ) {
                    "String enumeratedList[] [] = {";
                    while ( (elem = nextl(list)) ) {
                        if ( !firstVal ) 
                            "," "{Integer.toString(" 
                        PrintString(Value(elem [2])) "), (\"" PrintString(Value(elem [1])) "\")}";
                        firstVal =  false ;
                    }
                    if ( !firstVal ) 
                        "," "{null, null}" "};" 
                    <NL>
                } else {
                    "static Enumerated enumeratedList [] = {";
                    while ( (elem = nextl(list)) ) {
                        if ( !firstVal ) 
                            "," "{(char *)" 
                        PrintString(Value(elem [2])) ",\"" PrintString(Value(elem [1])) "\"}";
                        firstVal =  false ;
                    }
                    if ( !firstVal ) 
                        "," "{(char *)0, (char *)0}" "};" 
                    <NL>
                }
                
                // look tag for enumerated 
                CheckTag(ComputeTypeTag(tree), "", true);
                "} }" <NL>
                "checkTag = false ;" <NL>
                if ( checkFirstTag ) {
                    if ( tree == <ENUMERATED> ) {
                        "__resCoding = GetEnumerated (" "GetInteger(val,codedCoord,checkTag)" ",enumeratedList);";
                    } else {
                        "__resCoding = GetBitString(val,codedCoord,enumeratedList,checkTag);";
                    }
                } else {
                    if ( tree == <ENUMERATED> ) {
                        "__resCoding =  GetEnumerated (" "GetInteger(val,codedCoord,false)" ",enumeratedList);";
                    } else {
                        "__resCoding = GetBitString(val,codedCoord,enumeratedList,false);";
                    }
                }
                <NL>
            }
            break ;
        default : 
            {
                EString error = "Unknown Type \n";
                _write(2, error, error.length());
            }
    }
}

//
// GetType : get basic type from a type
//
PTREE QuickAsn::GetType ( const PTREE &paramType, const PTREE &paramTheValue )
{
    PTREE   list, val ;
    PTREE   tag ;
    PTREE   type ;
    PTREE   theValue ;
    
    type     =  paramType ;
    theValue =  paramTheValue ;
    while ( 1 ) {
        switch ( type ) {
            case <TYP_ASSIGN,<>,type> : break ;
            case <TYP,list,val> : 
                if ( list == () ) 
                    type =  val ;
                else 
                    return type ;
                break ;
            case <TYP_IDENT,val> : 
                type = FindTyp(val);
                break ;
            case <ANY_TYPE> : 
                if ( theValue == <ANY_VALUE,type> ) {
                    theValue =  ();
                    break ;
                } else 
                    return type ;
                break ;
            default : return type ;
        }
    }
}

// EncodeChoice : encode the encoding of a choice
// parameters :
//               tabChoice : tab of choice clause
//               start : where to start
//               end : where to end
void QuickAsn::EncodeChoice ( TabList &tabChoice, unsigned int start, unsigned int end )
{
    unsigned    middle ; // middle of set
    
    if ( start > end ) 
        return ;
    if ( start == end ) 
        middle =  start ;
    else 
        middle =  (start + end) / 2 ;
    
    PTREE   choiceEntry ; // studied entry
    
    choiceEntry =  tabChoice [middle];
    
    // search the good entry 
    // Check entry
    if ( java ) {
        "  __compVal =    __compString  . compareTo(\"" PrintString(Value(choiceEntry)) "\")   ;" <NL>
    } else {
        " __compVal = strcmp(__compString,\"" PrintString(Value(choiceEntry)) "\")  ;" <NL>
    }
    "if (__compVal == 0) {" <NL>
    
    // call coding on contained value 
    PTREE   type ; // the type
    
    type =  choiceEntry [2];
    if ( java ) {
        "val = val.SonTree(2);" <NL>
    } else {
        "if (val.TreeArity() >= 2) val = val[2];" <NL>
    }
    EEncodeType(type);
    if ( java ) {
        "resString .AddString( __valString);" <NL>
    } else {
        "resString += __valString;" <NL>
    }
    
    // "resString += __valString;"<NL>
    // end of entry
    "}  " <NL>
    if ( middle > start ) {
        "else if (__compVal < 0 ) {" <NL>
        EncodeChoice(tabChoice, start, middle - 1);
        "}";
    }
    if ( middle < end ) {
        "else {" <NL>
        EncodeChoice(tabChoice, middle + 1, end);
        "}" <NL>
    }
}

// EncodeType : encoder of type tree
// parameters :
//              tree : the tree to be encoded
void QuickAsn::EEncodeType ( PTREE &tree )
{
    
    PTREE   currentType ;  // current type
    PTREE   name ;         // name of type 
    PTREE   def ;          // definition of type 
    PTREE   listTag ;      // the list of tags for a type
    PTREE   type ;         // a type
    PTREE   val ;          // a val 
    int     firstTag = 1 ; // for first tag
    PTREE   basicType ;    // basic type 
    PTREE   list ;         // a list
    PTREE   elem ;         // an element of list
    
    // encode depending on type
    switch ( tree ) {
        case <TYP,listTag,type> : 
            {
                
                // simple case
                if ( listTag == () ) {
                    EEncodeType(type);
                    ";" <NL>
                    break ;
                }
                
                // complex case
                PTREE   elem ;   // an elem 
                PTREE   val ;    // a val
                PTREE   list = listTag ;
                EString binTag ; // a tag as binary
                
                // "{" <NL>
                // "EString __valString;" <NL>
                // encode type
                EEncodeType(type);
                ";" <NL>
                
                // permutate the list tags
                ListPermutate(listTag);
                bool    firstTag = true ;
                
                // compute aggrega
                while ( listTag != () ) {
                    
                    // get next tag
                    elem =  nextl(listTag);
                    
                    // get tag type
                    elem == <,<>,<>,val>;
                    
                    // if not indicated get the default tag
                    if ( val == () ) 
                        val =  tagDefault ;
                    
                    // compute tag
                    binTag =  BinaryString(EncodeTagFast(elem, 0));
                    
                    // if type is choice or any tag is explicit
                    bool    tagChoice = false ;
                    if ( firstTag && ((basicType = GetType(type, (PTREE)0)), basicType == <CHOICE> || basicType == <ANY_TYPE>) ) {
                        tagChoice =  true ;
                    }
                    
                    // put tag
                    if ( !tagChoice && !strcmp(value(val), "IMPLICIT") ) {
                        "PutTag(__valString,";
                        DumpOctal(binTag);
                        ",true);" <NL>
                    } else {
                        "PutTag(__valString,";
                        DumpOctal(binTag);
                        ",false);" <NL>
                    }
                    firstTag =  false ;
                } // "}" <NL>
            }
            break ;
        case <TYP_IDENT> : 
            {
                PrintString(Value(tree)) "(__valString,val)" <NL>
            }
            break ;
        case <CHOICE,list> : 
            {
                PTREE   taggedList ;   // the tagged list
                PTREE   choiceEntry ;  // the choice entry
                
                // compute the tagged list
                // taggedList = ComputeTagChoice(tree, (PTREE)0);
                bool    first = true ; // tells if first entry 
                
                // store compare string
                if ( java ) {
                    "String __compString ;" "if (val != null) __compString= val.Value(); else return ;" <NL>
                } else {
                    "char * __compString = Value(val);" <NL>
                }
                "int __compVal ; ";
                
                // sort the list
                PTREE   choiceList ;
                choiceList =  copytree(list);
                TabList tabList (choiceList) ;
                tabList.Sort();
                EncodeChoice(tabList, 0, tabList.Size() - 1);
            }
            break ;
        case <SEQUENCE,list> : 
            {
                PTREE   sequence ;      // the sequence 
                PTREE   elem ;          // an elem 
                PTREE   sequenceEntry ; // a sequence entry
                PTREE   name ;          // name of entry
                PTREE   opt ;           // tells if optional
                "{" <NL>
                if ( java ) {
                    "EString __sequenceString = new EString();" <NL>
                    "val = val.SonTree(1);" <NL>
                    "PTREE __keeper = null ;" <NL>
                } else {
                    "EString __sequenceString;" <NL>
                    "if (val.TreeArity() >= 1) val = val[1];" <NL>
                }
                
                // compute tagged list
                sequence =  TypeNormalize(tree);
                
                // search the string
                sequence == <,list>;
                while ( (sequenceEntry = nextl(list)) ) {
                    sequenceEntry == <ELEMENT_TYPE,<NAMED_TYPE,name,type>,opt>;
                    
                    // Check entry
                    if ( java ) {
                        "if (  val != null && val.Value()  . compareTo(\"" PrintString(Value(name)) "\") == 0 ) {" <NL>
                    } else {
                        "if ( !strcmp(Value(val),\"" PrintString(Value(name)) "\")) {" <NL>
                    }
                    if ( java ) {
                        "__keeper = val ;" <NL>
                        "val = GetNextTree(val,true);" <NL>
                        "__valString = new EString(\"\");" <NL>
                    } else {
                        "PutSonNext __putSonNext (&val,true);" "__valString = \"\";" <NL>
                    }
                    <NL>
                    
                    // "{" <NL>
                    EEncodeType(type);
                    if ( java ) {
                        "__sequenceString .AddString( __valString);" <NL>
                        "val = __keeper.SonTree(2);" <NL>
                    } else {
                        "__sequenceString += __valString;" <NL>
                    }
                    
                    // "}" <NL>
                    "} else {" <NL>
                    if ( opt == () ) {
                        if ( java ) {
                            "val = new PTREE(0);" <NL>
                        } else {
                            "val = PTREE(0); " <NL>
                            {
                                
                                // "MetaExit(1,\"Invalid coding Sequence\");";
                                int i = 1 ;
                            }
                        }
                    }
                    <NL>
                    "}" <NL>
                }
                "PutTag(__sequenceString,";
                EString paramFunct((char)0x30);
                DumpOctal(paramFunct);
                ",false);" <NL>
                if ( java ) {
                    "resString .AddString(__sequenceString);" <NL>
                } else {
                    "resString += __sequenceString;" <NL>
                }
                "}" <NL>
            }
            break ;
        case <SET_OF,<>,type> : 
        case <SEQUENCE_OF,<>,type> : 
            {
                "{" <NL>
                if ( java ) {
                    "EString __sequenceString = new EString();" <NL>
                    "PTREE __keeper = null ;" <NL>
                } else {
                    "EString __sequenceString;" <NL>
                }
                if ( java ) {
                    "val = val.SonTree(1);" <NL>
                    "while ( val != null && !(val.Empty())) {" <NL>
                    "__valString=new EString(\"\");" <NL>
                } else {
                    "if (val.TreeArity() >= 1 ) val = val[1];" <NL>
                    "while ( val != PTREE(0)) {" <NL>
                    "__valString=\"\";" <NL>
                }
                if ( java ) {
                    "__keeper = val ;" <NL>
                    "val = GetNextTree(val,false);" <NL>
                    "if (val != null)";
                } else {
                    "PutSonNext __putSonNext (&val,false);" <NL>
                    "if (val != PTREE(0)) ";
                }
                "{ " <NL>
                EEncodeType(type);
                " }" <NL>
                if ( java ) {
                    "__sequenceString .AddString(__valString);" <NL>
                    "val = __keeper.SonTree(2);" <NL>
                } else {
                    "__sequenceString += __valString;" <NL>
                }
                "}" <NL>
                "PutTag(__sequenceString,";
                EString paramFunct((char)0x30);
                DumpOctal(paramFunct);
                ",false);" <NL>
                if ( java ) {
                    "resString . AddString(__sequenceString);" <NL>
                } else {
                    "resString += __sequenceString;" <NL>
                }
                "}" <NL>
            }
            break ;
        case <INTEGER> : 
            {
                "{" <NL>
                if ( java ) {
                    "int __val = Integer.parseInt(val.Value() ,10);" <NL>
                    "if (val.NumberTree() == asn.UN_MINUS) { __val = -1 * __val;}";
                } else {
                    "ENCODE_INT __val = CONVERT_TO_INT (Value(val));" "if (NumberTree(val) == asn::UN_MINUS) { __val = -1 * __val;}";
                }
                <NL>
                "EncodeInteger(__valString,__val);" <NL>
                "}" <NL>
            }
            break ;
        case <OBJECT_IDENTIFIER> : 
            {
                "{" <NL>
                "EncodeObjectIdentifier(__valString,val,GetObjectDef(Value(val)));" <NL>
                "}" <NL>
            }
            break ;
        case <BOOLEAN> : 
            {
                if ( java ) {
                    "boolean __val = false ;";
                } else {
                    "bool __val = false ;";
                }
                if ( java ) {
                    "if (val.NumberTree( ) == asn.TRUE) { __val =true ;}";
                } else {
                    "if (NumberTree(val) == asn::TRUE) { __val =true ;}";
                }
                <NL>
                "EncodeBoolean(__valString,__val);" <NL>
            }
            break ;
        case <CHARACTER> : 
            {
                if ( java ) {
                    "EncodeIA5String(__valString,val.Value());" <NL>
                } else {
                    
                    // EL 07/07/00 send tree instead of string
                    "EncodeIA5String(__valString,val);" <NL>
                }
            }
            break ;
        case <REAL_TYPE> : 
            {
                if ( java ) {
                    "EncodeRealString(__valString,val.Value());" <NL>
                } else {
                    
                    // EL 07/07/00 send tree instead of string
                    "EncodeRealString(__valString,val);" <NL>
                }
            }
            break ;
        case <OCTET_STRING> : 
            {
                if ( java ) {
                    "EncodeOctetString(__valString,val.Value());" <NL>
                } else {
                    
                    // EL 07/07/00 send tree instead of string
                    "EncodeOctetString(__valString,val);" <NL>
                }
            }
            break ;
        case <NULL_TYPE> : 
            {
                "EncodeNullType(__valString);" <NL>
            }
            break ;
        case <ENUMERATED,list> : 
        case <BITSTRING,list> : 
            {
                PTREE   elem ;            // an elem 
                bool    firstVal = true ; // tells if first val
                PTREE   listInit = list ;
                
                // create an array of all the enumerated values
                if ( java ) {
                    "String enumeratedList [] [] = {";
                    while ( (elem = nextl(list)) ) {
                        if ( !firstVal ) 
                            "," "{Integer.toString(" 
                        PrintString(Value(elem [2])) "), (\"" PrintString(Value(elem [1])) "\")}";
                        firstVal =  false ;
                    }
                    if ( !firstVal ) 
                        "," "{null,null }" "};" 
                    <NL>
                } else {
                    "static Enumerated enumeratedList [] = {";
                    while ( (elem = nextl(list)) ) {
                        if ( !firstVal ) 
                            "," "{(char *)" 
                        PrintString(Value(elem [2])) ",\"" PrintString(Value(elem [1])) "\"}";
                        firstVal =  false ;
                    }
                    if ( !firstVal ) 
                        "," "{(char *)0, (char *)0 }" "};" 
                    <NL>
                }
                
                // look tag for enumerated 
                if ( tree == <ENUMERATED> ) {
                    if ( java ) {
                        "EncodeEnumerated(resString,enumeratedList,val.Value());" <NL>
                    } else {
                        "EncodeEnumerated(resString,enumeratedList,Value(val));" <NL>
                    }
                } else {
                    if ( java ) {
                        "String enumeratedVal [] [] = new String [2] [2 + " PrintString(CompactItoa(ListLength(listInit))) "];" <NL>
                    } else {
                        "Enumerated enumeratedVal [2 + " PrintString(CompactItoa(ListLength(listInit))) "];" <NL>
                    }
                    "int __index = 0 ;" <NL>
                    if ( java ) {
                        "val = val.SonTree(1);" <NL>
                        "if (val.NumberTree() == LIST) { while ( val != null ) {" <NL>
                        "enumeratedVal [__index][0] = null;" <NL>
                        "enumeratedVal [__index] [1]= val.Value()  ;" <NL>
                        "__index++; val = val . SonTree(2); }" <NL>
                        "} else {" <NL>
                        "enumeratedVal [__index][0] = null;" <NL>
                        "enumeratedVal [__index] [1]= val.Value()  ;" <NL>
                        "__index++;" <NL>
                        "}" <NL>
                        "enumeratedVal [__index][0] =null ;" <NL>
                        "enumeratedVal [__index][1] = null;" <NL>
                    } else {
                        "if (val.TreeArity() >= 1 ) val = val[1];" <NL>
                        "if (val.NumberTree() == LIST) { while ( val != PTREE(0) ) {" <NL>
                        "enumeratedVal [__index][0] = (char *) 0 ;" <NL>
                        "enumeratedVal [__index] [1]= Value(val) ;" <NL>
                        "__index++; val . Nextl();}" <NL>
                        "} else {" <NL>
                        "enumeratedVal [__index][0] = (char *) 0 ;" <NL>
                        "enumeratedVal [__index] [1]= Value(val) ;" <NL>
                        "__index++;" <NL>
                        "}" <NL>
                        "enumeratedVal [__index][0] = (char *) 0 ;" <NL>
                        "enumeratedVal [__index][1] = (char *) 0 ;" <NL>
                    }
                    "EncodeBitString(resString,enumeratedList,enumeratedVal);" <NL>
                }
                <NL>
            }
            break ;
        default : 
            {
                EString error = "Unknown Type \n";
                _write(2, error, error.length());
            }
    }
}


