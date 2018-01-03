#ifndef OPTIM_ALGO_HEADER_
#   define OPTIM_ALGO_HEADER_ 
#   include "individual.h"
#   include <map>
    static const double OPTIM_COST_MAX = 1.e+50 ;
    static const double OPTIM_COST_MIN = -OPTIM_COST_MAX ;
    typedef enum { LOCAL_GRADIENT_ALGO, GENETIC_ALGORITHM_ALGO, SIMULATED_ANNEALING_ALGO, NO_ALGO } EAlgoType ;
    
    //*****************************************************************************
    // Class Declaration
    //*****************************************************************************
    template <class FeatureCost> 
        
        class SortUnit {
            
            public :
            
                SortUnit ()
                    : population(true),  index(0),  cost(0.0),  selected(false)
                {}
                
                SortUnit ( bool paramPopulation, int paramIndex, FeatureCost paramCost )
                    : population(paramPopulation),  index(paramIndex),  cost(paramCost),  selected(false)
                {}
                
                void Affect ( bool paramPopulation, int paramIndex, FeatureCost paramCost )
                {
                    population = paramPopulation ;
                    index = paramIndex ;
                    cost = paramCost ;
                    selected = false ;
                }
                
                bool operator< ( const SortUnit &sortUnit ) const
                {
                    return this->cost < sortUnit.cost ;
                }
                
                bool operator> ( const SortUnit &sortUnit ) const
                {
                    return this->cost > sortUnit.cost ;
                }
                
                bool operator== ( const SortUnit &sortUnit ) const
                {
                    return this->cost == sortUnit.cost ;
                }
                
                bool operator!= ( const SortUnit &sortUnit ) const
                {
                    return this->cost != sortUnit.cost ;
                }
                
                bool            population ; // first population or second
                unsigned int    index ;      // index in population
                FeatureCost     cost ;       // associated cost
                bool            selected ;
        };
    
    template <class IndividualType> 
        
        class OptimAlgo {
            
            public :
            
                // Typedef
                // Constructor
                OptimAlgo ( Nursery<IndividualType> &nursery )
                    : pvpNursery(&nursery),  pvSimulatedVectors(0),  pvSteadyVectors(0)
                {}
                
                // Desctructor
                virtual ~OptimAlgo () {}
                
                virtual EAlgoType AlgoType ()
                {
                    return NO_ALGO ;
                }
                
                // Methods
                virtual bool    Run (EString fileName = "", bool verbose = true ) = 0 ;
                bool            Step (std::vector<IndividualType> &refPopulation, std::vector<IndividualType> &nextPopulation
                    , std::vector<IndividualType> &newPopulation, std::vector<SortUnit<typename IndividualType::TypeCost> > &sortArray, bool verbose =true) ;
                virtual void    Print () = 0 ;
                
                OptimAlgo &MaxSimulatedVectors ( unsigned int maxSimulatedVectors )
                {
                    pvMaxSimulatedVectors = maxSimulatedVectors ;
                    return *this ;
                }
                
                OptimAlgo &MaxSteadyVectors ( unsigned int maxSteadyVectors )
                {
                    pvMaxSteadyVectors = maxSteadyVectors ;
                    return *this ;
                }
                
                virtual int MaxSimulatedVectors () const
                {
                    return pvMaxSimulatedVectors ;
                }
                
                virtual int MaxSteadyVectors () const
                {
                    return pvMaxSteadyVectors ;
                }
                
                virtual int SimulatedVectors () const
                {
                    return pvSimulatedVectors ;
                }
                
                virtual int SteadyVectors () const
                {
                    return pvSteadyVectors ;
                }
                
                virtual OptimAlgo &SimulatedVectors ( unsigned int simulatedVectors )
                {
                    pvSimulatedVectors = simulatedVectors ;
                    return *this ;
                }
                
                virtual OptimAlgo &SteadyVectors ( unsigned int steadyVectors )
                {
                    pvSteadyVectors = steadyVectors ;
                    return *this ;
                }
                
                virtual bool CheckOn ()
                {
                    return SteadyVectors() < MaxSteadyVectors() && SimulatedVectors() < MaxSimulatedVectors();
                }
                
                // Nursery : set nursery for this algo
                OptimAlgo &SetNursery ( Nursery<IndividualType> &nursery )
                {
                    pvpNursery = &nursery ;
                    return *this ;
                }
                
                // Nursery : set nursery for this algo
                Nursery<IndividualType> &GetNursery ()
                {
                    return *pvpNursery ;
                }
                
                virtual IndividualType &BestIndividual ()
                {
                    pvBestIndividual = GetNursery().Create();
                    return pvBestIndividual ;
                }
                
                virtual typename IndividualType::TypeCost OptimCost () const
                {
                    return pvBestCost ;
                }
                
                virtual unsigned int RankingSelect ( unsigned int target )
                {
                    int             index ;
                    unsigned int    sum ;
                    unsigned int    tabSize = pvRankingTab.size();
                    
                    if ( tabSize <= 0 || (tabSize)*(tabSize + 1) <= target ) {
                        if ( tabSize > 0 ) {
                            sum = tabSize * (tabSize + 1);
                            index = tabSize - 1 ;
                        } else {
                            sum = 0 ;
                            index = -1 ;
                        }
                        for (;;) {
                            if ( index != -1 && sum >= target ) {
                                return index ;
                            }
                            index++ ;
                            sum += 2 * (index + 1);
                            pvRankingTab [sum] = index ;
                        }
                    }
                    
                    auto iter = pvRankingTab.upper_bound(target);
                    
                    return (*iter).second ;
                }
                
                virtual EString Parameters ()
                {
                    EString result ;
                    
                    result << " Max Simultated Vectors : \t\t\t\t\t\t" << MaxSimulatedVectors() << "\n";
                    result << " Max Steady Vectors : \t\t\t\t\t\t\t" << MaxSteadyVectors() << "\n";
                    result << " Simultated Vectors : \t\t\t\t\t\t\t" << SimulatedVectors() << "\n";
                    result << " Steady Vectors : \t\t\t\t\t\t\t" << SteadyVectors() << "\n";
                    return result ;
                }
            
            protected :
            
                typename IndividualType::TypeCost   pvBestCost ;
            
            private :
            
                unsigned int                            pvMaxSimulatedVectors ;
                unsigned int                            pvMaxSteadyVectors ;
                unsigned int                            pvSimulatedVectors ;
                unsigned int                            pvSteadyVectors ;
                Nursery<IndividualType>                 *pvpNursery ;
                IndividualType                          pvBestIndividual ;
                
                // Forbidden methods
                                                        OptimAlgo () ;
                                                        OptimAlgo (const OptimAlgo &) ;
                OptimAlgo                               &operator= (const OptimAlgo &) ;
                std::map<unsigned int, unsigned int>    pvRankingTab ;
        };
#endif
