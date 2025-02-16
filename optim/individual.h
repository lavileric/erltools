#ifndef INDIVIDUAL_FILE_INCLUDED
#   define INDIVIDUAL_FILE_INCLUDED 1
#   include <vector>
#   include <algorithm>
#   include <set>
#   include <math.h>
#   include "erlstring.h"
#   include "semaphop.h"
#   include <list>
#   include <random>
    static const int        MAX_MODIFICATION = 10 ;
    static const int        NB_MAX_TRY_IND = 100 ;
    class DelayedEvaluator ;
    
    // for threaded treatment
    void                    *TreatWaitingIndividual (void *pParam) ;
    extern void             AddWaitingIndividuals (DelayedEvaluator *pIndividual) ;
    extern unsigned int     GetWaitingIndividuals () ;
    extern std::mt19937_64  randGen ;
    
    // [ min , max [
    template <class TypeFeature> 
        inline TypeFeature MTRandomValue ( TypeFeature minVal, TypeFeature maxVal, bool full = false )
        {
            TypeFeature         ret ;
            long double         maxValFloat = maxVal ;
            long double         minValFloat = minVal ;
            static long double  maxForRand = std::numeric_limits<std::mt19937_64::result_type> ::max();
            static long double  minForRand = std::numeric_limits<std::mt19937_64::result_type> ::lowest();
            
            if ( minVal == maxVal ) 
                return minVal ;
            if ( isnan(minValFloat) ) 
                minValFloat =  std::numeric_limits<TypeFeature> ::lowest();
            if ( isnan(maxValFloat) || maxValFloat <= minValFloat ) 
                maxValFloat =  std::numeric_limits<TypeFeature> ::max();
            if ( maxValFloat <= minValFloat + 1 && !full ) 
                return minVal ;
#           if defined(INDIV_FRAME_FEATURE)
                if ( maxVal == minVal + 2 && !full ) 
                    return randGen() & 0x1 + minVal ;
#           endif
            
            std::mt19937_64::result_type    randValue = randGen();
            
            if ( randValue == maxForRand ) 
                return full ? maxVal : maxVal - 1 ;
            else {
                long double factor = ((long double)randValue - minForRand) / ((long double)maxForRand - minForRand);
                long double excursion = (long double)maxValFloat / (1.0 * maxForRand) - (long double)minValFloat / (1.0 * maxForRand);
                long double offset = excursion * factor ;
                long double res = minVal / (1.0 * maxForRand) + offset ;
                ret =  res * maxForRand ;
                
                // ret =  (TypeFeature)(1.0 * ((long double)maxValFloat / (1.0 * maxForRand) - (long double)minValFloat / (1.0 * maxForRand))
                //    * (((long double)randValue - minForRand) / (((long double)maxForRand) - minForRand)) * maxForRand);
#               if defined(INDIV_FRAME_FEATURE)
                    ret =  floor(ret);
#               endif
                //ret += minVal ;
                return ret ;
            }
        }
        
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
                    if ( val > pvMax || val < pvMin ) {
                        
                        // if limits and value are integer some specific treatment
                        if ( pvMax <= ((TypeFeature)std::numeric_limits<intmax_t> ::max())
                                && pvMin >= ((TypeFeature)std::numeric_limits<intmax_t> ::min())
                                && val <= ((TypeFeature)std::numeric_limits<intmax_t> ::max())
                                && val >= ((TypeFeature)std::numeric_limits<intmax_t> ::min()) ) {
                            intmax_t    mVal = (intmax_t)val ;
                            intmax_t    mpvMax = (intmax_t)pvMax ;
                            intmax_t    mpvMin = (intmax_t)pvMin ;
                            
                            // differentiate signed and unsigned
                            if ( mVal > mpvMax && mpvMin != 0 ) {
                                
                                // may need a sign extension
                                intmax_t    upVal = mpvMax + 1 ;
                                intmax_t    mask = 0 ;
                                while ( mask + 1 < upVal ) 
                                    mask =  mask << 1 | 0x1 ;
                                mask =  mask << 1 | 0x1 ;
                                mask =  ~mask ;
                                intmax_t    newVal ;
                                intmax_t    comp = mVal & mask ;
                                if ( comp == 0 ) {
                                    newVal =  mask | mVal ;
                                    if ( newVal >= mpvMin ) 
                                        mVal =  newVal ;
                                    else 
                                        mVal =  mpvMax ;
                                } else 
                                    mVal =  mpvMax ;
                            } else if ( (mVal < mpvMin || mVal > mpvMax) && mpvMin == 0 ) {
                                mVal &= mpvMax ;
                            }
                            val =  mVal ;
                        }
                        if ( val > pvMax ) 
                            val =  pvMax ;
                        if ( val < pvMin ) 
                            val =  pvMin ;
                    }
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
                    
                    content << "(" << (intmax_t)Min() << "," << (intmax_t)Max() << "," << (intmax_t)Step() << ")";
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
                    unsigned int    index = MTRandomValue<int> (0, pvSetFeature.size());
                    
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
                
                // get step
                const TypeFeature &Step () const
                {
                    return *&pvStep ;
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
                TypeFeature                 pvStep = 1 ;
        };
    
    template <class TypeFeature> 
        
        class MinMax {
            
            public :
            
                MinMax ( TypeFeature _min, TypeFeature _max )
                    : min(_min),  max(_max)
                {}
                
                TypeFeature min ;
                TypeFeature max ;
        };
    
    template <class TypeFeature> 
        
        class MultipleFeatureLimit {
            
            public :
            
                typedef TypeFeature TypeLimit ;
                
                MultipleFeatureLimit () {}
                
#               if 0
                    MultipleFeatureLimit ( std::vector<TypeFeature> &featureSet )
                        : pvSetFeature(featureSet),  pvSorted(false),  pvNull(0)
                    {}
#               endif
                
                virtual ~MultipleFeatureLimit () {}
                
                // Frame : Frame a value inside limits
                void Frame ( TypeFeature &val ) const {}
                
                // Random : set a random value
                virtual TypeFeature Random () const
                {
#                   if 0
                        {
                            unsigned int    index = MTRandomValue<int> (0, pvSetFeature.size());
                            if ( !pvSetFeature.empty() ) {
                                if ( pvSetFeature [index].min == pvSetFeature [index].max ) 
                                    return pvSetFeature [index].min ;
                                else {
                                }
                            } else 
                                return *&pvNull ;
                        }
#                   endif
                    return 0 ;
                }
                
                // get min
                const TypeFeature &Min ()
                {
#                   if 0
                        if ( !pvSetFeature.empty() ) {
                            if ( !pvSorted ) {
                                std::sort(pvSetFeature.begin(), pvSetFeature.end());
                                pvSorted =  true ;
                            }
                            return pvSetFeature [0];
                        } else 
                            return *&pvNull ;
#                   endif
                    return 0 ;
                }
                
                // get min
                const TypeFeature &Max ()
                {
#                   if 0
                        if ( !pvSetFeature.empty() ) {
                            if ( !pvSorted ) {
                                std::sort(pvSetFeature.begin(), pvSetFeature.end());
                                pvSorted =  true ;
                            }
                            return pvSetFeature [pvSetFeature.size() - 1];
                        } else 
                            return *&pvNull ;
#                   endif
                    return 0 ;
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
                        if ( pvSetFeature [index].min == pvSetFeature [index].max ) 
                            content << pvSetFeature [index].min ;
                        else 
                            content << "[" << pvSetFeature [index].min << ".." << pvSetFeature [index].max << "]";
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
            
                std::vector<MinMax<TypeFeature> >   pvSetFeature ;
                bool                                pvSorted ;
                TypeFeature                         pvNull ;
        };
    template <class SimpleType,class SearchType> 
        SimpleType MinimumVisible ( SimpleType pvLastApplied, SimpleType currVal )
        {
            
            // get a number big enough so that when added to currVal it does not disappear
            SimpleType  oldOffset = pvLastApplied > 0 ? pvLastApplied : -pvLastApplied ;
            SimpleType  keepOffset = pvLastApplied ;
            SearchType  rCurrVal = currVal ;
            
            // start from a reasonable value
            if ( pvLastApplied < std::numeric_limits<SearchType> ::epsilon() ) 
                pvLastApplied =  std::numeric_limits<SearchType> ::epsilon();
            
            // than investigate more
            while ( true ) {
                SearchType  addVal = rCurrVal + pvLastApplied ;
                if ( addVal != rCurrVal ) 
                    break ;
                pvLastApplied *= 2 ;
                SimpleType  newOffset = pvLastApplied > 0 ? pvLastApplied : -pvLastApplied ;
                if ( newOffset < oldOffset || isnan(pvLastApplied) || isnan(currVal + pvLastApplied) ) {
                    pvLastApplied =  keepOffset ;
                    break ;
                }
                oldOffset  =  newOffset ;
                keepOffset =  pvLastApplied ;
            }
            
            // for floats should be also different at log level
            if ( std::is_floating_point<SimpleType> ::value ) {
                SearchType  absVal = currVal + pvLastApplied > 0 ? currVal + pvLastApplied : -(currVal + pvLastApplied);
                SearchType  logVal = log(absVal);
                SearchType  newLogVal ;
                SearchType  oldAbsVal = absVal ;
                oldOffset =  pvLastApplied > 0 ? pvLastApplied : -pvLastApplied ;
                while ( (newLogVal = log(absVal)) == logVal ) {
                    pvLastApplied *= 2 ;
                    SimpleType  newOffset = pvLastApplied > 0 ? pvLastApplied : -pvLastApplied ;
                    absVal =  currVal + pvLastApplied > 0 ? currVal + pvLastApplied : -(currVal + pvLastApplied);
                    if ( newOffset < oldOffset || isnan(currVal + pvLastApplied) || absVal == oldAbsVal ) {
                        pvLastApplied =  keepOffset ;
                        break ;
                    }
                    oldOffset  =  newOffset ;
                    logVal     =  newLogVal ;
                    keepOffset =  pvLastApplied ;
                    oldAbsVal  =  absVal ;
                }
                
                // for small values multiply by 10 because of log
                if ( pvLastApplied < 1 && pvLastApplied > -1 ) {
                    pvLastApplied *= 10 ;
                    SimpleType  newOffset = pvLastApplied > 0 ? pvLastApplied : -pvLastApplied ;
                    absVal =  currVal + pvLastApplied > 0 ? currVal + pvLastApplied : -(currVal + pvLastApplied);
                    if ( newOffset < oldOffset || isnan(currVal + pvLastApplied) || absVal == oldAbsVal ) {
                        pvLastApplied =  keepOffset ;
                    }
                }
                if ( isnan(newLogVal) ) 
                    pvLastApplied =  keepOffset ;
            }
            
            // return val
            return pvLastApplied ;
        }
        
    template <class SimpleType> 
        
        class SimpleLimit : public FeatureLimit<SimpleType, SimpleType> {
            
            public :
            
                typedef SimpleType  TypeLimit ;
            
            public :
            
                SimpleLimit ( SimpleType min, SimpleType max )
                    : FeatureLimit<SimpleType, SimpleType> (min, max, min)
                {
                    this -> pvStep =  1 ;
                    pvLastApplied  =  (SimpleType)0 ;
                }
                
                SimpleLimit ( SimpleType min, SimpleType max, SimpleType step )
                    : FeatureLimit<SimpleType, SimpleType> (min, max, step)
                {
                    
                    // this->pvStep =  1 ;
                    pvLastApplied =  (SimpleType)0 ;
                }
                
                virtual ~SimpleLimit () {}
                
                // Random : get a random value
                virtual SimpleType Random () const
                {
                    return MTRandomValue<SimpleType> (this -> Min(), this -> Max() + 1);
                }
                
                // Vibrato with imposed value
                virtual SimpleType Vibrato ( SimpleType &currVal, SimpleType applied )
                {
                    pvLastApplied =  applied ;
                    
                    SimpleType  newVal = currVal + pvLastApplied ;
                    
                    if ( newVal > this -> Max() ) 
                        newVal =  this -> Min();
                    if ( newVal < this -> Min() ) 
                        newVal =  this -> Max() - this -> pvStep ;
                    return newVal ;
                }
                
                // Random : get a random value
                virtual SimpleType Vibrato ( SimpleType &currVal )
                {
                    char    step = 0 ;
                    int     typeStep = MTRandomValue<int> (0, 2);
                    
                    step =  MTRandomValue<char> (0, 2);
                    if ( step == 0 ) 
                        step =  -1 ;
                    pvLastApplied =  step * (typeStep == 0 ? Random() / 5 : this -> Step()) /*this->Step()*/ ;
                    if ( pvLastApplied == 0 ) 
                        pvLastApplied =  this -> Step();
                    if ( isnan(currVal + pvLastApplied) ) 
                        pvLastApplied =  -pvLastApplied ;
                    
                    // search a minimum value with visible effect
                    // double is too small for float and float is too big for double
                    step =  MTRandomValue<char> (0, 2);
                    if ( /* step == 1 ||*/ currVal >= std::numeric_limits<float> ::max() || currVal <= std::numeric_limits<float> ::lowest() ) 
                        pvLastApplied =  MinimumVisible<SimpleType, double> (pvLastApplied, currVal);
                    else 
                        pvLastApplied =  MinimumVisible<SimpleType, float> (pvLastApplied, currVal);
                    
                    // return it with bounds
                    return Vibrato(currVal, pvLastApplied);
                }
                
                // Content
                virtual EString Content () const
                {
                    EString content ;
                    
                    content << "(" << (long)this -> Min() << "," << (long)this -> Max() << "," << (long)this -> Step() << ")";
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
                
                virtual bool Final ()
                {
                    return false ;
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
                        EString error("Feature1: Individual Index Illegal access : ");
                        error << (int)index << " " << (int)Size();
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
                        EString error("FeatureCopy: Individual Index Illegal access : ");
                        error << (int)start << " " << (int)size << (int)Size() << "\n";
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
                    Self().Evaluated(false);
                    
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
                    Self().Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                // get feature limit of individual
                FeatureLimits &Limits ( unsigned int index )
                {
                    if ( index < Size() ) {
                        return *&pvLimits [index];
                    } else {
                        EString error("Limits: Individual Index Illegal access : ");
                        error << (int)index << " " << (int)Size() << "\n";
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
                    Self().Evaluated(false);
                    
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
                        EString error("Feature0: Individual Index Illegal access : ");
                        error << (int)index << " " << (int)Size() << "\n";
                        IndividualDisplayError(error);
                    }
                    
                    // we must evaluate individual again
                    Self().Evaluated(false);
                    
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
                    Self().Evaluated(false);
                    
                    // return object
                    return *this ;
                }
                
                // Evaluate individual
                virtual FeatureCost Evaluate ( Semaphop *pSemaphop = 0, bool withMessage = true )
                {
                    Self().Evaluated(true, pSemaphop);
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
                        return this -> Evaluate(pSemaphop);
                }
                
                // delayed eval
                virtual void DelayedEval ( bool withMessage = true )
                {
                    this -> Evaluate(pvpKeepSemaphop, withMessage);
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
                        pSemaphop -> PutRessource(1);
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
                
                virtual void VectContent ( std::vector<TypeParam> &vect )
                {
                    unsigned int    param ;
                    
                    vect.clear();
                    for ( param = 0 ; param < Size() ; param++ ) {
                        vect.push_back(Feature(param));
                    }
                }
                
                EString Content ()
                {
                    EString         content ;
                    unsigned int    param ;
                    
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
                    Self().Evaluated(false);
                }
                
                // RandomFill : random fill an individual
                virtual void FillMin ()
                {
                    unsigned int    index ;
                    
                    for ( index = 0 ; index < Size() ; index++ ) {
                        Feature(index, pvLimits [index].Min());
                    }
                    Self().Evaluated(false);
                }
                
                // RandomFill : random fill an individual
                virtual void FillZero ()
                {
                    unsigned int    index ;
                    
                    for ( index = 0 ; index < Size() ; index++ ) {
                        Feature(index, 0);
                    }
                    Self().Evaluated(false);
                }
                
                // RandomFill : random fill an individual
                virtual void FillOne ()
                {
                    unsigned int    index ;
                    
                    for ( index = 0 ; index < Size() ; index++ ) {
                        Feature(index, 1);
                    }
                    Self().Evaluated(false);
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
                    unsigned int                nbMerge = MTRandomValue<TypeFeature> (0, size);
                    
                    for ( index = 0 ; index < nbMerge ; index++ ) 
                        vectorg [MTRandomValue<int> (0, size)] =  MTRandomValue<int> (0, 2) ? 2 : 1 ;
                    /*for ( index = 0 ; index < size ; index++ )
                          if ( MTRandomValue<TypeFeature>(0, 2) )
                       vectorg [index] = 2 ;*/
                    for ( unsigned int param = 0 ; param < size ; param++ ) {
                        Feature(param, vectorg [param] == 1 ? father.Feature(param) : mother.Feature(param), vectorg [param] == 1 ? father.Limits(param) : mother.Limits(param));
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
                    int NB_PARAM = MTRandomValue<int> (1, Size() + 1);
                    
                    // For each param to be mutated
                    // ----------------------------
                    for ( int param = 0 ; param < NB_PARAM && param < MAX_MODIFICATION ; param++ ) {
                        
                        // Randomly choose this param index
                        // --------------------------------
                        int         lParamIndex = MTRandomValue<int> (0, Size());
                        
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
                
                // indicates if Vibrato useful on this individual
                virtual bool Vibrato ()
                {
                    return true ;
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
                    ((Individual<TypeFeature, FeatureLimits, FeatureCost> *)this) -> Affect((Individual<TypeFeature, FeatureLimits, FeatureCost> &)individual);
                }
                
                virtual void MergeFrom ( OrderedIndividual &father, OrderedIndividual &mother )
                {
                    unsigned int    size = father.Size();
                    
                    // select a merge point
                    if ( size < 3 ) 
                        return ;
                    
                    unsigned int            mergePoint = MTRandomValue<int> (1, size - 1);
                    unsigned int            indexInsert, index ;
                    std::set<TypeFeature>   alreadyPut ;
                    
                    // copy characteritics of mother until before merge point
                    for ( indexInsert = 0 ; indexInsert < mergePoint ; indexInsert++ ) {
                        this -> Feature(indexInsert, mother.Feature(indexInsert), mother.Limits(indexInsert));
                        alreadyPut.insert(mother.Feature(indexInsert));
                    }
                    
                    // then take characteristics of mother taking into account father order
                    for ( index = 0 ; index < size ; index++ ) {
                        if ( alreadyPut.find(father.Feature(index)) == alreadyPut.end() ) {
                            this -> Feature(indexInsert++, father.Feature(index), father.Limits(index));
                            
                            // alreadyPut.insert(father.Feature(index));
#                           if 0
                                if ( this -> Feature(index) == 0 ) {
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
                    int NB_PARAM = MTRandomValue<int> (1, (this -> Size() + 1) / 2);
                    
                    // For each param to be mutated
                    // ----------------------------
                    for ( int param = 0 ; param < NB_PARAM && param < MAX_MODIFICATION ; param++ ) {
                        bool            exchange = false ;
                        unsigned int    nbTry = 0 ;
                        while ( !exchange && nbTry <= (unsigned int)NB_MAX_TRY_IND ) {
                            
                            // Randomly choose parameters index
                            // --------------------------------
                            int lParamIndex = MTRandomValue<int> (0, this -> Size());
                            int lParamIndex1 = lParamIndex ;
                            if ( this -> Size() <= 1 ) 
                                return ;
                            while ( lParamIndex1 == lParamIndex ) 
                                lParamIndex1 =  MTRandomValue<int> (0, this -> Size());
                            
                            // if exchange is allowed do it
                            if ( this -> CanExchange(lParamIndex, lParamIndex1) ) {
                                TypeFeature lKeepValue = this -> Feature(lParamIndex);
                                this -> Feature(lParamIndex, this -> Feature(lParamIndex1));
                                this -> Feature(lParamIndex1, lKeepValue);
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
