#ifndef ASN_SYMBOL_FILE
#define ASN_SYMBOL_FILE 1
#ifdef MOST_RECENT_STL
#include <map>
#else 
#include <map.h>
#endif
#include "ptree.h"
extern int  prettyPrint ;

class TabSymbol {
    
    public :
    
        TabSymbol ()
        {
            content = new TabSymbolContent ;
        }
        
        ~TabSymbol () {}
        
        typedef map<EString, int, LessString>   TabSymbolContent ;
        typedef TabSymbolContent::value_type    PairType ;
        
        TabSymbolContent    *content ;
};

class AsnSymbol : public TreeClass {
    
    public :
    
        // constructor
        // parameters :
        //              symbol : the symbol
        AsnSymbol ( const char *symbol )
        {
            EString                                 string (symbol) ;
            TabSymbol::TabSymbolContent::iterator   iter ;
            
            iter = pvTabSymbol.content -> find(string);
            if ( iter == pvTabSymbol.content -> end() ) {
                (*pvTabSymbol.content)[string] = 0 ;
                iter = pvTabSymbol.content -> find(string);
            }
            (*iter).second += 1 ;
            pvSymbol = &((TabSymbol::PairType &)(*iter));
        }
        
        // constructor
        // parameters :
        //              symbol : the symbol
        //              length : length of symbol
        AsnSymbol ( const char *symbol, unsigned int length )
        {
            EString                                 string (symbol, length) ;
            TabSymbol::TabSymbolContent::iterator   iter ;
            
            iter = pvTabSymbol.content -> find(string);
            if ( iter == pvTabSymbol.content -> end() ) {
                (*pvTabSymbol.content)[string] = 0 ;
                iter = pvTabSymbol.content -> find(string);
            }
            (*iter).second += 1 ;
            pvSymbol = &((TabSymbol::PairType &)(*iter));
        }
        
        // constructor
        // parameters :
        //              symbol : the symbol
        AsnSymbol ( AsnSymbol &symbol )
            : TreeClass()
        {
            TabSymbol::PairType & pair = *symbol.pvSymbol ;
            pair.second += 1 ;
            pvSymbol = &pair ;
        }
        
        // destructor
        virtual ~AsnSymbol ()
        {
            TabSymbol::PairType & pair = *pvSymbol ;
            pair.second -= 1 ;
            if ( pair.second <= 0 ) {
                TabSymbol::TabSymbolContent::iterator   iter ;
                iter = pvTabSymbol.content -> find(pair.first);
                pvTabSymbol.content -> erase(iter);
            }
        }
        
        // operator copy 
        virtual TreeClass *Copy ()
        {
            return (TreeClass *)new AsnSymbol(*this);
        }
        
        // Size 
        virtual unsigned int Size ()
        {
            return 0 ;
        }
        
        // Type 
        virtual int Type () ;
        
        // value
        virtual const char *Value ()
        {
            TabSymbol::PairType & pair = *pvSymbol ;
            return (const char *)(pair.first);
        }
        
        // DumpTree : for tree generation
        virtual const char *DumpTree ()
        {
            pvString = EString("ALLOCATE_CLASS(AsnSymbol(\"") + Value() + "\"))";
            return pvString.c_str();
        }
        
        // NumberSymbol : return the number of symbol
        static  unsigned int NumberSymbol ()
        {
            return pvTabSymbol.content -> size();
        }
    
    private :
    
        TabSymbol::PairType *pvSymbol ;   // pointer on symbol
        static TabSymbol    pvTabSymbol ; // the symbol table
};
#endif
