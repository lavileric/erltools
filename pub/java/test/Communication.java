/*
   A basic extension of the java.applet.Applet class
   */
import java.applet.Applet;
import java.net.URL;
import java.io.IOException;

public class Communication extends Applet {
    URL     dataURL ;
    String  host ;
    String  port ;
    
    public void init ()
    {
        host = getParameter("machine");
        port = getParameter("port");
        System.out.println("parametre machine :" + host);
        System.out.println("parametre port :" + port);
        if ( SimWired.allreadyInUse ) 
            return ;
        System.out.println("Creation de SimWired");
        
        SimWired    simWired = new SimWired(host, port);
        
        System.out.println("Creation de SimWired OK");
        //simWired . GoAct();
        //}}
        try {
            
            // Envoi de la requete au serveur
            System.out.println("creation de l'URL");
            dataURL
                = new URL(
                    "http://" + host + ":" + port
                        + "/get/identification.html");
        } catch ( IOException e ) {
            System.out.println(
                "Exception Communication (Init) :" + e.toString());
        }
        
        // affiche le document HTML
        System.out.println("Affichage de l'URL");
        getAppletContext().showDocument(dataURL);
    } //{{DECLARE_CONTROLS
    //}}
}
