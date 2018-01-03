a-pdu MPDU ::= umpdu 
A0 62
{
    enveloppe 
    31 5D
    {
        identificateur-UMPDU 
        64 19
        {
            identificateur-global-domaine 
            63 0B
            {
                nom-pays chaine-imprimable "FR"
                61 04  13 02 46 52,
                nom-domaine-administratif chaine-imprimable "M"
                62 03  13 01 4D
            },
            chaine "Time Stamp"
            16 0A 54 69 6D 65 20 53 74 61 6D 70
        },
        expediteur 
        60 1F
        {
            liste-attributs-standard 
            30 1D
            {
                nom-pays chaine-imprimable "FR"
                61 04  13 02 46 52,
                nom-domaine-administratif chaine-imprimable "M"
                62 03  13 01 4D,
                nom-organisation "Mon Organisation"
                83 10 4D 6F 6E 20 4F 72 67 61 6E 69 73 61 74 69 6F 6E
            }
        },
        type-contenu p2
        60 1F ,
        info-destinataire 
        30 1D
        {
            61 04  13 02
            {
                destinataire 
                {
                    liste-attributs-standard 
                    {
                        nom-pays chaine-imprimable "FR",
                        nom-domaine-administratif chaine-imprimable "M",
                        nom-organisation "Mon Organisation"
                    }
                }
                46 52 62 03  13 01 4D,
                identificateur-complementaire 1
                83 10 4D 6F 6E 20 4F 72 67 61 6E 69 73 61 74 69 6F 6E,
                indicateur-destinataire '101101000'B
                04 01 00
            }
        },
        informations-trace 
        {
            {
                identificateur-global-domaine 
                {
                    nom-pays chaine-imprimable "FR",
                    nom-domaine-administratif chaine-imprimable "M"
                },
                info-fournies-domaines 
                {
                    arrivee "000000",
                    action 0
                }
            }
        }
         
    },
    contenu '00'H
     
}
