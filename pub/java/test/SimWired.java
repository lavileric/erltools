import java.net.InetAddress;
import java.io.IOException;

class SimWired {
    static boolean  allreadyInUse = false ;
    static AsnApi   asnApi ;
    
    // Go : do the actions
    SimWired ( String destAddr, String destPort )
    {
        if ( allreadyInUse ) 
            return ;
        else 
            allreadyInUse = true ;
        
        String  locAddr ;
        
        System.out.println("Create SimWired");
        try {
            locAddr = InetAddress.getLocalHost().toString();
            int index = locAddr.lastIndexOf('/');
            locAddr = locAddr.substring(index + 1);
            System.out.println("locAddr : " + locAddr);
            destAddr = InetAddress.getByName(destAddr).toString();
            index = destAddr.lastIndexOf('/');
            destAddr = destAddr.substring(index + 1);
            System.out.println("destAddr : " + destAddr);
            System.out.println("destPort (server) : " + destPort);
            asnApi = new AsnApi("wired", locAddr, destAddr, 2000);
  
  // open connection
  //    AsnApi  asnApi= new AsnApi("wired","172.20.20.92","172.20.20.92",2000);  // open connection
  //    asnApi= new AsnApi("wired","172.20.64.136","172.20.20.92",2000);  // open connection 
  ;         
        } catch ( IOException e ) {
            System.err.println("Exception SimWired : " + e.toString());
        }
    }
    
    void GoAct ()
    {
        APITREE message ; // a received message
        
        asnApi.End(false);
        while ( !asnApi.End() ) {
            
            // get next message
            StringBuffer    result ;
            asn             objAsn = new asn();
            System.out.println("avant");
            message = asnApi.GetMessage(true);
            System.out.println("apres");
            result = new StringBuffer();
            objAsn.Decode(result, message);
            System.out.println(result);
            
            // if no message retry later
            if ( message.Empty() ) {
                continue ;
            }
            APITREE champSaisie = new APITREE(); // a champSaisie
            while ( true ) {
                
                // get champSaisie
                if ( champSaisie.Empty() ) {
                    champSaisie = asnApi.GetEntryValue(message);
                } else {
                    champSaisie = asnApi.GetNextEntry(champSaisie);
                }
                
                // if none exit while
                if ( champSaisie.Empty() ) 
                    break ;
                
                // treat this field
                {
                    APITREE field ; // field part
                    APITREE type ;  // type
                    field = asnApi.GetEntryValue(champSaisie, "champ");
                    
                    // if string modify
                    if ( field.Value().compareTo("chaine") == 0 ) {
                        EString newString ; // new string
                        PTREE   val ;       // val
                        
                        // compute new value
                        newString = new EString("Valeur saisie ");
                        newString.AddString(
                            asnApi.TreeValue(
                                asnApi.GetEntryValue(champSaisie
                                    , "identificateur")));
                        asnApi.PutValue(field, newString.GetString());
                    } else if ( field.Value().compareTo("decimal") == 0 ) {
                        asnApi.PutValue(field, "3");
                    } else if ( field.Value().compareTo("hexadecimal") == 0 ) {
                        asnApi.PutValue(field, "3");
                    } else if ( field.Value().compareTo("liste") == 0 ) {
                        APITREE champSaisieListe = new APITREE();
                        int     index = 0 ;
                        while ( true ) {
                            
                            // get champSaisie
                            if ( champSaisieListe.Empty() ) {
                                champSaisieListe
                                    = asnApi.GetEntryValue(field);
                            } else {
                                champSaisieListe
                                    = asnApi.GetNextEntry(champSaisieListe);
                            }
                            
                            // if none exit while
                            if ( champSaisieListe.Empty() ) 
                                break ;
                            
                            // treat this field
                            {
                                
                                // APITREE field ; // field part
                                // APITREE type ;  // type
                                APITREE oldValue ; // old value
                                field = asnApi.GetEntryValue(
                                    champSaisieListe, "champ");
                                oldValue
                                    = asnApi.GetEntryValue(field, "valeur");
                                
                                // if string modify
                                if ( field.Value().compareTo("chaine") == 0 ) {
                                    EString newString ; // new string
                                    PTREE   val ;       // val
                                    
                                    // compute new value
                                    newString
                                        = new EString(oldValue.Value());
                                    newString.AddString("New Entry ");
                                    newString.AddString(
                                        Integer.toString(300 - index++));
                                    asnApi.PutValue(field
                                        , newString.GetString());
                                }
                            }
                        }
                    }
                }
            }
            
            // modify type
            {
                asnApi.PutOrdre(message, "validation-fin");
            }
            
            // construct the whole response
            asnApi.SendMessage(message);
            
            // wait for response
            message = asnApi.GetMessage(true);
            
            // look if status is ok, here exit all time
            if ( asnApi.ErrorMessage() != null ) 
                return ;
        }
        System.out.println("end of GoAct()");
    }
    
    // main proc
    // parameters :
    //              argc : number of parameters
    //              argv : the parameters
    // return : ok
    void mainSim ()
    {
        while ( true ) {
            GoAct();
        }
    }
}
