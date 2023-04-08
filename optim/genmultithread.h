#ifndef GEN_MULTI_MULTITHREAD
#   define GEN_MULTI_MULTITHREAD 
#   include "erlstring.h"
#   include "optimgenetic.h"
    const unsigned int                      NB_TO_GET = 100 ; // in multithread the chunk of jobs to take
    static unsigned int                     numberToEvaluate = 0 ;
    static long                             nbInput = 0 ;
    static long                             result ;
    static Semaphop                         *oldSemaphop = 0 ;
    static std::list<DelayedEvaluator *>    waitingIndividuals ;
    static Semaphop                         *pWaitingSemaphop ;
    
    void AddWaitingIndividuals ( DelayedEvaluator *pIndividual )
    {
        Semaphop    *pIndividualSemaphop ;
        
        if ( pWaitingSemaphop ) {
            (*pWaitingSemaphop).PutRessourceBegin(1);
            if ( !pIndividual ) {
                EString message = "Null Stacked \n";
                write(2, message.c_str(), message.length());
                (*pWaitingSemaphop).GetRessourceEnd(1);
            } else {
                pIndividual -> MarkedForEval(true);
                waitingIndividuals.push_back(pIndividual);
                pIndividualSemaphop =  pIndividual -> GetSemaphop();
                if ( pIndividualSemaphop != 0 ) 
                    oldSemaphop =  pIndividualSemaphop ;
                (*pWaitingSemaphop).PutRessourceEnd();
            }
        }
    }
    
    unsigned int GetWaitingIndividuals ()
    {
        unsigned int    waitingIndividuals ;
        
        if ( pWaitingSemaphop ) {
            (*pWaitingSemaphop).ProtectSection();
            waitingIndividuals =  numberToEvaluate + (*pWaitingSemaphop).RawGetStockInfo();
            (*pWaitingSemaphop).UnProtectSection();
            return waitingIndividuals ;
        }
        return 0 ;
    }
    
#   if 0
        void dummy1 ()
        {
            Individuals *pIndividual = 0 ;
            
            AddWaitingIndividuals<Individuals::TypeCost> (pIndividual);
        }
#   endif
    
    static class Init {
        
        public :
        
            Init ()
            {
                RandomInit(0);
                numberToEvaluate =  0 ;
                pWaitingSemaphop =  new Semaphop ;
                oldSemaphop      =  0 ;
            }
    }            init ;
    static long nbTreatment = 0 ;
    
    /////////////////////////
    // for threaded eval
    /////////////////////////
    void *TreatWaitingIndividual ( void *pParam )
    {
        DelayedEvaluator                    *pIndividual ;
        std::vector<DelayedEvaluator *>     privateWaitingIndividuals ;
        unsigned int                        toGet ;
        static Semaphop                     *pIndividualSemaphop = 0 ;
        
        while ( true && pWaitingSemaphop ) {
            
            // get new board
            (*pWaitingSemaphop).GetRessourceBegin(1);
            
            // sleep(1);
            if ( waitingIndividuals.size() >= 1 ) {
                
                // try to get a large number of individuals
                toGet =  waitingIndividuals.size();
                if ( toGet > NB_TO_GET ) 
                    toGet =  NB_TO_GET ;
                while ( toGet-- ) {
                    pIndividual =  waitingIndividuals.front();
                    if ( pIndividual ) 
                        privateWaitingIndividuals.push_back(pIndividual);
                    waitingIndividuals.pop_front();
                }
                
                // indicates that we took some ressource
            } else {
                
                //            EString message = "Nothing to destack \n";
                //   write(2, message.c_str(), message.length());
                pIndividual =  0 ;
            }
            
            // free adjusting numbers
            unsigned int    currentBatch ;
            if ( privateWaitingIndividuals.empty() ) {
                currentBatch =  0 ;
                (*pWaitingSemaphop).GetRessourceEnd();
            } else {
                currentBatch     =  privateWaitingIndividuals.size();
                numberToEvaluate += currentBatch ;
                (*pWaitingSemaphop).GetRessourceEnd(currentBatch - 1);
            }
            
            // treat it
            for ( auto iter = privateWaitingIndividuals.begin() ; iter != privateWaitingIndividuals.end() ; iter++ ) {
                nbTreatment++ ;
                pIndividual =  *iter ;
                pIndividual -> DelayedEval(false);
                pIndividual -> MarkedForEval(false);
            }
            {
                (*pWaitingSemaphop).ProtectSection();
                numberToEvaluate -= currentBatch ;
                if ( oldSemaphop ) 
                    oldSemaphop -> PutRessource(currentBatch);
                (*pWaitingSemaphop).UnProtectSection();
            }
            privateWaitingIndividuals.clear();
        }
        return 0 ;
    }
#endif
