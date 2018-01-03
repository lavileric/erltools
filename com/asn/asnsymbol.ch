language asn;

#include "asn.h"
#include "asnsymbol.h"

TabSymbol   AsnSymbol::pvTabSymbol ; // the symbol table

// Type 
int AsnSymbol::Type ()
{
    return asn::ASN_SYMBOL ;
}

int     prettyPrint = 0 ; // do only a prettyprint
PTREE   listInclude ;


