/// 
/// @file EJson.h
/// 
/// @brief EJson.h
/// 
#ifndef H_EJson
    /// 
    /// @def  H_EJson
    /// 
    /// @brief  H_EJson
    /// 
#   define H_EJson 
#   include "token.h"
#   include "json.h"
#   include <set>
    
    /// 
    /// @class  EJson
    /// 
    /// @brief  EJson
    /// 
    
    class EJson {
        
        public :
        
            /// 
            /// @fn EJson::EJson () 
            /// 
            /// @brief EJson
            /// 
            EJson ()
            {
                pv_pTree =  PTREE(0);
            }
            
            /// 
            /// @fn EJson::EJson (PTREE sptree) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in,out] sptree 
            /// 
            EJson ( PTREE sptree )
                : pv_pTree(sptree)
            {}
            
            /// 
            /// @fn EJson::EJson (const EJson &json) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] json 
            /// 
            EJson ( const EJson &json )
            {
                pv_pTree =  json.pv_pTree ;
            }
            
            /// 
            /// @fn EJson::~EJson () 
            /// 
            /// @brief EJson
            /// 
            ~EJson ()
            {
                pv_pTree =  (PTREE)0 ;
            }
            
            /// 
            /// @fn EJson::EJson (bool val) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] val 
            /// 
            EJson (bool val) ;
            
            /// 
            /// @fn EJson::EJson (const EString &val) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] val 
            /// 
            EJson (const EString &val) ;
            
            /// 
            /// @fn EJson::EJson (const char *val) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] val 
            /// 
            EJson (const char *val) ;
            
            /// 
            /// @fn EJson::EJson (const std::string &val) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] val 
            /// 
            EJson (const std::string &val) ;
            
            /// 
            /// @fn EJson::EJson (int val) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] val 
            /// 
            EJson (int val) ;
            
            /// 
            /// @fn EJson::EJson (unsigned int val) 
            /// 
            /// @brief EJson
            /// 
            /// @param [in] val 
            /// 
            EJson (unsigned int val) ;
            
            /// 
            /// @fn EJson   &EJson::operator= (EJson json) 
            /// 
            /// @brief =
            /// 
            /// @param [in,out] json 
            /// 
            /// @returns  EJson
            /// 
            EJson &operator= ( EJson json )
            {
                pv_pTree =  json.pv_pTree ;
                return *this ;
            }
            
            /// 
            /// @fn bool    EJson::FieldList () 
            /// 
            /// @brief FieldList : tells if list of field
            /// 
            /// @returns  bool
            /// 
            bool    FieldList () ;
            
            /// 
            /// @fn bool    EJson::List () 
            /// 
            /// @brief List : tell if simple list
            /// 
            /// @returns  bool
            /// 
            bool    List () ;
            
            /// 
            /// @fn EJson   EJson::operator[] (const EString &name) 
            /// 
            /// @brief []
            /// 
            /// @param [in] name 
            /// 
            /// @returns  EJson
            /// 
            EJson   operator[] (const EString &name) ;
            
            /// 
            /// @fn EJson   EJson::operator[] (const std::vector<EString> &access) 
            /// 
            /// @brief []
            /// 
            /// @param [in] access 
            /// 
            /// @returns  EJson
            /// 
            EJson   operator[] (const std::vector<EString> &access) ;
            
            /// 
            /// @fn EJson   EJson::operator[] (unsigned int pos) 
            /// 
            /// @brief []
            /// 
            /// @param [in] pos 
            /// 
            /// @returns  EJson
            /// 
            EJson   operator[] (unsigned int pos) ;
            
            /// 
            /// @fn PTREE   EJson::operator() () 
            /// 
            /// @brief ()
            /// 
            /// @returns  PTREE
            /// 
            PTREE   operator() () ;
            
            /// 
            /// @fn void    EJson::Load (const EString &data) 
            /// 
            /// @brief Load
            /// 
            /// @param [in] data 
            /// 
            void    Load (const EString &data) ;
            
            /// 
            /// @fn void    EJson::LoadFile (const EString &filePath) 
            /// 
            /// @brief LoadFile
            /// 
            /// @param [in] filePath 
            /// 
            void    LoadFile (const EString &filePath) ;
            
            /// 
            /// @fn PTREE   EJson::Tree () 
            /// 
            /// @brief Tree
            /// 
            /// @returns  PTREE
            /// 
            PTREE Tree ()
            {
                return pv_pTree ;
            }
            
            /// 
            /// @fn EJson   &EJson::Tree (PTREE &sptree) 
            /// 
            /// @brief Tree
            /// 
            /// @param [in,out] sptree 
            /// 
            /// @returns  EJson
            /// 
            EJson &Tree ( PTREE &sptree )
            {
                pv_pTree =  sptree ;
                return *this ;
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name, EString content) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name    
            /// @param [in,out] content 
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name, EString content )
            {
                EString field ;
                
                field << "\"" << name << "\":";
                field << "\"" << content << "\"";
                return field ;
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name, const char *content) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name    
            /// @param [in]     content 
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name, const char *content )
            {
                return NamedField(name, EString(content));
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name 
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name )
            {
                EString field ;
                
                field << "\"" << name << "\":";
                return field ;
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name, int val) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name 
            /// @param [in]     val  
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name, int val )
            {
                EString field ;
                
                field << "\"" << name << "\":" << EString(val);
                return field ;
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name, unsigned int val) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name 
            /// @param [in]     val  
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name, unsigned int val )
            {
                EString field ;
                
                field << "\"" << name << "\":" << EString((int)val);
                return field ;
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name, float val) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name 
            /// @param [in]     val  
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name, float val )
            {
                EString field ;
                
                field << "\"" << name << "\":" << EString(val);
                return field ;
            }
            
            /// 
            /// @fn static EString  EJson::NamedField (EString name, bool val) 
            /// 
            /// @brief NamedField
            /// 
            /// @param [in,out] name 
            /// @param [in]     val  
            /// 
            /// @returns  EString
            /// 
            static  EString NamedField ( EString name, bool val )
            {
                EString field ;
                
                field << "\"" << name << "\":";
                if ( val ) 
                    field << "1";
                else 
                    field << "0";
                return field ;
            }
            
            /// 
            /// @fn std::set<EString>   EJson::Fields () 
            /// 
            /// @brief Fields
            /// 
            /// @returns std::set<EString> 
            /// 
            std::set<EString>   Fields () ;
            
            /// 
            /// @fn long long   EJson::ToLongLong () 
            /// 
            /// @brief ToLongLong
            /// 
            /// @returns  long long
            /// 
            long long           ToLongLong () ;
            
            /// 
            /// @fn long    EJson::ToLong () 
            /// 
            /// @brief ToLong
            /// 
            /// @returns  long
            /// 
            long                ToLong () ;
            
            /// 
            /// @fn long long   EJson::ToInt () 
            /// 
            /// @brief ToInt
            /// 
            /// @returns  long
            /// 
            long long           ToInt () ;
            
            /// 
            /// @fn EString EJson::ToString () 
            /// 
            /// @brief ToString
            /// 
            /// @returns  EString
            /// 
            EString             ToString () ;
            
            /// 
            /// @fn float   EJson::ToFloat () 
            /// 
            /// @brief ToFloat
            /// 
            /// @returns  float
            /// 
            float               ToFloat () ;
            
            /// 
            /// @fn bool    EJson::ToBool () 
            /// 
            /// @brief ToBool
            /// 
            /// @returns  bool
            /// 
            bool                ToBool () ;
            
            /// 
            /// @fn bool    EJson::Valid () 
            /// 
            /// @brief Valid
            /// 
            /// @returns  bool
            /// 
            bool                Valid () ;
            
            /// 
            /// @fn bool    EJson::Set (unsigned int pos, EJson json, bool insert = false) 
            /// 
            /// @brief Set : set value or replace existing one in sequence
            /// 
            /// @param [in]     pos    
            /// @param [in,out] json   
            /// @param [in]     insert 
            /// 
            /// @returns  bool
            /// 
            bool                Set (unsigned int pos, EJson json, bool insert = false) ;
            
            /// 
            /// @fn bool    EJson::Set (EString field, EJson json) 
            /// 
            /// @brief Set : set value or replace exising one in sequence
            /// 
            /// @param [in,out] field 
            /// @param [in,out] json  
            /// 
            /// @returns  bool
            /// 
            bool                Set (EString field, EJson json) ;
            
            /// 
            /// @fn bool    EJson::Append (EJson json) 
            /// 
            /// @brief Append
            /// 
            /// @param [in,out] json 
            /// 
            /// @returns  bool
            /// 
            bool Append ( EJson json )
            {
                return Set(std::numeric_limits<unsigned int> ::max(), json);
            }
            
            /// 
            /// @fn bool    EJson::Prepend (EJson json) 
            /// 
            /// @brief Prepend
            /// 
            /// @param [in,out] json 
            /// 
            /// @returns  bool
            /// 
            bool Prepend ( EJson json )
            {
                return Set(0, json, true /* insert */ );
            }
            
            /// 
            /// @fn bool    EJson::AppendContent (EJson json) 
            /// 
            /// @brief AppendArray
            /// 
            /// @param [in,out] json 
            /// 
            /// @returns  bool
            /// 
            bool    AppendContent (EJson json) ;
            
            /// 
            /// @fn bool    EJson::ReplaceNamedEntryInContent (EString field, EJson json) 
            /// 
            /// @brief ReplaceNamedEntryContent : if field entry does not exist create, otherwise create/replace value in entry (which should contain a list of field)
            ///                        the json parameter must be a named value  
            /// 
            /// @param [in,out] field 
            /// @param [in,out] json  
            /// 
            /// @returns  bool
            /// 
            //                         the value of the entry must be itself a sequence
            bool    ReplaceNamedEntryInContent (EString field, EJson json) ;
            
            /// 
            /// @fn bool    EJson::Remove (unsigned int pos) 
            /// 
            /// @brief Remove
            /// 
            /// @param [in] pos 
            /// 
            /// @returns  bool
            /// 
            bool    Remove (unsigned int pos) ;
            
            /// 
            /// @fn bool    EJson::Remove (EString field) 
            /// 
            /// @brief Remove
            /// 
            /// @param [in,out] field 
            /// 
            /// @returns  bool
            /// 
            bool    Remove (EString field) ;
            
            /// 
            /// @fn void    EJson::SetEmptyObject () 
            /// 
            /// @brief SetEmptySequence
            /// 
            void    SetEmptyObject () ;
            
            /// 
            /// @fn void    EJson::SetEmptyArray () 
            /// 
            /// @brief SetEmptyList
            /// 
            void    SetEmptyArray () ;
            
            /// 
            /// @fn static EJson    EJson::MkObject () 
            /// 
            /// @brief MkObject
            /// 
            /// @returns  EJson
            /// 
            static  EJson MkObject ()
            {
                EJson   json ;
                
                json.SetEmptyObject();
                return json ;
            }
            
            /// 
            /// @fn static EJson    EJson::MkArray () 
            /// 
            /// @brief MkArray
            /// 
            /// @returns  EJson
            /// 
            static  EJson MkArray ()
            {
                EJson   json ;
                
                json.SetEmptyArray();
                return json ;
            }
            
            /// 
            /// @fn bool    EJson::IsEmptyArray () 
            /// 
            /// @brief IsEmptyArray
            /// 
            /// @returns  bool
            /// 
            bool    IsEmptyArray () ;
            
            /// 
            /// @fn EString EJson::Stringify (const EString &s) 
            /// 
            /// @brief Stringify
            /// 
            /// @param [in] s 
            /// 
            /// @returns  EString
            /// 
            EString Stringify (const EString &s) ;
            
            /// 
            /// @fn EString EJson::UnStringfy (const EString &s) 
            /// 
            /// @brief Unstringfy
            /// 
            /// @param [in] s 
            /// 
            /// @returns  EString
            /// 
            EString UnStringfy (const EString &s) ;
        
        private :
        
            PTREE   pv_pTree ; ///< pv_pTree
    };
#endif
