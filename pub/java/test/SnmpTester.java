import java.io.IOException;
import packdispatch.*;
import erltools.*;

public class SnmpTester extends Thread {
    Frame1  pvFrame ;
    
    public SnmpTester ( String theBus, String destIp, Frame1 frame1 )
    {
        
        // theBus = "defaultBus";
        pvBus = theBus ;
        pvDestIp = destIp ;
        pvFrame = frame1 ;
    }
    
    public void run ()
    {
        String  theBus = pvBus ;
        
        Environ.MessageFile("debug", pvBus + " : in run");
        
        // create a connection on dispatcher
        pvLock = new Lock();
        
        PackApi packApi
            = new PackApi("app" + pvBus, "127.0.0.1", "127.0.0.1", 2000
                , pvLock);
        
        // open channel on dispatcher
        packApi.OpenChannel(theBus);
        
        int     nbRun = 0 ;
        boolean exitSet = false ;
        
        while ( true ) {
            LParam  lParam = new LParam();
            exitSet = false ;
            try {
                
                // if enough run wait a little
                // nbRun += 1 ;
                /* 
                   if ( nbRun > 5 ) {
                       Thread . currentThread().sleep(10000);
                       nbRun = 0 ;
                   } */
                Environ.MessageFile("debug", pvBus + " : start");
                
                // create a channel and a process on dispatcher
                packApi.DispatchOpen(theBus, false);
                
                // load telnet manager
                packApi.Send(
                    lParam.Reset().Push("load").Push("SnmpManager.isl"));
                Environ.MessageFile("debug", pvBus + " : start SnmpManager");
                
                // ask to start scenario
                packApi.Send(
                    lParam.Reset().Push("start").Push("SnmpManager").Push(
                        pvDestIp));
                
                // set wait time to 500ms
                packApi.WaitTime(0, 500000);
                
                // do com
                int timeOut = 600 ;
                
                // packApi.WaitFor("login",timeOut);
                int i = 1 ;
                while ( i > 0 ) {
                    Environ.MessageFile("debug"
                        , "loop " + Integer.toString(i));
                    i += 1 ;
                    Environ.MessageFile("debug"
                        , pvBus + " : loop " + Integer.toString(i));
                    packApi.Send("data");
                    try {
                        
                        // get avail
                        // Environ.MessageFile("debug","loop : first wait");
                        String  result = packApi.WaitFor("", 10);
                        int     avail = Integer.parseInt(result);
                        
                        // get data
                        // Environ.MessageFile("debug","loop : second wait");
                        result = packApi.WaitFor("", 10);
                        int allMem = Integer.parseInt(result);
                        
                        // set values
                        Environ.MessageFile("debug", "set data");
                        if ( allMem < avail ) {
                            int inter = avail ;
                            avail = allMem ;
                            allMem = inter ;
                        }
                        pvFrame.yScale = allMem ;
                        pvFrame.insert(avail);
                    } catch ( PackException p ) {
                        Environ.MessageFile("debug"
                            , pvBus + " : one pack exception "
                                + p.toString());
                    }
                    Thread.currentThread().sleep(100);
                }
            } catch ( PackException p ) {
                Environ.MessageFile("debug"
                    , pvBus + " : one pack exception " + p.toString());
                
                // packApi.Send(lParam.Reset().Push("exit"));
                packApi.WaitForEnd(true);
                exitSet = true ;
                
                // try {
                //     Thread.currentThread().sleep(5000);
                // } catch (InterruptedException e) {}
                // create a connection on dispatcher
                packApi
                    = new PackApi("app" + pvBus, "127.0.0.1", "127.0.0.1"
                        , 2000, pvLock);
                
                // open channel on dispatcher
                packApi.OpenChannel(pvBus);
            } catch ( Throwable t ) {
                Environ.MessageFile("debug", pvBus + " : sytem exception");
                System.out.println("exception: " + t.getMessage());
                t.printStackTrace();
            } finally {
                
                // if (!exitSet)
                //    packApi.Send(lParam.Reset().Push("exit"));
                // read the exception
                if ( !exitSet ) {
                    Environ.MessageFile("debug", pvBus + " : wait for end");
                    packApi.WaitForEnd(true);
                }
            }
        }
    }
    
    private String  pvBus ;      // the bus to communicate with ogsng
    private String  pvDestIp ;   // dest ip address
    private String  pvUserName ; // user name to log in
    private String  pvPassword ; // password to log in
    private Lock    pvLock ;     // to protect open
}
