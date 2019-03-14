//*****************************************************************************
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

//*****************************************************************************
// Define
//*****************************************************************************
#define SQUARE(x) ( (x)*(x))
#define DIM_COEFF 100
#define NOT_AT_END_COEFFS(pCoeffs, coeffs) pCoeffs - coeffs < 2 * DIM_COEFF && (*pCoeffs != 0 || *(pCoeffs + 1) != 0)

//*****************************************************************************
// Global Variables
//*****************************************************************************
static double       parametersVal [DIM_COEFF];
class CostFunction ;
static CostFunction *pCostFunction = 0 ;

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class CostFunction {
    
    public :
    
        // constructor
        CostFunction ( int coeffs [] )
        {
            int *pCoeffs ;
            int *pDestCoeffs ;
            
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
        const int *Coeffs ()
        {
            return pvCoeffs ;
        }
    
    private :
    
        int pvCoeffs [2 * DIM_COEFF];
};

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
        
        void SetCostFunction ( CostFunction *parampCostFunction )
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
        
        CostFunction    *pCostFunction ;
};

template <int min,int max,int step> 
    
    class NurseryCost : public Nursery<Individuals> {
        
        public :
        
            NurseryCost ( CostFunction *pCostFunction, unsigned int nbParam )
                : pvNbParam(nbParam),  pvpCostFunction(pCostFunction)
            {}
            
            virtual ~NurseryCost () {}
            
            virtual Individuals Create ()
            {
                Individuals     individual ;
                unsigned int    size = pvNbParam ;
                
                individual.SetCostFunction(pvpCostFunction);
                if ( size < 1 ) 
                    size =  1 ;
                individual.Limits(size - 1, SimpleLimit<double> (min, max));
                return individual ;
            }
        
        private :
        
            unsigned int    pvNbParam ;
            CostFunction    *pvpCostFunction ;
    };

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class SquareFunction : public CostFunction {
    
    public :
    
        // constructor
        SquareFunction ( int coeffs [] )
            : CostFunction(coeffs)
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

class InvFunction : public CostFunction {
    
    public :
    
        // constructor
        InvFunction ( int coeffs [] )
            : CostFunction(coeffs)
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

class FujiFunction : public CostFunction {
    
    public :
    
        // constructor
        FujiFunction ( int coeffs [] )
            : CostFunction(coeffs)
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

class CompositeCost : public CostFunction {
    
    public :
    
        // constructor
        CompositeCost ( int coeffs [] )
            : CostFunction(coeffs)
        {}
        
        // SetFunctins 
        void SetFunctions ( CostFunction *costFunctions [] )
        {
            CostFunction    **pCostFunctions = costFunctions ;
            CostFunction    **pDestCostFunctions = pvCostFunctions ;
            
            while ( *pCostFunctions && pDestCostFunctions - pvCostFunctions < DIM_COEFF ) 
                *pDestCostFunctions++ =  *pCostFunctions++ ;
            *pDestCostFunctions =  0 ;
        }
        
        virtual double operator() ( double param [] )
        {
            double          sum = 0 ;
            CostFunction    **pCostFunctions ;
            
            for ( pCostFunctions = pvCostFunctions ; *pCostFunctions && pCostFunctions - pvCostFunctions < DIM_COEFF ; pCostFunctions++ ) 
                sum += (**pCostFunctions)(param);
            
            // return result
            return sum ;
        }
    
    private :
    
        CostFunction    *pvCostFunctions [DIM_COEFF];
};

//*****************************************************************************
// Function Definition
//*****************************************************************************
template <class TypeFeature,class FeatureLimits> 
    double SquareDist ( int coeffs [], Individual<TypeFeature, FeatureLimits, double> &individual )
    {
        const int   *pCoeffs ;
        double      sum = 0 ;
        int         indexIndividual ;
        
        for ( pCoeffs         = coeffs, indexIndividual = 0 ; *pCoeffs ; pCoeffs += 2, indexIndividual++ ) {
            double  diff = individual.Feature(indexIndividual) - double(*pCoeffs);
            sum += SQUARE(diff);
        }
        
        // return result
        return sum ;
    }
    
void Optimize ( unsigned int nbParameters, int coeffs [] )
{
#   if 0
        
        // start with a trivial case with one square fonction max is 1000
        // local gradient
        {
            
            // create an optimisation object
            TestuCOptimisation  cOptimisation(&testuCOptimSim);
            cOptimisation.InitializeParameters(nbParameters, 1, 1, 1);
            if ( !cOptimisation.getBasisOptimisationParameters(COptimisation::LOCAL_GRADIENT) ) {
                EString error("Parameters out of range \n");
                write(2, error.c_str(), error.length());
                return ;
            }
            
            // run
            cOptimisation.run();
            
            // compute distance to correct solution and display it
            {
                CIndividual & bestIndividual =  cOptimisation.BestIndividual();
                EString message("Local Gradient \n");
                write(2, message.c_str(), message.length());
                EString dist("    Square of Distance to best individual : ");
                dist << int(SquareDist(coeffs, bestIndividual)) << "\n";
                write(2, dist.c_str(), dist.length());
                dist =  "";
                dist << "    Best top : " << bestIndividual.OptimCost() << "\n";
                write(2, dist.c_str(), dist.length());
                message =  "";
                message << "    Nb Simulated : " << cOptimisation.NbSimulatedVectors() << "\n";
                write(2, message.c_str(), message.length());
                message =  EString("   ") + bestIndividual.Content();
                write(2, message.c_str(), message.length());
            }
        }
        
        // Simulated annealing
        {
            TestuCOptimSim  testuCOptimSim ;
            TestuCCoreSim   testuCCoreSim ;
            
            // initialize vars
            testuCOptimSim.setState(COptimSim::STATE_STARTED);
            testuCOptimSim.enableNextStep();
            testuCOptimSim.setCoreSim(&testuCCoreSim);
            
            // create an optimisation object
            TestuCOptimisation  cOptimisation(&testuCOptimSim);
            cOptimisation.InitializeParameters(nbParameters, 1, 1, 1);
            if ( !cOptimisation.getBasisOptimisationParameters(COptimisation::SIMULATED_ANNEALING) ) {
                EString error("Parameters out of range \n");
                write(2, error.c_str(), error.length());
                return ;
            }
            
            // run
            cOptimisation.run();
            
            // compute distance to correct solution and display it
            {
                CIndividual & bestIndividual =  cOptimisation.BestIndividual();
                EString message("Simulated Annealing \n");
                write(2, message.c_str(), message.length());
                EString dist("    Square of Distance to best individual : ");
                dist << int(SquareDist(coeffs, bestIndividual));
                dist << " \n";
                write(2, dist.c_str(), dist.length());
                dist =  "";
                dist << "    Best top : " << bestIndividual.OptimCost() << "\n";
                write(2, dist.c_str(), dist.length());
                message =  "";
                message << "    Nb Simulated : " << cOptimisation.NbSimulatedVectors() << "\n";
                write(2, message.c_str(), message.length());
                message =  EString("   ") + bestIndividual.Content();
                write(2, message.c_str(), message.length());
            }
        }
#   endif
    
    // Genetic Algorithm
    {
#       define LocalNursery NurseryCost<0, 10000, 1>
        LocalNursery                                localNursery (pCostFunction, nbParameters) ;
        OptimGenetic<LocalNursery::TypeIndividual>  optimGenetic(localNursery /* the nursery */ , 200 /* populationSize */ , 30 /* nbMutations */ 
            , 3000000 /* maxgenerations */ , 1000 /* max stable generation*/ , 100000000 /* max simulated vectors */ , 1000000 /* max steady vectors */ 
            , 10 /* pcent of top */ );
        
        // create an optimisation object
        // suppress clone searching
        optimGenetic.SuppressClone(false).Run();
        
        // compute distance to correct solution and display it
        {
            LocalNursery::TypeIndividual & bestIndividual =  optimGenetic.BestIndividual();
            EString message("\nGenetic Algorithm \n");
            write(2, message.c_str(), message.length());
            EString dist("    Square of Distance to best individual : ");
            dist << int(SquareDist<LocalNursery::TypeIndividual::TypeParam, LocalNursery::TypeIndividual::TypeLimit> (coeffs, bestIndividual)) << " \n";
            write(2, dist.c_str(), dist.length());
            dist =  "";
            dist << "    Best top : " << optimGenetic.OptimCost() << "\n";
            write(2, dist.c_str(), dist.length());
            message =  "";
            message << "    Nb Simulated : " << optimGenetic.SimulatedVectors() << "\n";
            write(2, message.c_str(), message.length());
            message =  EString("   ") + bestIndividual.Content();
            write(2, message.c_str(), message.length());
        }
    }
}

void DisplayCoeffs ( int coeffs [] )
{
    EString message("Correct Values : ");
    int     *pCoeffs ;
    
    for ( pCoeffs = coeffs ; NOT_AT_END_COEFFS(pCoeffs, coeffs) ; pCoeffs += 2 ) {
        message << (int)(*pCoeffs) << " ";
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
            tab [MTRandomValue<int>(0, 100)]++ ;
        for ( unsigned int index = 0 ; index < 102 ; index++ ) {
            printf("%i -> %i", index, tab [index]);
            printf("\n");
        }
    }
    
    // optimize with square (2 parameters
    {
        int             squareCoeffs [] = { 250, -5, 600, -50, 0, 1000, 0, 0 };
        SquareFunction  squareFunction (squareCoeffs) ;
        pCostFunction =  &squareFunction ;
        EString message ;
        message << header << "Square Optimisation 2 parameters (best 1000) \n" << header ;
        write(2, message, message.length());
        DisplayCoeffs(squareCoeffs);
        Optimize(2, squareCoeffs);
    }
    
    // optimize with square
    {
        int             squareCoeffs [] = { 250, -5, 600, -50, 200, -200, 8000, -10, 0, 1000, 0, 0 };
        SquareFunction  squareFunction (squareCoeffs) ;
        pCostFunction =  &squareFunction ;
        EString message ;
        message << header << "Square Optimisation 4 parameters (best 1000)\n" << header ;
        write(2, message, message.length());
        DisplayCoeffs(squareCoeffs);
        Optimize(4, squareCoeffs);
    }
    
    // optimize inv functions
    {
        
        // set cost function and run
        int             invCoeffs1 [] = { 3300, 100, 1600, 100, 1200, 100, 8000, 100, 0, 0 };
        InvFunction     invFunction1 (invCoeffs1) ;
        int             invCoeffs2 [] = { 3050, 75, 1450, 75, 1050, 75, 7850, 75, 0, 0 };
        InvFunction     invFunction2 (invCoeffs2) ;
        int             invCoeffs3 [] = { 3550, 75, 1750, 75, 1350, 75, 8150, 75, 0, 0 };
        InvFunction     invFunction3 (invCoeffs3) ;
        CostFunction    *costFunctions [] = {(CostFunction *)&invFunction1, (CostFunction *)&invFunction2, (CostFunction *)&invFunction3, (CostFunction *)0 };
        int             emptyCoeff [] = { 0, 0 };
        CompositeCost   compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction =  &compositeCost ;
        EString message ;
        message << header << "Inv Optimisation 4 parameters (best 400)\n" << header ;
        write(2, message, message.length());
        DisplayCoeffs(invCoeffs1);
        Optimize(4, invCoeffs1);
    }
    
    // optimize fuji function (4 parameters) 
    {
        int             fujiCoeffs1 [] = { 5000, 1000, 5000, 0, 5000, 0, 5000, 0, 0, 0 };
        FujiFunction    fujiFunction1 (fujiCoeffs1) ;
        int             fujiCoeffs2 [] = { 4000, 500, 4000, 0, 4000, 0, 4000, 0, 0, 0 };
        FujiFunction    fujiFunction2 (fujiCoeffs2) ;
        int             fujiCoeffs3 [] = { 3500, 500, 3500, 0, 3500, 0, 3500, 0, 0, 0 };
        FujiFunction    fujiFunction3 (fujiCoeffs3) ;
        int             fujiCoeffs4 [] = { 6000, 500, 6000, 0, 6000, 0, 6000, 0, 0, 0 };
        FujiFunction    fujiFunction4 (fujiCoeffs4) ;
        CostFunction    *costFunctions []
            = {(CostFunction *)&fujiFunction1, (CostFunction *)&fujiFunction2, (CostFunction *)&fujiFunction3, (CostFunction *)&fujiFunction4, (CostFunction *)0 };
        int             emptyCoeff [] = { 0, 0 };
        CompositeCost   compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction =  &compositeCost ;
        EString message ;
        message << header << "Fuji Optimisation 4 parameters (best 1000) \n" << header ;
        write(2, message, message.length());
        DisplayCoeffs(fujiCoeffs1);
        Optimize(4, fujiCoeffs1);
    }
    
    // optimize inv functions 24  parameters
    {
        
        // set cost function and run
        int             invCoeffs1 []
            = { 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600
                , 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 3300, 100, 1600, 100, 1200, 100, 8000, 100, 0, 0 };
        InvFunction     invFunction1 (invCoeffs1) ;
        int             invCoeffs2 []
            = { 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75
                , 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 3050, 75, 1450, 75, 1050, 75, 7850, 75, 0, 0 };
        InvFunction     invFunction2 (invCoeffs2) ;
        int             invCoeffs4 []
            = { 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75
                , 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 3000, 75, 1400, 75, 1000, 75, 7800, 75, 0, 0 };
        InvFunction     invFunction4 (invCoeffs4) ;
        int             invCoeffs3 []
            = { 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75
                , 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 3550, 75, 1750, 75, 1350, 75, 8150, 75, 0, 0 };
        InvFunction     invFunction3 (invCoeffs3) ;
        CostFunction    *costFunctions []
            = {(CostFunction *)&invFunction1, (CostFunction *)&invFunction2, (CostFunction *)&invFunction3, (CostFunction *)&invFunction4, (CostFunction *)0 };
        int             emptyCoeff [] = { 0, 0 };
        CompositeCost   compositeCost (emptyCoeff) ;
        compositeCost.SetFunctions(costFunctions);
        pCostFunction =  &compositeCost ;
        EString message ;
        message << header << "Inv Optimisation with 24 parameters (best 2400)\n" << header ;
        write(2, message, message.length());
        DisplayCoeffs(invCoeffs1);
        Optimize(24, invCoeffs1);
    }
    return 0 ;
}
