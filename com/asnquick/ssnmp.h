#ifndef ssnmp_definition
#define ssnmp_definition 1
#include "quickasn.h"
#include <map.h>

class Grammssnmp : public GenGramm {
    
    public :
    
        typedef map<EString, int *, LessString>     TabObject ;
        
        Grammssnmp ()
        {
            int *ptInt ;
            int directory_entry [] = { 1, 3, 6, 1, 1, - 1 };
            
            ptInt = (int *)malloc(6 * sizeof(int));
            memcpy(ptInt, (char *)directory_entry, 6 * sizeof(int));
            pvTabObject ["directory"] = ptInt ;
            
            int enterprises_entry [] = { 1, 3, 6, 1, 4, 1, - 1 };
            
            ptInt = (int *)malloc(7 * sizeof(int));
            memcpy(ptInt, (char *)enterprises_entry, 7 * sizeof(int));
            pvTabObject ["enterprises"] = ptInt ;
            
            int experimental_entry [] = { 1, 3, 6, 1, 3, - 1 };
            
            ptInt = (int *)malloc(6 * sizeof(int));
            memcpy(ptInt, (char *)experimental_entry, 6 * sizeof(int));
            pvTabObject ["experimental"] = ptInt ;
            
            int internet_entry [] = { 1, 3, 6, 1, - 1 };
            
            ptInt = (int *)malloc(5 * sizeof(int));
            memcpy(ptInt, (char *)internet_entry, 5 * sizeof(int));
            pvTabObject ["internet"] = ptInt ;
            
            int iso_entry [] = { 1, - 1 };
            
            ptInt = (int *)malloc(2 * sizeof(int));
            memcpy(ptInt, (char *)iso_entry, 2 * sizeof(int));
            pvTabObject ["iso"] = ptInt ;
            
            int mgmt_entry [] = { 1, 3, 6, 1, 2, - 1 };
            
            ptInt = (int *)malloc(6 * sizeof(int));
            memcpy(ptInt, (char *)mgmt_entry, 6 * sizeof(int));
            pvTabObject ["mgmt"] = ptInt ;
            
            int private_entry [] = { 1, 3, 6, 1, 4, - 1 };
            
            ptInt = (int *)malloc(6 * sizeof(int));
            memcpy(ptInt, (char *)private_entry, 6 * sizeof(int));
            pvTabObject ["private"] = ptInt ;
            
            int security_entry [] = { 1, 3, 6, 1, 5, - 1 };
            
            ptInt = (int *)malloc(6 * sizeof(int));
            memcpy(ptInt, (char *)security_entry, 6 * sizeof(int));
            pvTabObject ["security"] = ptInt ;
            
            int snmpDomains_entry [] = { 1, 3, 6, 1, 6, 1, - 1 };
            
            ptInt = (int *)malloc(7 * sizeof(int));
            memcpy(ptInt, (char *)snmpDomains_entry, 7 * sizeof(int));
            pvTabObject ["snmpDomains"] = ptInt ;
            
            int snmpModules_entry [] = { 1, 3, 6, 1, 6, 3, - 1 };
            
            ptInt = (int *)malloc(7 * sizeof(int));
            memcpy(ptInt, (char *)snmpModules_entry, 7 * sizeof(int));
            pvTabObject ["snmpModules"] = ptInt ;
            
            int snmpProxys_entry [] = { 1, 3, 6, 1, 6, 2, - 1 };
            
            ptInt = (int *)malloc(7 * sizeof(int));
            memcpy(ptInt, (char *)snmpProxys_entry, 7 * sizeof(int));
            pvTabObject ["snmpProxys"] = ptInt ;
            
            int snmpV2_entry [] = { 1, 3, 6, 1, 6, - 1 };
            
            ptInt = (int *)malloc(6 * sizeof(int));
            memcpy(ptInt, (char *)snmpV2_entry, 6 * sizeof(int));
            pvTabObject ["snmpV2"] = ptInt ;
        }
        
        ~Grammssnmp ()
        {
            TabObject::iterator iter ;
            
            for ( iter = pvTabObject.begin() ; iter != pvTabObject.end() ; 
                    iter++ ) 
                free((*iter).second);
            pvTabObject.erase(pvTabObject.begin(), pvTabObject.end());
        }
        
        virtual int *GetObjectDef ( EString name )
        {
            TabObject::iterator iter ;
            
            iter = pvTabObject.find(name);
            if ( iter != pvTabObject.end() ) 
                return (*iter).second ;
            else 
                return (int *)0 ;
        }
        
        virtual PTREE   DecodeObjectIdentifier (PTREE objectList) ;
        virtual PTREE   Root (EString &val, CoordString &coord
            , bool checkTag) ;
        virtual void    Root (EString &resString, PTREE val) ;
        virtual PTREE   BindContent (EString &val, CoordString &coord
            , bool checkTag) ;
        virtual void    BindContent (EString &resString, PTREE val) ;
        virtual PTREE   ObjectSyntax (EString &val, CoordString &coord
            , bool checkTag) ;
        virtual void    ObjectSyntax (EString &resString, PTREE val) ;
        virtual PTREE   SimpleSyntax (EString &val, CoordString &coord
            , bool checkTag) ;
        virtual void    SimpleSyntax (EString &resString, PTREE val) ;
        virtual PTREE   ApplicationSyntax (EString &val
            , CoordString &coord, bool checkTag) ;
        virtual void    ApplicationSyntax (EString &resString, PTREE val) ;
        virtual PTREE   __Rule0 (EString &val, CoordString &coord
            , bool checkTag) ;
        virtual void    __Rule0 (EString &resString, PTREE val) ;
        
        virtual PTREE DecodeString ( EString &ruleName, EString &val
            , CoordString &coord, bool checkTag )
        {
            if ( ruleName == "" ) 
                return Root(val, coord, checkTag);
            if ( ruleName == "Root" ) 
                return Root(val, coord, checkTag);
            if ( ruleName == "BindContent" ) 
                return BindContent(val, coord, checkTag);
            if ( ruleName == "ObjectSyntax" ) 
                return ObjectSyntax(val, coord, checkTag);
            if ( ruleName == "SimpleSyntax" ) 
                return SimpleSyntax(val, coord, checkTag);
            if ( ruleName == "ApplicationSyntax" ) 
                return ApplicationSyntax(val, coord, checkTag);
            if ( ruleName == "__Rule0" ) 
                return __Rule0(val, coord, checkTag);
            return PTREE(0);
        }
        
        virtual void EncodeString ( EString &ruleName, EString &resString
            , PTREE val )
        {
            if ( ruleName == "" ) 
                Root(resString, val);
            if ( ruleName == "Root" ) {
                Root(resString, val);
                return ;
            }
            if ( ruleName == "BindContent" ) {
                BindContent(resString, val);
                return ;
            }
            if ( ruleName == "ObjectSyntax" ) {
                ObjectSyntax(resString, val);
                return ;
            }
            if ( ruleName == "SimpleSyntax" ) {
                SimpleSyntax(resString, val);
                return ;
            }
            if ( ruleName == "ApplicationSyntax" ) {
                ApplicationSyntax(resString, val);
                return ;
            }
            if ( ruleName == "__Rule0" ) {
                __Rule0(resString, val);
                return ;
            }
        }
    
    private :
    
        TabObject   pvTabObject ;
};
#endif
