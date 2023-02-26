#ifndef H_EJson
#define H_EJson 
#include "token.h"
#include "json.h"
#include <set>

class EJson {
    
    public :
    
        EJson ()
        {
            pv_pTree = PTREE(0);
        }
        
        EJson ( PTREE sptree )
            : pv_pTree(sptree)
        {}
        
        EJson ( const EJson &json )
        {
            pv_pTree = json.pv_pTree ;
        }
        
        EJson &operator= ( EJson json )
        {
            pv_pTree = json.pv_pTree ;
            return *this ;
        }
        
        EJson ( const EString &data )
        {
            Load(data);
        }
        
        EJson   operator[] (const EString &name) ;
        EJson   operator[] (unsigned int pos) ;
        PTREE   operator() () ;
        void    Load (const EString &data) ;
        
        PTREE Tree ()
        {
            return pv_pTree ;
        }
        
        EJson &Tree ( PTREE &sptree )
        {
            pv_pTree = sptree ;
            return *this ;
        }
        
        static  EString NamedField ( EString name, EString content )
        {
            EString field ;
            
            field << "\"" << name << "\":";
            field << "\"" << content << "\"";
            return field ;
        }
        
        static  EString NamedField ( EString name, const char *content )
        {
            return NamedField(name, EString(content));
        }
        
        static  EString NamedField ( EString name )
        {
            EString field ;
            
            field << "\"" << name << "\":";
            return field ;
        }
        
        static  EString NamedField ( EString name, int val )
        {
            EString field ;
            
            field << "\"" << name << "\":" << EString(val);
            return field ;
        }
        
        static  EString NamedField ( EString name, unsigned int val )
        {
            EString field ;
            
            field << "\"" << name << "\":" << EString((int)val);
            return field ;
        }
        
        static  EString NamedField ( EString name, float val )
        {
            EString field ;
            
            field << "\"" << name << "\":" << EString(val);
            return field ;
        }
        
        static  EString NamedField ( EString name, bool val )
        {
            EString field ;
            
            field << "\"" << name << "\":";
            if ( val ) 
                field << "1";
            else 
                field << "0";
            return field ;
        }
        
        std::set<EString>   Fields () ;
        long long           ToLongLong () ;
        long                ToLong () ;
        long                ToInt () ;
        EString             ToString () ;
        float               ToFloat () ;
        bool                ToBool () ;
        bool                Valid () ;
    
    private :
    
        PTREE   pv_pTree ;
};
#endif
