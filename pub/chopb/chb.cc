#include <process.h>
#include <stdlib.h>
#include <errno.h>
#include <io.h>
#include <fcntl.h>

main (argc,argv)
int argc ;
char ** argv ;
{
    char name [256] , * point ;
    char ordre [256];
    long length;
    int file ;
    /* si on n'a pas donne le nom du fichier ne fait rien */
    if ( argc < 2) return -1 ;

    /* on recupere le nom sans le suffixe */
    strcpy (name ,argv[1]);
    point = name + strlen(name)-1;
 
    /* on commence par expanser les tabs */
    strcpy(ordre,"exptab < ") ;
    strcat(ordre,name);
    strcat(ordre," > res.crt");
    system(ordre);

    /* on cree l'ordre pretty et on le lance */
    strcpy(ordre,"chopb res.crt > res.crc");
    system(ordre);

    /* si le fichier resultat est de longueur non nulle 
       on ecrase le fichier initial */
    file = open ( "res.crc",O_RDONLY);
    length = _filelength(file);
    close ( file);
    if (length >= 1 ) {
        strcpy(ordre,"copy res.crc ");
        strcat(ordre,name);
        system(ordre);
    }

    /* on detruit le fichier resultat */
    system("del res.crt");
    system("del res.crc");
}
