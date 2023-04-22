#ifndef PROTECTOR_FILE
#   define PROTECTOR_FILE 
    
    template <class Protected> 
        
        class Protector {
            
            public :
            
                Protector ( Protected &val )
                    : refVal(val),  store(val)
                {}
                
                Protector ( Protected &val, Protected assignment )
                    : refVal(val),  store(val)
                {
                    val =  assignment ;
                }

                 Protector ( Protected &val, Protected assignment , Protected restore)
                    : refVal(val),  store(restore)
                {
                    val =  assignment ;
                }
                
                ~Protector ()
                {
                    refVal =  store ;
                }
                
                Protected Stored () const
                {
                    return store ;
                }
            
            private :
            
                Protected   &refVal ;
                Protected   store ;
        };
#endif
