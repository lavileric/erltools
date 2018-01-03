import java.io.*;

public class hello {
    static  public void main ( String[] args )
    {
        int i ;
        
        i = 1 ;
        System.out.println("Hello World!");
        try {
            SimWired    simWired = new SimWired();
            simWired.mainSim();
        } catch ( Throwable t ) {
            System.out.println("Execption!!!");
            int k = 1 ;
        }
    }
    
    static  public void another ( String[12] args )
    {
        int         i ;
        AnObject    [20] oneObject ;
        
        i = 1 ;
        System.out.println("Hello World!");
        try {
            SimWired    simWired = new SimWired();
            simWired.mainSim();
        } catch ( Throwable t ) {
            System.out.println("Execption!!!");
            int k = 1 ;
        }
        a = b >>> 3 ;
        a >>>= 3 ;
        a = b >> 3 ;
        a >>= 3 ;
        
        byte    one ;
        
        one = 0x12 ;
        one = 02L ;
        one = 1.1d ;
        one = 1.1D ;
        one = .11f ;
        one = .71e5F ;
    }
}
