#ifndef INDIVIDUAL_FILE_INCLUDED
#   define INDIVIDUAL_FILE_INCLUDED 1
#   include <vector>
#   include <algorithm>
#   include <set>
#   include <math.h>
#   include "erlstring.h"
#   include "semaphop.h"
#   include <list>
    static const int    MAX_MODIFICATION = 10 ;
    static const int    NB_MAX_TRY_IND = 100 ;
    class DelayedEvaluator ;
    
    // for threaded treatment
    void                *TreatWaitingIndividual (void *pParam) ;
    extern void         AddWaitingIndividuals (DelayedEvaluator *pIndividual) ;
    extern unsigned int GetWaitingIndividuals () ;
    
    inline EString ToString ( double val )
    {
        return EString(val);
    }
    
    inline EString ToString ( long val )
    {
        return EString(val);
    }
    
    inline EString ToString ( int val )
    {
        return EString(val);
    }
    
    inline EString ToString ( float val )
    {
        return EString(val);
    }
    
    inline EString ToString ( char val )
    {
        return EString(val);
    }
    
    inline void ReadOneFileLine ( int file, EString &line )
    {
        char    c ;
        
        line =  "";
        if ( file <= 0 ) {
            return ;
        }
        while ( read(file, &c, 1) == 1 && c != '\n' ) {
            line += c ;
        }
    }
    
    inline int maxInt ( int x, int y )
    {
        return x > y ? x : y ;
    }
    
    inline void IndividualDisplayError ( EString &error )
    {
        std::cout << (char *)(error.c_str());
    }
    
    template <class TypeFeature,class StepFeature> 
        
        class FeatureLimit {
            
            public :
            
                typedef TypeFeature TypeVal ;
                
                FeatureLimit () {}
                
                FeatureLimit ( TypeFeature &min, TypeFeature &max, StepFeature &step )
                    : pvMin(min),  pvMax(max),  pvStep(step)
                {}
                
                virtual ~FeatureLimit () {}
                
                // Frame : Frame a value inside limits
                void Frame ( TypeFeature &val ) const
                {
#                   if defined(INDIV_FRAME_FEATURE)
                        
                        // differentiate signed and unsigned
                        if ( val > pvMax && pvMin != 0 ) {
                            
                            // may need a sign extension
                            TypeFeature upVal = pvMax + 1 ;
                            TypeFeature mask = 0 ;
                            while ( mask + 1 < upVal ) 
                                mask =  mask << 1 | 0x1 ;
                            mask =  mask << 1 | 0x1 ;
                            mask =  ~mask ;
                            TypeFeature newVal ;
                            TypeFeature comp = val & mask ;
                            if ( comp == 0 ) {
                                newVal =  mask | val ;
                                if ( newVal >= pvMin ) 
                                    val =  newVal ;
                                else 
                                    val =  pvMax ;
                            } else 
                                val =  pvMax ;
			} else if ( (val < pvMin || val > pvMax) && pvMin == 0 ) {
                            val &= pvMax ;
                        }
#                   endif
                    if ( val > pvMax ) 
                        val =  pvMax ;
                    if ( val < pvMin ) 
                        val =  pvMin ;
                }
                
                // get max
                const TypeFeature &Max () const
                {
                    return *&pvMax ;
                }
                
                // set max 
                FeatureLimit &Max ( TypeFeature &max )
                {
                    pvMax =  max ;
                    return *this ;
                }
                
                // get min
                const TypeFeature &Min () const
                {
                    return *&pvMin ;
                }
                
                // set min
                FeatureLimit Min ( TypeFeature &min )
                {
                    pvMin =  min ;
                    return *this ;
                }
                
                // get step
                const StepFeature &Step () const
                {
                    return *&pvStep ;
                }
                
                // set step 
                FeatureLimit Step ( StepFeature &step )
                {
                    pvStep =  step ;
                    return *this ;
                }
                
                // Random : set a random value
                virtual TypeFeature Random () const
                {
                    TypeFeature typeFeature = 0 ;
                    
                    return typeFeature ;
                }
                
                // Random : set a random value
                virtual TypeFeature Vibrato ( TypeFeature &val )
                {
                    TypeFeature typeFeature = 0 ;
                    
                    return typeFeature ;
                }
                
                // Random : set a random value
                virtual TypeFeature Vibrato ( TypeFeature &val, TypeFeature applied )
                {
                    TypeFeature typeFeature = 0 ;
                    
                    return typeFeature ;
                }
                
                // Content 
                virtual EString Content () const
                {
                    EString content ;
                    
                    content << "(" << Min() << "," << Max() << "," << Step() << ")";
                    return content ;
                }
                
                virtual void Display ( int file ) const
                {
                    EString content(Content());
                    
                    content << "\n";
                    _write(file, content.c_str(), content.length());
                }
            
            protected :
            
                TypeFeature pvMin ;
                TypeFeature pvMax ;
                StepFeature pvStep ;
        };
    
    template <class TypeFeature> 
        
        class DiscreteFeatureLimit {
            
            public :
            
                typedef TypeFeature TypeLimit ;
                
                DiscreteFeatureLimit () {}
                
                DiscreteFeatureLimit ( std::vector<TypeFeature> &featureSet )
                    : pvSetFeature(featureSet),  pvSorted(false),  pvNull(0)
                {}
                
                virtual ~DiscreteFeatureLimit () {}
                
                // Frame : Frame a value inside limits
                void Frame ( TypeFeature &val ) const {}
                
                // Random : set a random value
                virtual TypeFeature Random () const
                {
                    unsigned int    index = RandomValue(0, pvSetFeature.size());
                    
                    if ( !pvSetFeature.empty() ) 
                        return pvSetFeature [index];
                    else 
                        return *&pvNull ;
                }
                
                // get min
                const TypeFeature &Min ()
                {
                    if ( !pvSetFeature.empty() ) {
                        if ( !pvSorted ) {
                            std::sort(pvSetFeature.begin(), pvSetFeature.end());
                            pvSorted =  true ;
                        }
                        return pvSetFeature [0];
                    } else 
                        return *&pvNull ;
                }
                
                // get min
                const TypeFeature &Max ()
                {
                    if ( !pvSetFeature.empty() ) {
                        if ( !pvSorted ) {
                            std::sort(pvSetFeature.begin(), pvSetFeature.end());
                            pvSorted =  true ;
                        }
                        return pvSetFeature [pvSetFeature.size() - 1];
                    } else 
                        return *&pvNull ;
                }
                
                // Random : set a random value
                virtual TypeFeature Vibrato ( TypeFeature &val )
                {
                    TypeFeature typeFeature = 0 ;
                    
                    return typeFeature ;
                }
                
                // Random : set a random value
                virtual TypeFeature Vibrato ( TypeFeature &val, TypeFeature applied )
                {
                    TypeFeature typeFeature = 0 ;
                    
                    return typeFeature ;
                }
                
                TypeFeature VibratoValue () const
                {
                    TypeFeature typeFeature = 0 ;
                    
                    return typeFeature ;
                }
                
                // Content 
                virtual EString Content () const
                {
                    EString         content ;
                    bool            first = true ;
                    unsigned int    index ;
                    
                    content << "(";
                    for ( index = 0 ; index < pvSetFeature.size() ; index++ ) {
                        if ( !first ) 
                            content << ", ";
                        else 
                            first =  false ;
                        content << pvSetFeature [index];
                    }
                    content << ")";
                    return content ;
                }
                
                virtual void Display ( int file ) const
                {
                    EString content(Content());
                    
                    content << "\n";
                    _write(file, content.c_str(), content.length());
                }
            
            protected :
            
                std::vector<TypeFeature>    pvSetFeature ;
                bool                        pvSorted ;
                TypeFeature                 pvNull ;
        };
    
    template <class SimpleType> 
        
        class SimpleLimit : public FeatureLimit<SimpleType, SimpleType> {
            
            public :
            
                typedef SimpleType  TypeLimit ;
            
            public :
            
                SimpleLimit ( SimpleType min, SimpleType max )
                    : FeatureLimit<SimpleType, SimpleType> (min, max, min)
                {
                    this->pvStep =  1 ;
                }
                
                SimpleLimit ( SimpleType min, SimpleType max, SimpleType step )
                    : FeatureLimit<SimpleType, SimpleType> (min, max, step)
                {
                    this->pvStep =  1 ;
                }
                
                virtual ~SimpleLimit () {}
                
                // Random : get a random value
                virtual SimpleType Random () const
                {
                    return RandomValue((long)this->Min(), (long)this->Max() + 1);
                }
                
                // Random : get a random value
                virtual SimpleType Vibrato ( SimpleType &currVal )
                {
                    int step = 0 ;
                    int typeStep = RandomValue(0, 2);
                    
                    while ( step == 0 ) 
                        step =  RandomValue( -1, 2);
                    pvLastApplied =  step * (typeStep == 0 ? Random() / 5 : this->Step()) /*this->Step()*/ ;
                    
                    SimpleType  newVal = currVal + pvLastApplied ;
                    
                    if ( newVal > this->Max() ) 
                        newVal =  this->Min();
                    if ( newVal < this->Min() ) 
                        newVal =  this->Max() - this->pvStep ;
                    return newVal ;
                }
                
                // Vibrato with imposed value
                virtual SimpleType Vibrato ( SimpleType &currVal, SimpleType applied )
                {
                    pvLastApplied =  applied ;
                    
                    SimpleType  newVal = currVal + pvLastApplied ;
                    
                    if ( newVal > this->Max() ) 
                        newVal =  this->Min();
                    if ( newVal < this->Min() ) 
                        newVal =  this->Max() - this->pvStep ;
                    return newVal ;
                }
                
                // Content 
                virtual EString Content () const
                {
                    EString content ;
                    
                    content << "(" << (long)this->Min() << "," << (long)this->Max() << "," << (long)this->Step() << ")";
                    return content ;
                }
                
                SimpleType VibratoValue () const
                {
                    return pvLastApplied ;
                }
            
            private :
            
                SimpleType  pvLastApplied ;
        };
    
    class DelayedEvaluator {
        
        public :
        
            virtual void DelayedEval ( bool withMessage = true ) {}
            
            virtual void MarkedForEval ( bool status ) {}
            
            virtual Semaphop *GetSemaphop ()
            {
                return 0 ;
            }
    };
    
    template <class TypeFeature,class FeatureLimits,class FeatureCost> 
        
        class Individual : public DelayedEvaluator {
            
            public :
            
                typedef TypeFeature TypeParam ;
                typedef FeatureLimits   TypeLimit ;
                typedef FeatureCost TypeCost ;
                
                Individual ()
                    : DelayedEvaluator(),  pvCost(0),  pvEvaluated(false),  pvThreaded(false),  pvpKeepSemaphop(0)
                {}
                
                virtual ~Individual () {}
                
                // copy constructor 
                Individual ( const Individual &individual )
                    : DelayedEvaluator()
                {
                    Affect(individual);
                }
                
                // copy constructor 
                Individual &operator= ( const Individual &individual )
                {
                    Affect(individual);
                    return *this ;
                }
                
                virtual void Affect ( const Individual &src )
                {
                    unsigned int    index ;
                    
                    pvFeatures =  src.pvFeatures ;
                    pvLimits   =  src.pvLimits ;
                    Cost(src.Cost(false));
                    Evaluated(src.Evaluated());
                    Threaded(src.Threaded());
                    pvpKeepSemaphop =  src.pvpKeepSemaphop ;
                }
                
                virtual const std::vector<TypeFeature> &Feature () const
                {
                    return *&pvFeatures ;
                }
                
                // get feature of individual 
                const TypeFeature &Feature ( unsigned int index ) const
                {
                    if ( index < Size() ) {
                        return *&pvFeatures [index];
                    } else {
                        EString error("Illegal access : ");
                        error << (int)index ;
                        IndividualDisplayError(error);
                    }
                    return *&pvFeatures [0];
                }
                
                // get feature of individual 
                const TypeFeature &FeatureCopy ( TypeFeature *dest, unsigned int start, unsigned int size ) const
                {
                    if ( start < Size() && start + size <= Size() ) {
#                       if 1
                            unsigned int    src ;
                            for ( src = start ; src < start + size ; src++ ) 
                                *dest++ =  pvFeatures [src];
#                       else 
                            memcpy(dest, &pvFeatures [start], size * sizeof(TypeFeature));
#                       endif
                    } else {
                        EString error("Illegal access : ");
                        error << (int)start << " " << (int)size ;
                        IndividualDisplayError(error);
                    }
                    return *&pvFeatures [0];
                }
                
                // get all features limits of individual
                std::vector<FeatureLimits> &Limits ()
                {
                    return pvLimits ;
                }
                
                // set all features for an individual
                Individual &Limits ( std::vector<FeatureLimits> &pLimits, bool setValue = true )
                {
                    pvLimits =  pLimits ;
                    
                    unsigned int    index ;
                    
                    if ( pvLimits.size() > pvFeatures.size() ) 
                        pvFeatures.resize(pvLimits.size());
                    index =  0 ;
                    for ( auto iter = pLimits.begin() ; iter != pLimits.end() ; iter++, index++ ) {
                        if ( index < pvFeatures.size() ) {
                            if ( setValue ) 
                                pvFeatures [index] =  (*iter).Random();
                        } else {
                            TypeFeature feature = (*iter).Random();
                            pvFeatures.push_back(feature);
                        }
                    }
                    
                    // we must evaluate individual again
                    Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                // set feature
                Individual &Limits ( unsigned int index, const FeatureLimits &limit, bool setValue = true )
                {
                    unsigned int    currSize = Size();
                    
                    if ( index < currSize ) {
                        if ( setValue ) 
                            pvFeatures [index] =  limit.Random();
                        pvLimits [index] =  limit ;
                    } else {
                        unsigned int    diff = index - currSize + 1 ;
                        while ( diff-- ) {
                            TypeFeature feature = limit.Random();
                            pvFeatures.push_back(feature);
                            pvLimits.push_back(limit);
                        }
                    }
                    
                    // we must evaluate individual again
                    Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                // get feature limit of individual 
                FeatureLimits &Limits ( unsigned int index )
                {
                    if ( index < Size() ) {
                        return *&pvLimits [index];
                    } else {
                        EString error("Illegal access : ");
                        error << (int)index ;
                        IndividualDisplayError(error);
                    }
                    return *&pvLimits [0];
                }
                
                // set feature
                Individual &Feature ( unsigned int index, const TypeFeature &feature, const FeatureLimits &limit )
                {
                    unsigned int    currSize = Size();
                    
                    // frame the feature
                    TypeFeature     framedFeature = feature ;
                    
                    limit.Frame(framedFeature);
                    
                    // store
                    if ( index < currSize ) {
                        pvFeatures [index] =  framedFeature ;
                        pvLimits [index]   =  limit ;
                    } else {
                        unsigned int    diff = index - currSize + 1 ;
                        while ( diff-- ) {
                            pvFeatures.push_back(framedFeature);
                            pvLimits.push_back(limit);
                        }
                    }
                    
                    // we must evaluate individual again
                    Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                // set feature
                Individual &Feature ( unsigned int index, const TypeFeature &feature )
                {
                    TypeFeature framedFeature = feature ;
                    
                    // frame the feature
                    if ( index < pvLimits.size() ) {
                        pvLimits [index].Frame(framedFeature);
                    }
                    
                    // store the feature
                    if ( index < Size() ) {
                        pvFeatures [index] =  framedFeature ;
                    } else {
                        EString error("Illegal access : ");
                        error << (int)index ;
                        IndividualDisplayError(error);
                    }
                    
                    // we must evaluate individual again
                    Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                Individual &Feature ( const std::vector<TypeParam> &vect )
                {
                    pvFeatures =  vect ;
                    
                    // frame the features
                    unsigned int    index = 0 ;
                    
                    for ( auto iter = pvFeatures.begin() ; iter < pvFeatures.end() ; iter++, index++ ) 
                        if ( index < pvLimits.size() ) {
                            pvLimits [index].Frame(*iter);
                        }
                    
                    // we must evaluate individual again
                    Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                // Evaluate individual 
                virtual FeatureCost Evaluate ( Semaphop *pSemaphop = 0, bool withMessage = true )
                {
                    Evaluated(true, pSemaphop);
                    return pvCost = 0 ;
                }
                
                // Evaluate individual, maybe in thread
                virtual FeatureCost EvaluateThread ( Semaphop *pSemaphop = 0 )
                {
                    if ( pSemaphop && Threaded() ) {
                        pvpKeepSemaphop =  pSemaphop ;
                        AddWaitingIndividuals((DelayedEvaluator *)this);
                        return 0 ;
                    } else 
                        return this->Evaluate(pSemaphop);
                }
                
                // delayed eval
                virtual void DelayedEval ( bool withMessage = true )
                {
                    this->Evaluate(pvpKeepSemaphop, withMessage);
                }
                
                // Size : return size of individual
                unsigned int Size () const
                {
                    return pvFeatures.size();
                }
                
                // Cost : get cost 
                virtual FeatureCost Cost ()
                {
                    if ( !Evaluated() ) 
                        Evaluate();
                    return pvCost ;
                }
                
                // Cost : get cost 
                virtual FeatureCost Cost ( bool evaluate ) const
                {
                    return pvCost ;
                }
                
                // Cost : set cost
                Individual &Cost ( FeatureCost cost )
                {
                    pvCost =  cost ;
                    return *this ;
                }
                
                // Evaluated : set evaluated
                virtual Individual &Evaluated ( bool evaluated, Semaphop *pSemaphop = 0 )
                {
                    pvEvaluated =  evaluated ;
                    if ( evaluated && pSemaphop ) {
                        pSemaphop->PutRessource(1);
                    }
                    return *this ;
                }
                
                // Cost : get cost 
                virtual bool Evaluated () const
                {
                    return pvEvaluated ;
                }
                
                // equality test
                bool operator== ( const Individual &individual ) const
                {
                    unsigned int    index ;
                    
                    if ( individual.Size() == Size() ) {
                        for ( index = 0 ; index < Size() ; index++ ) {
                            if ( Feature(index) != individual.Feature(index) ) 
                                return false ;
                        }
                        return true ;
                    }
                    return false ;
                }
                
                // equality test
                bool operator!= ( const Individual &individual )
                {
                    return !(*this == individual);
                }
                
                void VectContent ( std::vector<TypeParam> &vect )
                {
                    unsigned int    param ;
                    
                    vect.clear();
                    for ( param = 0 ; param < Size() ; param++ ) {
                        vect.push_back(Feature(param));
                    }
                }
                
                EString Content ()
                {
                    EString content ;
                    int     param ;
                    
                    for ( param = 0 ; param < Size() ; param++ ) {
                        content << (int)param << " = " << Feature(param) << Limits(param).Content() << " ";
                    }
                    return content << "\n";
                }
                
                // RandomFill : random fill an individual
                virtual void RandomFill ()
                {
                    unsigned int    index ;
                    
                    for ( index = 0 ; index < Size() ; index++ ) {
                        Feature(index, pvLimits [index].Random());
                    }
                }
                
                // RandomFill : random fill an individual
                virtual void FillMax ()
                {
                    unsigned int    index ;
                    
                    for ( index = 0 ; index < Size() ; index++ ) {
                        Feature(index, pvLimits [index].Max());
                    }
                    Evaluated(false);
                }
                
                // RandomFill : random fill an individual
                virtual void FillMin ()
                {
                    unsigned int    index ;
                    
                    for ( index = 0 ; index < Size() ; index++ ) {
                        Feature(index, pvLimits [index].Min());
                    }
                    Evaluated(false);
                }
                
                virtual void MergeFrom ( Individual &father, Individual &mother )
                {
                    unsigned int    size = father.Size();
                    unsigned int    index = size ;
                    
                    if ( !size ) 
                        return ;
                    /*while ( index-- )
                       vectorg.push_back(1);*/
                    std::vector<unsigned int>   vectorg(size, 1);
                    
                    // put mother characteristics for at most 10 characteristics
                    unsigned int                nbMerge = RandomValue(0, size);
                    
                    for ( index = 0 ; index < nbMerge ; index++ ) 
                        vectorg [RandomValue(0, size)] =  RandomValue(0, 2) ? 2 : 1 ;
                    /*for ( index = 0 ; index < size ; index++ )
                       if ( RandomValue(0, 2) ) 
                           vectorg [index] = 2 ;*/
                    for ( unsigned int param = 0 ; param < size ; param++ ) {
                        Feature(param, vectorg [param] == 1 ? father.Feature(param) : mother.Feature(param)
                            , vectorg [param] == 1 ? father.Limits(param) : mother.Limits(param));
                    }
                }
                
                virtual bool CanExchange ( unsigned int index1, unsigned int index2 )
                {
                    return true ;
                }
                
                virtual void Mutate ()
                {
                    if ( Size() <= 0 ) 
                        return ;
                    
                    // Then randomly choose the nb of param to be mutated for this cell
                    // ----------------------------------------------------------------
                    int NB_PARAM = RandomValue(1, Size() + 1);
                    
                    // For each param to be mutated
                    // ----------------------------
                    for ( int param = 0 ; param < NB_PARAM && param < MAX_MODIFICATION ; param++ ) {
                        
                        // Randomly choose this param index
                        // --------------------------------
                        int         lParamIndex = RandomValue(0, Size());
                        
                        // Then randomly change this optimisation parameter
                        // ------------------------------------------------
                        int         lCloneTestNumber = 0 ;
                        TypeFeature lKeepValue = Feature(lParamIndex);
                        TypeFeature lNewValue ;
                        do {
                            lNewValue =  Limits(lParamIndex).Random();
                        } while ( lNewValue == lKeepValue && lCloneTestNumber++ < NB_MAX_TRY_IND );
                        Feature(lParamIndex, lNewValue);
                    }
                }
                
                virtual void Display ( int file )
                {
                    int     index = 0 ;
                    VString sep = "***************************************\n";
                    VString sep1 = "---------------------------------------\n";
                    
                    _write(file, sep.c_str(), sep.length());
#                   if 0
                        for ( index = 0 ; index < Size() ; index++ ) {
                            Feature(index).Display(file);
                        }
                        _write(file, sep1.c_str(), sep1.length());
                        for ( index = 0 ; index < Size() ; index++ ) {
                            pvLimits [index].Display(file);
                        }
#                   endif
                }
                
                virtual void Read ( int file ) {}
                
                // Threaded : get threaded
                virtual bool Threaded () const
                {
                    return pvThreaded ;
                }
                
                // Threaded : set threaded
                Individual &Threaded ( bool threaded )
                {
                    pvThreaded =  threaded ;
                    return *this ;
                }
                
                virtual void *This ()
                {
                    return this ;
                }
                
                virtual Semaphop *GetSemaphop ()
                {
                    return pvpKeepSemaphop ;
                }
                
                virtual Individual &Self ()
                {
                    return (Individual &)*this ;
                }
            
            protected :
            
                FeatureCost pvCost ;
            
            private :
            
                std::vector<TypeFeature>    pvFeatures ;
                std::vector<FeatureLimits>  pvLimits ;
                bool                        pvEvaluated ;
                bool                        pvThreaded ;
                Semaphop                    *pvpKeepSemaphop ;
        };
    
    template <class TypeFeature,class FeatureLimits,class FeatureCost> 
        
        class OrderedIndividual : public Individual<TypeFeature, FeatureLimits, FeatureCost> {
            
            public :
            
                OrderedIndividual ()
                    : Individual<TypeFeature, FeatureLimits, FeatureCost> ()
                {}
                
                virtual ~OrderedIndividual () {}
                
                // copy constructor 
                OrderedIndividual ( const OrderedIndividual &individual )
                    : Individual<TypeFeature, FeatureLimits, FeatureCost> ()
                {
                    ((Individual<TypeFeature, FeatureLimits, FeatureCost> *)this)->Affect((Individual<TypeFeature, FeatureLimits, FeatureCost> &)individual);
                }
                
                virtual void MergeFrom ( OrderedIndividual &father, OrderedIndividual &mother )
                {
                    unsigned int    size = father.Size();
                    
                    // select a merge point
                    if ( size < 3 ) 
                        return ;
                    
                    unsigned int            mergePoint = RandomValue(1, size - 1);
                    unsigned int            indexInsert, index ;
                    std::set<TypeFeature>   alreadyPut ;
                    
                    // copy characteritics of mother until before merge point
                    for ( indexInsert = 0 ; indexInsert < mergePoint ; indexInsert++ ) {
                        this->Feature(indexInsert, mother.Feature(indexInsert), mother.Limits(indexInsert));
                        alreadyPut.insert(mother.Feature(indexInsert));
                    }
                    
                    // then take characteristics of mother taking into account father order
                    for ( index = 0 ; index < size ; index++ ) {
                        if ( alreadyPut.find(father.Feature(index)) == alreadyPut.end() ) {
                            this->Feature(indexInsert++, father.Feature(index), father.Limits(index));
                            
                            // alreadyPut.insert(father.Feature(index));
#                           if 0
                                if ( this->Feature(index) == 0 ) {
                                    MetaExit(3, "OOPS");
                                }
#                           endif
                        }
                    }
                }
                
                virtual void Mutate ()
                {
                    
                    // Then randomly choose the nb of param to be mutated for this cell
                    // ----------------------------------------------------------------
                    int NB_PARAM = RandomValue(1, (this->Size() + 1) / 2);
                    
                    // For each param to be mutated
                    // ----------------------------
                    for ( int param = 0 ; param < NB_PARAM && param < MAX_MODIFICATION ; param++ ) {
                        bool            exchange = false ;
                        unsigned int    nbTry = 0 ;
                        while ( !exchange && nbTry <= (unsigned int)NB_MAX_TRY_IND ) {
                            
                            // Randomly choose parameters index
                            // --------------------------------
                            int lParamIndex = RandomValue(0, this->Size());
                            int lParamIndex1 = lParamIndex ;
                            if ( this->Size() <= 1 ) 
                                return ;
                            while ( lParamIndex1 == lParamIndex ) 
                                lParamIndex1 =  RandomValue(0, this->Size());
                            
                            // if exchange is allowed do it
                            if ( this->CanExchange(lParamIndex, lParamIndex1) ) {
                                TypeFeature lKeepValue = this->Feature(lParamIndex);
                                this->Feature(lParamIndex, this->Feature(lParamIndex1));
                                this->Feature(lParamIndex1, lKeepValue);
                                exchange =  true ;
                            }
                        }
                    }
                }
                
                virtual void Display ( int file )
                {
                    int     index = 0 ;
                    VString sep = "***************************************\n";
                    VString sep1 = "---------------------------------------\n";
                    
                    _write(file, sep.c_str(), sep.length());
#                   if 0
                        for ( index = 0 ; index < Size() ; index++ ) {
                            Feature(index).Display(file);
                        }
                        _write(file, sep1.c_str(), sep1.length());
                        for ( index = 0 ; index < Size() ; index++ ) {
                            pvLimits [index].Display(file);
                        }
#                   endif
                }
                
                virtual void Read ( int file ) {}
        };
    
    template <class IndividualType> 
        
        class Nursery {
            
            public :
            
                typedef IndividualType  TypeIndividual ;
                
                Nursery () {}
                
                virtual ~Nursery () {}
                
                virtual TypeIndividual Create ()
                {
                    TypeIndividual  individual ;
                    
                    return individual ;
                }
        };
    
    template <class IndividualType,class SimpleType,int min,int max,int step> 
        
        class NurserySimple : public Nursery<IndividualType> {
            
            public :
            
                NurserySimple ( unsigned int nbParam )
                    : pvNbParam(nbParam)
                {}
                
                virtual ~NurserySimple () {}
                
                virtual IndividualType Create ()
                {
                    IndividualType  individual ;
                    unsigned int    size = pvNbParam ;
                    
                    if ( size < 1 ) 
                        size =  1 ;
                    individual.Limits(size - 1, SimpleLimit<SimpleType> (min, max));
                    individual.RandomFill();
                    return individual ;
                }
            
            private :
            
                unsigned int    pvNbParam ;
        };
#endif
