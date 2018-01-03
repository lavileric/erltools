// 
// Coding is used to construct the result of the coding
// of an asn1 structure
//
language asn;

#include "asn.h"
#include "coding.h"

#ifdef FOR_METACHOP
    extern PTREE    codingTree ;
    extern PTREE    topTree ;
#endif

bool                    CodingFreeListContainer::pvCodingListValid = false ;
CodingFreeListContainer Coding::pvCodingFreeList ;

// PutTag : put a new tag at current level
//
// parameters :
//      string : the value of the new tag
void Coding::PutTag ( const char *string )
{
    switch ( codingTree ) {
        case <CODING> : 
        case <CODING_W_LENGTH> : 
        case <BLIND_CODING> : 
            {
                codingTree += <,MakeString(string)>;
            }
            break ;
        case <CODING_SPEC> : 
        default : return ;
    }
}

// PutTag : put a new tag at current level
//
// parameters :
//      tree : the value to be put
void Coding::TakeTag ( PTREE tree )
{
    switch ( codingTree ) {
        case <CODING> : 
        case <CODING_W_LENGTH> : 
        case <BLIND_CODING> : 
            {
                codingTree += <,tree>;
            }
            break ;
        case <CODING_SPEC> : 
        default : return ;
    }
}

// PutLength : put a new length at current level
//
// parameters :
//      string : the value of the new length
void Coding::PutLength ( char *string )
{
    switch ( codingTree ) {
        case <CODING> : 
        case <BLIND_CODING> : 
            {
                codingTree += <,<>,MakeString(string)>;
            }
            break ;
        case <CODING_W_LENGTH> : 
        case <CODING_SPEC> : 
        default : return ;
    }
}

// PutContent : put a new content at current level
//              a string
// parameters :
//      string : the value of the new content
void Coding::PutContent ( const char *string )
{
    switch ( codingTree ) {
        case <CODING> : 
        case <CODING_W_LENGTH> : 
        case <BLIND_CODING> : 
            {
                codingTree += <,<>,<>,MakeString(string)>;
            }
            break ;
        case <CODING_SPEC> : 
            {
                codingTree += <,<>,MakeString(string)>;
            }
            break ;
        default : return ;
    }
}

// TakeContent : put a new content at current level
//              a tree
// parameters :
//      tree : the value of the new content
void Coding::TakeContent ( PTREE tree )
{
    switch ( codingTree ) {
        case <CODING> : 
        case <CODING_W_LENGTH> : 
        case <BLIND_CODING> : 
            {
                codingTree += <,<>,<>,tree>;
            }
            break ;
        case <CODING_SPEC> : 
            {
                codingTree += <,<>,tree>;
            }
            break ;
        default : return ;
    }
}

// AddLevel : add a new level 
void Coding::AddLevel ()
{
    
    // if we are on root really create a new level
    // otherwise only go to the father since the father level allready
    // exists
    if ( (codingTree ^ ) == () ) {
        topTree    =  <CODING,(),(),topTree,()>;
        codingTree =  topTree ;
    } else {
        codingTree =  codingTree ^ ;
    }
}

// SetSpec : replace top node with a special top node 
void Coding::SetSpec ()
{
    topTree    =  <CODING_SPEC,(),(),()>;
    codingTree =  topTree ;
}

// add a blind level : tagged node
void Coding::AddBlindLevel ()
{
    
    // if we are on root really create a new level
    // otherwise only go to the father since the father level allready
    // exists
    if ( (codingTree ^ ) == () ) {
        topTree    =  <BLIND_CODING,(),(),topTree,()>;
        codingTree =  topTree ;
    } else {
        codingTree =  codingTree ^ ;
    }
}

// EncodeTree : get the string associated to the tree
// parameters :
//      string : the string to which the tree string will be concatenated
//      tree : the tree whose string we get
static  void EncodeTree ( EString *string, const PTREE &tree )
{
    
    PTREE   list ;    // list of sons of CODING
    PTREE   elem ;    // an element of the list
    PTREE   tag ;     // tag part of tree
    PTREE   length ;  // length part of tree
    PTREE   content ; // content part of tree
    
    switch ( tree ) {
        case list = <LIST> : 
            while ( (elem = nextl(list)) ) {
                EncodeTree(string, elem);
            }
            break ;
        case <BLIND_CODING,tag,length,content> : 
        case <CODING,tag,length,content> : 
            {
                *string += (const char *)(Value(tag));
                *string += (const char *)(Value(length));
                EncodeTree(string, content);
            }
            break ;
        case <CODING_W_LENGTH,tag,length,content> : 
            {
                *string += (const char *)(Value(tag));
                *string += (const char *)"00";
                EncodeTree(string, content);
            }
            break ;
        case <CODING_SPEC,tag,content> : 
            {
                *string += (const char *)(Value(content));
            }
            break ;
        default : 
            *string += (const char *)(Value(tree));
            break ;
    }
}

// operator String * :  get String from tree
// return : 
//      a pointer on a string representing codingTree
Coding::operator EString *()
{
    if ( !codingString ) {
        codingString =  new EString("");
    }
    *codingString =  "";
    codingString->Resize(1000);
    EncodeTree(codingString, codingTree);
    return codingString ;
}

// AddRawString : add a raw string to a string
// parameters :
//              string : the string to be updated
//              added : the string to be added
static  void AddRawString ( EString &string, const char *added )
{
    int nb ; // the number associated to current pos
    
    // if added is null do nothing
    if ( !added ) 
        return ;
    if ( string.Size() < string.length() + strlen(added) / 2 ) {
        string.Resize(string.length() + strlen(added) / 2);
    }
    
    // add the whole string
    while ( *added ) {
        
        // compute next number
        {
            nb =  0 ;
            
            // first part of hexa
            if ( *added >= 'A' ) 
                nb =  *added - 'A' + 10 ;
            else 
                nb =  *added - '0';
            nb <<= 4 ;
            added++ ;
            if ( !added ) 
                return ;
            
            // second part
            if ( *added >= 'A' ) 
                nb += *added - 'A' + 10 ;
            else 
                nb += *added - '0';
            added++ ;
        }
        
        // add do string
        string += (char)nb ;
    }
}

// EncodeTreeRaw : get the raw string associated to the tree
// parameters :
//      string : the string to which the tree string will be concatenated
//      tree : the tree whose string we get
static  void EncodeTreeRaw ( EString *string, const PTREE &tree )
{
    
    PTREE   list ;    // list of sons of CODING
    PTREE   elem ;    // an element of the list
    PTREE   tag ;     // tag part of tree
    PTREE   length ;  // length part of tree
    PTREE   content ; // content part of tree
    
    switch ( tree ) {
        case list = <LIST> : 
            while ( (elem = nextl(list)) ) {
                EncodeTreeRaw(string, elem);
            }
            break ;
        case <BLIND_CODING,tag,length,content> : 
        case <CODING,tag,length,content> : 
            {
                AddRawString(*string, Value(tag));
                AddRawString(*string, Value(length));
                EncodeTreeRaw(string, content);
            }
            break ;
        case <CODING_W_LENGTH,tag,length,content> : 
            {
                AddRawString(*string, Value(tag));
                AddRawString(*string, "00");
                EncodeTreeRaw(string, content);
            }
            break ;
        case <CODING_SPEC,tag,content> : 
            {
                AddRawString(*string, Value(content));
            }
            break ;
        default : 
            AddRawString(*string, Value(tree));
            break ;
    }
}

// GetRawString : get raw string out of coding
// return : 
//      a pointer on a string representing codingTree
EString *Coding::GetRawString ()
{
    if ( !codingString ) 
        codingString =  new EString("");
    *codingString =  "";
    codingString->Resize(1000);
    EncodeTreeRaw(codingString, codingTree);
    return codingString ;
}

// GetVal : get value of Coding
// return : 
//       the string contained in the val
//
EString *Coding::GetVal ()
{
    if ( codingString ) 
        delete codingString ;
    codingString =  new EString("");
    switch ( codingTree ) {
        case <CODING> : 
        case <BLIND_CODING> : 
        case <CODING_W_LENGTH> : 
            {
                EncodeTree(codingString, sontree(codingTree, 3));
            }
            break ;
        case <CODING_SPEC> : 
            {
                EncodeTree(codingString, sontree(codingTree, 2));
            }
            break ;
        default : 
    }
    return codingString ;
}

// WholeLength : get the whole length of element
// return : 
//        the sum of length of all fields : tag length and val
int Coding::WholeLength ()
{
    
    PTREE   tag ;    // tag of coding
    PTREE   length ; // length of coding
    PTREE   val ;    // value of coding
    PTREE   list ;   // a list
    PTREE   elem ;   // an element of list
    
    if ( codingTree == () ) 
        return 0 ;
    switch ( codingTree ) {
        case <TERM_TREE> : return strlen(Value(codingTree)) / 2 ;
        case <BLIND_CODING,tag,length,val> : 
        case <CODING,tag,length,val> : 
            {
                
                // for borland don't touch
                int length0 ;
#               ifdef BORLAND
                    length0 =  DecompAsn().DecodeLength(Value(length));
#               else 
                    length0 =  DecompAsn::ptDecomp->DecodeLength(Value(length));
#               endif
                return length0 + (strlen(Value(length)) + strlen(Value(tag))) / 2 ;
            }
        case list = <LIST> : 
            {
                int sum = 0 ;
                while ( (elem = list.Nextl()) ) {
                    Coding  lCoding (elem) ;
                    sum += lCoding.WholeLength();
                }
                return sum ;
            }
        case <CODING_W_LENGTH> : 
        case <CODING_SPEC> : return 0 ;
    }
    return 0 ;
}

// Length : get length of element
// return : 
//           return the value to be put in length field
int Coding::Length ()
{
    
    PTREE   length ;  // length son
    PTREE   content ; // content son
    
    // if length is not computed do it now otherwise read it
    switch ( codingTree ) {
        case <BLIND_CODING,<>,(),content> : 
        case <CODING,<>,(),content> : 
            {
                Coding  lCoding (content) ;
                return lCoding.WholeLength();
            }
        case <BLIND_CODING,<>,length> : 
        case <CODING,<>,length> : 
            {
                
                // for borland don't touch
                int length0 ;
#               ifdef BORLAND
                    length0 =  DecompAsn().DecodeLength(Value(length));
#               else 
                    length0 =  DecompAsn::ptDecomp->DecodeLength(Value(length));
#               endif
                return length0 ;
            }
        case <CODING_W_LENGTH> : 
        case <CODING_SPEC> : return 0 ;
    }
    return 0 ;
}

// Next : go to next coding element
// return :
//      a coding tree the next element
PPTREE Coding::Next ()
{
    
    PTREE   followTree ; // last position of codingTree when going up
    PTREE   content ;    // content of node
    
    // search content
    switch ( codingTree ) {
        case <CODING,<>,<>,content> : 
        case <BLIND_CODING,<>,<>,content> : 
        case <CODING_W_LENGTH,<>,<>,content> : 
        case <CODING_SPEC,<>,content> : 
    }
    switch ( content ) {
        case <CODING> : 
        case <BLIND_CODING> : 
        case <CODING_W_LENGTH> : 
        case <CODING_SPEC> : 
            codingTree = content ;
            break ;
        case <LIST> : 
            codingTree = nextl(content);
            break ;
        default : 
        up : 
            while ( codingTree != () && codingTree != <LIST> ) {
                followTree =  codingTree ;
                codingTree =  codingTree ^ ;
            }
            if ( codingTree == <LIST> ) {
                
                // try next element of list
                nextl(codingTree);
                codingTree =  nextl(codingTree);
                
                // if it was element of list 
                // try to find another tree above
                if ( codingTree == () ) {
                    codingTree =  followTree ^ ;
                    while ( codingTree == <LIST> ) 
                        codingTree =  codingTree ^ ;
                    goto up ;
                }
            }
    }
    return (PPTREE)codingTree ;
}

// IsSimpleValue : tell if current pointer codes a simple value
// return :
//	    0 if not simple value 1 otherwise
int Coding::IsSimpleValue ()
{
    PTREE   pt = codingTree ;
    PTREE   content ; // content of refCode
    
    while ( pt == <BLIND_CODING,<>,<>,pt> ) 
        ;
    if ( pt == <CODING,<>,<>,content> ) {}
    if ( !(content == <CODING> || content == <LIST>) ) 
        return 1 ;
    else 
        return 0 ;
}


