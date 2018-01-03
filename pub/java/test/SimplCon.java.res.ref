/*
   A basic Java class stub for a Win32 Console Application.
   */
import erltools.*;
import packdispatch.*;
import java.util.Vector;

public class SimplCon {
    public SimplCon () {}
    
    static  public void main ( String args [] )
    {
        
        // System.out.println("Bonjour le monde");
        
        final boolean   debugging = false ; // tells that we are debugging the appli
        String          ipAddress ;         // the ip address where to connect 
        int             length = args.length ;
        
        if ( length < 1 || args [0].compareTo("test") != 0 ) {
            if ( length < 1 ) {
                Environ.Message("Usage : telnet ip-address");
                return ;
            } else {
                ipAddress = args [0];
            }
            
            // create a connection on dispatcher
            Lock    lock = new Lock();
            PackApi packApi
                = new PackApi("pack", "127.0.0.1", "127.0.0.1", 2000, lock);
            
            // open channel on dispatcher
            packApi.OpenChannel("defaultBus");
            
            // create a channel and a process on dispatcher
            try {
                packApi.DispatchOpen("defaultBus", debugging);
            } catch ( PackException e ) {}
            
            // load telnet manager
            LParam  lParam = new LParam();
            packApi.Send(
                lParam.Reset().Push("load").Push("Telnetmanager.isl"));
            
            // ask to start scenario
            packApi.Send(
                lParam.Reset().Push("start").Push("TelnetManager").Push(
                    ipAddress));
            
            // set wait time to 500ms
            packApi.WaitTime(0, 500000);
            
            // create a reader
            Reader  reader = new Reader(packApi);
            reader.start();
            
            // loop on receive string
            while ( true ) {
                LParam  response = packApi.Receive();
                Vector  content = response.Content();
                if ( content.size() > 0 ) {
                    String  type ; // type of data
                    type = ((Param)(content.elementAt(0))).pvsData ;
                    if ( type.compareTo("data") == 0 ) {
                        String  send
                            = ((Param)(content.elementAt(1))).pvsData ;
                        System.out.print(send);
                    } else if ( type.compareTo("exception-raised") == 0 ) {
                        return ;
                    }
                }
            }
        } else {
            Lock    lock = new Lock();
            if ( false ) {
                TelnetTester    cubitus
                    = new TelnetTester("cubitus", "172.20.64.9", "el"
                        , "elpass1", lock);
                cubitus.start();
                TelnetTester    scdis
                    = new TelnetTester("scdis", "172.20.64.3", "scdis"
                        , "scdis1", lock);
                scdis.start();
                TelnetTester    cubitus1
                    = new TelnetTester("cubitus1", "172.20.64.9", "el"
                        , "elpass1", lock);
                cubitus1.start();
                TelnetTester    scdis1
                    = new TelnetTester("scdis1", "172.20.64.3", "scdis"
                        , "scdis1", lock);
                scdis1.start();
                TelnetTester    cubitus2
                    = new TelnetTester("cubitus2", "172.20.64.9", "el"
                        , "elpass1", lock);
                cubitus2.start();
                TelnetTester    scdis2
                    = new TelnetTester("scdis2", "172.20.64.3", "scdis"
                        , "scdis1", lock);
                scdis2.start();
                TelnetTester    cubitus3
                    = new TelnetTester("cubitus3", "172.20.64.9", "el"
                        , "elpass1", lock);
                cubitus3.start();
                TelnetTester    scdis3
                    = new TelnetTester("scdis3", "172.20.64.3", "scdis"
                        , "scdis1", lock);
                scdis3.start();
            } else {
                TelnetTester    cubitus
                    = new TelnetTester("cubitus0", "172.20.64.136"
                        , "guest", "guest", lock);
                cubitus.start();
                TelnetTester    scdis
                    = new TelnetTester("scdis0", "172.20.64.136", "guest"
                        , "guest", lock);
                scdis.start();
                TelnetTester    cubitus1
                    = new TelnetTester("cubitus1", "172.20.64.136"
                        , "guest", "guest", lock);
                cubitus1.start();
                TelnetTester    scdis1
                    = new TelnetTester("scdis1", "172.20.64.136", "guest"
                        , "guest", lock);
                scdis1.start();
                TelnetTester    cubitus2
                    = new TelnetTester("cubitus2", "172.20.64.136"
                        , "guest", "guest", lock);
                cubitus2.start();
                TelnetTester    scdis2
                    = new TelnetTester("scdis2", "172.20.64.136", "guest"
                        , "guest", lock);
                scdis2.start();
                TelnetTester    cubitus3
                    = new TelnetTester("cubitus3", "172.20.64.136"
                        , "guest", "guest", lock);
                cubitus3.start(); /*TelnetTester scdis3 = new TelnetTester("scdis3","172.20.64.136","guest","guest",lock);
                                     scdis3.start();*/ /*
                                                                         TelnetTester scubitus = new TelnetTester("scubitus0","172.20.64.35","guest1","guest1",lock);
                                                                         scubitus.start();
                                                                         TelnetTester sscdis = new TelnetTester("sscdis0","172.20.64.35","guest1","guest1",lock);
                                                                         sscdis.start();
                                                                         TelnetTester scubitus1 = new TelnetTester("scubitus1","172.20.64.35","guest1","guest1",lock);
                                                                         scubitus1.start();
                                                                         TelnetTester sscdis1 = new TelnetTester("sscdis1","172.20.64.35","guest1","guest1",lock);
                                                                         sscdis1.start();
                                                                         TelnetTester scubitus2 = new TelnetTester("scubitus2","172.20.64.35","guest1","guest1",lock);
                                                                         scubitus2.start();
                                                                         TelnetTester sscdis2 = new TelnetTester("sscdis2","172.20.64.35","guest1","guest1",lock);
                                                                         sscdis2.start();             
                                                                         TelnetTester scubitus3 = new TelnetTester("scubitus3","172.20.64.35","guest1","guest1",lock);
                                                                         scubitus3.start();
                                                                         TelnetTester sscdis3 = new TelnetTester("sscdis3","172.20.64.35","guest1","guest1",lock);
                                                                         sscdis3.start();*/ 
            }
            
            /* try {
                  Thread . currentThread().sleep(5000);
               } catch ( InterruptedException e ) {}
               
                           
               TelnetTester scdis3 = new TelnetTester("scdis3","172.20.64.35","guest1","guest1",lock);
               scdis3.start();
               try {
                  Thread . currentThread().sleep(5000);
               } catch ( InterruptedException e ) {}
               
               TelnetTester cubitus4 = new TelnetTester("cubitus4","172.20.64.35","guest1","guest1",lock);
               cubitus4.start();
               try {
                  Thread . currentThread().sleep(5000);
               } catch ( InterruptedException e ) {}
               
               TelnetTester scdis4 = new TelnetTester("scdis4","172.20.64.35","guest1","guest1",lock);
               scdis4.start(); */
        }
    }
}
