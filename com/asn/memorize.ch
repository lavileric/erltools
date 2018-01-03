language asn;

// #include <stdio.h>
// #include <stdlib.h>
#include <fcntl.h>

#if 0
#   include <io.h>
#   include <sys\types.h>
#   include <sys\stat.h>
#endif

#include "asndef.h"
#include "asn.h"
#include <tablist.h>

static Coding   *refCode = (Coding *)0 ; // memorizing current tree

//
// Memorizing output string
//
void DecompAsn::CompMemorize ( Coding *code )
{
    refCode =  code ;
}

// 
// Forgetting string
//
static Coding   *nullCoding = 0 ;

void DecompAsn::CompForget ()
{
    if ( !nullCoding ) 
        nullCoding =  new Coding ;
    refCode =  nullCoding ;
}

//
// Getting tag
//
static char *storeTag = (char *)0 ;

char *DecompAsn::CompGetTag ()
{
    if ( refCode ) {
        PTREE   code = refCode->GetPointer();
    start : 
        if ( code == <BLIND_CODING> ) {
            EString res("");
            while ( code == <BLIND_CODING> ) {
                res  += (const char *)Value(code);
                res  += CompGetLength();
                code =  refCode->GetPointer();
            }
            res += (const char *)CompGetTag();
            if ( storeTag ) 
                free(storeTag);
            return storeTag = AllocString((char *)(const char *)res);
        } else if ( code == <CODING_SPEC> ) {
            return (char *)"";
        } else 
            return Value(code);
    } else 
        return (char *)"";
}

//
// Getting Length
//
char *DecompAsn::CompGetLength ()
{
    PTREE   pt = (PTREE)0 ;
    
    if ( refCode ) 
        pt =  refCode->GetPointer();
    
    // prepare the next read query
    if ( !CompIsSimpleValue() || pt == <BLIND_CODING> ) 
        refCode->Next();
    
    // get length
    if ( pt == <CODING,<>,pt> || pt == <BLIND_CODING,<>,pt> ) 
        return Value(pt);
    else 
        return (char *)"";
}

//
// Getting Val
//
char *DecompAsn::CompGetVal ()
{
    char    *res = (char *)(const char *)(*refCode->GetVal());
    
    // prepare next query
    refCode->Next();
    
    // return val
    return res ;
}

//
// Detect if value is a simple value
//
int DecompAsn::CompIsSimpleValue ()
{
    if ( refCode ) 
        return refCode->IsSimpleValue();
    return 1 ;
}

//
// Detect if value is a simple value
//
PTREE DecompAsn::CompIsError ()
{
    PTREE   pt = (PTREE)0 ;
    PTREE   content ; // content of refCode
    
    if ( refCode ) 
        pt =  refCode->GetPointer();
    if ( pt == <BLIND_CODING,<>,<>,<>,pt> || pt == <CODING,<>,<>,<>,pt> ) {
        return pt ;
    }
    return (PTREE)0 ;
}

//
// get pointer
//
PTREE DecompAsn::CompGetPointer ()
{
    if ( refCode ) 
        return refCode->GetPointer();
    return (PTREE)0 ;
}

//
// Find a value of a given name
//
PTREE DecompAsn::FindValue ( const PTREE &name )
{
    PTREE   val, content ;
    
    // if no table return ()
    if ( !tabListValue ) 
        return (PTREE)0 ;
    
    // find the value associated with the tree
    // the tree is either an assignment or an ident    
    if ( name != <VAL_ASSIGN,<>,<>,content> ) {
        val =  (*tabListValue)[Value(name)];
        if ( !val ) 
            return (PTREE)0 ;
        val == <VAL_ASSIGN,<>,<>,content>;
    } else 
        val =  name ;
    
    // if we affect a name to the value try to find
    // if it is not the definition of another value
    // otherwise return value
    if ( content == <IDENT> ) {
        if ( (content = FindValue(content)) ) {
            return content ;
        } else 
            return val ;
    } else 
        return val ;
}

//
// Find a type of a given name
//
PTREE DecompAsn::FindTyp ( const PTREE &name )
{
    PTREE   type, val ;
    
    if ( name == <TYP_IDENT,<CLASS_TREE>> ) {
        val =  name [1];
        val =  GetTreeRef(val);
    } else if ( name == <CLASS_TREE> ) {
        val =  GetTreeRef(name);
    } else {
        if ( tabListType ) 
            val =  (*tabListType)[Value(name)];
        else 
            val =  (PTREE)0 ;
    }
    if ( !val ) 
        return (PTREE)0 ;
    val == <TYP_ASSIGN,<>,type>;
    if ( type == <TYP,<>,<TYP_IDENT>> ) {
        type == <TYP,<>,type>;
    }
    if ( type == <TYP_IDENT> ) 
        return FindTyp(type);
    else if ( type ) 
        return type ;
    else 
        return val ;
}

// EncodeAValue : encoding of a value
// parameters :
//              type : type of value
//              val : the value
//              buffer : the buffer where to encode
//              length : the length of buffer
void DecompAsn::EncodeAValue ( PTREE type, PTREE val, char **buffer, int *length )
{
    
    int     encodedLength = 0 ; // the length really encoded
    Coding  *theContent ;       // result of encoding
    char    *compiledContent ;  // char * for encoding
    char    *pt ;               // pointer in compiledContent
    int     nb ;                // for coding
    
    // initialize buffer
    *buffer         =  (char *)malloc(512);
    *length         =  512 ;
    
    // compute content
    theContent      =  EncodeValue(type, val);
    compiledContent =  (char *)(const char *)*((EString *)(*theContent));
    for ( pt = compiledContent ; pt && *pt ; pt++ ) {
        switch ( *pt ) {
            case ' ' : break ;
            default : 
                
                // compute next position
                nb = 0 ;
                if ( *pt >= 'A' ) 
                    nb =  16 * (*pt - 'A' + 10);
                else 
                    nb =  16 * (*pt - '0');
                pt++ ;
                if ( *pt >= 'A' ) 
                    nb += *pt - 'A' + 10 ;
                else 
                    nb += *pt - '0';
                
                // store it
                if ( encodedLength >= *length ) {
                    *buffer =  (char *)realloc(*buffer, *length = *length + 512);
                }
                if ( encodedLength < *length ) {
                    *(*buffer + encodedLength) =  (char)nb ;
                    encodedLength++ ;
                }
        }
    }
    *length =  encodedLength ;
    delete theContent ;
}

//
// StoreInFile Store the compiled pdu in a file
//
void DecompAsn::StoreInFile ( PTREE listValue, const char *fileName )
{
    PTREE   name, type, content, inter ;
    char    *compiledContent, *pt ;
    int     outputFile = 0 ;
    int     nb ;
    PTREE   val ;
    int     length ;
    
    // open output file either the file is pduname and we open a file
    // for each pdu which is the pdu name or we open only one file as
    // indicated by the name
    if ( !strcmp(fileName, "pduname") || (outputFile = _open(fileName, O_RDWR | O_TRUNC | O_CREAT, 0777)) >= 1 ) {
        while ( (val = nextl(listValue)) ) {
            if ( val == <VAL_ASSIGN,name,type,content> ) {
                if ( strcmp(fileName, "pduname") || (outputFile = _open(Value(name), O_RDWR | O_TRUNC | O_CREAT, 0777)) >= 1 ) {
                    
                    // encode the value
                    EncodeAValue(type, content, &pt, &length);
                    
                    // store content in file
                    _write(outputFile, pt, length);
                    
                    // free buffer
                    free(pt);
                }
                if ( !strcmp(fileName, "pduname") ) {
                    _close(outputFile);
                    outputFile =  0 ;
                }
            }
        }
    }
    
    // close output file
    if ( outputFile ) 
        _close(outputFile);
}

//
// StoreInFile Store the compiled pdu in a file
//
void DecompAsn::DisplayInFile ( const PTREE &val )
{
    PTREE   name, type, content ;
    
    if ( val == <VAL_ASSIGN,name,type,content> ) {
        char    *nameOutput ;        // name of output file
        int     oldOutput = output ; // save current output
        
        // compute name of output file
        nameOutput =  (char *)malloc(strlen(value(name)) + 3);
        strcpy(nameOutput, value(name));
        strcat(nameOutput, ".s");
        
        // then decomp PDU
        Flush();
        oldOutput =  output ;
        
        // open output file
        output    =  _open(nameOutput, O_RDWR | O_TRUNC | O_CREAT, S_IREAD | S_IWRITE);
        
        // decomp
        @val
        
        // free content
        free(content);
        
        // close output file
        Flush();
        _close(output);
        output =  oldOutput ;
    }
}


