/*************************************************************************/
/*                                                                       */
/*        Parser.h : by Eric Lavillonniere 1997                          */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with backtrack.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to
   the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
   */
#ifndef PARSER_LOADED
#   define PARSER_LOADED 1
    extern PPTREE   (*the_parse_entry_pt)(int) ; // default entry point
#   define Parser EParser
    
    class Parser : virtual public PTREE {
        
        public :
        
            // constructor
            Parser ()
                : listInclude(0),  localDir(0),  pvReadSource(false)
            {
                reentrantProtect =  false ;
            }
            
            // destructor
            virtual ~Parser ()
            {
                if ( localDir != 0 ) 
                    free(localDir);
            }
            
            virtual void _InitArrays () {}
            
            // StripDir :  strip dir out of a path name
            // parameters :
            //              pathName : the pathname to be stripped
            // return stripped name 
            EString         StripDir (const EString &pathName) ;
            
            // StripFile : strip file out of a directory name
            // parameters :
            //              pathName : the path name to be stripped
            // return : stripped name 
            EString         StripFile (const EString &pathName) ;
            
            // Normalize : normalize the name of a file
            // parameters :
            //              pathName : the path name to be normalized
            // return : normalized name
            EString         Normalize (const EString &pathName) ;
            
            // CheckVersion : check that a read version is correct
            // parameters :
            //              version : version to be checked
            // return : true or false
            virtual bool    CheckVersion (int version) ;
            
            // Version : gives current version
            // return : the int of version
            virtual int     Version () ;
            
            // ReadInclude : read included files
            // parameters :
            //              name : the name of searched file
            //              here : tell if we have to look in local directory
            //              tree : tell if tree reading
            // return : the found tree
            virtual PPTREE  ReadInclude (const char *name, int here, bool tree = false) ;
            
            // ReadFile : read a file
            // parameter :
            //              name : name of file to read
            // return : the tree
            virtual PPTREE  ReadFile (const char *name) ;
            
            // ReadFileTree : read a file, try a compiled tree first
            // parameter :
            //              name : name of file to read
            //              encoder : an encoder 
            // return : the tree
            virtual PPTREE  ReadFileTree (const char *name, PTREE *encoder = 0) ;
            
            // WriteFileTree : write a tree in a file
            // parameter :
            //              name : name of file to write
            //              tree : the tree to be written
            //              encoder : an encoder 
            // return : none
            virtual void    WriteFileTree (const char *name, PTREE tree, PTREE *encoder = 0) ;
            
            // ReadInFile : read some text in a file
            // parameters :
            //              oldInput : the input to restore
            // return : the tree
            virtual PPTREE  ReadInFile (int oldInput) ;
            
            // ReadInString : read some text in a string
            // parameters :
            //              string : the string where to read
            // return : the tree
            virtual PPTREE  ReadInString (const char *string) ;
            
            // EntryPoint : entry point for parsing 
            // parameters :
            //               error_free : tell if error_free
            // return : the tree
            virtual PPTREE main_entry ( int error_free )
            {
                return PTREE( -1);
            }
            
            // EntryPoint : entry point for parsing 
            // parameters :
            //               error_free : tell if error_free
            // return : the tree
            virtual PPTREE parse_entry ( int error_free )
            {
                return PTREE( -1);
            }
            
            // Includes : get the include list
            // return : the include list
            PTREE Includes ()
            {
                return listInclude ;
            }
            
            // Includes : set includes list
            // return : the whole object
            const Parser &Includes ( PTREE include )
            {
                listInclude =  include ;
                return *this ;
            }
            
            // LocalDir : set local dir
            // parameter :
            //             dir : the dir to be set
            // return : the whole object
            const Parser &LocalDir ( const EString &dir )
            {
                
                // free old local dir
                if ( localDir ) 
                    free(localDir);
                
                // allocates new one
                localDir =  AllocString(dir.c_str());
                
                // return object
                return *this ;
            }
            
            // LocalDir : get local dir
            // return : local dir
            const char *LocalDir () const
            {
                return localDir ;
            }
            
            // ReadSource : read a source file ( not tree)
            bool ReadSource ()
            {
                return pvReadSource ;
            }
        
        private :
        
            PTREE   listInclude ;
            char    *localDir ;
            bool    pvReadSource ;
            bool    reentrantProtect ;
    };
#endif
