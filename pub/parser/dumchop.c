#include "token.h"
#include "../metachop/metachop.h"

signed char *(metachop::_tokenArray)[116] = { };

typedef int (metachop::*(DEF_FUNC_TOKEN_ARRAY [116]))() ;

DEF_FUNC_TOKEN_ARRAY    metachop::_tokenFuncArray = { };
int                     metachop::_tokenNbFuncArray [116] = { };

int metachop::Lex ()
{
    return 0 ;
}

int metachop::LexComment ()
{
    return 0 ;
}

int metachop::LexDefine ()
{
    return 0 ;
}

int metachop::LexEndLine ()
{
    return 0 ;
}

int metachop::LexEtoiEtoi ()
{
    return 0 ;
}

int metachop::LexInclude ()
{
    return 0 ;
}

int metachop::LexMeta ()
{
    return 0 ;
}

int metachop::LexParse ()
{
    return 0 ;
}

int metachop::LexPragma ()
{
    return 0 ;
}

int metachop::LexPragmaSmall ()
{
    return 0 ;
}

int metachop::LexSup ()
{
    return 0 ;
}

int metachop::LexUndef ()
{
    return 0 ;
}

int metachop::PushArgument ()
{
    return 0 ;
}

int metachop::PushFunction ()
{
    return 0 ;
}

PTREE metachop::abstract_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::additive_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::alloc_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::allocation_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::and_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::arg_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::arg_typ_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::arg_typ_list ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::asm_declaration ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::assignment_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::base_specifier ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::base_specifier_elem ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::bidon ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::bit_field_decl ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::cast_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::cast_expression_value ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::catch_unit ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::class_declaration ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::comment_eater ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::complete_class_name ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::compound_statement ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::conditional_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::const_or_volatile ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::constan ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ctor_initializer ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::data_decl_exotic ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::data_decl_sc_decl ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::data_decl_sc_ty_decl ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::data_declaration ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::data_declaration_for ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::data_declaration_strict ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::deallocation_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::declarator_follow ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::declarator_list ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::declarator_list_init ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::define_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::directive ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::end_pragma ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::equality_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::exception ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::exclusive_or_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::expression_for ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_all ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_all_ext ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_all_no_linkage ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_data_decl_sc_ty ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_data_decl_simp ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_data_declaration ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_decl_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_decl_if_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ext_decl_ifdef_dir ( int )
{
    return (PTREE)0 ;
}

int metachop::formatBeg ()
{
    return 0 ;
}

PTREE metachop::func_declaration ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::func_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ident_mul ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::include_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::inclusive_or_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::initializer ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::inside_declaration ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::inside_declaration1 ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::inside_declaration2 ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::label_beg ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::linkage_specification ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::logical_and_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::logical_or_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::long_short_int_char ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::macro ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::macro_extended ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::member_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::message_map ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::multiplicative_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::new_1 ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::new_2 ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::new_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::new_type_name ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::operator_function_name ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::parameter_list ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::parameter_list_extended ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::parametrized_class ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::parse_entry ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::pm_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::postfix_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::primary_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::prog ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::program ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::protect_declare ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::ptr_operator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::qualified_name ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::qualified_name_elem ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::quick_prog ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::quick_prog_elem ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::range_in_liste ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::range_modifier ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::range_modifier_function ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::range_modifier_ident ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::range_pragma ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::relational_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::sc_specifier ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::shift_expression ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::simple_type ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::simple_type_name ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::sizeof_type ( int )
{
    return (PTREE)0 ;
}

int metachop::specific ()
{
    return 0 ;
}

PTREE metachop::stat_all ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::stat_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::stat_if_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::stat_ifdef_dir ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::statement ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::string_list ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::switch_elem ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::switch_list ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::take_follow ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::take_follow_list ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::take_follow_super ( int )
{
    return (PTREE)0 ;
}

int metachop::the_exit ()
{
    return 0 ;
}

PTREE metachop::type_and_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::type_descr ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::type_name ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::type_specifier ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::type_specifier_without_param ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::typedef_and_declarator ( int )
{
    return (PTREE)0 ;
}

PTREE metachop::unary_expression ( int )
{
    return (PTREE)0 ;
}

int metachop::SortKeyWord ( int ret ) {}

int metachop::UpSortKeyWord ( int ret ) {}

void metachop::InitConst () {}
