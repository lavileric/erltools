class ParserMetalang : virtual public metalang {
    
    public :
    
        ParserMetalang () {}
        
        virtual ~ParserMetalang () {}
        
        virtual PPTREE ReadInclude ( const char *name, int local, bool tree )
        {
            return TakeUseGrammar(name);
        }
        
        virtual PPTREE  TakeUseGrammar (const char *name) ;
};
