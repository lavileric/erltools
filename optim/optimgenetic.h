#ifndef OPTIM_GENETIC_HEADER_
#   define OPTIM_GENETIC_HEADER_ 
#   define MAX_GENERATED 128
#   define MAX_GENERATED_FLOAT 64000
#   define SEARCH_DIVIDER 2
    
    // system include
#   include <vector>
#   include <list>
#   include <algorithm>
#   include <fcntl.h>
    
    // private include
#   include "optimalgo.h"
#   include "smtoken.h"
#   include "semaphop.h"
#   define RECORD_FILE_NAME "bestpopulation.rec"
    
    //*****************************************************************************
    // Class Declaration
    //*****************************************************************************
    template <class IndividualType> 
        
        class OptimGenetic : public OptimAlgo<IndividualType> {
            
            public :
            
                // Constructor
                OptimGenetic ( Nursery<IndividualType> &nursery, unsigned int populationSize, unsigned int nbMutations, unsigned int nbMaxGenerations
                    , unsigned int nbMaxSteadyGenerations, unsigned int maxSimulatedVectors, unsigned int maxSteadyVectors, unsigned int bestSlice
                    , unsigned int maxSecNoProgress = 0 )
                    : pvPopulationSize(populationSize),  pvNbMutations(nbMutations * populationSize / 100),  pvNbMaxGenerations(nbMaxGenerations)
                        ,  pvNbMaxSteadyGenerations(nbMaxSteadyGenerations),  pvGenerationNumber(0),  pvSteadyGenerationNumber(0),  pvCloneFound(false)
                        ,  pvBestSlice(bestSlice),  OptimAlgo<IndividualType> (nursery),  pvVibrato(true),  pvWritten(0),  pvInteractive(false),  pvLastReset(0)
                        ,  pvRec(false),  pvSuppressClone(false),  pvMaxSecNoProgress(maxSecNoProgress)
                {
                    for ( unsigned int index = 0 ; index < pvPopulationSize ; index++ ) {
                        
                        // put a real individual otherwise sizes are bad
                        IndividualType  doe ;
                        doe.Affect(this->GetNursery().Create());
                        pvCurrentPopulation.push_back(doe);
                    }
                    
                    //                    FillRandomContents(pvCurrentPopulation);
                    this->pvBestCost =  this->BestIndividual(pvCurrentPopulation).Cost();
                    this->MaxSteadyVectors(maxSteadyVectors);
                    this->MaxSimulatedVectors(maxSimulatedVectors);
                }
                
                virtual EString Parameters ()
                {
                    EString result ;
                    
                    result << " Population Size : \t\t\t\t\t\t\t" << (int)pvPopulationSize << "\n";
                    result << " Number of mutations : \t\t\t\t\t\t\t" << (int)pvNbMutations << "\n";
                    result << " Max Generations : \t\t\t\t\t\t\t" << (int)pvNbMaxGenerations << "\n";
                    result << " Max Steady Generations : \t\t\t\t\t\t" << (int)pvNbMaxSteadyGenerations << "\n";
                    result << " Slice of Best Kept : \t\t\t\t\t\t\t" << (int)pvBestSlice << "\n";
                    result << OptimAlgo<IndividualType> ::Parameters();
                    return result ;
                }
                
                // Desctructor
                virtual ~OptimGenetic () {}
                
                // Get & Set
                virtual EAlgoType AlgoType () const
                {
                    return GENETIC_ALGORITHM_ALGO ;
                }
                
                // Methods
                void            InitPopulation (EString fileName = "", bool init = true) ;
                virtual bool    Init (EString fileName = "", bool init = true) ;
                virtual bool    Loop (bool verbose = true) ;
                
                virtual bool Run ( EString fileName = "", bool verbose = true )
                {
                    return Init(fileName) && Loop(verbose);
                }
                
                bool    Step (std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation, std::vector<IndividualType> &newPopulation
                    , std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray, bool verbose = true) ;
                void    Print () ;
                
                virtual void Resize ( unsigned int newSize )
                {
                    unsigned int    currentSize = pvCurrentPopulation.size();
                    
                    // fill next with random and current individuals and put everything back in current
                    if ( currentSize < newSize ) {
                        pvNextPopulation.clear();
                        unsigned int    index ;
                        for ( index = currentSize ; index < newSize ; index++ ) {
                            pvNextPopulation.push_back(this->GetNursery().Create());
                        }
                        FillRandomContents(pvNextPopulation, newSize - currentSize, 0);
                        for ( index = 0 ; index < currentSize ; index++ ) {
                            pvNextPopulation.push_back(pvCurrentPopulation [index].Self());
                        }
                        
                        // pvCurrentPopulation = pvNextPopulation ;
                        pvCurrentPopulation.clear();
                        for ( index = 0 ; index < newSize ; index++ ) {
                            pvCurrentPopulation.push_back(pvNextPopulation [index].Self());
                        }
                        pvPopulationSize =  newSize ;
                    } else if ( currentSize > newSize ) {
                        pvCurrentPopulation.resize(newSize);
                    }
                    
                    // dummy init for new population
                    pvPopulationSize =  newSize ;
                }
                
                bool SuppressClone () const
                {
                    return pvSuppressClone ;
                }
                
                OptimGenetic &SuppressClone ( bool suppress )
                {
                    pvSuppressClone =  suppress ;
                    return *this ;
                }
                
                virtual IndividualType &BestIndividual ()
                {
                    return BestIndividual(pvCurrentPopulation);
                }
                
                virtual IndividualType *operator[] ( unsigned index )
                {
                    if ( index > pvPopulationSize ) 
                        return (IndividualType *)0 ;
                    else 
                        return &pvCurrentPopulation [index];
                }
                
                bool Vibrato ()
                {
                    return pvVibrato ;
                }
                
                OptimGenetic &Vibrato ( bool vibrato )
                {
                    pvVibrato =  vibrato ;
                    return *this ;
                }
                
                virtual bool VibrateWithSteady ( unsigned nbSteady )
                {
                    return nbSteady > 0 ;
                }
                
                OptimGenetic &Interactive ( bool interactive )
                {
                    pvInteractive =  interactive ;
                    return *this ;
                }
                
                unsigned int PopulationSize () const
                {
                    return pvPopulationSize ;
                }
                
                unsigned int NewPopulationSize () const
                {
                    return pvPopulationSize + pvNbMutations + pvPopulationSize * pvBestSlice / 100 ;
                }
                
                void Upload ( unsigned int index, std::vector<typename IndividualType::TypeParam> &params )
                {
                    if ( index < PopulationSize() ) {
                        unsigned int    pos = 0 ;
                        for ( auto iter = params.begin() ; iter != params.end() ; iter++ ) {
                            pvCurrentPopulation [index].Feature(pos++, *iter);
                        }
                        
                        //                        pvCurrentPopulation [index].Evaluated(false);
                    }
                }
                
                unsigned int NbLoops ()
                {
                    return pvNbLoops ;
                }
                
                bool Rec () const
                {
                    return pvRec ;
                }
                
                OptimGenetic &Rec ( bool rec )
                {
                    pvRec =  rec ;
                    return *this ;
                }
                
                typename IndividualType::TypeCost   ComputeCost (IndividualType &) ;
                
                void EmptyWorkStack ()
                {
                    unsigned int    stock ;
                    unsigned int    nbWaitingIndividuals ;
                    
                    {
                        if ( (stock = pvSemaphop.GetStockInfo()) ) 
                            pvSemaphop.GetRessource(stock);
                        while ( (nbWaitingIndividuals = GetWaitingIndividuals()) ) 
                            pvSemaphop.GetRessource(nbWaitingIndividuals);
                        if ( (stock = pvSemaphop.GetStockInfo()) ) 
                            pvSemaphop.GetRessource(stock);
                    }
                }
                
                void SetRandomPopulation ()
                {
                    FillRandomContents(pvCurrentPopulation, pvCurrentPopulation.size());
                }
                
                void Recreate ()
                {
                    Recreate(pvCurrentPopulation, pvCurrentPopulation.size());
                }
                
                bool Contains ( IndividualType &individual )
                {
                    for ( auto iter = pvCurrentPopulation.begin() ; iter != pvCurrentPopulation.end() ; iter++ ) {
                        if ( *iter == individual ) 
                            return true ;
                    }
                    return false ;
                }
            
            private :
            
                // Attributes
                bool                                pvSuppressClone ;
                timeval                             pvLoopStartTime ;
                
                // Configuration parameters
                unsigned int                        pvNbMutations ;
                unsigned int                        pvPopulationSize ;
                unsigned int                        pvNbMaxGenerations ;
                unsigned int                        pvNbMaxSteadyGenerations ;
                unsigned int                        pvBestSlice ;
                unsigned int                        pvMaxSecNoProgress ;
                bool                                pvVibrato ;
                
                // Algorithm Information parameters
                unsigned int                        pvGenerationNumber ;
                unsigned int                        pvSteadyGenerationNumber ;
                unsigned int                        pvIndividualBirthRank ;
                bool                                pvCloneFound ;
                
                // Methods
                bool                                FillRandomContents (std::vector<IndividualType> &, unsigned int, unsigned int = 0) ;
                bool                                Recreate (std::vector<IndividualType> &, unsigned int, unsigned int = 0) ;
                void                                ComputeCost (std::vector<IndividualType> &, bool checkSteady = false) ;
                bool                                Hybridation (std::vector<IndividualType> &, std::vector<IndividualType> &, std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray) ;
                void                                Mutation (std::vector<IndividualType> &, std::vector<IndividualType> &, std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray) ;
                void                                MutateElem (int lFather, std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation, unsigned int index) ;
                bool                                Vibrato (std::vector<IndividualType> &, std::vector<IndividualType> &
                    , std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray, bool max = false, bool best = false) ;
                void                                SurvivalSelection (std::vector<IndividualType> &, std::vector<IndividualType> &, std::vector<IndividualType> &
                    , std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray) ;
                bool                                IsIndividualAClone (std::vector<IndividualType> &, std::vector<IndividualType> &, unsigned int rank) ;
                bool                                IsIndividualACloneFull (std::vector<IndividualType> &, std::vector<IndividualType> &, unsigned int rank) ;
                bool                                IsIndividualACloneFull (std::vector<IndividualType> &, std::vector<IndividualType> &, IndividualType &) ;
                bool                                IsIndividualAClone (std::vector<IndividualType> &, unsigned int rank) ;
                IndividualType                      &BestIndividual (std::vector<IndividualType> &) ;
                
                // Forbidden methods
                                                    OptimGenetic () ;
                                                    OptimGenetic (const OptimGenetic &) ;
                OptimGenetic                        &operator= (const OptimGenetic &) ;
                std::vector<IndividualType>         pvCurrentPopulation ;
                std::vector<IndividualType>         pvNextPopulation ;
                std::vector<IndividualType>         pvNewPopulation ;
                IndividualType                      keepType ;
                int                                 pvWritten ;
                bool                                pvInteractive ;
                unsigned int                        pvLastReset ;
                typename IndividualType::TypeCost   pvMeanLess ;
                int                                 pvMeanLessSteady ;
                Semaphop                            pvSemaphop ;
                unsigned                            pvNbLoops ;
                bool                                pvRec ;
        };
    template <class IndividualType> 
        void OptimGenetic<IndividualType> ::InitPopulation ( EString fileName, bool init )
        {
            unsigned int    currentSize = pvPopulationSize ;
            unsigned int    startInit = 0 ;
            int             keepGenerationNumber = pvNbMaxSteadyGenerations ;
            
            // if fileName read init population in a file
            if ( fileName != "" ) {
                unsigned int    index ;
                EString         line ;
                int             file = _open(fileName, O_RDONLY);
                if ( file > 0 ) {
                    ReadOneFileLine(file, line);
                    startInit =  atoi(line.c_str());
                    
                    // if number too small try smaller number
                    unsigned int    bestSlice = pvPopulationSize * pvBestSlice / 100 ;
                    if ( bestSlice > 50 ) {
                        if ( startInit < bestSlice ) 
                            startInit =  0 ;
                    }
                    if ( startInit ) {
                        pvCurrentPopulation.clear();
                        for ( index = 0 ; index < startInit ; index++ ) {
                            pvCurrentPopulation.push_back(this->GetNursery().Create());
                        }
                        for ( index = 0 ; index < startInit ; index++ ) {
                            pvCurrentPopulation [index].Read(file);
                        }
                    }
                    _close(file);
                }
            }
            
            // for presearch diminish number of stable generation
            if ( pvNbMaxSteadyGenerations > pvPopulationSize ) 
                pvNbMaxSteadyGenerations =  pvPopulationSize ;
            
            // not already initialized do it
            if ( !startInit && init ) {
                if ( pvPopulationSize > 50 ) {
                    unsigned int    bestSlice = pvPopulationSize * pvBestSlice / 100 ;
                    if ( bestSlice > 50 ) {
                        startInit =  pvPopulationSize = bestSlice ;
                        Resize(pvPopulationSize);
                        Loop(false);
                    } else if ( pvPopulationSize > 100 ) {
                        startInit =  pvPopulationSize = 50 ;
                        Resize(pvPopulationSize);
                        Loop(false);
                    }
                }
            }
            pvSteadyGenerationNumber =  1 ;
            pvNbMaxGenerations       += pvGenerationNumber ;
            pvWritten                =  0 ;
            pvNbMaxSteadyGenerations =  keepGenerationNumber ;
            if ( !startInit ) 
                startInit =  pvCurrentPopulation.size();
            
            // fill next with random and current individuals and put everything back in current
            if ( startInit < currentSize ) {
                Resize(currentSize);
            }
        }
        
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::Init ( EString fileName, bool init )
        {
            
            // std::cout << "Starting Genetic Algorithm Optimization\n";
            // std::cout.flush();
            std::vector<SortUnit<typename IndividualType::TypeCost> >   sortArray ;
            
            // go on is used to go on simulation
            // empty fileName if not parameter
            if ( fileName == "" ) {
                char    *fileName = (char *)RECORD_FILE_NAME ;
                _close(_open(fileName, O_CREAT | O_RDWR | O_TRUNC, 0666));
            }
            pvWritten =  0 ;
            InitPopulation(fileName, init);
            return true ;
        }
        
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::Loop ( bool verbose )
        {
            if ( verbose ) {
                std::cout << "\nStarting Genetic Algorithm Optimization : " << pvPopulationSize << "\n\n";
                std::cout.flush();
            }
            
            // initialize secondary populations
            pvNextPopulation.clear();
            pvNewPopulation.clear();
            for ( auto iter = pvCurrentPopulation.begin() ; iter != pvCurrentPopulation.end() ; iter++ ) {
                pvNextPopulation.push_back((*iter).Self());
                pvNewPopulation.push_back((*iter).Self());
            }
            
            // init control variables
            {
                pvSteadyGenerationNumber =  0 ;
                pvGenerationNumber       =  0 ;
                
                //                pvLastReset = 0 ;
                this->SimulatedVectors(0);
                this->SteadyVectors(0);
                pvMeanLessSteady =  -1 ;
                
                // to have best individual computation will be done
                // ComputeCost(pvCurrentPopulation);
                this->pvBestCost =  BestIndividual(pvCurrentPopulation).Cost();
            }
            
            // do steps
            std::vector<SortUnit<typename IndividualType::TypeCost> >   sortArray ;
            
            pvNbLoops =  0 ;
            
            typename IndividualType::TypeCost   currentCost = this->pvBestCost ;
            
            if ( pvMaxSecNoProgress > 0 ) 
                EGetUTime(pvLoopStartTime);
            while ( (pvSteadyGenerationNumber < pvNbMaxSteadyGenerations || pvSteadyGenerationNumber < pvGenerationNumber / 10)
                        && pvGenerationNumber < pvNbMaxGenerations
                        && !pvCloneFound
                        && this->CheckOn() ) {
                Step(pvCurrentPopulation, pvNextPopulation, pvNewPopulation, sortArray, verbose);
                Step(pvNewPopulation, pvNextPopulation, pvCurrentPopulation, sortArray, verbose);
                
                // check that we did not spend to much time without advance
                if ( pvMaxSecNoProgress > 0 ) {

                   this->pvBestCost =  BestIndividual(pvCurrentPopulation).Cost();
                    
                    typename IndividualType::TypeCost   newCost = this->pvBestCost ;
                    timeval                             currentTime ;
                    EGetUTime(currentTime);
                    if ( newCost <= currentCost ) {
                        if ( EGetDiffTime_ms(pvLoopStartTime, currentTime) > pvMaxSecNoProgress * 1000 ) 
                            break ;
                    } else {
                        currentCost     =  newCost ;
                        pvLoopStartTime =  currentTime ;
                    }
                }
                
                // check steady vectors
                // ComputeCost(pvCurrentPopulation, true);
                pvNbLoops++ ;
            }
            return true ;
        }
        
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::Step ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , std::vector<IndividualType> &newPopulation, std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray, bool verbose )
        {
            unsigned int    i ;
            unsigned int    refPop = refPopulation.size();
            unsigned int    nbBest = pvBestSlice * refPop / 100 ;
            
            if ( nbBest < 1 ) 
                nbBest =  1 ;
            
            // all the 10% of max stability reset the lower population to boost diversity
            if ( pvMeanLessSteady > 0 && !((unsigned int)pvMeanLessSteady * 20 <= pvNbMaxSteadyGenerations) && pvMeanLessSteady - pvLastReset > 10 ) {
                if ( refPop - nbBest > 0 ) {
                    FillRandomContents(refPopulation, refPop - nbBest);
                    
                    // ComputeCost(refPopulation);
                }
                pvLastReset      =  pvMeanLessSteady ;
                pvMeanLessSteady =  -1 ;
            }
            
            // sort population
            //
            ComputeCost(refPopulation);
            {
                while ( sortArray.size() < refPop ) 
                    sortArray.push_back(SortUnit<typename IndividualType::TypeCost> ());
                for ( i = 0 ; i < refPop ; i++ ) {
                    sortArray [i].Affect(true, i, refPopulation [i].Cost());
                }
                auto sortEnd = sortArray.begin();
                std::advance(sortEnd, refPop);
                std::sort(sortArray.begin(), sortEnd);
            }
            
            // compute mean of less
            if ( refPop - nbBest > 0 ) {
                typename IndividualType::TypeCost   mean = 0 ;
                for ( i = 0 ; i < refPop - nbBest ; i++ ) {
                    mean += sortArray [i].cost ;
                }
                
                // if cost do not increase we say pvMeanLessSteady ++
                // <0 at initialisation
                if ( pvMeanLessSteady < 0 ) 
                    pvMeanLess =  mean ;
                if ( pvMeanLess < mean ) {
                    pvMeanLess       =  mean ;
                    pvMeanLessSteady =  0 ;
                } else 
                    pvMeanLessSteady++ ;
            }
            
            // do the job next population must be initialised with a refPopulation size
            // ComputeCost(nextPopulation); // protection
            EmptyWorkStack();
            nextPopulation.resize(refPopulation.size());
            Hybridation(refPopulation, nextPopulation, sortArray);
            if ( VibrateWithSteady(pvSteadyGenerationNumber) && Vibrato() ) {
                bool    first = true ;
                int     nbCreated = MTRandomValue<int> (0, pvBestSlice * pvPopulationSize / 100);
                if ( nbCreated < 1 ) 
                    nbCreated =  1 ;
                
                // if there are already some final elements do not do vibrato
                {
                    unsigned int    popSize = refPopulation.size();
                    for ( unsigned int index = 0 ; index < popSize ; index++ ) {
                        if ( refPopulation [index].Final() ) {
                            nbCreated =  0 ;
                        }
                    }
                }
                
                // do vibrato if we find some final element stop
                if ( Vibrato() ) {
                    if ( nbCreated-- ) {
                        if ( Vibrato(refPopulation, nextPopulation, sortArray, true /* max */ , true /* best individual */ ) ) 
                            nbCreated =  0 ;
                        while ( nbCreated-- ) {
                            
                            // check that we are not out of time
                            if ( pvMaxSecNoProgress > 0 ) {
                                timeval currentTime ;
                                EGetUTime(currentTime);
                                if ( EGetDiffTime_ms(pvLoopStartTime, currentTime) > pvMaxSecNoProgress * 1000 ) 
                                    break ;
                            }
                            
                            // vibrato with extreme value
                            if ( Vibrato(refPopulation, nextPopulation, sortArray, true /* max */ ) ) 
                                break ;
                        }
                    }
                }
            }
            
            // -- 
            Mutation(refPopulation, nextPopulation, sortArray);
            ComputeCost(nextPopulation);
            
            // filter on best elem
            unsigned int    nextPop = nextPopulation.size();
            
            // ELV 24/12/2016
            if ( true ) {
                unsigned int    offset = pvBestSlice * refPop / 100 ;
                unsigned int    nbBest ;
                if ( offset > refPop ) 
                    offset =  refPop ;
                nbBest =  offset ;
                
                // keep best value of best elem and best elem mutated
                for (; offset ; offset-- ) {
                    int indexRef = refPop - offset ;
                    int indexNext = nextPop - offset ;
                    if ( refPopulation [indexRef].Cost() < nextPopulation [indexNext].Cost() ) 
                        refPopulation [indexRef].Affect(nextPopulation [indexNext]);
                }
                
                // ELV 24/12/16
                // ComputeCost(refPopulation); // protection
                // ComputeCost(nextPopulation); // protection
                // EmptyWorkStack();
                // forget the best elem mutated
                nextPop -= nbBest ;
                nextPopulation.resize(nextPop);
            }
            
            // update sort array
            {
                while ( sortArray.size() < refPop + nextPop ) 
                    sortArray.push_back(SortUnit<typename IndividualType::TypeCost> ());
                for ( i = 0 ; i < refPop ; i++ ) {
                    sortArray [i].Affect(true, i, refPopulation [i].Cost());
                }
                for ( i = 0 ; i < nextPop ; i++ ) {
                    sortArray [i + refPop].Affect(false, i, nextPopulation [i].Cost());
                }
                auto sortEnd = sortArray.begin();
                std::advance(sortEnd, refPop + nextPop);
                std::sort(sortArray.begin(), sortEnd);
            }
            
            // sort
            SurvivalSelection(refPopulation, nextPopulation, newPopulation, sortArray);
            
            // after survival best is last
            typename IndividualType::TypeCost   lBestCost = ComputeCost(newPopulation [refPop - 1]);
            
            pvGenerationNumber++ ;
            
            EString         message ;
            unsigned int    bWritten = pvWritten ;
            
            if ( pvInteractive && verbose ) {
                while ( pvWritten-- ) 
                    message << '\b';
                message << ToString(this->pvBestCost) << "(" << (int)pvSteadyGenerationNumber << ")";
                _write(2, message.c_str(), message.length());
            }
            pvWritten =  message.length() - bWritten ;
            if ( this->pvBestCost < lBestCost ) {
                this->pvBestCost =  lBestCost ;
                if ( !pvInteractive && verbose ) {
                    EString message ;
                    message << ToString(this->pvBestCost) << "(" << (int)pvSteadyGenerationNumber << ")";
                    _write(2, message.c_str(), message.length());
                }
                pvWritten                =  0 ;
                pvSteadyGenerationNumber =  0 ;
                
                // store all elem of population in file
                if ( pvRec ) {
                    char    *fileName = (char *)RECORD_FILE_NAME ;
                    int     outFile = _open(fileName, O_CREAT | O_RDWR | O_TRUNC, 0666);
                    if ( outFile > 0 ) {
                        unsigned int    popSize = newPopulation.size();
                        unsigned int    index ;
                        EString         res ;
                        res << (int)(newPopulation.size()) << " \n";
                        _write(outFile, res.c_str(), res.length());
                        for ( index = 0 ; index < popSize ; index++ ) {
                            newPopulation [index].Display(outFile);
                        }
                        _close(outFile);
                    }
                }
            } else {
                pvSteadyGenerationNumber++ ;
            }
            if ( pvCloneFound ) {
                std::cout << "\nLack of gene diversity in next population\n";
            }
            return true ;
        }
        
    //*****************************************************************************
    // METHOD      : print
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        void OptimGenetic<IndividualType> ::Print ()
        {
# if 0
    std::cout << _optim.GENETIC_ALGORITHM << std::endl << "\tPopulationSize=" << _populationSize << "\tNbMutationsPerGeneration=" << _nbMutations << std::endl
        << "\tMaxNbGenerations=" << _nbMaxGenerations << "\tMaxNbSteadyGenerations=" << _nbMaxSteadyGenerations ;
# endif
        }
        
    //*****************************************************************************
    // METHOD      : evaluateGeneration
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        void OptimGenetic<IndividualType> ::ComputeCost ( std::vector<IndividualType> &population, bool checkSteady )
        {
            unsigned int    index ;
            unsigned int    popSize = population.size();
            
            // protection
            // empty current and future message to come
            EmptyWorkStack();
            
            // start population evaluation
            unsigned int    nbEvaluated ;
            
            // check if there is something to do
            nbEvaluated =  0 ;
            for ( index = 0 ; index < popSize ; index++ ) {
                if ( !population [index].Evaluated() ) {
                    population [index].EvaluateThread(&pvSemaphop);
                    this->SimulatedVectors(this->SimulatedVectors() + 1);
                    nbEvaluated++ ;
                }
            }
            
            // wait for completion
            if ( nbEvaluated ) 
                pvSemaphop.GetRessource(nbEvaluated);
            
            // check values
            if ( checkSteady ) {
                for ( index = 0 ; index < population.size() ; index++ ) {
                    typename IndividualType::TypeCost   cost = population [index].Cost();
                    if ( cost <= this->pvBestCost ) 
                        this->SteadyVectors(this->SteadyVectors() + 1);
                    else 
                        this->SteadyVectors(0);
                }
            }
        }
        
    //*****************************************************************************
    // METHOD      : evaluateGeneration
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        typename IndividualType::TypeCost OptimGenetic<IndividualType> ::ComputeCost ( IndividualType &individual )
        {
            if ( individual.Evaluated() ) 
                return individual.Cost();
            
            // empty pending messages
            EmptyWorkStack();
            
            // start evaluation
            individual.EvaluateThread(&pvSemaphop);
            this->SimulatedVectors(this->SimulatedVectors() + 1);
            
            // wait for completion
            pvSemaphop.GetRessource(1);
            if ( individual.Evaluated() ) 
                return individual.Cost();
            else 
                return ComputeCost(individual);
        }
        
    //*****************************************************************************
    // METHOD      : fillRandomContents
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::FillRandomContents ( std::vector<IndividualType> &population, unsigned int size, unsigned int start )
        {
            const unsigned int  NB_MAX_TRY = maxInt(100, size);
            
            for ( unsigned int ind = start ; ind < size ; ind++ ) {
                bool            isAClone = true ;
                unsigned int    lCloneTestNumber = 0 ;
                
                // ELV 3/11/2017 no doe
                IndividualType & doe =  population [ind];
                doe.Affect(this->GetNursery().Create());
                
                // population [ind].Affect(this->GetNursery().Create);
                while ( isAClone && lCloneTestNumber < NB_MAX_TRY ) {
                    population [ind].RandomFill();
                    if ( SuppressClone() && IsIndividualAClone(population, ind) ) {
                        lCloneTestNumber++ ;
                    } else {
                        isAClone =  false ;
                    }
                }
                if ( isAClone ) {
                    EString pvError = "Lack of gene diversity in inital population";
                    return false ;
                }
            }
            return true ;
        }
        
    //*****************************************************************************
    // METHOD      : Recreate
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::Recreate ( std::vector<IndividualType> &population, unsigned int size, unsigned int start )
        {
            for ( unsigned int ind = start ; ind < size ; ind++ ) {
                
                // ELV 3/11/2017 no doe
                IndividualType & doe =  population [ind];
                doe.Affect(this->GetNursery().Create());
            }
            return true ;
        }
        
    //*****************************************************************************
    // METHOD      : hybridation
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::Hybridation ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray )
        {
            unsigned int    refPop = refPopulation.size();
            
            //            std::cout << " ";
            //   std::cout.flush();
            const int       NB_MAX_TRY = maxInt(100, refPop);
            int             k = 0 ;
            int             i ;
            
            for ( unsigned int i = 0 ; i < refPop ; i++ ) {
                
                // Try to avoid making an hybrid that is a clone from existing
                // individual. After N successive attempts, accept the clone.
                bool    isAClone = true ;
                int     lCloneTestNumber = 0 ;
                while ( isAClone && lCloneTestNumber < NB_MAX_TRY ) {
                    
                    // First, select distinct parent from previous generation
                    // Parents are chosen with a probability related to the cost function
                    // Selection of father
                    // select father
                    unsigned int    index ;
                    unsigned int    sum ;
                    unsigned int    lMother = 0 ;
                    unsigned int    lFather = 0 ;
                    lFather =  sortArray [this->RankingSelect(MTRandomValue<int> (0, (refPop * (refPop + 1))))].index ;
                    
                    // select mother
                    index   =  this->RankingSelect(MTRandomValue<int> (0, (refPop * (refPop + 1))));
                    {
                        lMother =  sortArray [index].index ;
                        if ( lMother == lFather ) {
                            
                            // get the next one for mother except on the last element of population (refPop-1)
                            if ( index >= refPop - 1 ) {
                                if ( index > 0 ) 
                                    lMother =  index-- ;
                                else {
                                    lCloneTestNumber++ ;
                                    continue ;
                                }
                            } else 
                                lMother =  index++ ;
                        }
                    }
                    
                    // Then create hybrid individual with pattern randomly chosen from parents
                    // patterns with probability according to gene efficiency. Parameters are
                    // assumed on different chromosoms, so a different radom variable each
                    nextPopulation [i].MergeFrom(refPopulation [lFather], refPopulation [lMother]);
                    
                    // manage clone
                    if ( SuppressClone() && IsIndividualAClone(refPopulation, nextPopulation, i) ) 
                        lCloneTestNumber++ ;
                    else 
                        isAClone =  false ;
                }
                if ( SuppressClone() && isAClone ) {
                    pvCloneFound =  true ;
                    std::cout << "Clone found in hybridation (ind=" << i << ")\n";
                    return false ;
                }
                
                // pre compute this new individual
                nextPopulation [i].EvaluateThread(&pvSemaphop);
            }
            return true ;
        }
        
    //*****************************************************************************
    // METHOD      : mutation
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        void OptimGenetic<IndividualType> ::MutateElem ( int lFather, std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , unsigned int index )
        {
            const int       NB_MAX_TRY = maxInt(100, refPopulation.size());
            unsigned int    lIndIndex ;
            
            // put a copy of it in next set
#           if 1
                lIndIndex =  index ;
                nextPopulation [lIndIndex].Affect(refPopulation [lFather].Self());
#           else 
                
                IndividualType  newType(refPopulation [lFather].Self());
                
                newType.Affect(refPopulation [lFather]);
                nextPopulation.push_back(newType);
                lIndIndex =  nextPopulation.size() - 1 ;
#           endif
            
            // mutate this element
            unsigned int    lCloneTestNumber = 0 ;
            bool            isAClone = true ;
            
            while ( isAClone && lCloneTestNumber < (unsigned int)NB_MAX_TRY ) {
                nextPopulation [lIndIndex].Mutate();
                if ( SuppressClone() && IsIndividualACloneFull(refPopulation, nextPopulation, lIndIndex) ) {
                    lCloneTestNumber++ ;
                } else {
                    isAClone =  false ;
                }
            }
            
            // precompute thsi element
            nextPopulation [lIndIndex].EvaluateThread(&pvSemaphop);
        }
        
    //*****************************************************************************
    // METHOD      : mutation
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        void OptimGenetic<IndividualType> ::Mutation ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray )
        {
            unsigned int    refPop = refPopulation.size();
            const int       NB_MAX_TRY = maxInt(100, refPop);
            unsigned int    lIndIndex ;
            
            // empty do nothing
            if ( !nextPopulation.size() ) 
                return ;
            
            int limitBest = refPop - pvBestSlice * refPop / 100 ;
            
            if ( limitBest < 0 ) 
                limitBest =  0 ;
            
            unsigned int    lFather = 0 ;
            
            // create the mutated element in next to avoid reallocation later which could destroy
            // individual while there are evaluated
            unsigned int    initNext = nextPopulation.size();
            unsigned int    index ;
            
            EmptyWorkStack();
            for ( index = 0 ; index < (limitBest > 0 ? pvNbMutations : 0) + refPop - limitBest ; index++ ) {
                
                // put a real individual otherwise sizes are bad
                IndividualType  doe1 ;
                nextPopulation.push_back(doe1);
                IndividualType & doe =  nextPopulation.back();
                doe.Affect(refPopulation [0].Self());
            }
            
            // Do the indicated mutations on the weakers
            // ---------------------------------
            index =  0 ;
            if ( limitBest > 0 ) 
                for ( unsigned int mut = 0 ; mut < pvNbMutations ; mut++ ) {
                    
                    // Randomly choose the individual index
                    // ------------------------------------
                    lFather =  sortArray [ /* refPop - 1 - */ this->RankingSelect(MTRandomValue<int> (0, (limitBest * (limitBest + 1))))].index ;
                    
                    // Mutate this elememnt
                    MutateElem(lFather, refPopulation, nextPopulation, initNext + index++);
                }
            
            // mutate each of the best
            for ( lFather = limitBest ; lFather < refPop ; lFather++ ) {
                MutateElem(lFather, refPopulation, nextPopulation, initNext + index++);
            }
        }
        
    //*****************************************************************************
    // METHOD      : vibrato
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::Vibrato ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray, bool max, bool best )
        {
            unsigned int    refPop = refPopulation.size();
            unsigned int    nbGenerated = 1 ;
            
            // empty do nothing
            if ( !nextPopulation.size() ) 
                return false ;
            
            // For each individual to be mutated
            // ---------------------------------
            {
                
                // Randomly choose the individual index
                // ------------------------------------
                int lIndIndex = refPop - pvBestSlice * refPop / 100 ;
                if ( lIndIndex < 0 ) 
                    lIndIndex =  0 ;
                
                // check that at least one element can be vibrated
                bool            foundOne (false) ;
                int             selectedIndex ;
                unsigned int    minimumAcces = this->RankingSelect(lIndIndex * (lIndIndex + 1));
                unsigned int    maximumAccess = this->RankingSelect(refPop * (refPop + 1) - 1);
                for ( unsigned int index = minimumAcces ; index <= maximumAccess ; index++ ) {
                    selectedIndex =  sortArray [index].index ;
                    if ( refPopulation [selectedIndex].Self().Vibrato() && !refPopulation [selectedIndex].Self().Final() ) {
                        foundOne =  true ;
                        break ;
                    }
                }
                if ( !foundOne ) 
                    return false ;
                
                // For each param to be mutated
                // ----------------------------
                IndividualType  newType ;
                foundOne =  false ;
                if ( best ) {
                    selectedIndex =  sortArray [this->RankingSelect(refPop * (refPop + 1) - 1)].index ;
                    
                    // even the best must not be vibrated so surrender
                    if ( !refPopulation [selectedIndex].Self().Vibrato() || refPopulation [selectedIndex].Self().Final() ) 
                        return false ;
                } else {
                    do {
                        selectedIndex =  sortArray [this->RankingSelect(MTRandomValue<int> (lIndIndex * (lIndIndex + 1), refPop * (refPop + 1)))].index ;
                        if ( refPopulation [selectedIndex].Self().Vibrato() && !refPopulation [selectedIndex].Self().Final() ) {
                            foundOne =  true ;
                        }
                    } while ( !foundOne );
                }
                
                // assign
                newType.Affect(refPopulation [selectedIndex].Self());
                
                // --
                typename IndividualType::TypeParam  oldFeature ;
                typename IndividualType::TypeParam  newFeature ;
                bool                                sthingChanged = true ;
                
                // FeatureType     *tabFeature = new FeatureType [newType.Size()];
                typename IndividualType::TypeCost   bestCost, currCost, oldCost, currCost1, currCost2 ;
                
                // --
                IndividualType                      tempo ;
                tempo.Affect(newType.Self());
                bool    improved = true ;
                bool    record = false ;
                oldCost =  bestCost = currCost = ComputeCost(tempo);
                
                // --
                // tempo.Affect(newType);
                // newType.Affect(refPopulation [selectedIndex]);
                std::set<unsigned int>  setParam ;
                unsigned int            maxGenerated ;
                maxGenerated =  MAX_GENERATED ;
                while ( improved && nbGenerated < maxGenerated ) {
                    unsigned int    accessor ;
                    improved =  false ;
                    setParam.clear();
                    for ( unsigned int param = 0 ; param < newType.Size() ; param++ ) {
                        setParam.insert(param);
                    }
                    unsigned int    nbBoucle = 36 ;
                    for ( unsigned int param = 0 ; param < newType.Size() && nbGenerated < maxGenerated && nbBoucle-- ; param++ ) {
                        if ( setParam.empty() ) 
                            break ;
                        auto             accessSet = setParam.begin();
                        
                        // select a parameter to modify
                        // accessSet = accessSet + (int)MTRandomValue(0, newType.Size() - param);
                        unsigned int    pos = (int)MTRandomValue<int> (0, setParam.size());
                        if ( pos ) 
                            std::advance(accessSet, pos);
                        
                        // select given element and remove it from selectable
                        accessor =  *accessSet ;
                        setParam.erase(accessSet);
                        sthingChanged =  false ;
                        
                        // treating floats, more iterations
                        if ( tempo.Limits(accessor).Step() < 1 ) 
                            maxGenerated =  MAX_GENERATED_FLOAT ;
                        
                        // change value for selected element
                        newFeature =  oldFeature = tempo.Feature(accessor);
                        newFeature =  tempo.Limits(accessor).Vibrato(newFeature);
                        tempo.Feature(accessor, newFeature);
                        typename IndividualType::TypeLimit::TypeLimit   currentVal = tempo.Limits(accessor).VibratoValue();
                        if ( newFeature != oldFeature && nbGenerated++ < maxGenerated && (currCost = ComputeCost(tempo)) > oldCost ) {
                            
                            //          tabFeature [param] = newFeature ;
                            oldFeature    =  newFeature ;
                            oldCost       =  currCost ;
                            sthingChanged =  true ;
                            improved      =  true ;
                            record        =  true ;
                        } else {
                            if ( currCost != oldCost ) 
                                sthingChanged =  true ;
                            newFeature =  oldFeature - currentVal ;
                            tempo.Feature(accessor, newFeature);
                            if ( newFeature != oldFeature && nbGenerated++ < maxGenerated && (currCost = ComputeCost(tempo)) > oldCost ) {
                                
                                //          tabFeature [param] = newFeature ;
                                oldFeature    =  newFeature ;
                                oldCost       =  currCost ;
                                sthingChanged =  true ;
                                improved      =  true ;
                                record        =  true ;
                                currentVal    =  -currentVal ;
                            } else {
                                if ( currCost != oldCost ) 
                                    sthingChanged =  true ;
                                
                                // tabFeature [param] = oldFeature ;
                                tempo.Feature(accessor, oldFeature);
                            }
                        }
                        
                        // try to increase to big value in same direction
                        // if no change in cost maybe effect of change not visible because of precision, only for floats
                        typename IndividualType::TypeLimit::TypeLimit   multiplier = 1 ;
                        unsigned int                                    multiplierStep = currCost == oldCost ? 10 : 2 ;
                        if ( max && (sthingChanged /* || currCost == oldCost && tempo.Limits(accessor).VibratoValue() < 1*/ ) ) {
                            bool    isRightVal (false) ;
                            if ( improved ) 
                                while ( true ) {
                                    multiplier *= multiplierStep ;
                                    if ( currentVal >= 0 && multiplier * currentVal < 0
                                            || currentVal <= 0 && multiplier * currentVal > 0
                                            || isnan(oldFeature + multiplier * currentVal)
                                            || isnan(multiplier) ) 
                                        break ;
                                    newFeature =  oldFeature + currentVal * multiplier ;
                                    tempo.Feature(accessor, newFeature);
                                    if ( nbGenerated++ < maxGenerated && newFeature != oldFeature && (currCost = ComputeCost(tempo)) >= oldCost ) {
                                        if ( currCost > oldCost ) {
                                            oldCost        =  currCost ;
                                            oldFeature     =  newFeature ;
                                            isRightVal     =  true ;
                                            multiplierStep =  2 ;
                                        } else if ( multiplierStep == 2 ) {
                                            
                                            // we are in the case of some effects were observed so if no longer effect exit
                                            tempo.Feature(accessor, oldFeature);
                                            break ;
                                        }
                                    } else {
                                        tempo.Feature(accessor, oldFeature);
                                        break ;
                                    }
                                }
                            if ( !isRightVal ) {
                                multiplier =  1 ;
                            }
                            
                            // then find a better best by dichotomy
                            {
                                typename IndividualType::TypeLimit::TypeLimit   maxVal = multiplier * currentVal ;
                                typename IndividualType::TypeLimit::TypeLimit   middleVal = maxVal / SEARCH_DIVIDER ;
                                bool                                            backAllowed = true ;
                                unsigned int                                    sameDir = 0 ;
                                
                                // with integer to look just after
                                if ( maxVal > 1 && middleVal == 0 ) 
                                    middleVal =  1 ;
                                if ( maxVal < -1 && middleVal == 0 ) 
                                    middleVal =  -1 ;
                                while ( true ) {
                                    typename IndividualType::TypeLimit::TypeLimit   oldMiddleVal = middleVal ;
                                    if ( sameDir + middleVal >= maxVal ) {
                                        sameDir   =  0 ;
                                        maxVal    =  middleVal ;
                                        middleVal /= SEARCH_DIVIDER ;
                                        
                                        // with integer to look just after
                                        if ( oldMiddleVal > 1 && middleVal == 0 ) 
                                            middleVal =  1 ;
                                        if ( oldMiddleVal < -1 && middleVal == 0 ) 
                                            middleVal =  -1 ;
                                    }
                                    if ( nbGenerated++ >= maxGenerated ) 
                                        break ;
                                    newFeature =  oldFeature + middleVal ;
                                    if ( middleVal > 0 && newFeature < oldFeature || middleVal < 0 && newFeature > oldFeature || isnan(newFeature) ) {
                                        if ( middleVal > 0 ) {
                                            middleVal  =  std::numeric_limits<typename IndividualType::TypeParam> ::max() - middleVal ;
                                            newFeature =  std::numeric_limits<typename IndividualType::TypeParam> ::max();
                                        } else {
                                            middleVal  =  std::numeric_limits<typename IndividualType::TypeParam> ::lowest() - middleVal ;
                                            newFeature =  std::numeric_limits<typename IndividualType::TypeParam> ::lowest();
                                        }
                                    }
                                    tempo.Feature(accessor, newFeature);
                                    if ( newFeature != oldFeature ) {
                                        currCost1 =  ComputeCost(tempo);
                                        if ( currCost1 > oldCost ) {
                                            oldFeature  =  newFeature ;
                                            oldCost     =  currCost1 ;
                                            backAllowed =  false ;
                                            improved    =  true ;
                                            record      =  true ;
                                            sameDir     += middleVal > 0 ? middleVal : -middleVal ;
                                        } else if ( backAllowed ) {
                                            newFeature =  oldFeature - middleVal ;
                                            tempo.Feature(accessor, newFeature);
                                            nbGenerated++ ;
                                            currCost2 =  ComputeCost(tempo);
                                            if ( currCost2 > oldCost ) {
                                                oldFeature  =  newFeature ;
                                                oldCost     =  currCost2 ;
                                                middleVal   =  -middleVal ;
                                                backAllowed =  false ;
                                                improved    =  true ;
                                                record      =  true ;
                                                sameDir     += middleVal > 0 ? middleVal : -middleVal ;
                                            } else {
                                                
                                                // probably rounding pb
                                                if ( currCost1 == currCost2 && currCost1 == oldCost ) 
                                                    break ;
                                                maxVal    =  middleVal ;
                                                middleVal /= SEARCH_DIVIDER ;
                                                if ( oldMiddleVal > 1 && middleVal == 0 ) 
                                                    middleVal =  1 ;
                                                if ( oldMiddleVal < -1 && middleVal == 0 ) 
                                                    middleVal =  -1 ;
                                                backAllowed =  true ;
                                                tempo.Feature(accessor, oldFeature);
                                                sameDir =  0 ;
                                            }
                                        } else {
                                            maxVal    =  middleVal ;
                                            middleVal /= SEARCH_DIVIDER ;
                                            if ( oldMiddleVal > 1 && middleVal == 0 ) 
                                                middleVal =  1 ;
                                            if ( oldMiddleVal < -1 && middleVal == 0 ) 
                                                middleVal =  -1 ;
                                            backAllowed =  true ;
                                            tempo.Feature(accessor, oldFeature);
                                            sameDir =  0 ;
                                        }
                                    } else {
                                        tempo.Feature(accessor, oldFeature);
                                        break ;
                                    }
                                }
                            }
                        }
                    }
                }
                if ( record && !(SuppressClone() && IsIndividualACloneFull(refPopulation, nextPopulation, newType)) ) {
                    
                    // refPopulation [selectedIndex] = newType ;
                    ComputeCost(tempo);
                    nextPopulation.push_back(tempo);
                    return tempo.Final();
                }
                
                // delete [] tabFeature ;
            }
            if ( nbGenerated > 10 * MAX_GENERATED ) 
                return true ;
            else 
                return false ;
        }
        
    //*****************************************************************************
    // METHOD      : survivalSelection
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        void OptimGenetic<IndividualType> ::SurvivalSelection ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , std::vector<IndividualType> &newPopulation, std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray )
        {
            typename IndividualType::TypeCost   lPrevBestCost = OPTIM_COST_MAX(IndividualType::TypeCost);
            int                                 lPrevIndex1 = -1 ;
            int                                 lPrevIndex2 = -1 ;
            unsigned int                        refPop = refPopulation.size();
            unsigned int                        nextPop = nextPopulation.size();
            
            //            int                             lTrimIndex = _optim._nbTrimSteps - 1 ;
            // First, define a new population with the best individuals across
            // the 2 populations
            {
                unsigned int    nbIndividuals = refPop + nextPop ;
                unsigned int    i ;
                unsigned int    index ;
                
                // compute the 10% best
                unsigned int    firstSlice = pvPopulationSize * pvBestSlice / 100 ;
                if ( firstSlice < 1 ) 
                    firstSlice =  1 ;
                
                // take the not best as a probability of their rank (sum of rank is n * (n+1) /2 so multiply proba by n*(n+1) and sum by 2
                long    multiplier = (nbIndividuals - firstSlice) * (nbIndividuals - firstSlice + 1);
                for ( i = 0 ; i < pvPopulationSize - firstSlice ; i++ ) {
                    unsigned int    index = 0 ;
                    long            sum = 0 ;
                    unsigned int    indexOrg ;
                    index =  this->RankingSelect(MTRandomValue<int> (0, multiplier));
                    if ( index >= nbIndividuals - firstSlice ) 
                        index =  nbIndividuals - firstSlice - 1 ;
                    indexOrg =  index ;
                    if ( sortArray [index].selected ) {
                        while ( index < nbIndividuals - firstSlice && sortArray [index].selected ) 
                            index++ ;
                    }
                    if ( index >= nbIndividuals - firstSlice ) {
                        index =  indexOrg ;
                        while ( index > 0 && sortArray [index].selected ) 
                            index-- ;
                    }
                    if ( sortArray [index].population ) {
                        newPopulation [i] =  refPopulation [sortArray [index].index];
                    } else {
                        newPopulation [i] =  nextPopulation [sortArray [index].index];
                    }
                    sortArray [index].selected =  true ;
                }
                
                // take the best never taking two with same cost
                index =  pvPopulationSize - 1 ;
                typename IndividualType::TypeCost   lastCost = 0 ;
                if ( nbIndividuals > 1 ) 
                    for ( i = nbIndividuals - 1 ; i <= nbIndividuals - 1 && index >= pvPopulationSize - firstSlice && index <= pvPopulationSize - 1 ; i-- ) {
                        if ( sortArray [i].cost != lastCost
                                || index == pvPopulationSize - 1
                                || (sortArray [i].population ? 
                                       refPopulation [sortArray [i].index] != newPopulation [index + 1]
                                    : nextPopulation [sortArray [i].index] != newPopulation [index + 1]) ) {
                            if ( sortArray [i].population ) 
                                newPopulation [index--].Affect(refPopulation [sortArray [i].index]);
                            else 
                                newPopulation [index--].Affect(nextPopulation [sortArray [i].index]);
                            lastCost =  sortArray [i].cost ;
                        }
                    }
                
                // if some are missing fill with low profile : they should die later
                for ( i = 0 ; i <= nbIndividuals - 1 && index >= pvPopulationSize - firstSlice && index <= pvPopulationSize - 1 ; i++ ) {
                    if ( sortArray [i].population ) 
                        newPopulation [index--].Affect(refPopulation [sortArray [i].index]);
                    else 
                        newPopulation [index--].Affect(nextPopulation [sortArray [i].index]);
                }
            }
        }
        
    //*****************************************************************************
    // METHOD      : isIndividualAClone
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::IsIndividualAClone ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , unsigned int rank )
        {
            unsigned int    refPop = refPopulation.size();
            
            if ( !nextPopulation.size() ) 
                return true ;
            if ( rank > nextPopulation.size() ) 
                rank =  nextPopulation.size() - 1 ;
            
            // Test in whole previous population
            // ---------------------------------
            for ( unsigned int i = 0 ; i < refPop ; i++ ) {
                if ( nextPopulation [rank] == refPopulation [i] ) {
                    return true ;
                }
            }
            
            // Test in next population until a given rank
            // ------------------------------------------
            return IsIndividualAClone(nextPopulation, rank);
        }
        
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::IsIndividualAClone ( std::vector<IndividualType> &population, unsigned int rank )
        {
            if ( rank > population.size() ) 
                rank =  population.size() - 1 ;
            
            // Test in population until a given rank
            // -------------------------------------
            for ( unsigned int i = 0 ; i < rank ; i++ ) {
                if ( population [i] == population [rank] ) 
                    return true ;
            }
            return false ;
        }
        
    //*****************************************************************************
    // METHOD      : isIndividualACloneFull
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::IsIndividualACloneFull ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , unsigned int rank )
        {
            unsigned int    refPop = refPopulation.size();
            unsigned int    nextPop = nextPopulation.size();
            
            if ( !nextPopulation.size() ) 
                return true ;
            if ( rank > nextPopulation.size() ) 
                rank =  nextPopulation.size() - 1 ;
            
            // Test in whole previous population
            // ---------------------------------
            for ( unsigned int i = 0 ; i < refPop ; i++ ) {
                if ( nextPopulation [rank] == refPopulation [i] ) {
                    return true ;
                }
            }
            
            // Test in whole next population (except for a given rank)
            // -------------------------------------------------------
            for ( unsigned int i = 0 ; i < nextPop ; i++ ) {
                if ( i == rank ) 
                    continue ;
                if ( nextPopulation [i] == nextPopulation [rank] ) {
                    return true ;
                }
            }
            return false ;
        }
        
    //*****************************************************************************
    // METHOD      : isIndividualACloneFull
    // DESCRIPTION :
    //
    //*****************************************************************************
    template <class IndividualType> 
        bool OptimGenetic<IndividualType> ::IsIndividualACloneFull ( std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
            , IndividualType &type )
        {
            unsigned int    refPop = refPopulation.size();
            unsigned int    nextPop = nextPopulation.size();
            
            // Test in whole previous population
            // ---------------------------------
            for ( unsigned int i = 0 ; i < refPop ; i++ ) {
                if ( type == refPopulation [i] ) {
                    return true ;
                }
            }
            
            // Test in whole next population
            // ---------------------------------
            for ( unsigned int i = 0 ; i < nextPop ; i++ ) {
                if ( type == nextPopulation [i] ) {
                    return true ;
                }
            }
            return false ;
        }
        
    // MaxCost : get max cost of a population
    template <class IndividualType> 
        IndividualType &OptimGenetic<IndividualType> ::BestIndividual ( std::vector<IndividualType> &population )
        {
            unsigned int                        index ;
            typename IndividualType::TypeCost   bestCost = OPTIM_COST_MIN(IndividualType::TypeCost);
            unsigned int                        indexBest = 0 ;
            unsigned int                        size = population.size();
            
            ComputeCost(population);
            for ( index = 0 ; index < size ; index++ ) {
                if ( population [index].Cost() > bestCost ) {
                    indexBest =  index ;
                    bestCost  =  population [index].Cost();
                }
            }
            return population [indexBest];
        }
#endif //OPTIM_GENETIC_HEADER_

