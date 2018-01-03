/*
   A basic extension of the java.applet.Applet class
   */
import java.applet.Applet;
import java.net.URL;
import java.io.IOException;

public class Applet1 extends Applet {
    URL     dataURL ;
    String  host ;
    String  port ;
    
    public void init ()
    {
        host = getParameter("machine");
        port = getParameter("port");
        System.out.println("parametre machine :" + host);
        System.out.println("parametre port :" + port);
        System.out.println("Creation de SimWired");
        
        SimWired    simWired = new SimWired(host, port);
        
        System.out.println("Creation de SimWired OK");
        System.out.println("Debut GoAct");
        simWired.GoAct();
        System.out.println("Fin GoAct");
        try {
            
            // Envoi de la requete au serveur
            System.out.println("creation de l'URL fin execution");
            dataURL
                = new URL(
                    "http://" + host + ":" + port
                        + "/get/fin_execution.html");
        } catch ( IOException e ) {
            System.out.println("Exception Applet1 (Init) :" + e.toString());
        }
        
        // affiche le document HTML
        System.out.println("Affichage de l'URL fin execution");
        getAppletContext().showDocument(dataURL); /*
                                                     
                                                     SimWired simWired =new SimWired();
                                                     simWired . GoAct();
                                                     */ //}}
    } //{{DECLARE_CONTROLS
    //}}
}
