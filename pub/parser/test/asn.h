#ifndef ASN_PARSER
#define ASN_PARSER 
int AllReadyLoaded (PPTREE tree) ;
#ifdef OPTIONAL
#undef OPTIONAL
#endif
#ifdef FALSE
#undef FALSE
#endif
#ifdef TRUE
#undef TRUE
#endif
#undef NULL
#ifdef __cplusplus
#include "pretty.h"
typedef int (pretty::* *_FUNC_MEMB_ASN)() ;

class asn : public pretty, public virtual Parser {
    
    public :
    
        static int  init ;
        
        asn ()
        {
            ptTokenArray = _tokenArray ;
            ptTokenFuncArray = (_FUNC_MEMB_ASN)_tokenFuncArray ;
            ptTokenNbFuncArray = _tokenNbFuncArray ;
            InitConst();
            keepCarr = 0 ;
        }
        
        ~asn () {}
        
        virtual void AsLanguage ()
        {
            SwitchLang("asn");
        }
        
        virtual void *rootGrammar ()
        {
            return (void *)this ;
        }
        
        virtual PPTREE      AnIdent (int error_free) ;
        virtual PPTREE      AnyType (int error_free) ;
        virtual PPTREE      AnyValue (int error_free) ;
        virtual PPTREE      BitStringType (int error_free) ;
        virtual PPTREE      BitStringValue (int error_free) ;
        virtual PPTREE      BuiltinType (int error_free) ;
        virtual PPTREE      BuiltinValue (int error_free) ;
        virtual PPTREE      CharacterStringType (int error_free) ;
        virtual PPTREE      ChoiceType (int error_free) ;
        virtual PPTREE      DefinedType (int error_free) ;
        virtual PPTREE      DefinedValue (int error_free) ;
        virtual PPTREE      ElementType (int error_free) ;
        virtual PPTREE      EnumeratedType (int error_free) ;
        virtual int         Expo () ;
        virtual PPTREE      Exports (int error_free) ;
        virtual int         Hexa () ;
        virtual PPTREE      ImportList (int error_free) ;
        virtual PPTREE      Imports (int error_free) ;
        virtual PPTREE      IncludeDir (int error_free) ;
        virtual PPTREE      InnerSubTyping (int error_free) ;
        virtual PPTREE      Insert (int error_free) ;
        virtual PPTREE      IntegerType (int error_free) ;
        virtual int         Lex () ;
        virtual int         LexComment () ;
        virtual int         LexInclude () ;
        virtual int         LexMeta () ;
        virtual PPTREE      Module (int error_free) ;
        virtual PPTREE      ModuleIdentifier (int error_free) ;
        virtual PPTREE      NamedBit (int error_free) ;
        virtual PPTREE      NamedNumber (int error_free) ;
        virtual PPTREE      NamedType (int error_free) ;
        virtual PPTREE      NamedType2 (int error_free) ;
        virtual PPTREE      NamedValue (int error_free) ;
        virtual PPTREE      NamedValue1 (int error_free) ;
        virtual int         Numb_5 () ;
        virtual PPTREE      Number (int error_free) ;
        virtual PPTREE      ObjectIdentifierValue (int error_free) ;
        virtual PPTREE      RealValue (int error_free) ;
        virtual PPTREE      SelectionType (int error_free) ;
        virtual PPTREE      SequenceOfType (int error_free) ;
        virtual PPTREE      SequenceType (int error_free) ;
        virtual PPTREE      SequenceValue (int error_free) ;
        virtual PPTREE      SetOfType (int error_free) ;
        virtual PPTREE      SetType (int error_free) ;
        virtual PPTREE      SignedNumber (int error_free) ;
        virtual PPTREE      SizeRange (int error_free) ;
        virtual PPTREE      SubTypeSpec (int error_free) ;
        virtual PPTREE      Symbol (int error_free) ;
        virtual PPTREE      Tag (int error_free) ;
        virtual PPTREE      TagClass (int error_free) ;
        virtual PPTREE      TagNumber (int error_free) ;
        virtual PPTREE      TagStyle (int error_free) ;
        virtual PPTREE      TagStyleDefault (int error_free) ;
        virtual PPTREE      Type (int error_free) ;
        virtual PPTREE      TypeAssignment (int error_free) ;
        virtual PPTREE      UnNamedType (int error_free) ;
        virtual PPTREE      UsefulType (int error_free) ;
        virtual PPTREE      Value (int error_free) ;
        virtual PPTREE      ValueAssignment (int error_free) ;
        virtual PPTREE      ValueRange (int error_free) ;
        virtual PPTREE      bidon (int error_free) ;
        virtual PPTREE      main_entry (int error_free) ;
        virtual PPTREE      parse_entry (int error_free) ;
        virtual PPTREE      program (int error_free) ;
        int                 keepCarr ;
        static signed char  *_tokenArray [59];
        static int          (asn::*(_tokenFuncArray [59]))() ;
        static int          _tokenNbFuncArray [59];
        virtual int         SortKeyWord (int ret) ;
        virtual int         UpSortKeyWord (int ret) ;
        virtual void        InitConst () ;
        enum constants { OBJECT_NODE = 168, TOP_ENTRY = 167
            , VAL_ASSIGN_PROG = 166, ANY_TAG = 165, UNKNOWN_FIELD = 164
            , INVALID_FIELD = 163, UNEXPECTED_TAG = 162
            , INCORRECT_LENGTH = 161, INCORRECT_TAG = 160
            , TAGGED_NAMED_TYPE = 159, FILEOP = 158, INVALID = 157
            , GENEPX = 156, CODING_W_LENGTH = 155, CODING_SPEC = 154
            , BLIND_CODING = 153, CODING = 152, CONS = 151, LT_THAN = 150
            , VALUE_RANGE = 149, MAX_VALUE = 148, MAX = 147, POINPOIN = 146
            , GT_THAN = 145, MIN_VALUE = 144, VAL_ASSIGN = 143
            , OBJECT_DESCRIPTOR = 142, UTC_TIME = 141
            , GENERALIZED_TIME = 140, TYP_ASSIGN = 139, TYP = 138
            , TAGS = 137, TAGSTYLE_DEFAULT = 136, TAGSTYLE = 135
            , TAGCLASS = 134, CFER = 133, TAG = 132, SUBTYPE_SPEC = 131
            , VBAR = 130, INCLUDES = 129, UN_MINUS = 128, SET_OF = 127
            , SEQUENCE_VALUE = 126, SEQUENCE_OF = 125, INFE = 124
            , SELECTION_TYPE = 123, MIN_INFIN_VALUE = 122
            , MAX_INFIN_VALUE = 121, OBJECT_IDENTIFIER_VALUE = 120
            , VAL_DEF = 119, NAMED_VALUE = 118, NAMED_TYPE = 117
            , NAMED_NUMBER = 116, PFER = 115, NAMED_BIT = 114
            , MODULE_IDENTIFIER = 113, LIST_MODULE = 112, END = 111
            , BEGIN = 110, DPOIDPOIEGAL = 109, DEFINITIONS = 108
            , MODULE = 107, OPTION = 106, ABSENT = 105, PRESENT = 104
            , INNER = 103, COMPONENTS_ONLY = 102, COMPONENTS_EXCEPT = 101
            , POINPOINPOIN = 100, COMPONENT = 99, IMPORT_LIST = 98
            , FROM = 97, PVIR = 96, COMPONENTS_OF = 95, OF = 94
            , DEFAULT = 93, OPTIONAL = 92, ELEMENT_TYPE = 91
            , REF_VALUE = 90, REF_TYP = 89, POIN = 88, CHARACTER = 87
            , NULL_VALUE = 86, OBJECT_IDENTIFIER = 85, IDENTIFIER = 84
            , NULL_TYPE = 83, OCTET_STRING = 82, REAL_TYPE = 81, AFER = 80
            , VIRG = 79, BITSTRING = 78, ANY_VALUE = 77, BY = 76
            , DEFINED = 75, ANY_TYPE = 74, MIN = 73, EXPLICIT = 72
            , IMPLICIT = 71, PRIVATE = 70, APPLICATION = 69, UNIVERSAL = 68
            , POUV = 67, SIZE = 66, INSERT = 65, WITH = 64, IMPORTS = 63
            , EXPORTS = 62, COMPONENTS = 61, AOUV = 60
            , MINUSTIREINFINITY = 59, PLUSTIREINFINITY = 58, FALSE = 57
            , TRUE = 56, ISO646STRING = 55, T61STRING = 54
            , GENERALSTRING = 53, GRAPHICSTRING = 52, IA5STRING = 51
            , VISIBLESTRING = 50, VIDEOTEXSTRING = 49, TELETEXSTRING = 48
            , PRINTABLESTRING = 47, NUMERICSTRING = 46
            , OBJECTDESCRIPTOR = 45, EXTERNAL = 44, UTCTIME = 43
            , GENERALIZEDTIME = 42, CHOICE = 41, SET = 40, SEQUENCE = 39
            , OBJECT = 38, NULL = 37, OCTET = 36, BIT = 35, REAL = 34
            , INTEGER = 33, ENUMERATED = 32, BOOLEAN = 31, COUV = 30
            , ANY = 29, NUMBER_5 = 28, INCLUDE_LOCAL = 27, INCLUDE_SYS = 26
            , INCLUDE_DIR = 25, NUMB = 24, HSTRING = 23, BSTRING = 22
            , STRING = 21, IDENT = 20, TYP_IDENT = 19, MINUS_SIGN = 18
            , HEXA_CODE = 17, TEN_EXPO = 16, TWO_EXPO = 15, GOTO_REL = 14
            , GOTO = 13, STR = 12, UNMARK = 11, MARK = 10, TAB_VIRT = 9
            , TAB = 8, NEWLINE = 7, ATTRIBUTS = 6, PLACE_HOLD_CONST };
};
extern asn  *parser_asn ;
#endif
#define OBJECT_NODE_asn 168
#define TOP_ENTRY_asn 167
#define VAL_ASSIGN_PROG_asn 166
#define ANY_TAG_asn 165
#define UNKNOWN_FIELD_asn 164
#define INVALID_FIELD_asn 163
#define UNEXPECTED_TAG_asn 162
#define INCORRECT_LENGTH_asn 161
#define INCORRECT_TAG_asn 160
#define TAGGED_NAMED_TYPE_asn 159
#define FILEOP_asn 158
#define INVALID_asn 157
#define GENEPX_asn 156
#define CODING_W_LENGTH_asn 155
#define CODING_SPEC_asn 154
#define BLIND_CODING_asn 153
#define CODING_asn 152
#define CONS_asn 151
#define LT_THAN_asn 150
#define VALUE_RANGE_asn 149
#define MAX_VALUE_asn 148
#define MAX_asn 147
#define POINPOIN_asn 146
#define GT_THAN_asn 145
#define MIN_VALUE_asn 144
#define VAL_ASSIGN_asn 143
#define OBJECT_DESCRIPTOR_asn 142
#define UTC_TIME_asn 141
#define GENERALIZED_TIME_asn 140
#define TYP_ASSIGN_asn 139
#define TYP_asn 138
#define TAGS_asn 137
#define TAGSTYLE_DEFAULT_asn 136
#define TAGSTYLE_asn 135
#define TAGCLASS_asn 134
#define CFER_asn 133
#define TAG_asn 132
#define SUBTYPE_SPEC_asn 131
#define VBAR_asn 130
#define INCLUDES_asn 129
#define UN_MINUS_asn 128
#define SET_OF_asn 127
#define SEQUENCE_VALUE_asn 126
#define SEQUENCE_OF_asn 125
#define INFE_asn 124
#define SELECTION_TYPE_asn 123
#define MIN_INFIN_VALUE_asn 122
#define MAX_INFIN_VALUE_asn 121
#define OBJECT_IDENTIFIER_VALUE_asn 120
#define VAL_DEF_asn 119
#define NAMED_VALUE_asn 118
#define NAMED_TYPE_asn 117
#define NAMED_NUMBER_asn 116
#define PFER_asn 115
#define NAMED_BIT_asn 114
#define MODULE_IDENTIFIER_asn 113
#define LIST_MODULE_asn 112
#define END_asn 111
#define BEGIN_asn 110
#define DPOIDPOIEGAL_asn 109
#define DEFINITIONS_asn 108
#define MODULE_asn 107
#define OPTION_asn 106
#define ABSENT_asn 105
#define PRESENT_asn 104
#define INNER_asn 103
#define COMPONENTS_ONLY_asn 102
#define COMPONENTS_EXCEPT_asn 101
#define POINPOINPOIN_asn 100
#define COMPONENT_asn 99
#define IMPORT_LIST_asn 98
#define FROM_asn 97
#define PVIR_asn 96
#define COMPONENTS_OF_asn 95
#define OF_asn 94
#define DEFAULT_asn 93
#define OPTIONAL_asn 92
#define ELEMENT_TYPE_asn 91
#define REF_VALUE_asn 90
#define REF_TYP_asn 89
#define POIN_asn 88
#define CHARACTER_asn 87
#define NULL_VALUE_asn 86
#define OBJECT_IDENTIFIER_asn 85
#define IDENTIFIER_asn 84
#define NULL_TYPE_asn 83
#define OCTET_STRING_asn 82
#define REAL_TYPE_asn 81
#define AFER_asn 80
#define VIRG_asn 79
#define BITSTRING_asn 78
#define ANY_VALUE_asn 77
#define BY_asn 76
#define DEFINED_asn 75
#define ANY_TYPE_asn 74
#define MIN_asn 73
#define EXPLICIT_asn 72
#define IMPLICIT_asn 71
#define PRIVATE_asn 70
#define APPLICATION_asn 69
#define UNIVERSAL_asn 68
#define POUV_asn 67
#define SIZE_asn 66
#define INSERT_asn 65
#define WITH_asn 64
#define IMPORTS_asn 63
#define EXPORTS_asn 62
#define COMPONENTS_asn 61
#define AOUV_asn 60
#define MINUSTIREINFINITY_asn 59
#define PLUSTIREINFINITY_asn 58
#define FALSE_asn 57
#define TRUE_asn 56
#define ISO646STRING_asn 55
#define T61STRING_asn 54
#define GENERALSTRING_asn 53
#define GRAPHICSTRING_asn 52
#define IA5STRING_asn 51
#define VISIBLESTRING_asn 50
#define VIDEOTEXSTRING_asn 49
#define TELETEXSTRING_asn 48
#define PRINTABLESTRING_asn 47
#define NUMERICSTRING_asn 46
#define OBJECTDESCRIPTOR_asn 45
#define EXTERNAL_asn 44
#define UTCTIME_asn 43
#define GENERALIZEDTIME_asn 42
#define CHOICE_asn 41
#define SET_asn 40
#define SEQUENCE_asn 39
#define OBJECT_asn 38
#define NULL_asn 37
#define OCTET_asn 36
#define BIT_asn 35
#define REAL_asn 34
#define INTEGER_asn 33
#define ENUMERATED_asn 32
#define BOOLEAN_asn 31
#define COUV_asn 30
#define ANY_asn 29
#define NUMBER_5_asn 28
#define INCLUDE_LOCAL_asn 27
#define INCLUDE_SYS_asn 26
#define INCLUDE_DIR_asn 25
#define NUMB_asn 24
#define HSTRING_asn 23
#define BSTRING_asn 22
#define STRING_asn 21
#define IDENT_asn 20
#define TYP_IDENT_asn 19
#define MINUS_SIGN_asn 18
#define HEXA_CODE_asn 17
#define TEN_EXPO_asn 16
#define TWO_EXPO_asn 15
#define GOTO_REL_asn 14
#define GOTO_asn 13
#define STR_asn 12
#define UNMARK_asn 11
#define MARK_asn 10
#define TAB_VIRT_asn 9
#define TAB_asn 8
#define NEWLINE_asn 7
#define ATTRIBUTS_asn 6
#undef _Tak
#define _Tak(func) func 
#endif
