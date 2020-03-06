//****************************************************************************
// FILE     : testu.cc	   (ERL) / (FR)
// FUNCTION :
//
//*****************************************************************************
//*****************************************************************************
// Include Directives
//*****************************************************************************
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "erlstring.h"
#include "optimgenetic.h"
#include "optimalgo.h"
#include "individual.h"
#include "genmultithread.h"
#include <vector>

//*****************************************************************************
// Define
//*****************************************************************************
#define SQUARE(x) ( (x)*(x))
#define DIM_COEFF 100
#define NOT_AT_END_COEFFS(pCoeffs, coeffs) pCoeffs - coeffs < 2 * DIM_COEFF && (*pCoeffs != 0 || *(pCoeffs + 1) != 0)

//*****************************************************************************
// Global Variables
//*****************************************************************************
static double   parametersVal [DIM_COEFF];

//*****************************************************************************
// Class Declaration
//*****************************************************************************
template <class TypeFeature> 
    
    class CostFunction {
        
        public :
        
            // constructor
            CostFunction ( TypeFeature coeffs [] )
            {
                TypeFeature *pCoeffs ;
                TypeFeature *pDestCoeffs ;
                
                for ( pCoeffs     = coeffs, pDestCoeffs = pvCoeffs ; NOT_AT_END_COEFFS(pCoeffs, coeffs) ; pCoeffs                      += 2, pDestCoeffs += 2 ) {
                    *(pDestCoeffs)     =  *pCoeffs ;
                    *(pDestCoeffs + 1) =  *(pCoeffs + 1);
                }
                *pDestCoeffs++ =  0 ;
                *pDestCoeffs   =  0 ;
            }
            
            virtual double operator() ( double *param )
            {
                return 0 ;
            }
            
            // get coeffs
            virtual const TypeFeature *Coeffs ()
            {
                return pvCoeffs ;
            }
        
        private :
        
            TypeFeature pvCoeffs [2 * DIM_COEFF];
    };
static CostFunction<int>        *pCostFunction = 0 ;
static CostFunction<double>     *pCostFunction1 = 0 ;

template <class TypeFeature> 
    
    class Individuals : public Individual<double, SimpleLimit<double> , double> {
        
        public :
        
            Individuals ()
                : Individual(),  pCostFunction(0)
            {}
            
            // Evaluate individual 
            virtual double Evaluate ( Semaphop *pSemaphop, bool withMessage )
            {
                if ( !Evaluated() ) {
                    double          *param = new double [Size() + 1];
                    unsigned int    index ;
                    for ( index = 0 ; index < Size() ; index++ ) 
                        param [index] =  Feature(index);
                    param [index] =  0 ;
                    pvCost        =  (*pCostFunction)(param);
                    delete [] param ;
                }
                if ( withMessage ) 
                    Evaluated(true, pSemaphop);
                else 
                    Evaluated(true, 0);
                return pvCost ;
            }
            
            void SetCostFunction ( CostFunction<TypeFeature> *parampCostFunction )
            {
                pCostFunction =  parampCostFunction ;
            }
            
            Individuals ( const Individual<double, SimpleLimit<double> , double> &src )
                : Individual<double, SimpleLimit<double> , double> ()
            {
                Affect(src);
            }
            
            Individuals &operator= ( const Individual<double, SimpleLimit<double> , double> &src )
            {
                Affect(src);
                return *this ;
            }
            
            virtual void Affect ( const Individual<double, SimpleLimit<double> , double> &src )
            {
                pCostFunction =  ((Individuals &)src).pCostFunction ;
                Individual<double, SimpleLimit<double> , double> ::Affect(src);
            }
            
            Individuals &Self ()
            {
                return (Individuals &)*this ;
            }
            
            CostFunction<TypeFeature>   *pCostFunction ;
    };

#define NurseryAncestor Nursery<Individuals <TypeFeature>>

template <class TypeFeature,int min,int max> 
    
    class NurseryCost : public NurseryAncestor {
        
        public :
        
            NurseryCost ( CostFunction<TypeFeature> *pCostFunction )
                : pvpCostFunction(pCostFunction)
            {}
            
            virtual ~NurseryCost () {}
            
            NurseryCost &Step ( double step )
            {
                pvStep =  step ;
                return *this ;
            }
            
            NurseryCost &Evaluator ( CostFunction<TypeFeature> *pCostFunction )
            {
                pvpCostFunction =  pCostFunction ;
                return *this ;
            }
            
            NurseryCost &NbParam ( unsigned int nbParam )
            {
                pvNbParam =  nbParam ;
                return *this ;
            }
            
            virtual Individuals<TypeFeature> Create ()
            {
                Individuals<TypeFeature>    individual ;
                unsigned int                size = pvNbParam ;
                
                individual.SetCostFunction(pvpCostFunction);
                if ( size < 1 ) 
                    size =  1 ;
                individual.Limits(size - 1, SimpleLimit<double> (min, max));
                for ( int i = 0 ; i < size ; i++ ) {
                    individual.Limits()[i].Step(pvStep);
                }
                return individual ;
            }
        
        private :
        
            double                      pvStep = 1 ;
            unsigned int                pvNbParam = 100 ;
            CostFunction<TypeFeature>   *pvpCostFunction ;
    };

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class SquareFunction : public CostFunction<int> {
    
    public :
    
        // constructor
        SquareFunction ( int coeffs [] )
            : CostFunction<int> (coeffs)
        {}
        
        virtual double operator() ( double param [] )
        {
            const int   *pCoeffs ;
            double      *pParam = param ;
            double      sum = 0 ;
            
            for ( pCoeffs = Coeffs() ; NOT_AT_END_COEFFS(pCoeffs, Coeffs()) ; pCoeffs += 2, pParam++ ) {
                if ( *pCoeffs != 0 ) {
                    sum += double(*(pCoeffs + 1)) * SQUARE(*pParam - *pCoeffs);
                } else 
                    sum += double(*(pCoeffs + 1));
            }
            
            // return result
            return sum ;
        }
};

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class InvFunction : public CostFunction<int> {
    
    public :
    
        // constructor
        InvFunction ( int coeffs [] )
            : CostFunction<int> (coeffs)
        {}
        
        virtual double operator() ( double param [] )
        {
            const int   *pCoeffs ;
            double      *pParam = param ;
            double      sum = 0 ;
            
            for ( pCoeffs = Coeffs() ; NOT_AT_END_COEFFS(pCoeffs, Coeffs()) ; pCoeffs += 2, pParam++ ) {
                double  diff = *pParam - double(*pCoeffs);
                if ( diff < 0.0 ) 
                    diff =  -1 * diff ;
                sum += diff > 1.0 ? floor(*(pCoeffs + 1) / diff) : *(pCoeffs + 1);
            }
            
            // return result
            return sum ;
        }
};

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class FujiFunction : public CostFunction<int> {
    
    public :
    
        // constructor
        FujiFunction ( int coeffs [] )
            : CostFunction<int> (coeffs)
        {}
        
        virtual double operator() ( double param [] )
        {
            const int   *pCoeffs ;
            double      *pParam = param ;
            double      mult = 1 ;
            int         zeroSetter = 1 ;
            
            for ( pCoeffs = Coeffs() ; NOT_AT_END_COEFFS(pCoeffs, Coeffs()) ; pCoeffs += 2, pParam++ ) {
                double  diff = *pParam - double(*pCoeffs);
                if ( diff < 0.0 ) 
                    diff =  -1 * diff ;
                mult *= diff > 1.0 ? diff : 1.0 ;
                if ( diff > Coeffs()[1] / 2 ) 
                    zeroSetter =  0 ;
            }
            mult =  zeroSetter * Coeffs()[1] / mult ;
            
            // return result
            return mult ;
        }
};

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class SatFunction : public CostFunction<double> {
    
    public :
    
        // constructor
        SatFunction ( double coeffs [] )
            : CostFunction<double> (coeffs)
        {}
        
        virtual double operator() ( double param [] )
        {
            const double    *pCoeffs ;
            double          *pParam = param ;
            double          mult = 0 ;
            int             zeroSetter = 1 ;
            int             pos = 0 ;
            bool            outOfRange (false) ;
            
            for ( pCoeffs = Coeffs() ; NOT_AT_END_COEFFS(pCoeffs, Coeffs()) ; pCoeffs += 2, pParam++, pos++ ) {
                if ( pos < 3 ) {
                    double  diff = *pParam - double(*pCoeffs);
                    diff =  SQUARE(diff);
                    mult += diff ;
                } else {
                    double  dist = sqrt(mult);
                    double  inter(*pParam);
                    
                    // inter =  0 ;
                    dist += inter ;
                    mult =  dist - double(*pCoeffs);
                    if ( !(*pParam <= 500 && *pParam >= -500) ) {
                        outOfRange =  true ;
                    }
                }
            }
            if ( mult > 0 ) 
                mult =  -1 * mult ;
            if ( outOfRange ) 
                mult =  std::numeric_limits<double> ::lowest();
            return mult ;
        }
};

//*****************************************************************************
// Class Declaration
//*****************************************************************************
template <class TypeFeature> 
    
    class CompositeCost : public CostFunction<TypeFeature> {
        
        public :
        
            // constructor
            CompositeCost ( TypeFeature coeffs [] )
                : CostFunction<TypeFeature> (coeffs)
            {}
            
            // SetFunctins
            void SetFunctions ( CostFunction<TypeFeature> *costFunctions [] )
            {
                CostFunction<TypeFeature>   **pCostFunctions = costFunctions ;
                CostFunction<TypeFeature>   **pDestCostFunctions = pvCostFunctions ;
                
                while ( *pCostFunctions && pDestCostFunctions - pvCostFunctions < DIM_COEFF ) 
                    *pDestCostFunctions++ =  *pCostFunctions++ ;
                *pDestCostFunctions =  0 ;
            }
            
            virtual double operator() ( double param [] )
            {
                double                      sum = 0 ;
                CostFunction<TypeFeature>   **pCostFunctions ;
                
                for ( pCostFunctions = pvCostFunctions ; *pCostFunctions && pCostFunctions - pvCostFunctions < DIM_COEFF ; pCostFunctions++ ) {
                    double  result = (**pCostFunctions)(param);
                    sum += result ;
                }
                
                // return result
                return sum ;
            }
        
        private :
        
            CostFunction<TypeFeature>   *pvCostFunctions [DIM_COEFF];
    };

//*****************************************************************************
// Function Definition
//*****************************************************************************
template <class TypeRef,class TypeIndividual> 
    double SquareDist ( TypeRef coeffs [], TypeIndividual &individual )
    {
        const TypeRef   *pCoeffs ;
        double          sum = 0 ;
        int             indexIndividual ;
        
        for ( pCoeffs         = coeffs, indexIndividual = 0 ; *pCoeffs ; pCoeffs += 2, indexIndividual++ ) {
            double  diff = individual.Feature(indexIndividual) - double(*pCoeffs);
            sum += SQUARE(diff);
        }
        
        // return result
        return sum ;
    }
    
#define MIN_VAL 0
#define MAX_VAL 30000 
#define LocalNursery NurseryCost<int,MIN_VAL, MAX_VAL>
#define LocalNursery1 NurseryCost<double,MIN_VAL, MAX_VAL>
#define LocalNurseryFeature NurseryCost<TypeFeature,MIN_VAL, MAX_VAL>
#define LocalNurseryt typename NurseryCost<int,MIN_VAL, MAX_VAL>
#define LocalNursery1t typename NurseryCost<double,MIN_VAL, MAX_VAL>
#define LocalNurseryFeaturet typename NurseryCost<TypeFeature,MIN_VAL, MAX_VAL>

// template <class TypeFeature> 
//     typedef typename NurseryCost<TypeFeature, MIN_VAL, MAX_VAL> ::TypeIndividual    AnIndividualType ;
template <class TypeFeature> 
    void Optimize ( OptimGenetic<LocalNurseryFeaturet::TypeIndividual> *pOptimGenetic, unsigned int nbParameters, TypeFeature coeffs []
        , LocalNurseryFeaturet::TypeIndividual &bestIndividual, bool precise = false )
    {
        unsigned long int                                               distTarget = std::numeric_limits<long int> ::max();
        unsigned int                                                    nbRun = 0 ;
        std::vector<LocalNurseryFeaturet::TypeIndividual::TypeParam>    result ;
        double                                                          oldScore = std::numeric_limits<double> ::lowest();
        LocalNurseryFeaturet::TypeIndividual                            currentIndividual ;
        
        // Genetic Algorithm
        while ( (nbRun == 0 || precise) && nbRun++ < 20 && oldScore < -0.5 ) {
            
            // --
            pOptimGenetic->SetRandomPopulation();
            (*pOptimGenetic)[0]->FillZero();
            if ( nbRun > 1 ) 
                pOptimGenetic->Upload(1, result);
            
            // create an optimisation object
            // suppress clone searching
            pOptimGenetic->SuppressClone(false).Run(true);
            
            // compute distance to correct solution and display it
            {
                currentIndividual =  pOptimGenetic->BestIndividual();
                EString message("\nGenetic Algorithm \n");
                write(2, message.c_str(), message.length());
                EString dist("    Distance to best individual : ");
                distTarget =  (unsigned long int)(SquareDist<TypeFeature, LocalNurseryFeaturet::TypeIndividual> (coeffs, currentIndividual));
                dist << (double)sqrt(distTarget) << " \n";
                write(2, dist.c_str(), dist.length());
                dist =  "";
                dist << "    Best top : " << pOptimGenetic->OptimCost() << "\n";
                write(2, dist.c_str(), dist.length());
                message =  "";
                message << "    Nb Simulated : " << pOptimGenetic->SimulatedVectors() << "\n";
                write(2, message.c_str(), message.length());
                message =  EString("   ") + currentIndividual.Content();
                write(2, message.c_str(), message.length());
                
                // store result
                if ( currentIndividual.Cost() > oldScore ) {
                    result.clear();
                    for ( unsigned index = 0 ; index < currentIndividual.Feature().size() ; index++ ) {
                        auto val = currentIndividual.Feature(index);
                        result.push_back(val);
                    }
                    oldScore       =  currentIndividual.Cost();
                    bestIndividual =  currentIndividual ;
                } else 
                    break ;
            }
        }
    }
    
template <class TypeFeature> 
    void DisplayCoeffs ( TypeFeature coeffs [] )
    {
        EString     message("Correct Values : ");
        TypeFeature *pCoeffs ;
        
        for ( pCoeffs = coeffs ; NOT_AT_END_COEFFS(pCoeffs, coeffs) ; pCoeffs += 2 ) {
            message << *pCoeffs << " ";
        }
        message << "\n";
        write(2, message.c_str(), message.length());
    }
    
//*****************************************************************************
// Main
//*****************************************************************************
int main ()
{
    printf("Hello\n");
    memset((char *)parametersVal, 0, DIM_COEFF * sizeof(double));
    
    EString header("\n---------------------\n\n");
    
    {
        int tab [102];
        for ( unsigned int index = 0 ; index < 102 ; index++ ) 
            tab [index] =  0 ;
        for ( unsigned int index = 0 ; index < 100000 ; index++ ) 
            tab [MTRandomValue<int> (0, 100)]++ ;
        for ( unsigned int index = 0 ; index < 102 ; index++ ) {
            printf("%i -> %i", index, tab [index]);
            printf("\n");
        }
    }
    
    int             squareCoeffs [] = { 250, -5, 600, -50, 0, 1000, 0, 0 };
    SquareFunction  squareFunction (squareCoeffs) ;
    
    pCostFunction =  &squareFunction ;
    
    double      satCoeff1 [] = { 20000, 0, 1, 0, 1, 0, 16110.9456, 0, 0, 0 };
    SatFunction satFunction1 (satCoeff1) ;
    
    pCostFunction1 =  &satFunction1 ;
    
    LocalNursery                                    localNursery (pCostFunction) ;
    OptimGenetic<LocalNursery::TypeIndividual>      optimGenetic(localNursery /* the nursery */ , 200 /* populationSize */ , 30 /* nbMutations */ 
        , 3000000 /* maxgenerations */ , 1000 /* max stable generation*/ , 100000000 /* max simulated vectors */ , 1000000 /* max steady vectors */ 
        , 10 /* pcent of top */ );
    OptimGenetic<LocalNursery::TypeIndividual>      optimGeneticp(localNursery /* the nursery */ , 500 /* populationSize */ , 30 /* nbMutations */ 
        , 3000000 /* maxgenerations */ , 1000 /* max stable generation*/ , 100000000 /* max simulated vectors */ , 1000000 /* max steady vectors */ 
        , 10 /* pcent of top */ );
    LocalNursery1                                   localNursery1 (pCostFunction1) ;
    OptimGenetic<LocalNursery1::TypeIndividual>     optimGenetic1(localNursery1 /* the nursery */ , 1000 /* populationSize */ , 30 /* nbMutations */ 
        , 3000000 /* maxgenerations */ , 1000 /* max stable generation*/ , 100000000 /* max simulated vectors */ , 1000000 /* max steady vectors */ 
        , 10 /* pcent of top */ );
    
    // optimize with square (2 parameters
    {
        int             squareCoeffs [] = { 250, -5, 600, -50, 0, 1000, 0, 0 };
        SquareFunction  squareFunction (squareCoeffs) ;
        pCostFunction =  &squareFunction ;
        EString message ;
        message << header << "Square Optimisation 2 parameters (best 1000) \n" << header ;
        write(2, message, message.length());
        DisplayCoeffs<int> (squareCoeffs);
        LocalNursery::TypeIndividual    bestIndividual ;
        localNursery.Evaluator(pCostFunction).NbParam(2);
        Optimize<int> (&optimGenetic, 2, squareCoeffs, bestIndividual);
    }
    
    // optimize with square
    {
        int             squareCoeffs [] = { 250, -5, 600, -50, 200, -200, 8000, -10, 0, 1000, 0, 0 };
        SquareFunction  squareFunction (squareCoeffs) ;
        pCostFunction =  &squareFunction ;
        EString message ;
        message << header << "Square Optimisation 4 parameters (best 1000)\n" << header ;
        write(2, message, message.length());
        DisplayCoeffs<int> (squareCoeffs);
        LocalNursery::TypeIndividual    bestIndividual ;
        localNursery.Evaluator(pCostFunction).NbParam(4);
        Optimize<int> (&optimGenetic, 4, squareCoeffs, bestIndividual);
    }
    
    // optimize inv functions
    {
        
        // set cost function and run
        int                 invCoeffs1 [] = { 3300, 100, 1600, 100, 1200, 100, 8000, 100, 0, 0 };
        InvFunction         invFunction1 (invCoeffs1) ;
        int                 invCoeffs2 [] = { 3050, 75, 1450, 75, 1050, 75, 7850, 75, 0, 0 };
        InvFunction         invFunction2 (invCoeffs2) ;
        int                 invCoeffs3 [] = { 3550, 75, 1750, 75, 1350, 75, 8150, 75, 0, 0 };
        InvFunction         invFunction3 (invCoeffs3) ;
        CostFunction<int>   *costFunctions []
            = {(CostFunction<int> *)&invFunction1, (CostFunction<int> *)&invFunction2, (CostFunction<int> *)&invFunction3, (CostFunction<int> *)0 };
        int                 emptyCoeff [] = { 0, 0 };
        CompositeCost<int>  compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction =  &compositeCost ;
        EString message ;
        message << header << "Inv Optimisation 4 parameters (best 400)\n" << header ;
        write(2, message, message.length());
        DisplayCoeffs<int> (invCoeffs1);
        LocalNursery::TypeIndividual    bestIndividual ;
        localNursery.Evaluator(pCostFunction).NbParam(4);
        Optimize<int> (&optimGenetic, 4, invCoeffs1, bestIndividual);
    }
    
    // optimize fuji function (4 parameters) 
    {
        int                 fujiCoeffs1 [] = { 5000, 1000, 5000, 0, 5000, 0, 5000, 0, 0, 0 };
        FujiFunction        fujiFunction1 (fujiCoeffs1) ;
        int                 fujiCoeffs2 [] = { 4000, 500, 4000, 0, 4000, 0, 4000, 0, 0, 0 };
        FujiFunction        fujiFunction2 (fujiCoeffs2) ;
        int                 fujiCoeffs3 [] = { 3500, 500, 3500, 0, 3500, 0, 3500, 0, 0, 0 };
        FujiFunction        fujiFunction3 (fujiCoeffs3) ;
        int                 fujiCoeffs4 [] = { 6000, 500, 6000, 0, 6000, 0, 6000, 0, 0, 0 };
        FujiFunction        fujiFunction4 (fujiCoeffs4) ;
        CostFunction<int>   *costFunctions []
            = {(CostFunction<int> *)&fujiFunction1, (CostFunction<int> *)&fujiFunction2, (CostFunction<int> *)&fujiFunction3, (CostFunction<int> *)&fujiFunction4
                , (CostFunction<int> *)0 };
        int                 emptyCoeff [] = { 0, 0 };
        CompositeCost<int>  compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction =  &compositeCost ;
        EString message ;
        message << header << "Fuji Optimisation 4 parameters (best 1000) \n" << header ;
        write(2, message, message.length());
        DisplayCoeffs<int> (fujiCoeffs1);
        LocalNursery::TypeIndividual    bestIndividual ;
        localNursery.Evaluator(pCostFunction).NbParam(4);
        Optimize<int> (&optimGeneticp, 4, fujiCoeffs1, bestIndividual);
    }
    
    // optimize inv functions 24  parameters
    {
        
        // set cost function and run
        int                 invCoeffs1 []
            = { 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600
                , 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 0, 0 };
        InvFunction         invFunction1 (invCoeffs1) ;
        int                 invCoeffs2 []
            = { 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75
                , 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 0, 0 };
        InvFunction         invFunction2 (invCoeffs2) ;
        int                 invCoeffs4 []
            = { 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75
                , 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 0, 0 };
        InvFunction         invFunction4 (invCoeffs4) ;
        int                 invCoeffs3 []
            = { 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75
                , 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 0, 0 };
        InvFunction         invFunction3 (invCoeffs3) ;
        CostFunction<int>   *costFunctions []
            = {(CostFunction<int> *)&invFunction1, (CostFunction<int> *)&invFunction2, (CostFunction<int> *)&invFunction3, (CostFunction<int> *)&invFunction4
                , (CostFunction<int> *)0 };
        int                 emptyCoeff [] = { 0, 0 };
        CompositeCost<int>  compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction =  &compositeCost ;
        EString message ;
        message << header << "Inv Optimisation with 24 parameters (best 2400)\n" << header ;
        write(2, message, message.length());
        DisplayCoeffs<int> (invCoeffs1);
        LocalNursery::TypeIndividual    bestIndividual ;
        localNursery.Evaluator(pCostFunction).NbParam(24);
        Optimize<int> (&optimGenetic, 24, invCoeffs1, bestIndividual);
    }
    localNursery1.Step(0.1);
    
    // optimize sat function with 4 parameters
    {
        double                  satCoeff1 [] = { 25000, 0, 1, 0, 1, 0, 20661.9739, 0, 0, 0 };
        SatFunction             satFunction1 (satCoeff1) ;
        double                  satCoeff2 [] = { 1, 0, 14142.14, 0, 14142.14, 0, 15904.3584, 0, 0, 0 };
        SatFunction             satFunction2 (satCoeff2) ;
        double                  satCoeff3 [] = { -14142.14, 0, 14142.14, 0, 15000, 0, 24798.9619, 0, 0, 0 };
        SatFunction             satFunction3 (satCoeff3) ;
        double                  satCoeff4 [] = { 14142.14, 0, 13000, 0, 20000, 0, 21329.0983, 0, 0, 0 };
        SatFunction             satFunction4 (satCoeff4) ;
        double                  satCoeff5 [] = { 20000.14, 0, 20000, 0, 20000, 0, 27780.2652, 0, 0, 0 };
        SatFunction             satFunction5 (satCoeff5) ;
        CostFunction<double>    *costFunctions []
            = {(CostFunction<double> *)&satFunction1, (CostFunction<double> *)&satFunction2, (CostFunction<double> *)&satFunction3
                , (CostFunction<double> *)&satFunction4, (CostFunction<double> *)&satFunction5, (CostFunction<double> *)0 };
        double                  emptyCoeff [] = { 0, 0, 0, 0 };
        CompositeCost<double>   compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction1 =  &compositeCost ;
        
        // comopute
        EString message ;
        message << header << "Sat Optimisation with 4 parameters \n" << header ;
        write(2, message, message.length());
        double  corrCoeff1 [] = { 5000, 0, 4012.2, 0, 3008, 0, 43.25, 0, 0, 0 };
        DisplayCoeffs<double> (corrCoeff1);
        LocalNursery1::TypeIndividual   bestIndividual ;
        localNursery1.Evaluator(pCostFunction1).NbParam(4);
        Optimize<double> (&optimGenetic1, 4, corrCoeff1, bestIndividual, true);
        
        // display
        double  param [4];
        for ( unsigned index = 0 ; index < 4 ; index++ ) 
            param [index] =  bestIndividual.Feature(index);
        message =  "\n";
        write(2, message.c_str(), message.length());
        DisplayCoeffs<double> (corrCoeff1);
        message =  "";
        message << "\nResult : " << "\n\n";
        write(2, message.c_str(), message.length());
        message =  "";
        message << bestIndividual.Content() << "\n";
        message << "Difference of istance to Sat1 : " << EString(satFunction1(param)) << "\n";
        message << "Difference of Distance to Sat2 : " << EString(satFunction2(param)) << "\n";
        message << "Difference of Distance to Sat3 : " << EString(satFunction3(param)) << "\n";
        message << "Difference of Distance to Sat4 : " << EString(satFunction4(param)) << "\n";
        message << "Difference of Distance to Sat5 : " << EString(satFunction5(param)) << "\n";
        write(2, message.c_str(), message.length());
    }
    return 0 ;
}
