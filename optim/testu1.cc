//*****************************************************************************
// FILE     : testu1 (ERL)
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
#include "smtoken.h"
#include "ethread.h"
#include "genmultithread.h"

//*****************************************************************************
// Define
//*****************************************************************************
#define SQUARE(x) ( (x)*(x))
#define DIM_COEFF 100
#define MAX_THREAD 16

//*****************************************************************************
// Global Variables
//*****************************************************************************
static bool interactive = false ;
static int  nbThread = 0 ;
class CostFunction ;

//*****************************************************************************
// Class Declaration
//*****************************************************************************
typedef double  LimitsDef [3];

class CostFunction {
    
    public :
    
        CostFunction ( unsigned int nbParam )
            : pvNbParam(nbParam)
        {
            SetLimits(0., 1000., 1.);
        }
        
        int NbParam ()
        {
            return pvNbParam ;
        }
        
        virtual double operator() ( double *param )
        {
            double  *pParam ;
            
            for ( pParam = param ; pParam - param < NbParam() ; pParam++ ) {}
            return 0 ;
        }
        
        virtual LimitsDef &Limits ( unsigned int nbParam )
        {
            return pvLimits ;
        }
        
        virtual void SetLimits ( double min, double max, double step )
        {
            pvLimits [0] =  min ;
            pvLimits [1] =  max ;
            pvLimits [2] =  step ;
        }
    
    private :
    
        int         pvNbParam ;
        LimitsDef   pvLimits ;
};

class CostFunctionTest : public CostFunction {
    
    public :
    
        // constructor
        CostFunctionTest ( unsigned int nbParam, int coeffs [] )
            : CostFunction(nbParam)
        {
            int *pCoeffs ;
            int *pDestCoeffs ;
            
            for ( pCoeffs     = coeffs, pDestCoeffs = pvCoeffs ; NOT_AT_END_COEFFS(pCoeffs, coeffs) ; pCoeffs                      += 2, pDestCoeffs += 2 ) {
                *(pDestCoeffs)     =  *pCoeffs ;
                *(pDestCoeffs + 1) =  *(pCoeffs + 1);
            }
            *pDestCoeffs++ =  0 ;
            *pDestCoeffs   =  0 ;
            
            // limits
            SetLimits(0., 1000., 1.);
        }
        
        // get coeffs
        const int *Coeffs ()
        {
            return pvCoeffs ;
        }
        
        static  bool NOT_AT_END_COEFFS ( const int *pCoeffs, const int *coeffs )
        {
            return pCoeffs - coeffs < 2 * DIM_COEFF && (*pCoeffs != 0 || *(pCoeffs + 1) != 0);
        }
    
    private :
    
        int pvCoeffs [2 * DIM_COEFF];
};

//*****************************************************************************
// Class Declaration
//*****************************************************************************

class SquareFunction : public CostFunctionTest {
    
    public :
    
        // constructor
        SquareFunction ( int coeffs [] )
            : CostFunctionTest(3, coeffs)
        {}
        
        virtual double operator() ( double param [] )
        {
            const int   *pCoeffs ;
            double      *pParam = param ;
            double      sum = 0 ;
            
            for ( pCoeffs = Coeffs() ; NOT_AT_END_COEFFS(pCoeffs, Coeffs()) && pParam - param < NbParam() ; pCoeffs += 2, pParam++ ) {
                if ( *pCoeffs != 0 ) {
                    sum += double(*(pCoeffs + 1)) * SQUARE(*pParam - *pCoeffs);
                } else 
                    sum += double(*(pCoeffs + 1));
            }
            
            // return result
            return sum ;
        }
};

class Individuals : public Individual<double, SimpleLimit<double> , double> {
    
    public :
    
        Individuals ()
            : Individual(),  pCostFunction(0)
        {}
        
        // Evaluate individual 
        virtual double Evaluate ( Semaphop *pSemaphop )
        {
            double  *param = new double [Size() + 1];
            
            FeatureCopy(param, 0, Size());
            param [Size()] =  0 ;
            pvCost         =  (*pCostFunction)(param);
            delete [] param ;
            Evaluated(true, pSemaphop);
            return pvCost ;
        }
        
        void SetCostFunction ( CostFunction *parampCostFunction )
        {
            pCostFunction =  parampCostFunction ;
        }
        
        virtual void Affect ( const Individual<double, SimpleLimit<double> , double> &src )
        {
            pCostFunction =  ((Individuals &)src).pCostFunction ;
            Individual<double, SimpleLimit<double> , double> ::Affect(src);
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
        
        Individuals &Self ()
        {
            return (Individuals &)*this ;
        }
        
        CostFunction    *pCostFunction ;
};

class NurseryCost : public Nursery<Individuals> {
    
    public :
    
        NurseryCost ( CostFunction *pCostFunction )
            : pvpCostFunction(pCostFunction)
        {}
        
        virtual ~NurseryCost () {}
        
        virtual Individuals Create ()
        {
            Individuals     individual ;
            unsigned int    size = pvpCostFunction->NbParam();
            
            individual.SetCostFunction(pvpCostFunction);
            if ( size < 1 ) 
                size =  1 ;
            individual.Limits(size - 1, SimpleLimit<double> (pvpCostFunction->Limits(0)[0], pvpCostFunction->Limits(0)[1])).Threaded(nbThread > 0);
            return individual ;
        }
    
    private :
    
        CostFunction    *pvpCostFunction ;
};

void Optimize ( CostFunction *pCostFunction )
{
    
    // Genetic Algorithm
    {
#       define LocalNursery NurseryCost
        LocalNursery                                localNursery (pCostFunction) ;
        OptimGenetic<LocalNursery::TypeIndividual>  optimGenetic(localNursery /* the nursery */ , 50 /* populationSize */ , 30 /* nbMutations */ 
            , 3000000 /* maxgenerations */ , 300 /* max stable generation*/ , 100000000 /* max simulated vectors */ , 1000000 /* max steady vectors */ 
            , 10 /* pcent of top */ );
        
        // create an optimisation object
        // suppress clone searching
        time_t                                      start = time(0);
        optimGenetic.SuppressClone(false).Interactive(interactive).Run();
        
        // compute distance to correct solution and display it
        {
            LocalNursery::TypeIndividual & bestIndividual =  optimGenetic.BestIndividual();
            EString message("\nGenetic Algorithm \n");
            EString dist ;
            write(2, message.c_str(), message.length());
            message =  "";
            message << "    Best top : " << optimGenetic.OptimCost() << "\n";
            message << "    Nb Simulated : " << optimGenetic.SimulatedVectors() << "\n";
            message << "    Time : " << (int)(time(0) - start) << "\n";
            write(2, message.c_str(), message.length());
        }
    }
}

//*****************************************************************************
// Main
//*****************************************************************************
int main ( int argc, char **argv )
{
    int offset = 0 ;
    
    MetaInit((char *)"testu1");
    printf("Hello\n");
    while ( argc >= 2 + offset ) {
        if ( VString("-i") == *(argv + 1 + offset) ) {
            offset++ ;
            interactive =  true ;
        } else if ( VString("-thread") == *(argv + 1 + offset) ) {
            offset++ ;
            nbThread =  atoi(*(argv + 1 + offset++));
            if ( nbThread > MAX_THREAD ) 
                nbThread =  MAX_THREAD ;
        } else {
            EString help ;
            
            // [-inet size]
            help += "testu1 [-i] \n\n";
            write(2, help.c_str(), help.length());
            return 3 ;
        }
    }
    
    // if threaded eval create the thread
    if ( nbThread ) {
        int nbCreated = 0 ;
        for ( nbCreated = 0 ; nbCreated < nbThread ; nbCreated++ ) 
            ERLTOOLS::CreateThread((LPTHREAD_START_ROUTINE)TreatWaitingIndividual, (LPVOID)0);
    }
    
    EString header("\n---------------------\n\n");
    
    // optimize with square (2 parameters)
    {
        int             squareCoeffs [] = { 250, -5, 600, -50, 0, 1000, 0, 0 };
        SquareFunction  squareFunction (squareCoeffs) ;
        EString         message ;
        message << header << "Square Optimisation 2 parameters (best 1000) \n" << header ;
        write(2, message, message.length());
        Optimize(&squareFunction);
    }
    return 0 ;
}

#if 0
    static std::list<DelayedEvaluator *>    waitingIndividuals ;
    static Semaphop                         *pWaitingSemaphop = 0 ;
    static unsigned int                     numberToEvaluate ;
    static Semaphop                         *pSemaphop ;
    
    void AddWaitingIndividuals ( DelayedEvaluator *pIndividual )
    {
        if ( pWaitingSemaphop ) {
            (*pWaitingSemaphop).PutRessourceBegin(1);
            if ( !pIndividual ) {
                EString message = "Null Stacked \n";
                write(2, message.c_str(), message.length());
                (*pWaitingSemaphop).GetRessourceEnd(1);
            } else {
                Semaphop    *pIndividualSemaphop = pIndividual->GetSemaphop();
                if ( pIndividualSemaphop != 0 ) 
                    pSemaphop =  pIndividualSemaphop ;
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
    }
    
    static class Init {
        
        public :
        
            Init ()
            {
                RandomInit(0);
                numberToEvaluate =  0 ;
                pWaitingSemaphop =  new Semaphop ;
            }
    } init ;
    
    /////////////////////////
    // for threaded eval
    /////////////////////////
    void *TreatWaitingIndividual ( void *pParam )
    {
        DelayedEvaluator    *pIndividual ;
        
        while ( true && pWaitingSemaphop ) {
            
            // get new board
            (*pWaitingSemaphop).GetRessourceBegin(1);
            
            // sleep(1);
            pIndividual =  0 ;
            if ( waitingIndividuals.size() >= 1 ) {
                pIndividual =  waitingIndividuals.front();
                waitingIndividuals.pop_front();
                numberToEvaluate++ ;
            } else {
                EString message = "Nothing to destack \n";
                write(2, message.c_str(), message.length());
                pIndividual =  0 ;
            }
            (*pWaitingSemaphop).GetRessourceEnd();
            
            // treat it
            if ( pIndividual ) {
                pIndividual->DelayedEval(false);
                (*pWaitingSemaphop).ProtectSection();
                pSemaphop->PutRessource(1);
                numberToEvaluate -= 1 ;
                (*pWaitingSemaphop).UnProtectSection();
            }
        }
        return 0 ;
    }
#endif
