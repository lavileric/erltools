
#line 29 "kern.ch"
/*************************************************************************/
#line 29 "kern.ch"
/*                                                                       */
#line 29 "kern.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "kern.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "kern.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "kern.ch"
/*                                                                       */
#line 29 "kern.ch"
/*************************************************************************/
#line 29 "kern.ch"

#line 29 "kern.ch"
#include "token.h"
#line 29 "kern.ch"
#define decomp decomp_cplus
#line 29 "kern.ch"

#line 29 "kern.ch"
#ifndef for_elem
#line 29 "kern.ch"
#line 29 "kern.ch"
#define for_elem _for_elem

#line 29 "kern.ch"
#line 29 "kern.ch"

#line 29 "kern.ch"
#endif
#ifdef INCONNU
#line 29 "kern.ch"
#line 29 "kern.ch"
PTREE   for_elem ;
#line 29 "kern.ch"

#line 29 "kern.ch"
#line 29 "kern.ch"

#line 29 "kern.ch"
#endif
#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>
#include "Protector.h"

PPTREE  parse_cplus (int) ;

#line 40 "kern.ch"

#line 40 "kern.ch"
PTREE GetIdent ( const PTREE &elem, bool noAff = false, bool getTrailer = false )
#line 40 "kern.ch"
{
#line 40 "kern.ch"
    register PPTREE _inter ;
#line 40 "kern.ch"

#line 40 "kern.ch"
#line 40 "kern.ch"
    int _nextVal ;
    
#line 40 "kern.ch"
#line 44 "kern.ch"
    
    PTREE   name = (PTREE)0 ;
#line 44 "kern.ch"
    
#line 44 "kern.ch"
#line 45 "kern.ch"
    PTREE   trailer ;
#line 45 "kern.ch"
    
#line 45 "kern.ch"
#line 44 "kern.ch"
    (name=elem);
#line 44 "kern.ch"
    
#line 44 "kern.ch"
#line 47 "kern.ch"
    while ( name && !(((_inter = (PPTREE)name,1) && 
#line 47 "kern.ch"
                            (NumberTree(_inter) == cplus::IDENT) &&
#line 47 "kern.ch"
                            1)) && !(((_inter = (PPTREE)name,1) && 
#line 47 "kern.ch"
                                        (NumberTree(_inter) == cplus::TIDENT) &&
#line 47 "kern.ch"
                                        1)) && !(((_inter = (PPTREE)name,1) && 
#line 47 "kern.ch"
                                                    (NumberTree(_inter) == cplus::DESTRUCT) &&
#line 47 "kern.ch"
                                                    1)) ) {
#line 47 "kern.ch"
#line 48 "kern.ch"
                                                            (trailer=name);
#line 48 "kern.ch"
                                                            
#line 48 "kern.ch"
#line 49 "kern.ch"
                                                            switch ( NumberTree(name) ) {
#line 49 "kern.ch"
#line 50 "kern.ch"
                                                                case cplus::TYP_LIST : 
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 50 "kern.ch"
                                                                    
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                _Case19 : 
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                    ;
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                    break ;
                                                                    
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                case cplus::CAST : 
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                    (name=SonTree(name, 2));
#line 50 "kern.ch"
                                                                    
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                _Case20 : 
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                    ;
#line 50 "kern.ch"
#line 50 "kern.ch"
                                                                    goto _Case21 ;
                                                                    
#line 50 "kern.ch"
#line 52 "kern.ch"
                                                                case cplus::QUALIFIED : 
#line 52 "kern.ch"
#line 52 "kern.ch"
                                                                    (name=SonTree(name, 2));
#line 52 "kern.ch"
                                                                    
#line 52 "kern.ch"
#line 52 "kern.ch"
                                                                _Case21 : 
#line 52 "kern.ch"
#line 52 "kern.ch"
                                                                    ;
#line 52 "kern.ch"
#line 52 "kern.ch"
                                                                    break ;
                                                                    
#line 52 "kern.ch"
#line 53 "kern.ch"
                                                                case cplus::RANGE_MODIFIER : 
#line 53 "kern.ch"
#line 53 "kern.ch"
                                                                    (name=SonTree(name, 2));
#line 53 "kern.ch"
                                                                    
#line 53 "kern.ch"
#line 53 "kern.ch"
                                                                _Case22 : 
#line 53 "kern.ch"
#line 53 "kern.ch"
                                                                    ;
#line 53 "kern.ch"
#line 53 "kern.ch"
                                                                    break ;
                                                                    
#line 53 "kern.ch"
#line 54 "kern.ch"
                                                                case cplus::EXP_ARRAY : 
#line 54 "kern.ch"
#line 54 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 54 "kern.ch"
                                                                    
#line 54 "kern.ch"
#line 54 "kern.ch"
                                                                _Case23 : 
#line 54 "kern.ch"
#line 54 "kern.ch"
                                                                    ;
#line 54 "kern.ch"
#line 54 "kern.ch"
                                                                    break ;
                                                                    
#line 54 "kern.ch"
#line 55 "kern.ch"
                                                                case cplus::EXP : 
#line 55 "kern.ch"
#line 55 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 55 "kern.ch"
                                                                    
#line 55 "kern.ch"
#line 55 "kern.ch"
                                                                _Case24 : 
#line 55 "kern.ch"
#line 55 "kern.ch"
                                                                    ;
#line 55 "kern.ch"
#line 55 "kern.ch"
                                                                    break ;
                                                                    
#line 55 "kern.ch"
#line 56 "kern.ch"
                                                                case cplus::REF : 
#line 56 "kern.ch"
#line 56 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 56 "kern.ch"
                                                                    
#line 56 "kern.ch"
#line 56 "kern.ch"
                                                                _Case25 : 
#line 56 "kern.ch"
#line 56 "kern.ch"
                                                                    ;
#line 56 "kern.ch"
#line 56 "kern.ch"
                                                                    break ;
                                                                    
#line 56 "kern.ch"
#line 57 "kern.ch"
                                                                case cplus::ARROW : 
#line 57 "kern.ch"
#line 57 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 57 "kern.ch"
                                                                    
#line 57 "kern.ch"
#line 57 "kern.ch"
                                                                _Case26 : 
#line 57 "kern.ch"
#line 57 "kern.ch"
                                                                    ;
#line 57 "kern.ch"
#line 57 "kern.ch"
                                                                    break ;
                                                                    
#line 57 "kern.ch"
#line 58 "kern.ch"
                                                                case cplus::ADDR : 
#line 58 "kern.ch"
#line 58 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 58 "kern.ch"
                                                                    
#line 58 "kern.ch"
#line 58 "kern.ch"
                                                                _Case27 : 
#line 58 "kern.ch"
#line 58 "kern.ch"
                                                                    ;
#line 58 "kern.ch"
#line 58 "kern.ch"
                                                                    break ;
                                                                    
#line 58 "kern.ch"
#line 59 "kern.ch"
                                                                case cplus::TYP_BIT : 
#line 59 "kern.ch"
#line 59 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 59 "kern.ch"
                                                                    
#line 59 "kern.ch"
#line 59 "kern.ch"
                                                                _Case28 : 
#line 59 "kern.ch"
#line 59 "kern.ch"
                                                                    ;
#line 59 "kern.ch"
#line 59 "kern.ch"
                                                                    break ;
                                                                    
#line 59 "kern.ch"
#line 60 "kern.ch"
                                                                case cplus::POINT : 
#line 60 "kern.ch"
#line 60 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 60 "kern.ch"
                                                                    
#line 60 "kern.ch"
#line 60 "kern.ch"
                                                                _Case29 : 
#line 60 "kern.ch"
#line 60 "kern.ch"
                                                                    ;
#line 60 "kern.ch"
#line 60 "kern.ch"
                                                                    break ;
                                                                    
#line 60 "kern.ch"
#line 62 "kern.ch"
                                                                case cplus::TYP_AFF : 
#line 62 "kern.ch"
#line 62 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 62 "kern.ch"
                                                                    
#line 62 "kern.ch"
#line 62 "kern.ch"
                                                                _Case30 : 
#line 62 "kern.ch"
#line 62 "kern.ch"
                                                                    ;
#line 62 "kern.ch"
#line 62 "kern.ch"
                                                                    {
#line 62 "kern.ch"
#line 63 "kern.ch"
                                                                        if ( noAff ) 
#line 63 "kern.ch"
#line 64 "kern.ch"
                                                                            name = (PPTREE) 0 ;
#line 64 "kern.ch"
                                                                        
#line 64 "kern.ch"
#line 65 "kern.ch"
                                                                        break ;
                                                                        
#line 65 "kern.ch"
#line 66 "kern.ch"
                                                                        
#line 66 "kern.ch"
#line 66 "kern.ch"
                                                                    }
                                                                    
#line 66 "kern.ch"
#line 67 "kern.ch"
                                                                    break ;
                                                                    
#line 67 "kern.ch"
#line 68 "kern.ch"
                                                                case cplus::TYP_ADDR : 
#line 68 "kern.ch"
#line 68 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 68 "kern.ch"
                                                                    
#line 68 "kern.ch"
#line 68 "kern.ch"
                                                                _Case31 : 
#line 68 "kern.ch"
#line 68 "kern.ch"
                                                                    ;
#line 68 "kern.ch"
#line 68 "kern.ch"
                                                                    break ;
                                                                    
#line 68 "kern.ch"
#line 69 "kern.ch"
                                                                case cplus::TYP_ARRAY : 
#line 69 "kern.ch"
#line 69 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 69 "kern.ch"
                                                                    
#line 69 "kern.ch"
#line 69 "kern.ch"
                                                                _Case32 : 
#line 69 "kern.ch"
#line 69 "kern.ch"
                                                                    ;
#line 69 "kern.ch"
#line 69 "kern.ch"
                                                                    break ;
                                                                    
#line 69 "kern.ch"
#line 70 "kern.ch"
                                                                case cplus::TYP : 
#line 70 "kern.ch"
#line 70 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 70 "kern.ch"
                                                                    
#line 70 "kern.ch"
#line 70 "kern.ch"
                                                                _Case33 : 
#line 70 "kern.ch"
#line 70 "kern.ch"
                                                                    ;
#line 70 "kern.ch"
#line 70 "kern.ch"
                                                                    break ;
                                                                    
#line 70 "kern.ch"
#line 71 "kern.ch"
                                                                case cplus::TYP_REF : 
#line 71 "kern.ch"
#line 71 "kern.ch"
                                                                    (name=SonTree(name, 1));
#line 71 "kern.ch"
                                                                    
#line 71 "kern.ch"
#line 71 "kern.ch"
                                                                _Case34 : 
#line 71 "kern.ch"
#line 71 "kern.ch"
                                                                    ;
#line 71 "kern.ch"
#line 71 "kern.ch"
                                                                    break ;
                                                                    
#line 71 "kern.ch"
#line 72 "kern.ch"
                                                                case cplus::DECLARATOR : 
#line 72 "kern.ch"
#line 72 "kern.ch"
                                                                    (name=SonTree(name, 2));
#line 72 "kern.ch"
                                                                    
#line 72 "kern.ch"
#line 72 "kern.ch"
                                                                _Case35 : 
#line 72 "kern.ch"
#line 72 "kern.ch"
                                                                    ;
#line 72 "kern.ch"
#line 72 "kern.ch"
                                                                    break ;
                                                                    
#line 72 "kern.ch"
#line 74 "kern.ch"
                                                                case cplus::EXP_LIST : 
#line 74 "kern.ch"
#line 74 "kern.ch"
                                                                _Case36 : 
#line 74 "kern.ch"
#line 74 "kern.ch"
                                                                    ;
#line 74 "kern.ch"
#line 74 "kern.ch"
                                                                    {
#line 74 "kern.ch"
#line 75 "kern.ch"
                                                                        ((_inter = (PPTREE)name,1) && 
#line 75 "kern.ch"
                                                                            ((name=SonTree(_inter,1)),1) &&
#line 75 "kern.ch"
                                                                            1);
#line 75 "kern.ch"
                                                                        ;
#line 75 "kern.ch"
#line 76 "kern.ch"
                                                                        
#line 76 "kern.ch"
#line 76 "kern.ch"
                                                                    }
                                                                    
#line 76 "kern.ch"
#line 77 "kern.ch"
                                                                    break ;
                                                                    
#line 77 "kern.ch"
#line 79 "kern.ch"
                                                                default : 
#line 79 "kern.ch"
#line 79 "kern.ch"
                                                                _Case37 : 
#line 79 "kern.ch"
#line 79 "kern.ch"
                                                                    ;
#line 79 "kern.ch"
#line 79 "kern.ch"
                                                                    {
#line 79 "kern.ch"
#line 80 "kern.ch"
                                                                        name = (PPTREE) 0 ;
#line 80 "kern.ch"
                                                                        
#line 80 "kern.ch"
#line 81 "kern.ch"
                                                                        
#line 81 "kern.ch"
#line 81 "kern.ch"
                                                                    }
                                                                    
#line 81 "kern.ch"
                                                            }
#line 81 "kern.ch"
                                                            
#line 81 "kern.ch"
#line 83 "kern.ch"
                                                            
#line 83 "kern.ch"
#line 83 "kern.ch"
                                                          }
#line 83 "kern.ch"
#line 84 "kern.ch"
    if ( (!name) && getTrailer ) 
#line 84 "kern.ch"
#line 85 "kern.ch"
        return trailer ;
    
#line 85 "kern.ch"
#line 86 "kern.ch"
    return name ;
    
#line 86 "kern.ch"
#line 87 "kern.ch"
    
#line 87 "kern.ch"
#line 87 "kern.ch"
}
#line 87 "kern.ch"

#line 99 "kern.ch"

#line 99 "kern.ch"
int main ( int argc, char **argv )
#line 99 "kern.ch"
{
#line 99 "kern.ch"
    register PPTREE _inter ;
#line 99 "kern.ch"

#line 99 "kern.ch"
#line 99 "kern.ch"
    PTREE   _Baum1 ;
#line 99 "kern.ch"
    
#line 99 "kern.ch"
#line 99 "kern.ch"
    PTREE   _Baum0 ;
#line 99 "kern.ch"
    
#line 99 "kern.ch"
#line 99 "kern.ch"
    int _nextVal ;
    
#line 99 "kern.ch"
#line 102 "kern.ch"
    
    PTREE   tree ;
#line 102 "kern.ch"
    
#line 102 "kern.ch"
#line 103 "kern.ch"
    char    name [50];
    
#line 103 "kern.ch"
#line 104 "kern.ch"
    char    *ptName ;
    
#line 104 "kern.ch"
#line 105 "kern.ch"
    DecompCplus decompObj ;
    
#line 105 "kern.ch"
#line 106 "kern.ch"
    bool    dumpTree = false ;
    
#line 106 "kern.ch"
#line 107 "kern.ch"
    bool    counter = false ;
    
#line 107 "kern.ch"
#line 108 "kern.ch"
    bool    counterLoop = false ;
    
#line 108 "kern.ch"
#line 110 "kern.ch"
    dumpCoord =  0 ;
#line 110 "kern.ch"
#line 111 "kern.ch"
    DecompCplus::ptDecomp =  &decompObj ;
#line 111 "kern.ch"
#line 112 "kern.ch"
    MetaInit((char *)0);
#line 112 "kern.ch"
#line 113 "kern.ch"
    cplus().AsLanguage();
#line 113 "kern.ch"
#line 115 "kern.ch"
    EString setFile = "c.set";
    
#line 115 "kern.ch"
#line 116 "kern.ch"
    int offset = 0 ;
    
#line 116 "kern.ch"
#line 117 "kern.ch"
    int theMargin = -1 ;
    
#line 117 "kern.ch"
#line 119 "kern.ch"
    erltoolsStorageKeeper =  true ;
#line 119 "kern.ch"
#line 120 "kern.ch"
    SetSingleThread(true);
#line 120 "kern.ch"
#line 121 "kern.ch"
    while ( true ) {
#line 121 "kern.ch"
#line 122 "kern.ch"
                        if ( argc - offset < 2 ) {
#line 122 "kern.ch"
#line 123 "kern.ch"
                                                    help : 
#line 123 "kern.ch"
#line 124 "kern.ch"
                                                        {
#line 124 "kern.ch"
#line 125 "kern.ch"
                                                            EString message = "Bad name for your source file \n";
                                                            
#line 125 "kern.ch"
#line 126 "kern.ch"
                                                            message += "cplus [-flat] [-emacs] [-set fileName] filenames\n";
#line 126 "kern.ch"
#line 127 "kern.ch"
                                                            message += "\t-flat \t: classes indented on left\n";
#line 127 "kern.ch"
#line 128 "kern.ch"
                                                            message += "\t-emacs \t: error messages compatible with emacs\n";
#line 128 "kern.ch"
#line 129 "kern.ch"
                                                            message += "\t-dump \t: dump the tree\n";
#line 129 "kern.ch"
#line 130 "kern.ch"
                                                            message += "\t-set \t: uses this c.set file\n";
#line 130 "kern.ch"
#line 131 "kern.ch"
                                                            _write(2, message.c_str(), message.length());
#line 131 "kern.ch"
#line 132 "kern.ch"
                                                            exit(0);
#line 132 "kern.ch"
#line 133 "kern.ch"
                                                            
#line 133 "kern.ch"
#line 133 "kern.ch"
                                                        }
                                                        
#line 133 "kern.ch"
#line 134 "kern.ch"
                                                        
#line 134 "kern.ch"
#line 134 "kern.ch"
                                                    } else 
#line 134 "kern.ch"
                        {
#line 134 "kern.ch"
#line 135 "kern.ch"
                            ptName =  *(argv + 1 + offset);
#line 135 "kern.ch"
#line 136 "kern.ch"
                            if ( EString("-flat") == ptName ) {
#line 136 "kern.ch"
#line 137 "kern.ch"
                                                                    decompObj.FlatFunct(true);
#line 137 "kern.ch"
#line 138 "kern.ch"
                                                                    
#line 138 "kern.ch"
#line 138 "kern.ch"
                                                                 } else 
#line 138 "kern.ch"
                            if ( EString("-v") == ptName ) {
#line 138 "kern.ch"
#line 139 "kern.ch"
                                                                goto help ;
                                                                
#line 139 "kern.ch"
#line 140 "kern.ch"
                                                                
#line 140 "kern.ch"
#line 140 "kern.ch"
                                                              } else 
#line 140 "kern.ch"
                            if ( EString("-help") == ptName ) {
#line 140 "kern.ch"
#line 141 "kern.ch"
                                                                    goto help ;
                                                                    
#line 141 "kern.ch"
#line 142 "kern.ch"
                                                                    
#line 142 "kern.ch"
#line 142 "kern.ch"
                                                                 } else 
#line 142 "kern.ch"
                            if ( EString("-tableString") == ptName ) {
#line 142 "kern.ch"
#line 143 "kern.ch"
                                                                            symbString =  true ;
#line 143 "kern.ch"
#line 144 "kern.ch"
                                                                            
#line 144 "kern.ch"
#line 144 "kern.ch"
                                                                        } else 
#line 144 "kern.ch"
                            if ( EString("-emacs") == ptName ) {
#line 144 "kern.ch"
#line 145 "kern.ch"
                                                                    emacsCompatibleError =  1 ;
#line 145 "kern.ch"
#line 146 "kern.ch"
                                                                    
#line 146 "kern.ch"
#line 146 "kern.ch"
                                                                  } else 
#line 146 "kern.ch"
                            if ( EString("-set") == ptName ) {
#line 146 "kern.ch"
#line 147 "kern.ch"
                                                                    if ( argc - offset < 3 ) {
#line 147 "kern.ch"
#line 148 "kern.ch"
                                                                                                    sprintf(name, "Bad name for your source file \n");
#line 148 "kern.ch"
#line 149 "kern.ch"
                                                                                                    _write(2, name, strlen(name));
#line 149 "kern.ch"
#line 150 "kern.ch"
                                                                                                    exit(0);
#line 150 "kern.ch"
#line 151 "kern.ch"
                                                                                                    
#line 151 "kern.ch"
#line 151 "kern.ch"
                                                                                                }
#line 151 "kern.ch"
#line 152 "kern.ch"
                                                                    setFile =  *(argv + 1 + ++offset);
#line 152 "kern.ch"
#line 153 "kern.ch"
                                                                    
#line 153 "kern.ch"
#line 153 "kern.ch"
                                                                } else 
#line 153 "kern.ch"
                            if ( EString("-dump") == ptName ) {
#line 153 "kern.ch"
#line 154 "kern.ch"
                                                                    dumpTree =  true ;
#line 154 "kern.ch"
#line 155 "kern.ch"
                                                                    
#line 155 "kern.ch"
#line 155 "kern.ch"
                                                                 } else 
#line 155 "kern.ch"
                            if ( EString("-count") == ptName ) {
#line 155 "kern.ch"
#line 156 "kern.ch"
                                                                    counter =  true ;
#line 156 "kern.ch"
#line 157 "kern.ch"
                                                                    
#line 157 "kern.ch"
#line 157 "kern.ch"
                                                                  } else 
#line 157 "kern.ch"
                            if ( EString("-countLoop") == ptName ) {
#line 157 "kern.ch"
#line 158 "kern.ch"
                                                                        counterLoop =  true ;
#line 158 "kern.ch"
#line 159 "kern.ch"
                                                                        
#line 159 "kern.ch"
#line 159 "kern.ch"
                                                                      } else 
#line 159 "kern.ch"
                            if ( EString("-rightMargin") == ptName ) {
#line 159 "kern.ch"
#line 160 "kern.ch"
                                                                            if ( argc - offset >= 3 ) {
#line 160 "kern.ch"
#line 161 "kern.ch"
                                                                                                            theMargin =  atoi(ptName + 1);
#line 161 "kern.ch"
#line 162 "kern.ch"
                                                                                                            offset += 1 ;
#line 162 "kern.ch"
#line 163 "kern.ch"
                                                                                                            
#line 163 "kern.ch"
#line 163 "kern.ch"
                                                                                                         }
#line 163 "kern.ch"
#line 164 "kern.ch"
                                                                            
#line 164 "kern.ch"
#line 164 "kern.ch"
                                                                        } else 
#line 164 "kern.ch"
#line 165 "kern.ch"
                                break ;
                                
#line 165 "kern.ch"
                            
#line 165 "kern.ch"
#line 166 "kern.ch"
                            offset += 1 ;
#line 166 "kern.ch"
#line 167 "kern.ch"
                            
#line 167 "kern.ch"
#line 167 "kern.ch"
                        }
                        
#line 167 "kern.ch"
#line 168 "kern.ch"
                        
#line 168 "kern.ch"
#line 168 "kern.ch"
                    }
#line 168 "kern.ch"
#line 169 "kern.ch"
    ReadIncludeS(setFile.c_str(), 1);
#line 169 "kern.ch"
#line 172 "kern.ch"
    if ( counterLoop ) 
#line 172 "kern.ch"
#line 173 "kern.ch"
        dumpCoord =  1 ;
#line 173 "kern.ch"
#line 176 "kern.ch"
    (tree=cplus().ReadFile(ptName));
#line 176 "kern.ch"
    
#line 176 "kern.ch"
#line 177 "kern.ch"
    AddRef(tree);
#line 177 "kern.ch"
#line 178 "kern.ch"
    SwitchLang("cplus");
#line 178 "kern.ch"
#line 179 "kern.ch"
    if ( theMargin > 0 ) 
#line 179 "kern.ch"
#line 180 "kern.ch"
        rightMargin =  theMargin ;
#line 180 "kern.ch"
#line 183 "kern.ch"
    {
#line 183 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 183 "kern.ch"
        _ptRes0 = MakeTree(cplus::NONE, 0);
#line 183 "kern.ch"
        _Baum0 = _ptRes0;
#line 183 "kern.ch"
    }
#line 183 "kern.ch"
    
#line 183 "kern.ch"
#line 183 "kern.ch"
    {
#line 183 "kern.ch"
#line 183 "kern.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 183 "kern.ch"
#line 183 "kern.ch"
        PTREE   _for_elem ;
#line 183 "kern.ch"
        
#line 183 "kern.ch"
#line 183 "kern.ch"
        _iterator1.AllSearch(1);
#line 183 "kern.ch"
#line 183 "kern.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 183 "kern.ch"
#line 183 "kern.ch"
            {
#line 183 "kern.ch"
#line 184 "kern.ch"
                PTREE   list = (PTREE)0 ;
#line 184 "kern.ch"
                
#line 184 "kern.ch"
#line 185 "kern.ch"
                PTREE   nil ;
#line 185 "kern.ch"
                
#line 185 "kern.ch"
#line 184 "kern.ch"
                (list=for_elem);
#line 184 "kern.ch"
                
#line 184 "kern.ch"
#line 186 "kern.ch"
                if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
#line 186 "kern.ch"
#line 187 "kern.ch"
                                                                            (list=FatherTree(list));
#line 187 "kern.ch"
                                                                            
#line 187 "kern.ch"
#line 188 "kern.ch"
                                                                            for_elem =  FatherTree(list);
#line 188 "kern.ch"
#line 189 "kern.ch"
                                                                            {
#line 189 "kern.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 189 "kern.ch"
                                                                                if (_ptTree0= fathertree(list)) {
#line 189 "kern.ch"
                                                                                    int rank = ranktree(list);
#line 189 "kern.ch"
                                                                                    ReplaceTree(_ptTree0,rank,nil);
#line 189 "kern.ch"
                                                                                }
#line 189 "kern.ch"
                                                                            }
#line 189 "kern.ch"
                                                                            
#line 189 "kern.ch"
#line 190 "kern.ch"
                                                                            
#line 190 "kern.ch"
#line 190 "kern.ch"
                                                                         }
#line 190 "kern.ch"
#line 191 "kern.ch"
                
#line 191 "kern.ch"
#line 191 "kern.ch"
            }
            
#line 191 "kern.ch"
#line 191 "kern.ch"
            _iterator1.Current(_for_elem);
#line 191 "kern.ch"
#line 191 "kern.ch"
            continue ;
            
#line 191 "kern.ch"
#line 191 "kern.ch"
        for_continue1 : 
#line 191 "kern.ch"
#line 191 "kern.ch"
            _iterator1.Current(_for_elem);
#line 191 "kern.ch"
#line 191 "kern.ch"
            _iterator1.SkipSon(1);
#line 191 "kern.ch"
#line 191 "kern.ch"
            continue ;
            
#line 191 "kern.ch"
#line 191 "kern.ch"
        for_break1 : 
#line 191 "kern.ch"
#line 191 "kern.ch"
            break ;
            
#line 191 "kern.ch"
#line 191 "kern.ch"
            
#line 191 "kern.ch"
#line 191 "kern.ch"
        }
#line 191 "kern.ch"
#line 191 "kern.ch"
        
#line 191 "kern.ch"
#line 191 "kern.ch"
    }
    
#line 191 "kern.ch"
#line 193 "kern.ch"
    PTREE   stat, else_stat, if_stat ;
#line 193 "kern.ch"
    
#line 193 "kern.ch"
#line 195 "kern.ch"
    {
#line 195 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 195 "kern.ch"
        _ptRes0 = MakeTree(cplus::IF, 0);
#line 195 "kern.ch"
        _Baum1 = _ptRes0;
#line 195 "kern.ch"
    }
#line 195 "kern.ch"
    
#line 195 "kern.ch"
#line 195 "kern.ch"
    {
#line 195 "kern.ch"
#line 195 "kern.ch"
        ItPtree _iterator2 (tree, _Baum1) ;
        
#line 195 "kern.ch"
#line 195 "kern.ch"
        PTREE   _for_elem ;
#line 195 "kern.ch"
        
#line 195 "kern.ch"
#line 195 "kern.ch"
        _iterator2.AllSearch(1);
#line 195 "kern.ch"
#line 195 "kern.ch"
        while ( (_for_elem=_iterator2++) ) {
#line 195 "kern.ch"
#line 195 "kern.ch"
            {
#line 195 "kern.ch"
#line 196 "kern.ch"
                (stat=for_elem);
#line 196 "kern.ch"
                
#line 196 "kern.ch"
#line 197 "kern.ch"
                ((_inter = (PPTREE)stat,1) && 
#line 197 "kern.ch"
                    ((if_stat=SonTree(_inter,2)),1) &&
#line 197 "kern.ch"
                    ((else_stat=SonTree(_inter,3)),1) &&
#line 197 "kern.ch"
                    1);
#line 197 "kern.ch"
                ;
#line 197 "kern.ch"
#line 198 "kern.ch"
                if ( ((_inter = (PPTREE)if_stat,1) && 
#line 198 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 198 "kern.ch"
                        1) ) {
#line 198 "kern.ch"
#line 199 "kern.ch"
                                {
#line 199 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 199 "kern.ch"
                                    {
#line 199 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 199 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 199 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 199 "kern.ch"
                                    }
#line 199 "kern.ch"
                                    ReplaceTree(stat, 2, _ptTree0);
#line 199 "kern.ch"
                                }
#line 199 "kern.ch"
                                
#line 199 "kern.ch"
#line 200 "kern.ch"
                                
#line 200 "kern.ch"
#line 200 "kern.ch"
                             }
#line 200 "kern.ch"
#line 201 "kern.ch"
                if ( ((_inter = (PPTREE)else_stat,1) && 
#line 201 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 201 "kern.ch"
                        1) ) {
#line 201 "kern.ch"
#line 202 "kern.ch"
                                {
#line 202 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 202 "kern.ch"
                                    {
#line 202 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 202 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 202 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 202 "kern.ch"
                                    }
#line 202 "kern.ch"
                                    ReplaceTree(stat, 3, _ptTree0);
#line 202 "kern.ch"
                                }
#line 202 "kern.ch"
                                
#line 202 "kern.ch"
#line 203 "kern.ch"
                                
#line 203 "kern.ch"
#line 203 "kern.ch"
                             }
#line 203 "kern.ch"
#line 204 "kern.ch"
                for_elem =  stat [1];
#line 204 "kern.ch"
#line 205 "kern.ch"
                
#line 205 "kern.ch"
#line 205 "kern.ch"
            }
            
#line 205 "kern.ch"
#line 205 "kern.ch"
            _iterator2.Current(_for_elem);
#line 205 "kern.ch"
#line 205 "kern.ch"
            continue ;
            
#line 205 "kern.ch"
#line 205 "kern.ch"
        for_continue2 : 
#line 205 "kern.ch"
#line 205 "kern.ch"
            _iterator2.Current(_for_elem);
#line 205 "kern.ch"
#line 205 "kern.ch"
            _iterator2.SkipSon(1);
#line 205 "kern.ch"
#line 205 "kern.ch"
            continue ;
            
#line 205 "kern.ch"
#line 205 "kern.ch"
        for_break2 : 
#line 205 "kern.ch"
#line 205 "kern.ch"
            break ;
            
#line 205 "kern.ch"
#line 205 "kern.ch"
            
#line 205 "kern.ch"
#line 205 "kern.ch"
        }
#line 205 "kern.ch"
#line 205 "kern.ch"
        
#line 205 "kern.ch"
#line 205 "kern.ch"
    }
    
#line 205 "kern.ch"
#line 206 "kern.ch"
    if ( dumpTree ) {
#line 206 "kern.ch"
#line 207 "kern.ch"
                        DumpTree(tree);
#line 207 "kern.ch"
#line 208 "kern.ch"
                        LNewLine(1);
#line 208 "kern.ch"
                        
#line 208 "kern.ch"
#line 209 "kern.ch"
                        
#line 209 "kern.ch"
#line 209 "kern.ch"
                     } else 
#line 209 "kern.ch"
    if ( counter || counterLoop ) {
#line 209 "kern.ch"
#line 212 "kern.ch"
                                        unsigned int   counterFunct = 0 ;
                                        
#line 212 "kern.ch"
#line 213 "kern.ch"
                                        EString fileName (ptName) ;
                                        
#line 213 "kern.ch"
#line 215 "kern.ch"
                                        {
#line 215 "kern.ch"
#line 215 "kern.ch"
                                            PTREE   _Baum2 ;
#line 215 "kern.ch"
                                            
#line 215 "kern.ch"
#line 215 "kern.ch"
                                            {
#line 215 "kern.ch"
                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 215 "kern.ch"
                                                _ptRes0 = MakeTree(cplus::FUNC, 0);
#line 215 "kern.ch"
                                                _Baum2 = _ptRes0;
#line 215 "kern.ch"
                                            }
#line 215 "kern.ch"
                                            
#line 215 "kern.ch"
#line 215 "kern.ch"
                                            {
#line 215 "kern.ch"
#line 215 "kern.ch"
                                                ItPtree _iterator3 (tree, _Baum2) ;
                                                
#line 215 "kern.ch"
#line 215 "kern.ch"
                                                PTREE   _for_elem ;
#line 215 "kern.ch"
                                                
#line 215 "kern.ch"
#line 215 "kern.ch"
                                                _iterator3.AllSearch(1);
#line 215 "kern.ch"
#line 215 "kern.ch"
                                                while ( (_for_elem=_iterator3++) ) {
#line 215 "kern.ch"
#line 215 "kern.ch"
                                                    {
#line 215 "kern.ch"
#line 216 "kern.ch"
                                                        counterFunct++ ;
#line 216 "kern.ch"
#line 217 "kern.ch"
                                                        if ( counterLoop ) {
#line 217 "kern.ch"
#line 218 "kern.ch"
                                                                                PTREE   name, funct (for_elem) ;
#line 218 "kern.ch"
                                                                                
#line 218 "kern.ch"
#line 221 "kern.ch"
                                                                                ((_inter = (PPTREE)funct,1) && 
#line 221 "kern.ch"
                                                                                    ((name=SonTree(_inter,3)),1) &&
#line 221 "kern.ch"
                                                                                    1);
#line 221 "kern.ch"
                                                                                ;
#line 221 "kern.ch"
#line 222 "kern.ch"
                                                                                (name=GetIdent(name));
#line 222 "kern.ch"
                                                                                
#line 222 "kern.ch"
#line 225 "kern.ch"
                                                                                
                                                                                int line, col, lineEnd, colEnd ;
                                                                                
#line 225 "kern.ch"
#line 226 "kern.ch"
                                                                                SearchPos(funct, &line, &col);
#line 226 "kern.ch"
#line 227 "kern.ch"
                                                                                SearchEndPos(funct, &lineEnd, &colEnd);
#line 227 "kern.ch"
#line 228 "kern.ch"
                                                                                int nbLine = 0 ;
                                                                                
#line 228 "kern.ch"
#line 229 "kern.ch"
                                                                                if ( lineEnd > line ) 
#line 229 "kern.ch"
#line 230 "kern.ch"
                                                                                    nbLine =  lineEnd - line ;
#line 230 "kern.ch"
                                                                                else 
#line 231 "kern.ch"
                                                                                {
#line 231 "kern.ch"
#line 232 "kern.ch"
                                                                                    int maxLineEnd = 0 ;
                                                                                    
#line 232 "kern.ch"
#line 235 "kern.ch"
                                                                                    {
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                        int _for_slot = 1, _arity = treearity(funct);
                                                                                        
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                        MY_TREE _for_elem = (PPTREE)0 ;
                                                                                        
#line 235 "kern.ch"
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                            (_for_elem=SonTree(funct, _for_slot));
#line 235 "kern.ch"
                                                                                            
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                PTREE   elem (for_elem) ;
#line 235 "kern.ch"
                                                                                                
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                SearchEndPos(elem, &lineEnd, &colEnd);
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                if ( lineEnd > line && lineEnd > maxLineEnd ) {
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                    nbLine =  lineEnd - line ;
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                    maxLineEnd =  lineEnd ;
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                    
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                }
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                                
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                            }
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                            
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                        }
#line 235 "kern.ch"
                                                                                        
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                        
#line 235 "kern.ch"
#line 235 "kern.ch"
                                                                                    }
#line 235 "kern.ch"
#line 243 "kern.ch"
                                                                                    
#line 243 "kern.ch"
#line 243 "kern.ch"
                                                                                }
                                                                                
#line 243 "kern.ch"
#line 246 "kern.ch"
                                                                                
                                                                                unsigned int   nbLinesMax = 0 ;
                                                                                
#line 246 "kern.ch"
#line 247 "kern.ch"
                                                                                unsigned int   nbLoopMax = 0 ;
                                                                                
#line 247 "kern.ch"
#line 248 "kern.ch"
                                                                                unsigned int   nbLoop = 0 ;
                                                                                
#line 248 "kern.ch"
#line 251 "kern.ch"
                                                                                {
#line 251 "kern.ch"
#line 251 "kern.ch"
                                                                                    ItPtree _iterator4 (funct, (PPTREE) 0) ;
                                                                                    
#line 251 "kern.ch"
#line 251 "kern.ch"
                                                                                    PTREE   _for_elem ;
#line 251 "kern.ch"
                                                                                    
#line 251 "kern.ch"
#line 251 "kern.ch"
                                                                                    _iterator4.AllSearch(1);
#line 251 "kern.ch"
#line 251 "kern.ch"
                                                                                    while ( (_for_elem=_iterator4++) ) {
#line 251 "kern.ch"
#line 251 "kern.ch"
                                                                                        {
#line 251 "kern.ch"
#line 252 "kern.ch"
                                                                                            PTREE   elem (for_elem) ;
#line 252 "kern.ch"
                                                                                            
#line 252 "kern.ch"
#line 253 "kern.ch"
                                                                                            if ( ((_inter = (PPTREE)elem,1) && 
#line 253 "kern.ch"
                                                                                                    (NumberTree(_inter) == cplus::FOR) &&
#line 253 "kern.ch"
                                                                                                    1) || ((_inter = (PPTREE)elem,1) && 
#line 253 "kern.ch"
                                                                                                                (NumberTree(_inter) == cplus::WHILE) &&
#line 253 "kern.ch"
                                                                                                                1) || ((_inter = (PPTREE)elem,1) && 
#line 253 "kern.ch"
                                                                                                                            (NumberTree(_inter) == cplus::DO) &&
#line 253 "kern.ch"
                                                                                                                            1) ) {
#line 253 "kern.ch"
#line 253 "kern.ch"
                                                                                                                                    PTREE   _Baum5 ;
#line 253 "kern.ch"
                                                                                                                                    
#line 253 "kern.ch"
#line 253 "kern.ch"
                                                                                                                                    PTREE   _Baum4 ;
#line 253 "kern.ch"
                                                                                                                                    
#line 253 "kern.ch"
#line 253 "kern.ch"
                                                                                                                                    PTREE   _Baum3 ;
#line 253 "kern.ch"
                                                                                                                                    
#line 253 "kern.ch"
#line 254 "kern.ch"
                                                                                                                                    nbLoop++ ;
#line 254 "kern.ch"
#line 257 "kern.ch"
                                                                                                                                    
                                                                                                                                    int line, col, lineEnd, colEnd ;
                                                                                                                                    
#line 257 "kern.ch"
#line 258 "kern.ch"
                                                                                                                                    SearchPos(elem, &line, &col);
#line 258 "kern.ch"
#line 259 "kern.ch"
                                                                                                                                    SearchEndPos(elem, &lineEnd, &colEnd);
#line 259 "kern.ch"
#line 260 "kern.ch"
                                                                                                                                    int diffLine = lineEnd - line ;
                                                                                                                                    
#line 260 "kern.ch"
#line 261 "kern.ch"
                                                                                                                                    if ( diffLine > (int)nbLinesMax ) 
#line 261 "kern.ch"
#line 262 "kern.ch"
                                                                                                                                        nbLinesMax =  diffLine ;
#line 262 "kern.ch"
#line 265 "kern.ch"
                                                                                                                                    
                                                                                                                                    unsigned int   nbLoopI = -1 ;
                                                                                                                                    
#line 265 "kern.ch"
#line 266 "kern.ch"
                                                                                                                                    {
#line 266 "kern.ch"
                                                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 266 "kern.ch"
                                                                                                                                        _ptRes0 = MakeTree(cplus::FOR, 0);
#line 266 "kern.ch"
                                                                                                                                        _Baum3 = _ptRes0;
#line 266 "kern.ch"
                                                                                                                                    }
#line 266 "kern.ch"
                                                                                                                                    
#line 266 "kern.ch"
#line 266 "kern.ch"
                                                                                                                                    {
#line 266 "kern.ch"
#line 266 "kern.ch"
                                                                                                                                        ItPtree _iterator5 (elem, _Baum3) ;
                                                                                                                                        
#line 266 "kern.ch"
#line 266 "kern.ch"
                                                                                                                                        PTREE   _for_elem ;
#line 266 "kern.ch"
                                                                                                                                        
#line 266 "kern.ch"
#line 266 "kern.ch"
                                                                                                                                        _iterator5.AllSearch(1);
#line 266 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                        while ( (_for_elem=_iterator5++) ) {
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            nbLoopI++ ;
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            _iterator5.Current(_for_elem);
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                        for_continue5 : 
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            _iterator5.Current(_for_elem);
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            _iterator5.SkipSon(1);
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                        for_break5 : 
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            break ;
                                                                                                                                            
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                            
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                        }
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                        
#line 267 "kern.ch"
#line 267 "kern.ch"
                                                                                                                                    }
                                                                                                                                    
#line 267 "kern.ch"
#line 269 "kern.ch"
                                                                                                                                    {
#line 269 "kern.ch"
                                                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 269 "kern.ch"
                                                                                                                                        _ptRes0 = MakeTree(cplus::WHILE, 0);
#line 269 "kern.ch"
                                                                                                                                        _Baum4 = _ptRes0;
#line 269 "kern.ch"
                                                                                                                                    }
#line 269 "kern.ch"
                                                                                                                                    
#line 269 "kern.ch"
#line 269 "kern.ch"
                                                                                                                                    {
#line 269 "kern.ch"
#line 269 "kern.ch"
                                                                                                                                        ItPtree _iterator6 (elem, _Baum4) ;
                                                                                                                                        
#line 269 "kern.ch"
#line 269 "kern.ch"
                                                                                                                                        PTREE   _for_elem ;
#line 269 "kern.ch"
                                                                                                                                        
#line 269 "kern.ch"
#line 269 "kern.ch"
                                                                                                                                        _iterator6.AllSearch(1);
#line 269 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                        while ( (_for_elem=_iterator6++) ) {
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            nbLoopI++ ;
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            _iterator6.Current(_for_elem);
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                        for_continue6 : 
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            _iterator6.Current(_for_elem);
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            _iterator6.SkipSon(1);
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                        for_break6 : 
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            break ;
                                                                                                                                            
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                            
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                        }
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                        
#line 270 "kern.ch"
#line 270 "kern.ch"
                                                                                                                                    }
                                                                                                                                    
#line 270 "kern.ch"
#line 272 "kern.ch"
                                                                                                                                    {
#line 272 "kern.ch"
                                                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 272 "kern.ch"
                                                                                                                                        _ptRes0 = MakeTree(cplus::DO, 0);
#line 272 "kern.ch"
                                                                                                                                        _Baum5 = _ptRes0;
#line 272 "kern.ch"
                                                                                                                                    }
#line 272 "kern.ch"
                                                                                                                                    
#line 272 "kern.ch"
#line 272 "kern.ch"
                                                                                                                                    {
#line 272 "kern.ch"
#line 272 "kern.ch"
                                                                                                                                        ItPtree _iterator7 (elem, _Baum5) ;
                                                                                                                                        
#line 272 "kern.ch"
#line 272 "kern.ch"
                                                                                                                                        PTREE   _for_elem ;
#line 272 "kern.ch"
                                                                                                                                        
#line 272 "kern.ch"
#line 272 "kern.ch"
                                                                                                                                        _iterator7.AllSearch(1);
#line 272 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                        while ( (_for_elem=_iterator7++) ) {
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            nbLoopI++ ;
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            _iterator7.Current(_for_elem);
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                        for_continue7 : 
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            _iterator7.Current(_for_elem);
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            _iterator7.SkipSon(1);
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                        for_break7 : 
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            break ;
                                                                                                                                            
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                            
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                        }
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                        
#line 273 "kern.ch"
#line 273 "kern.ch"
                                                                                                                                    }
                                                                                                                                    
#line 273 "kern.ch"
#line 275 "kern.ch"
                                                                                                                                    if ( nbLoopI > nbLoopMax ) 
#line 275 "kern.ch"
#line 276 "kern.ch"
                                                                                                                                        nbLoopMax =  nbLoopI ;
#line 276 "kern.ch"
#line 279 "kern.ch"
                                                                                                                                    goto for_continue4 ;
                                                                                                                                    
#line 279 "kern.ch"
#line 280 "kern.ch"
                                                                                                                                    
#line 280 "kern.ch"
#line 280 "kern.ch"
                                                                                                                                 }
#line 280 "kern.ch"
#line 281 "kern.ch"
                                                                                            
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        }
                                                                                        
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        _iterator4.Current(_for_elem);
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        continue ;
                                                                                        
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                    for_continue4 : 
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        _iterator4.Current(_for_elem);
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        _iterator4.SkipSon(1);
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        continue ;
                                                                                        
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                    for_break4 : 
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        break ;
                                                                                        
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                        
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                    }
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                    
#line 281 "kern.ch"
#line 281 "kern.ch"
                                                                                }
                                                                                
#line 281 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(fileName);
#line 284 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(": Function : ");
#line 284 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(Value(name));
#line 284 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(" : lines : ");
#line 284 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(EString(nbLine));
#line 284 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(" number of loops : ");
#line 284 "kern.ch"
#line 284 "kern.ch"
                                                                                PrintString(EString(nbLoop));
#line 284 "kern.ch"
#line 285 "kern.ch"
                                                                                PrintString(" : number of inside loop max : ");
#line 285 "kern.ch"
#line 285 "kern.ch"
                                                                                PrintString(EString(nbLoopMax));
#line 285 "kern.ch"
#line 285 "kern.ch"
                                                                                PrintString(": size max lines of loop : ");
#line 285 "kern.ch"
#line 285 "kern.ch"
                                                                                PrintString(EString(nbLinesMax));
#line 285 "kern.ch"
#line 285 "kern.ch"
                                                                                LNewLine(1);
#line 285 "kern.ch"
                                                                                
#line 285 "kern.ch"
#line 286 "kern.ch"
                                                                                
#line 286 "kern.ch"
#line 286 "kern.ch"
                                                                            }
#line 286 "kern.ch"
#line 287 "kern.ch"
                                                        
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    }
                                                    
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    _iterator3.Current(_for_elem);
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    continue ;
                                                    
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                for_continue3 : 
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    _iterator3.Current(_for_elem);
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    _iterator3.SkipSon(1);
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    continue ;
                                                    
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                for_break3 : 
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    break ;
                                                    
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                    
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                }
#line 287 "kern.ch"
#line 287 "kern.ch"
                                                
#line 287 "kern.ch"
#line 287 "kern.ch"
                                            }
                                            
#line 287 "kern.ch"
#line 288 "kern.ch"
                                            PrintString(fileName);
#line 288 "kern.ch"
#line 288 "kern.ch"
                                            PrintString(":  Number of Func : ");
#line 288 "kern.ch"
#line 288 "kern.ch"
                                            PrintString(EString((int)counterFunct));
#line 288 "kern.ch"
#line 288 "kern.ch"
                                            LNewLine(1);
#line 288 "kern.ch"
                                            
#line 288 "kern.ch"
#line 289 "kern.ch"
                                            
#line 289 "kern.ch"
#line 289 "kern.ch"
                                        }
                                        
#line 289 "kern.ch"
#line 292 "kern.ch"
                                        
                                        unsigned int   nbLine = 0 ;
                                        
#line 292 "kern.ch"
#line 294 "kern.ch"
                                        {
#line 294 "kern.ch"
#line 294 "kern.ch"
                                            Protector<int>     protector (output, -1) ;
                                            
#line 294 "kern.ch"
#line 295 "kern.ch"
                                            StartOutputString();
#line 295 "kern.ch"
#line 296 "kern.ch"
                                            decompObj.ChopTree(tree);
#line 296 "kern.ch"
#line 297 "kern.ch"
                                            EString dString = EndOutputString();
                                            
#line 297 "kern.ch"
#line 298 "kern.ch"
                                            char    *pt = (char *)dString.c_str();
                                            
#line 298 "kern.ch"
#line 299 "kern.ch"
                                            bool    start = false ;
                                            
#line 299 "kern.ch"
#line 300 "kern.ch"
#line 300 "kern.ch"
                                            for (; *pt ; pt++ ) {
#line 300 "kern.ch"
#line 301 "kern.ch"
                                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 301 "kern.ch"
#line 302 "kern.ch"
                                                                        start =  false ;
#line 302 "kern.ch"
#line 303 "kern.ch"
                                                                    if ( !start && *pt == '\n' ) {
#line 303 "kern.ch"
#line 304 "kern.ch"
                                                                                                        nbLine++ ;
#line 304 "kern.ch"
#line 305 "kern.ch"
                                                                                                        start =  true ;
#line 305 "kern.ch"
#line 306 "kern.ch"
                                                                                                        
#line 306 "kern.ch"
#line 306 "kern.ch"
                                                                                                      }
#line 306 "kern.ch"
#line 307 "kern.ch"
                                                                    
#line 307 "kern.ch"
#line 307 "kern.ch"
                                                                   }
#line 307 "kern.ch"
                                            
#line 307 "kern.ch"
#line 308 "kern.ch"
                                            
#line 308 "kern.ch"
#line 308 "kern.ch"
                                        }
                                        
#line 308 "kern.ch"
#line 309 "kern.ch"
                                        PrintString(fileName);
#line 309 "kern.ch"
#line 309 "kern.ch"
                                        PrintString(":  Number of lines : ");
#line 309 "kern.ch"
#line 309 "kern.ch"
                                        PrintString(EString((int)nbLine));
#line 309 "kern.ch"
#line 309 "kern.ch"
                                        LNewLine(1);
#line 309 "kern.ch"
                                        
#line 309 "kern.ch"
#line 312 "kern.ch"
                                        nbLine =  0 ;
#line 312 "kern.ch"
#line 314 "kern.ch"
                                        {
#line 314 "kern.ch"
#line 314 "kern.ch"
                                            PTREE   nocTree = (PTREE)0 ;
#line 314 "kern.ch"
                                            
#line 314 "kern.ch"
#line 315 "kern.ch"
                                            Protector<int>     protector (output, -1) ;
                                            
#line 315 "kern.ch"
#line 314 "kern.ch"
                                            (nocTree=NoCommentCopyTree(tree));
#line 314 "kern.ch"
                                            
#line 314 "kern.ch"
#line 316 "kern.ch"
                                            StartOutputString();
#line 316 "kern.ch"
#line 317 "kern.ch"
                                            decompObj.ChopTree(nocTree);
#line 317 "kern.ch"
#line 318 "kern.ch"
                                            EString dString = EndOutputString();
                                            
#line 318 "kern.ch"
#line 319 "kern.ch"
                                            char    *pt = (char *)dString.c_str();
                                            
#line 319 "kern.ch"
#line 320 "kern.ch"
                                            bool    start = false ;
                                            
#line 320 "kern.ch"
#line 321 "kern.ch"
#line 321 "kern.ch"
                                            for (; *pt ; pt++ ) {
#line 321 "kern.ch"
#line 322 "kern.ch"
                                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 322 "kern.ch"
#line 323 "kern.ch"
                                                                        start =  false ;
#line 323 "kern.ch"
#line 324 "kern.ch"
                                                                    if ( !start && *pt == '\n' ) {
#line 324 "kern.ch"
#line 325 "kern.ch"
                                                                                                        nbLine++ ;
#line 325 "kern.ch"
#line 326 "kern.ch"
                                                                                                        start =  true ;
#line 326 "kern.ch"
#line 327 "kern.ch"
                                                                                                        
#line 327 "kern.ch"
#line 327 "kern.ch"
                                                                                                      }
#line 327 "kern.ch"
#line 328 "kern.ch"
                                                                    
#line 328 "kern.ch"
#line 328 "kern.ch"
                                                                   }
#line 328 "kern.ch"
                                            
#line 328 "kern.ch"
#line 329 "kern.ch"
                                            
#line 329 "kern.ch"
#line 329 "kern.ch"
                                        }
                                        
#line 329 "kern.ch"
#line 330 "kern.ch"
                                        PrintString(fileName);
#line 330 "kern.ch"
#line 330 "kern.ch"
                                        PrintString(":  Number of non commented lines : ");
#line 330 "kern.ch"
#line 330 "kern.ch"
                                        PrintString(EString((int)nbLine));
#line 330 "kern.ch"
#line 330 "kern.ch"
                                        LNewLine(1);
#line 330 "kern.ch"
                                        
#line 330 "kern.ch"
#line 331 "kern.ch"
                                        
#line 331 "kern.ch"
#line 331 "kern.ch"
                                    } else 
#line 331 "kern.ch"
#line 332 "kern.ch"
        decompObj.ChopTree(tree);
#line 332 "kern.ch"
    
#line 332 "kern.ch"
#line 333 "kern.ch"
    MetaEnd();
#line 333 "kern.ch"
#line 334 "kern.ch"
    if ( !firstError ) 
#line 334 "kern.ch"
#line 335 "kern.ch"
        return 1 ;
    
#line 335 "kern.ch"
    else 
#line 335 "kern.ch"
#line 337 "kern.ch"
        return 0 ;
        
#line 337 "kern.ch"
    
#line 337 "kern.ch"
#line 338 "kern.ch"
    
#line 338 "kern.ch"
#line 338 "kern.ch"
}
#line 338 "kern.ch"

#line 338 "kern.ch"
#line 338 "kern.ch"
static void kern_Anchor () { int i = 1;} 
#line 338 "kern.ch"
/*Well done my boy */ 
#line 338 "kern.ch"
