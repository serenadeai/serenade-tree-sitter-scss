#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 488
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 20
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 48

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_ATuse = 14,
  anon_sym_ATforward = 15,
  anon_sym_ATapply = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_COLON = 19,
  anon_sym_ATmixin = 20,
  anon_sym_ATinclude = 21,
  anon_sym_LPAREN2 = 22,
  anon_sym_RPAREN2 = 23,
  anon_sym_PERCENT = 24,
  anon_sym_ATextend = 25,
  anon_sym_ATif = 26,
  anon_sym_ATelse = 27,
  anon_sym_if = 28,
  anon_sym_ATeach = 29,
  anon_sym_in = 30,
  anon_sym_ATfor = 31,
  anon_sym_through = 32,
  anon_sym_ATwhile = 33,
  anon_sym_ATfunction = 34,
  anon_sym_ATreturn = 35,
  anon_sym_ATat_DASHroot = 36,
  anon_sym_ATerror = 37,
  anon_sym_ATwarn = 38,
  anon_sym_ATdebug = 39,
  sym_nesting_selector = 40,
  anon_sym_STAR = 41,
  anon_sym_DOT = 42,
  anon_sym_COLON_COLON = 43,
  anon_sym_POUND = 44,
  anon_sym_LBRACK = 45,
  anon_sym_EQ = 46,
  anon_sym_TILDE_EQ = 47,
  anon_sym_CARET_EQ = 48,
  anon_sym_PIPE_EQ = 49,
  anon_sym_STAR_EQ = 50,
  anon_sym_DOLLAR_EQ = 51,
  anon_sym_RBRACK = 52,
  anon_sym_GT = 53,
  anon_sym_TILDE = 54,
  anon_sym_PLUS = 55,
  sym_important = 56,
  anon_sym_and = 57,
  anon_sym_or = 58,
  anon_sym_not = 59,
  anon_sym_only = 60,
  anon_sym_selector = 61,
  aux_sym_color_value_token1 = 62,
  sym_string_value = 63,
  sym_integer = 64,
  aux_sym_float_value_token1 = 65,
  sym_unit = 66,
  anon_sym_DASH = 67,
  anon_sym_SLASH = 68,
  anon_sym_EQ_EQ = 69,
  anon_sym_LT = 70,
  anon_sym_BANG_EQ = 71,
  anon_sym_LT_EQ = 72,
  anon_sym_GT_EQ = 73,
  sym_identifier = 74,
  sym_variable_identifier = 75,
  sym_at_keyword = 76,
  sym_comment = 77,
  sym_line_comment = 78,
  sym_plain_value = 79,
  sym__descendant_operator = 80,
  sym_program = 81,
  sym_statement = 82,
  sym_import_statement = 83,
  sym_css_media = 84,
  sym_charset_statement = 85,
  sym_namespace_statement = 86,
  sym_keyframes_statement = 87,
  sym_keyframe_block_list = 88,
  sym_keyframe_block = 89,
  sym_from = 90,
  sym_supports_statement = 91,
  sym_at_rule = 92,
  sym_use_statement = 93,
  sym_forward_statement = 94,
  sym_apply_statement = 95,
  sym_parameters = 96,
  sym_parameter = 97,
  sym_css_mixin = 98,
  sym_css_include = 99,
  sym_include_arguments = 100,
  sym_include_argument = 101,
  sym_placeholder = 102,
  sym_extend_statement = 103,
  sym_if = 104,
  sym_if_clause = 105,
  sym_else_if_clause = 106,
  sym_else_clause = 107,
  sym_each_statement = 108,
  sym_for_statement = 109,
  sym_while_statement = 110,
  sym_function_statement = 111,
  sym_return_statement = 112,
  sym_at_root_statement = 113,
  sym_error_statement = 114,
  sym_warn_statement = 115,
  sym_debug_statement = 116,
  sym_css_ruleset = 117,
  sym_css_selector_list = 118,
  sym_enclosed_body = 119,
  sym_block_item = 120,
  sym__selector = 121,
  sym_universal_selector = 122,
  sym_class_selector = 123,
  sym_pseudo_class_selector = 124,
  sym_pseudo_element_selector = 125,
  sym_id_selector = 126,
  sym_attribute_selector = 127,
  sym_child_selector = 128,
  sym_descendant_selector = 129,
  sym_sibling_selector = 130,
  sym_adjacent_sibling_selector = 131,
  sym_pseudo_class_arguments = 132,
  sym_declaration = 133,
  sym_declaration_pair = 134,
  sym_last_declaration = 135,
  sym__query = 136,
  sym_feature_query = 137,
  sym_parenthesized_query = 138,
  sym_binary_query = 139,
  sym_unary_query = 140,
  sym_selector_query = 141,
  sym_value_ = 142,
  sym_parenthesized_value = 143,
  sym_color_value = 144,
  sym_integer_value = 145,
  sym_float_value = 146,
  sym_call_expression = 147,
  sym_binary_expression = 148,
  sym_arguments = 149,
  sym_argument = 150,
  aux_sym_program_repeat1 = 151,
  aux_sym_import_statement_repeat1 = 152,
  aux_sym_keyframe_block_list_repeat1 = 153,
  aux_sym_apply_statement_repeat1 = 154,
  aux_sym_parameters_repeat1 = 155,
  aux_sym_include_arguments_repeat1 = 156,
  aux_sym_if_repeat1 = 157,
  aux_sym_css_selector_list_repeat1 = 158,
  aux_sym_enclosed_body_repeat1 = 159,
  aux_sym_pseudo_class_arguments_repeat1 = 160,
  aux_sym_declaration_pair_repeat1 = 161,
  aux_sym_arguments_repeat1 = 162,
  aux_sym_arguments_repeat2 = 163,
  alias_sym_argument_name = 164,
  alias_sym_argument_value = 165,
  alias_sym_attribute_name = 166,
  alias_sym_class_name = 167,
  alias_sym_condition = 168,
  alias_sym_default_value = 169,
  alias_sym_feature_name = 170,
  alias_sym_function_name = 171,
  alias_sym_id_name = 172,
  alias_sym_key = 173,
  alias_sym_keyframes_name = 174,
  alias_sym_keyword_query = 175,
  alias_sym_namespace_name = 176,
  alias_sym_plain_value_ = 177,
  alias_sym_tag_name = 178,
  alias_sym_through = 179,
  alias_sym_value = 180,
  alias_sym_variable = 181,
  alias_sym_variable_name = 182,
  alias_sym_variable_value = 183,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "keyframes_statement_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_ATapply] = "@apply",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ATextend] = "@extend",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_if] = "if",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATfor] = "@for",
  [anon_sym_through] = "through",
  [anon_sym_ATwhile] = "@while",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATat_DASHroot] = "@at-root",
  [anon_sym_ATerror] = "@error",
  [anon_sym_ATwarn] = "@warn",
  [anon_sym_ATdebug] = "@debug",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [sym_important] = "important",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [sym_integer] = "integer",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_import_statement] = "import_statement",
  [sym_css_media] = "css_media",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_from] = "from",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_use_statement] = "use_statement",
  [sym_forward_statement] = "forward_statement",
  [sym_apply_statement] = "apply_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_css_mixin] = "css_mixin",
  [sym_css_include] = "css_include",
  [sym_include_arguments] = "include_arguments",
  [sym_include_argument] = "argument",
  [sym_placeholder] = "placeholder",
  [sym_extend_statement] = "extend_statement",
  [sym_if] = "if",
  [sym_if_clause] = "if_clause",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_each_statement] = "each_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
  [sym_at_root_statement] = "at_root_statement",
  [sym_error_statement] = "error_statement",
  [sym_warn_statement] = "warn_statement",
  [sym_debug_statement] = "debug_statement",
  [sym_css_ruleset] = "css_ruleset",
  [sym_css_selector_list] = "css_selector_list",
  [sym_enclosed_body] = "enclosed_body",
  [sym_block_item] = "block_item",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_declaration_pair] = "declaration_pair",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym_value_] = "value_",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_apply_statement_repeat1] = "apply_statement_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_include_arguments_repeat1] = "include_arguments_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_css_selector_list_repeat1] = "css_selector_list_repeat1",
  [aux_sym_enclosed_body_repeat1] = "enclosed_body_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_pair_repeat1] = "declaration_pair_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_argument_name] = "argument_name",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_condition] = "condition",
  [alias_sym_default_value] = "default_value",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_key] = "key",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_plain_value_] = "plain_value_",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_through] = "through",
  [alias_sym_value] = "value",
  [alias_sym_variable] = "variable",
  [alias_sym_variable_name] = "variable_name",
  [alias_sym_variable_value] = "variable_value",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = aux_sym_keyframes_statement_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_ATapply] = anon_sym_ATapply,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATmixin] = anon_sym_ATmixin,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ATextend] = anon_sym_ATextend,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATfor] = anon_sym_ATfor,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_ATwhile] = anon_sym_ATwhile,
  [anon_sym_ATfunction] = anon_sym_ATfunction,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATat_DASHroot] = anon_sym_ATat_DASHroot,
  [anon_sym_ATerror] = anon_sym_ATerror,
  [anon_sym_ATwarn] = anon_sym_ATwarn,
  [anon_sym_ATdebug] = anon_sym_ATdebug,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_important] = sym_important,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [sym_integer] = sym_integer,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_css_media] = sym_css_media,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_from] = sym_from,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_use_statement] = sym_use_statement,
  [sym_forward_statement] = sym_forward_statement,
  [sym_apply_statement] = sym_apply_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_css_mixin] = sym_css_mixin,
  [sym_css_include] = sym_css_include,
  [sym_include_arguments] = sym_include_arguments,
  [sym_include_argument] = sym_argument,
  [sym_placeholder] = sym_placeholder,
  [sym_extend_statement] = sym_extend_statement,
  [sym_if] = sym_if,
  [sym_if_clause] = sym_if_clause,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_each_statement] = sym_each_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_at_root_statement] = sym_at_root_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_warn_statement] = sym_warn_statement,
  [sym_debug_statement] = sym_debug_statement,
  [sym_css_ruleset] = sym_css_ruleset,
  [sym_css_selector_list] = sym_css_selector_list,
  [sym_enclosed_body] = sym_enclosed_body,
  [sym_block_item] = sym_block_item,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_declaration_pair] = sym_declaration_pair,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym_value_] = sym_value_,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_apply_statement_repeat1] = aux_sym_apply_statement_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_include_arguments_repeat1] = aux_sym_include_arguments_repeat1,
  [aux_sym_if_repeat1] = aux_sym_if_repeat1,
  [aux_sym_css_selector_list_repeat1] = aux_sym_css_selector_list_repeat1,
  [aux_sym_enclosed_body_repeat1] = aux_sym_enclosed_body_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_pair_repeat1] = aux_sym_declaration_pair_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [alias_sym_argument_name] = alias_sym_argument_name,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_condition] = alias_sym_condition,
  [alias_sym_default_value] = alias_sym_default_value,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_plain_value_] = alias_sym_plain_value_,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_through] = alias_sym_through,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_variable] = alias_sym_variable,
  [alias_sym_variable_name] = alias_sym_variable_name,
  [alias_sym_variable_value] = alias_sym_variable_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATforward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATat_DASHroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwarn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdebug] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_css_media] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_css_mixin] = {
    .visible = true,
    .named = true,
  },
  [sym_css_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_include_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_root_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_warn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_css_ruleset] = {
    .visible = true,
    .named = true,
  },
  [sym_css_selector_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enclosed_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block_item] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym_value_] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_selector_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enclosed_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_condition] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_plain_value_] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_through] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument_list = 1,
  field_argument_list_optional = 2,
  field_at_keyword = 3,
  field_css_selector = 4,
  field_else_clause_optional = 5,
  field_else_if_clause_list = 6,
  field_key_value_pair = 7,
  field_key_value_pair_key = 8,
  field_key_value_pair_value = 9,
  field_parameter_list = 10,
  field_parameter_list_optional = 11,
  field_statement = 12,
  field_statement_list = 13,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_argument_list_optional] = "argument_list_optional",
  [field_at_keyword] = "at_keyword",
  [field_css_selector] = "css_selector",
  [field_else_clause_optional] = "else_clause_optional",
  [field_else_if_clause_list] = "else_if_clause_list",
  [field_key_value_pair] = "key_value_pair",
  [field_key_value_pair_key] = "key_value_pair_key",
  [field_key_value_pair_value] = "key_value_pair_value",
  [field_parameter_list] = "parameter_list",
  [field_parameter_list_optional] = "parameter_list_optional",
  [field_statement] = "statement",
  [field_statement_list] = "statement_list",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [6] = {.index = 1, .length = 2},
  [7] = {.index = 1, .length = 2},
  [10] = {.index = 3, .length = 1},
  [11] = {.index = 4, .length = 1},
  [12] = {.index = 5, .length = 1},
  [15] = {.index = 6, .length = 1},
  [16] = {.index = 7, .length = 3},
  [19] = {.index = 10, .length = 2},
  [20] = {.index = 12, .length = 1},
  [21] = {.index = 13, .length = 2},
  [22] = {.index = 7, .length = 3},
  [23] = {.index = 7, .length = 3},
  [28] = {.index = 15, .length = 1},
  [30] = {.index = 16, .length = 1},
  [31] = {.index = 17, .length = 3},
  [32] = {.index = 20, .length = 1},
  [33] = {.index = 21, .length = 4},
  [35] = {.index = 25, .length = 1},
  [36] = {.index = 26, .length = 1},
  [38] = {.index = 27, .length = 4},
  [39] = {.index = 31, .length = 2},
  [41] = {.index = 33, .length = 2},
  [44] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_statement_list, 0},
  [1] =
    {field_css_selector, 0},
    {field_css_selector, 1},
  [3] =
    {field_else_clause_optional, 1},
  [4] =
    {field_else_if_clause_list, 1},
  [5] =
    {field_key_value_pair, 0},
  [6] =
    {field_at_keyword, 0},
  [7] =
    {field_css_selector, 0},
    {field_css_selector, 1},
    {field_css_selector, 2},
  [10] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
  [12] =
    {field_statement, 0},
  [13] =
    {field_else_clause_optional, 2},
    {field_else_if_clause_list, 1},
  [15] =
    {field_parameter_list_optional, 2},
  [16] =
    {field_argument_list_optional, 2},
  [17] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
    {field_key_value_pair_value, 3},
  [20] =
    {field_statement_list, 1},
  [21] =
    {field_css_selector, 0},
    {field_css_selector, 1},
    {field_css_selector, 2},
    {field_css_selector, 3},
  [25] =
    {field_argument_list, 1},
  [26] =
    {field_parameter_list, 1},
  [27] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
    {field_key_value_pair_value, 3},
    {field_key_value_pair_value, 4},
  [31] =
    {field_statement_list, 1},
    {field_statement_list, 2},
  [33] =
    {field_argument_list, 1},
    {field_argument_list, 2},
  [35] =
    {field_parameter_list, 1},
    {field_parameter_list, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [3] = {
    [0] = alias_sym_plain_value_,
  },
  [4] = {
    [0] = alias_sym_variable_value,
  },
  [5] = {
    [0] = alias_sym_keyword_query,
  },
  [6] = {
    [1] = alias_sym_class_name,
  },
  [8] = {
    [1] = alias_sym_tag_name,
  },
  [9] = {
    [1] = alias_sym_id_name,
  },
  [13] = {
    [0] = alias_sym_function_name,
  },
  [14] = {
    [1] = alias_sym_keyframes_name,
  },
  [15] = {
    [1] = alias_sym_keyframes_name,
  },
  [16] = {
    [1] = alias_sym_class_name,
  },
  [17] = {
    [1] = alias_sym_condition,
  },
  [18] = {
    [1] = alias_sym_attribute_name,
  },
  [22] = {
    [2] = alias_sym_class_name,
  },
  [24] = {
    [2] = alias_sym_tag_name,
  },
  [25] = {
    [2] = alias_sym_id_name,
  },
  [26] = {
    [1] = alias_sym_namespace_name,
  },
  [27] = {
    [0] = alias_sym_variable_name,
  },
  [29] = {
    [0] = alias_sym_argument_value,
  },
  [33] = {
    [2] = alias_sym_class_name,
  },
  [34] = {
    [2] = alias_sym_attribute_name,
  },
  [37] = {
    [1] = alias_sym_value,
  },
  [40] = {
    [2] = alias_sym_condition,
  },
  [42] = {
    [1] = alias_sym_feature_name,
  },
  [43] = {
    [0] = alias_sym_variable_name,
    [2] = alias_sym_default_value,
  },
  [45] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [46] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [47] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_value_, 6,
    sym_value_,
    alias_sym_argument_value,
    alias_sym_condition,
    alias_sym_default_value,
    alias_sym_through,
    sym_from,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '&'
      ? (c < '$'
        ? c == ' '
        : c <= '$')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '.' || (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(92);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(397);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(272);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(86);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 94:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 95:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(401);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(22);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(97);
      END_STATE();
    case 98:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 99:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'w') ADVANCE(290);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '_') ADVANCE(275);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(397);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(393);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '_') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == 'k') ADVANCE(316);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'h') ADVANCE(324);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(328);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(318);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(396);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_line_comment_character_set_2(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_line_comment_character_set_2(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '/') ADVANCE(95);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '{') ADVANCE(86);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(95);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 101},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 99},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 99},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 99},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 99},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 99},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 99},
  [40] = {.lex_state = 99},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 99},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 99},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 99},
  [50] = {.lex_state = 99},
  [51] = {.lex_state = 99},
  [52] = {.lex_state = 99},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 99},
  [56] = {.lex_state = 99},
  [57] = {.lex_state = 99},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 99},
  [62] = {.lex_state = 99},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 99},
  [65] = {.lex_state = 99},
  [66] = {.lex_state = 99},
  [67] = {.lex_state = 99},
  [68] = {.lex_state = 99},
  [69] = {.lex_state = 99},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 99},
  [72] = {.lex_state = 99},
  [73] = {.lex_state = 99},
  [74] = {.lex_state = 99},
  [75] = {.lex_state = 99},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 2, .external_lex_state = 1},
  [120] = {.lex_state = 3, .external_lex_state = 1},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 5, .external_lex_state = 1},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 5, .external_lex_state = 1},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 99, .external_lex_state = 1},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 99, .external_lex_state = 1},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 99, .external_lex_state = 1},
  [245] = {.lex_state = 20, .external_lex_state = 1},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 99, .external_lex_state = 1},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 99, .external_lex_state = 1},
  [251] = {.lex_state = 99, .external_lex_state = 1},
  [252] = {.lex_state = 99, .external_lex_state = 1},
  [253] = {.lex_state = 99, .external_lex_state = 1},
  [254] = {.lex_state = 99, .external_lex_state = 1},
  [255] = {.lex_state = 99, .external_lex_state = 1},
  [256] = {.lex_state = 99, .external_lex_state = 1},
  [257] = {.lex_state = 99, .external_lex_state = 1},
  [258] = {.lex_state = 99, .external_lex_state = 1},
  [259] = {.lex_state = 99, .external_lex_state = 1},
  [260] = {.lex_state = 99, .external_lex_state = 1},
  [261] = {.lex_state = 99, .external_lex_state = 1},
  [262] = {.lex_state = 99, .external_lex_state = 1},
  [263] = {.lex_state = 99, .external_lex_state = 1},
  [264] = {.lex_state = 99, .external_lex_state = 1},
  [265] = {.lex_state = 99, .external_lex_state = 1},
  [266] = {.lex_state = 99, .external_lex_state = 1},
  [267] = {.lex_state = 99, .external_lex_state = 1},
  [268] = {.lex_state = 99, .external_lex_state = 1},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 99, .external_lex_state = 1},
  [272] = {.lex_state = 99, .external_lex_state = 1},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 99, .external_lex_state = 1},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 99, .external_lex_state = 1},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 99, .external_lex_state = 1},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 99, .external_lex_state = 1},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 99, .external_lex_state = 1},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 99, .external_lex_state = 1},
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 25},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 25},
  [341] = {.lex_state = 25},
  [342] = {.lex_state = 25},
  [343] = {.lex_state = 25},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 5},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 5},
  [354] = {.lex_state = 20},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 20},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 99},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 25},
  [368] = {.lex_state = 99},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 17},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 99},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 99},
  [377] = {.lex_state = 99},
  [378] = {.lex_state = 25},
  [379] = {.lex_state = 25},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 25},
  [382] = {.lex_state = 99},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 99},
  [389] = {.lex_state = 99},
  [390] = {.lex_state = 99},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 5},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 99},
  [397] = {.lex_state = 99},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 20},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 99},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 13},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 99},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 23},
  [427] = {.lex_state = 99},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 5},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 17},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 5},
  [444] = {.lex_state = 5},
  [445] = {.lex_state = 5},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 20},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 20},
  [460] = {.lex_state = 20},
  [461] = {.lex_state = 20},
  [462] = {.lex_state = 20},
  [463] = {.lex_state = 20},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 20},
  [466] = {.lex_state = 20},
  [467] = {.lex_state = 20},
  [468] = {.lex_state = 20},
  [469] = {.lex_state = 99},
  [470] = {.lex_state = 99},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 20},
  [473] = {.lex_state = 20},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 20},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 99},
  [484] = {.lex_state = 99},
  [485] = {.lex_state = 99},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 99},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_ATapply] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATmixin] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ATextend] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_ATelse] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_ATeach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ATfor] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_ATwhile] = ACTIONS(1),
    [anon_sym_ATfunction] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATat_DASHroot] = ACTIONS(1),
    [anon_sym_ATerror] = ACTIONS(1),
    [anon_sym_ATwarn] = ACTIONS(1),
    [anon_sym_ATdebug] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(449),
    [sym_statement] = STATE(3),
    [sym_import_statement] = STATE(35),
    [sym_css_media] = STATE(35),
    [sym_charset_statement] = STATE(35),
    [sym_namespace_statement] = STATE(35),
    [sym_keyframes_statement] = STATE(35),
    [sym_supports_statement] = STATE(35),
    [sym_at_rule] = STATE(35),
    [sym_use_statement] = STATE(35),
    [sym_forward_statement] = STATE(35),
    [sym_apply_statement] = STATE(35),
    [sym_css_mixin] = STATE(35),
    [sym_css_include] = STATE(35),
    [sym_placeholder] = STATE(35),
    [sym_if] = STATE(35),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_while_statement] = STATE(35),
    [sym_function_statement] = STATE(35),
    [sym_error_statement] = STATE(35),
    [sym_warn_statement] = STATE(35),
    [sym_debug_statement] = STATE(35),
    [sym_css_ruleset] = STATE(35),
    [sym_css_selector_list] = STATE(424),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(35),
    [sym_declaration_pair] = STATE(446),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [anon_sym_ATuse] = ACTIONS(21),
    [anon_sym_ATforward] = ACTIONS(23),
    [anon_sym_ATapply] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(29),
    [anon_sym_ATinclude] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_ATif] = ACTIONS(35),
    [anon_sym_ATeach] = ACTIONS(37),
    [anon_sym_ATfor] = ACTIONS(39),
    [anon_sym_ATwhile] = ACTIONS(41),
    [anon_sym_ATfunction] = ACTIONS(43),
    [anon_sym_ATerror] = ACTIONS(45),
    [anon_sym_ATwarn] = ACTIONS(47),
    [anon_sym_ATdebug] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_import_statement] = STATE(35),
    [sym_css_media] = STATE(35),
    [sym_charset_statement] = STATE(35),
    [sym_namespace_statement] = STATE(35),
    [sym_keyframes_statement] = STATE(35),
    [sym_supports_statement] = STATE(35),
    [sym_at_rule] = STATE(35),
    [sym_use_statement] = STATE(35),
    [sym_forward_statement] = STATE(35),
    [sym_apply_statement] = STATE(35),
    [sym_css_mixin] = STATE(35),
    [sym_css_include] = STATE(35),
    [sym_placeholder] = STATE(35),
    [sym_if] = STATE(35),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_while_statement] = STATE(35),
    [sym_function_statement] = STATE(35),
    [sym_error_statement] = STATE(35),
    [sym_warn_statement] = STATE(35),
    [sym_debug_statement] = STATE(35),
    [sym_css_ruleset] = STATE(35),
    [sym_css_selector_list] = STATE(424),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(35),
    [sym_declaration_pair] = STATE(446),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_ATimport] = ACTIONS(73),
    [anon_sym_ATmedia] = ACTIONS(76),
    [anon_sym_ATcharset] = ACTIONS(79),
    [anon_sym_ATnamespace] = ACTIONS(82),
    [anon_sym_ATkeyframes] = ACTIONS(85),
    [aux_sym_keyframes_statement_token1] = ACTIONS(88),
    [anon_sym_ATsupports] = ACTIONS(91),
    [anon_sym_ATuse] = ACTIONS(94),
    [anon_sym_ATforward] = ACTIONS(97),
    [anon_sym_ATapply] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_ATmixin] = ACTIONS(106),
    [anon_sym_ATinclude] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_ATif] = ACTIONS(115),
    [anon_sym_ATeach] = ACTIONS(118),
    [anon_sym_ATfor] = ACTIONS(121),
    [anon_sym_ATwhile] = ACTIONS(124),
    [anon_sym_ATfunction] = ACTIONS(127),
    [anon_sym_ATerror] = ACTIONS(130),
    [anon_sym_ATwarn] = ACTIONS(133),
    [anon_sym_ATdebug] = ACTIONS(136),
    [sym_nesting_selector] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(148),
    [anon_sym_POUND] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(154),
    [sym_string_value] = ACTIONS(157),
    [sym_identifier] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(163),
    [sym_at_keyword] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_import_statement] = STATE(35),
    [sym_css_media] = STATE(35),
    [sym_charset_statement] = STATE(35),
    [sym_namespace_statement] = STATE(35),
    [sym_keyframes_statement] = STATE(35),
    [sym_supports_statement] = STATE(35),
    [sym_at_rule] = STATE(35),
    [sym_use_statement] = STATE(35),
    [sym_forward_statement] = STATE(35),
    [sym_apply_statement] = STATE(35),
    [sym_css_mixin] = STATE(35),
    [sym_css_include] = STATE(35),
    [sym_placeholder] = STATE(35),
    [sym_if] = STATE(35),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_while_statement] = STATE(35),
    [sym_function_statement] = STATE(35),
    [sym_error_statement] = STATE(35),
    [sym_warn_statement] = STATE(35),
    [sym_debug_statement] = STATE(35),
    [sym_css_ruleset] = STATE(35),
    [sym_css_selector_list] = STATE(424),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(35),
    [sym_declaration_pair] = STATE(446),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [anon_sym_ATuse] = ACTIONS(21),
    [anon_sym_ATforward] = ACTIONS(23),
    [anon_sym_ATapply] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(29),
    [anon_sym_ATinclude] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_ATif] = ACTIONS(35),
    [anon_sym_ATeach] = ACTIONS(37),
    [anon_sym_ATfor] = ACTIONS(39),
    [anon_sym_ATwhile] = ACTIONS(41),
    [anon_sym_ATfunction] = ACTIONS(43),
    [anon_sym_ATerror] = ACTIONS(45),
    [anon_sym_ATwarn] = ACTIONS(47),
    [anon_sym_ATdebug] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(5),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(438),
    [aux_sym_enclosed_body_repeat1] = STATE(5),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(14),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(441),
    [aux_sym_enclosed_body_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(14),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(439),
    [aux_sym_enclosed_body_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(8),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(453),
    [aux_sym_enclosed_body_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(14),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(455),
    [aux_sym_enclosed_body_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(6),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(432),
    [aux_sym_enclosed_body_repeat1] = STATE(6),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(11),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(430),
    [aux_sym_enclosed_body_repeat1] = STATE(11),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(14),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(431),
    [aux_sym_enclosed_body_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(14),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(450),
    [aux_sym_enclosed_body_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(425),
    [sym_last_declaration] = STATE(447),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(171),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(175),
    [anon_sym_ATnamespace] = ACTIONS(177),
    [anon_sym_ATkeyframes] = ACTIONS(179),
    [aux_sym_keyframes_statement_token1] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_ATsupports] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(187),
    [anon_sym_ATinclude] = ACTIONS(189),
    [anon_sym_ATextend] = ACTIONS(191),
    [anon_sym_ATif] = ACTIONS(193),
    [anon_sym_ATeach] = ACTIONS(195),
    [anon_sym_ATfor] = ACTIONS(197),
    [anon_sym_ATwhile] = ACTIONS(199),
    [anon_sym_ATfunction] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATat_DASHroot] = ACTIONS(205),
    [anon_sym_ATerror] = ACTIONS(207),
    [anon_sym_ATwarn] = ACTIONS(209),
    [anon_sym_ATdebug] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_string_value] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_variable_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_import_statement] = STATE(108),
    [sym_css_media] = STATE(108),
    [sym_charset_statement] = STATE(108),
    [sym_namespace_statement] = STATE(108),
    [sym_keyframes_statement] = STATE(108),
    [sym_supports_statement] = STATE(108),
    [sym_at_rule] = STATE(108),
    [sym_css_mixin] = STATE(108),
    [sym_css_include] = STATE(108),
    [sym_extend_statement] = STATE(108),
    [sym_if] = STATE(108),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(108),
    [sym_for_statement] = STATE(108),
    [sym_while_statement] = STATE(108),
    [sym_function_statement] = STATE(108),
    [sym_return_statement] = STATE(108),
    [sym_at_root_statement] = STATE(108),
    [sym_error_statement] = STATE(108),
    [sym_warn_statement] = STATE(108),
    [sym_debug_statement] = STATE(108),
    [sym_css_ruleset] = STATE(108),
    [sym_css_selector_list] = STATE(411),
    [sym_block_item] = STATE(14),
    [sym__selector] = STATE(267),
    [sym_universal_selector] = STATE(267),
    [sym_class_selector] = STATE(267),
    [sym_pseudo_class_selector] = STATE(267),
    [sym_pseudo_element_selector] = STATE(267),
    [sym_id_selector] = STATE(267),
    [sym_attribute_selector] = STATE(267),
    [sym_child_selector] = STATE(267),
    [sym_descendant_selector] = STATE(267),
    [sym_sibling_selector] = STATE(267),
    [sym_adjacent_sibling_selector] = STATE(267),
    [sym_declaration] = STATE(108),
    [sym_declaration_pair] = STATE(448),
    [aux_sym_enclosed_body_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(233),
    [anon_sym_ATmedia] = ACTIONS(236),
    [anon_sym_ATcharset] = ACTIONS(239),
    [anon_sym_ATnamespace] = ACTIONS(242),
    [anon_sym_ATkeyframes] = ACTIONS(245),
    [aux_sym_keyframes_statement_token1] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_ATsupports] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_ATmixin] = ACTIONS(259),
    [anon_sym_ATinclude] = ACTIONS(262),
    [anon_sym_ATextend] = ACTIONS(265),
    [anon_sym_ATif] = ACTIONS(268),
    [anon_sym_ATeach] = ACTIONS(271),
    [anon_sym_ATfor] = ACTIONS(274),
    [anon_sym_ATwhile] = ACTIONS(277),
    [anon_sym_ATfunction] = ACTIONS(280),
    [anon_sym_ATreturn] = ACTIONS(283),
    [anon_sym_ATat_DASHroot] = ACTIONS(286),
    [anon_sym_ATerror] = ACTIONS(289),
    [anon_sym_ATwarn] = ACTIONS(292),
    [anon_sym_ATdebug] = ACTIONS(295),
    [sym_nesting_selector] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_COLON_COLON] = ACTIONS(307),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_string_value] = ACTIONS(316),
    [sym_identifier] = ACTIONS(319),
    [sym_variable_identifier] = ACTIONS(322),
    [sym_at_keyword] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(332), 1,
      anon_sym_ATelse,
    STATE(65), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(16), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [52] = 6,
    ACTIONS(332), 1,
      anon_sym_ATelse,
    STATE(31), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(336), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [104] = 6,
    ACTIONS(338), 1,
      anon_sym_ATelse,
    STATE(85), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [155] = 6,
    ACTIONS(338), 1,
      anon_sym_ATelse,
    STATE(91), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(334), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(336), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [206] = 5,
    ACTIONS(344), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(342), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [255] = 5,
    ACTIONS(347), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(340), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(342), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [303] = 20,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      sym_string_value,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    STATE(141), 1,
      sym_value_,
    STATE(156), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(272), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [380] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(372), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [423] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [466] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(380), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [509] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(384), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [552] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [595] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [637] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [679] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(400), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [721] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(404), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [763] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(406), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(408), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [805] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(412), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [847] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(414), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(416), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [889] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(380), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(418), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(420), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [973] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(422), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(424), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1015] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(426), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(428), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1057] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(430), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(432), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1099] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(434), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1141] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(438), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(440), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(442), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(444), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(446), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1267] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(450), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(452), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1309] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(454), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(456), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(460), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(462), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(464), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(466), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(468), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1477] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(374), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(470), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(472), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1561] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(372), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1603] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(474), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(476), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(478), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(480), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1687] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(482), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(484), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1729] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(486), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(488), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1771] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(490), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(492), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1813] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(494), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(496), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(498), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(500), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1897] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(386), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(372), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1981] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(380), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(502), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(504), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(506), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(508), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2107] = 19,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      sym_string_value,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    STATE(141), 1,
      sym_value_,
    STATE(160), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(297), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [2181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(510), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(512), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2223] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(514), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(516), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(518), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(520), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2307] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(522), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(524), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2349] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(526), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(528), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2391] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2433] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(382), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(384), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2475] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(530), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(532), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2517] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(534), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(536), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(538), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(540), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2601] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(542), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(544), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2643] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(546), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(548), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(426), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(428), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2726] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(490), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(492), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2767] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(446), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2808] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(442), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(444), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2849] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(438), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(440), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2890] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(494), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(496), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(534), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(536), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2972] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(430), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(432), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3013] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(522), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(524), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3054] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(514), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(516), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3095] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(498), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(500), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3136] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(422), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(424), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3177] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(414), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(416), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3218] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(410), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(412), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3259] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(386), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3300] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(406), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(408), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3341] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(372), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(402), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(404), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3423] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(398), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(400), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3464] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(466), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(468), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3505] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(526), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(528), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3546] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(510), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(512), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(478), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(480), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3628] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(552), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(550), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3669] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(380), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3710] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(546), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(548), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3751] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(434), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3792] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(538), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(540), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3833] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(530), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(532), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3874] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(542), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(544), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3915] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(390), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3956] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(462), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(464), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(556), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(554), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4038] = 19,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      sym_string_value,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    STATE(306), 1,
      sym_class_selector,
    STATE(325), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(336), 10,
      sym__selector,
      sym_universal_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [4111] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(486), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(488), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4152] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(458), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(460), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4193] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(506), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(508), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4234] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(518), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(520), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4275] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(576), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(574), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(580), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(578), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(470), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(472), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4398] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(394), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4439] = 17,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(592), 1,
      sym_important,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(136), 1,
      sym_value_,
    STATE(151), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(584), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(586), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(590), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4506] = 7,
    ACTIONS(604), 1,
      anon_sym_LPAREN2,
    STATE(126), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(602), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(606), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(598), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(600), 9,
      anon_sym_LPAREN,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4552] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(612), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(608), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(610), 7,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(614), 8,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4592] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN2,
    STATE(126), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(606), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(600), 12,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4630] = 4,
    ACTIONS(620), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(618), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(616), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4665] = 4,
    ACTIONS(626), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(624), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(622), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(630), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(628), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(634), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(632), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4764] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(638), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(636), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4796] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(614), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(610), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4828] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(642), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(640), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4860] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(646), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(644), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(650), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(648), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4924] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(654), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(652), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4956] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(658), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(656), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4988] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(662), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(660), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5020] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(666), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(664), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5052] = 9,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(674), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(672), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(359), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5095] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(586), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(590), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(682), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(684), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5130] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(586), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(590), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(686), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(688), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5165] = 9,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(674), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(672), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(358), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5208] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(586), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(590), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(692), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(694), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5242] = 7,
    ACTIONS(696), 1,
      anon_sym_LPAREN2,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(600), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(602), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(606), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(598), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5280] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(586), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(590), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(698), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(700), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5314] = 15,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    STATE(377), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5368] = 15,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    STATE(376), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5422] = 15,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    STATE(365), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5476] = 15,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    STATE(373), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5530] = 11,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(712), 1,
      sym_string_value,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(285), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5575] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(150), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(716), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5624] = 11,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(718), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(251), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5669] = 11,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(720), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(260), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5714] = 13,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    ACTIONS(727), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      sym_string_value,
    ACTIONS(733), 1,
      sym_integer,
    ACTIONS(736), 1,
      aux_sym_float_value_token1,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(742), 1,
      sym_variable_identifier,
    ACTIONS(745), 1,
      sym_plain_value,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(150), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(722), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5763] = 15,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(750), 1,
      sym_important,
    STATE(136), 1,
      sym_value_,
    STATE(154), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(748), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5816] = 11,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(752), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(257), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5861] = 11,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(754), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(253), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5906] = 14,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      sym_string_value,
    ACTIONS(768), 1,
      sym_integer,
    ACTIONS(771), 1,
      aux_sym_float_value_token1,
    ACTIONS(774), 1,
      sym_identifier,
    ACTIONS(777), 1,
      sym_variable_identifier,
    ACTIONS(780), 1,
      sym_plain_value,
    STATE(136), 1,
      sym_value_,
    STATE(154), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(686), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5957] = 11,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(783), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(326), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [6002] = 15,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_value_,
    STATE(158), 1,
      aux_sym_apply_statement_repeat1,
    STATE(388), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6054] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(612), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(614), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(610), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(608), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6086] = 13,
    ACTIONS(791), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_integer,
    ACTIONS(803), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(809), 1,
      sym_variable_identifier,
    ACTIONS(812), 1,
      sym_plain_value,
    STATE(141), 1,
      sym_value_,
    STATE(158), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(789), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6134] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6181] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_,
    STATE(158), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6228] = 5,
    ACTIONS(696), 1,
      anon_sym_LPAREN2,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(600), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(606), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6259] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(143), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6306] = 5,
    ACTIONS(821), 1,
      anon_sym_LPAREN2,
    STATE(196), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(606), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(600), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6337] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(144), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6384] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(142), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6431] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(646), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(644), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6457] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_value_,
    STATE(158), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6503] = 4,
    ACTIONS(829), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(622), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(624), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6531] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(831), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_value_,
    STATE(158), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6577] = 4,
    ACTIONS(833), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(616), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(618), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6605] = 12,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(139), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6649] = 13,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_value_,
    STATE(169), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6695] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(628), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(630), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6720] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(666), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(664), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(614), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(610), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6770] = 4,
    ACTIONS(837), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(624), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(622), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6797] = 4,
    ACTIONS(839), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(618), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(616), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6824] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(652), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(654), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6849] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(664), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(666), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6874] = 12,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym_string_value,
    ACTIONS(847), 1,
      sym_integer,
    ACTIONS(849), 1,
      aux_sym_float_value_token1,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(853), 1,
      sym_variable_identifier,
    ACTIONS(855), 1,
      sym_plain_value,
    STATE(300), 1,
      sym_value_,
    STATE(404), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(292), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(610), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(614), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6942] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(632), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(634), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6967] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(638), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(636), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6992] = 12,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_,
    STATE(167), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(634), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(632), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(660), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(662), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7085] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(654), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(652), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7110] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(640), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(642), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7135] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(642), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(640), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7160] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(648), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(650), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7185] = 12,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym_string_value,
    ACTIONS(847), 1,
      sym_integer,
    ACTIONS(849), 1,
      aux_sym_float_value_token1,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(853), 1,
      sym_variable_identifier,
    ACTIONS(855), 1,
      sym_plain_value,
    STATE(300), 1,
      sym_value_,
    STATE(399), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(292), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(650), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(648), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7253] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(656), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(658), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7278] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(662), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(660), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7303] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(646), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(644), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7328] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(636), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(638), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(630), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(628), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(658), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(656), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7403] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(185), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7443] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(290), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7483] = 5,
    ACTIONS(865), 1,
      anon_sym_COLON,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    STATE(255), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(863), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7511] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    ACTIONS(869), 1,
      sym_integer,
    ACTIONS(871), 1,
      aux_sym_float_value_token1,
    STATE(185), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7551] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(324), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7591] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(304), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7631] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(295), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7671] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    ACTIONS(869), 1,
      sym_integer,
    ACTIONS(871), 1,
      aux_sym_float_value_token1,
    STATE(310), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7711] = 11,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym_string_value,
    ACTIONS(847), 1,
      sym_integer,
    ACTIONS(849), 1,
      aux_sym_float_value_token1,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(855), 1,
      sym_plain_value,
    ACTIONS(873), 1,
      sym_variable_identifier,
    STATE(288), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(292), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7751] = 11,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(118), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7791] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(313), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7831] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(314), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7871] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(322), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7911] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(323), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7951] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(275), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7991] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(333), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8031] = 11,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(137), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8071] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(328), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8111] = 11,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_integer,
    ACTIONS(362), 1,
      aux_sym_float_value_token1,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(368), 1,
      sym_plain_value,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(125), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(127), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8151] = 11,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      sym_string_value,
    ACTIONS(881), 1,
      sym_integer,
    ACTIONS(883), 1,
      aux_sym_float_value_token1,
    ACTIONS(885), 1,
      sym_identifier,
    ACTIONS(887), 1,
      sym_variable_identifier,
    ACTIONS(889), 1,
      sym_plain_value,
    STATE(182), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(181), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8191] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(320), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8231] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(291), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8271] = 5,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(893), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(891), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8299] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(302), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8339] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    ACTIONS(869), 1,
      sym_integer,
    ACTIONS(871), 1,
      aux_sym_float_value_token1,
    STATE(312), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8379] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(315), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8419] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(301), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8459] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(321), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8499] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(294), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8539] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(316), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8579] = 11,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      sym_string_value,
    ACTIONS(881), 1,
      sym_integer,
    ACTIONS(883), 1,
      aux_sym_float_value_token1,
    ACTIONS(885), 1,
      sym_identifier,
    ACTIONS(887), 1,
      sym_variable_identifier,
    ACTIONS(889), 1,
      sym_plain_value,
    STATE(135), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(181), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8619] = 11,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      sym_string_value,
    ACTIONS(881), 1,
      sym_integer,
    ACTIONS(883), 1,
      aux_sym_float_value_token1,
    ACTIONS(885), 1,
      sym_identifier,
    ACTIONS(887), 1,
      sym_variable_identifier,
    ACTIONS(889), 1,
      sym_plain_value,
    STATE(138), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(181), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8659] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(307), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8699] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(327), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8739] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(303), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8779] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(284), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8819] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(305), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8859] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(293), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8899] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(308), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8939] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(317), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8979] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(318), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9019] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(283), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9059] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(289), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9099] = 11,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym_string_value,
    ACTIONS(847), 1,
      sym_integer,
    ACTIONS(849), 1,
      aux_sym_float_value_token1,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(855), 1,
      sym_plain_value,
    ACTIONS(873), 1,
      sym_variable_identifier,
    STATE(279), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(292), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9139] = 11,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(566), 1,
      aux_sym_float_value_token1,
    ACTIONS(570), 1,
      sym_variable_identifier,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(857), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_string_value,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(311), 1,
      sym_value_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(175), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9179] = 3,
    ACTIONS(897), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(895), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9202] = 4,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(612), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(608), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9227] = 9,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(344), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9262] = 5,
    ACTIONS(905), 1,
      anon_sym_LPAREN2,
    STATE(276), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(600), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(606), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9289] = 3,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(907), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9312] = 9,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(345), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9347] = 3,
    ACTIONS(917), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(915), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9369] = 4,
    ACTIONS(921), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(919), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9393] = 3,
    ACTIONS(602), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(598), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9415] = 4,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(925), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9439] = 3,
    ACTIONS(931), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(929), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9461] = 3,
    ACTIONS(935), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(933), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9483] = 3,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(937), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9505] = 4,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(941), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9529] = 3,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(945), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9551] = 3,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(949), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9573] = 4,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(953), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9597] = 3,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(957), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9619] = 3,
    ACTIONS(963), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(961), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9641] = 3,
    ACTIONS(967), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(965), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9663] = 3,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(969), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9685] = 3,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(973), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9707] = 3,
    ACTIONS(979), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(977), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9729] = 13,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_LBRACE,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_TILDE,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    ACTIONS(999), 1,
      sym__descendant_operator,
    STATE(398), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9771] = 3,
    ACTIONS(1003), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1001), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9793] = 4,
    ACTIONS(1005), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(618), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(616), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9817] = 4,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(650), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(648), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9841] = 3,
    ACTIONS(1011), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1009), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9863] = 13,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_TILDE,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    ACTIONS(999), 1,
      sym__descendant_operator,
    STATE(388), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9905] = 4,
    ACTIONS(1013), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(624), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(622), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9929] = 4,
    ACTIONS(1015), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(618), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(616), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9952] = 5,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9977] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(638), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(636), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9998] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(642), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(640), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(646), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(644), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10040] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1023), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1027), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1025), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10063] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(630), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(628), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10084] = 3,
    ACTIONS(1029), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(598), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10105] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(650), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(648), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10126] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10151] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10176] = 11,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_TILDE,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    ACTIONS(999), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1032), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [10213] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(666), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(664), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10234] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(654), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(652), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10255] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(634), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(632), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10276] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1034), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10299] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10324] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10349] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(614), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(610), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10370] = 5,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10395] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10420] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(662), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(660), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10466] = 11,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_TILDE,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    ACTIONS(999), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [10503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(658), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(656), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10524] = 4,
    ACTIONS(1038), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(624), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(622), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10547] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1040), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1027), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1025), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10570] = 5,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10595] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10620] = 5,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10645] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10670] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10695] = 4,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(608), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10717] = 4,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10739] = 4,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10761] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(360), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10787] = 4,
    ACTIONS(1048), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1052), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1050), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10809] = 4,
    ACTIONS(1054), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10831] = 4,
    ACTIONS(1056), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1052), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1050), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10853] = 4,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10875] = 4,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10897] = 4,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10919] = 4,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10941] = 4,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10963] = 4,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10985] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(348), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11011] = 4,
    ACTIONS(1070), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11033] = 4,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11055] = 4,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11077] = 4,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11099] = 4,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11121] = 4,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11143] = 11,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_TILDE,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    ACTIONS(999), 1,
      sym__descendant_operator,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [11179] = 4,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11201] = 4,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11223] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(352), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11249] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(375), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11275] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(347), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11301] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(1086), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(392), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11327] = 4,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1019), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11349] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(349), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11375] = 6,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_selector,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(371), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11401] = 10,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(987), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_TILDE,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    ACTIONS(999), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(923), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [11434] = 7,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    ACTIONS(1092), 1,
      anon_sym_from,
    ACTIONS(1095), 1,
      sym_to,
    ACTIONS(1098), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(419), 2,
      sym_from,
      sym_integer_value,
  [11459] = 7,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
    ACTIONS(1103), 1,
      anon_sym_from,
    ACTIONS(1105), 1,
      sym_to,
    ACTIONS(1107), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(341), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(419), 2,
      sym_from,
      sym_integer_value,
  [11484] = 7,
    ACTIONS(1103), 1,
      anon_sym_from,
    ACTIONS(1105), 1,
      sym_to,
    ACTIONS(1107), 1,
      sym_integer,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(419), 2,
      sym_from,
      sym_integer_value,
  [11509] = 7,
    ACTIONS(1103), 1,
      anon_sym_from,
    ACTIONS(1105), 1,
      sym_to,
    ACTIONS(1107), 1,
      sym_integer,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(339), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(419), 2,
      sym_from,
      sym_integer_value,
  [11534] = 7,
    ACTIONS(1103), 1,
      anon_sym_from,
    ACTIONS(1105), 1,
      sym_to,
    ACTIONS(1107), 1,
      sym_integer,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(419), 2,
      sym_from,
      sym_integer_value,
  [11559] = 3,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1115), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11575] = 3,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1119), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11591] = 7,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_enclosed_body,
    STATE(355), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [11615] = 7,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_enclosed_body,
    STATE(356), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [11639] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1131), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11652] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1133), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11665] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1135), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11678] = 6,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_enclosed_body,
    STATE(380), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [11699] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1137), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11712] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1139), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11725] = 6,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym_enclosed_body,
    STATE(372), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [11746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1141), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11759] = 6,
    ACTIONS(821), 1,
      anon_sym_LPAREN2,
    ACTIONS(1143), 1,
      sym_string_value,
    ACTIONS(1145), 1,
      sym_identifier,
    STATE(196), 1,
      sym_arguments,
    STATE(429), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11779] = 6,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_enclosed_body,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11799] = 6,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_enclosed_body,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11819] = 6,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    ACTIONS(1153), 1,
      anon_sym_LPAREN2,
    STATE(46), 1,
      sym_enclosed_body,
    STATE(383), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11839] = 5,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
    STATE(393), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [11857] = 5,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_SEMI,
    STATE(386), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [11875] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1159), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11889] = 6,
    ACTIONS(821), 1,
      anon_sym_LPAREN2,
    ACTIONS(1145), 1,
      sym_identifier,
    ACTIONS(1161), 1,
      sym_string_value,
    STATE(196), 1,
      sym_arguments,
    STATE(480), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11909] = 6,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1153), 1,
      anon_sym_LPAREN2,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_enclosed_body,
    STATE(387), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11929] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_enclosed_body,
    STATE(420), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11946] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_enclosed_body,
    STATE(409), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11963] = 4,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11978] = 3,
    ACTIONS(1169), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1131), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11991] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [12002] = 4,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1171), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12017] = 4,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1159), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12032] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_enclosed_body,
    STATE(418), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12049] = 4,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [12064] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_enclosed_body,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12081] = 4,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12096] = 5,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_enclosed_body,
    STATE(423), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12113] = 4,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [12128] = 4,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12143] = 4,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12158] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [12169] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1183), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [12180] = 5,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_enclosed_body,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12197] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(386), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [12208] = 3,
    ACTIONS(1187), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12220] = 4,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1189), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12234] = 4,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12248] = 4,
    ACTIONS(1194), 1,
      sym_string_value,
    ACTIONS(1196), 1,
      sym_identifier,
    STATE(435), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12262] = 4,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_SEMI,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12276] = 4,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12290] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12304] = 4,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12318] = 4,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12332] = 4,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    ACTIONS(1212), 1,
      anon_sym_if,
    STATE(89), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12346] = 3,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1127), 2,
      anon_sym_and,
      anon_sym_or,
  [12358] = 4,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
    STATE(369), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12372] = 4,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RPAREN2,
    STATE(400), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12386] = 4,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(1222), 1,
      anon_sym_if,
    STATE(32), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12400] = 4,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12414] = 4,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12428] = 4,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12442] = 4,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RPAREN2,
    STATE(394), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12456] = 4,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_RPAREN2,
    STATE(400), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12470] = 4,
    ACTIONS(1239), 1,
      sym_string_value,
    ACTIONS(1241), 1,
      sym_identifier,
    STATE(442), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12484] = 3,
    ACTIONS(821), 1,
      anon_sym_LPAREN2,
    STATE(196), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12495] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1243), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12504] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [12513] = 3,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12524] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(748), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1247), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12542] = 3,
    ACTIONS(1249), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12553] = 3,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12564] = 3,
    ACTIONS(1251), 1,
      sym_variable_identifier,
    STATE(396), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12575] = 3,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12586] = 3,
    ACTIONS(1249), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12597] = 3,
    ACTIONS(1253), 1,
      aux_sym_color_value_token1,
    ACTIONS(1255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12608] = 3,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(1257), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12619] = 3,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12630] = 3,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12641] = 3,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12652] = 3,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12663] = 3,
    ACTIONS(1263), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12674] = 3,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12685] = 3,
    ACTIONS(1251), 1,
      sym_variable_identifier,
    STATE(427), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12696] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12707] = 3,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12718] = 3,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12729] = 3,
    ACTIONS(1269), 1,
      anon_sym_SEMI,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12740] = 3,
    ACTIONS(1255), 1,
      sym_identifier,
    ACTIONS(1273), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12751] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12760] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1275), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12769] = 2,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12777] = 2,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12785] = 2,
    ACTIONS(1279), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12793] = 2,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12801] = 2,
    ACTIONS(1281), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12809] = 2,
    ACTIONS(1283), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12817] = 2,
    ACTIONS(1285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12825] = 2,
    ACTIONS(1222), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12833] = 2,
    ACTIONS(1287), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12841] = 2,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12849] = 2,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12857] = 2,
    ACTIONS(1291), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12865] = 2,
    ACTIONS(1293), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12873] = 2,
    ACTIONS(1295), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12881] = 2,
    ACTIONS(1297), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12889] = 2,
    ACTIONS(1299), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12897] = 2,
    ACTIONS(1301), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12905] = 2,
    ACTIONS(1303), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12913] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12921] = 2,
    ACTIONS(1269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12929] = 2,
    ACTIONS(1305), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12937] = 2,
    ACTIONS(1307), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12945] = 2,
    ACTIONS(1309), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12953] = 2,
    ACTIONS(1311), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12961] = 2,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12969] = 2,
    ACTIONS(1313), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12977] = 2,
    ACTIONS(1315), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12985] = 2,
    ACTIONS(1317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12993] = 2,
    ACTIONS(1319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13001] = 2,
    ACTIONS(1321), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13009] = 2,
    ACTIONS(1323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13017] = 2,
    ACTIONS(1325), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13025] = 2,
    ACTIONS(1327), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13033] = 2,
    ACTIONS(1329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13041] = 2,
    ACTIONS(1331), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13049] = 2,
    ACTIONS(1333), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13057] = 2,
    ACTIONS(1335), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13065] = 2,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13073] = 2,
    ACTIONS(1337), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13081] = 2,
    ACTIONS(1339), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13089] = 2,
    ACTIONS(1341), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13097] = 2,
    ACTIONS(1343), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13105] = 2,
    ACTIONS(1345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13113] = 2,
    ACTIONS(1347), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13121] = 2,
    ACTIONS(1349), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13129] = 2,
    ACTIONS(1351), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13137] = 2,
    ACTIONS(1212), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13145] = 2,
    ACTIONS(1353), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13153] = 2,
    ACTIONS(1355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13161] = 2,
    ACTIONS(1357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13169] = 2,
    ACTIONS(1359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13177] = 2,
    ACTIONS(1361), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13185] = 2,
    ACTIONS(1363), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13193] = 2,
    ACTIONS(1365), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13201] = 2,
    ACTIONS(1367), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13209] = 2,
    ACTIONS(1369), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13217] = 2,
    ACTIONS(1371), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13225] = 2,
    ACTIONS(1373), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13233] = 2,
    ACTIONS(1375), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 52,
  [SMALL_STATE(17)] = 104,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 206,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 552,
  [SMALL_STATE(27)] = 595,
  [SMALL_STATE(28)] = 637,
  [SMALL_STATE(29)] = 679,
  [SMALL_STATE(30)] = 721,
  [SMALL_STATE(31)] = 763,
  [SMALL_STATE(32)] = 805,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 889,
  [SMALL_STATE(35)] = 931,
  [SMALL_STATE(36)] = 973,
  [SMALL_STATE(37)] = 1015,
  [SMALL_STATE(38)] = 1057,
  [SMALL_STATE(39)] = 1099,
  [SMALL_STATE(40)] = 1141,
  [SMALL_STATE(41)] = 1183,
  [SMALL_STATE(42)] = 1225,
  [SMALL_STATE(43)] = 1267,
  [SMALL_STATE(44)] = 1309,
  [SMALL_STATE(45)] = 1351,
  [SMALL_STATE(46)] = 1393,
  [SMALL_STATE(47)] = 1435,
  [SMALL_STATE(48)] = 1477,
  [SMALL_STATE(49)] = 1519,
  [SMALL_STATE(50)] = 1561,
  [SMALL_STATE(51)] = 1603,
  [SMALL_STATE(52)] = 1645,
  [SMALL_STATE(53)] = 1687,
  [SMALL_STATE(54)] = 1729,
  [SMALL_STATE(55)] = 1771,
  [SMALL_STATE(56)] = 1813,
  [SMALL_STATE(57)] = 1855,
  [SMALL_STATE(58)] = 1897,
  [SMALL_STATE(59)] = 1939,
  [SMALL_STATE(60)] = 1981,
  [SMALL_STATE(61)] = 2023,
  [SMALL_STATE(62)] = 2065,
  [SMALL_STATE(63)] = 2107,
  [SMALL_STATE(64)] = 2181,
  [SMALL_STATE(65)] = 2223,
  [SMALL_STATE(66)] = 2265,
  [SMALL_STATE(67)] = 2307,
  [SMALL_STATE(68)] = 2349,
  [SMALL_STATE(69)] = 2391,
  [SMALL_STATE(70)] = 2433,
  [SMALL_STATE(71)] = 2475,
  [SMALL_STATE(72)] = 2517,
  [SMALL_STATE(73)] = 2559,
  [SMALL_STATE(74)] = 2601,
  [SMALL_STATE(75)] = 2643,
  [SMALL_STATE(76)] = 2685,
  [SMALL_STATE(77)] = 2726,
  [SMALL_STATE(78)] = 2767,
  [SMALL_STATE(79)] = 2808,
  [SMALL_STATE(80)] = 2849,
  [SMALL_STATE(81)] = 2890,
  [SMALL_STATE(82)] = 2931,
  [SMALL_STATE(83)] = 2972,
  [SMALL_STATE(84)] = 3013,
  [SMALL_STATE(85)] = 3054,
  [SMALL_STATE(86)] = 3095,
  [SMALL_STATE(87)] = 3136,
  [SMALL_STATE(88)] = 3177,
  [SMALL_STATE(89)] = 3218,
  [SMALL_STATE(90)] = 3259,
  [SMALL_STATE(91)] = 3300,
  [SMALL_STATE(92)] = 3341,
  [SMALL_STATE(93)] = 3382,
  [SMALL_STATE(94)] = 3423,
  [SMALL_STATE(95)] = 3464,
  [SMALL_STATE(96)] = 3505,
  [SMALL_STATE(97)] = 3546,
  [SMALL_STATE(98)] = 3587,
  [SMALL_STATE(99)] = 3628,
  [SMALL_STATE(100)] = 3669,
  [SMALL_STATE(101)] = 3710,
  [SMALL_STATE(102)] = 3751,
  [SMALL_STATE(103)] = 3792,
  [SMALL_STATE(104)] = 3833,
  [SMALL_STATE(105)] = 3874,
  [SMALL_STATE(106)] = 3915,
  [SMALL_STATE(107)] = 3956,
  [SMALL_STATE(108)] = 3997,
  [SMALL_STATE(109)] = 4038,
  [SMALL_STATE(110)] = 4111,
  [SMALL_STATE(111)] = 4152,
  [SMALL_STATE(112)] = 4193,
  [SMALL_STATE(113)] = 4234,
  [SMALL_STATE(114)] = 4275,
  [SMALL_STATE(115)] = 4316,
  [SMALL_STATE(116)] = 4357,
  [SMALL_STATE(117)] = 4398,
  [SMALL_STATE(118)] = 4439,
  [SMALL_STATE(119)] = 4506,
  [SMALL_STATE(120)] = 4552,
  [SMALL_STATE(121)] = 4592,
  [SMALL_STATE(122)] = 4630,
  [SMALL_STATE(123)] = 4665,
  [SMALL_STATE(124)] = 4700,
  [SMALL_STATE(125)] = 4732,
  [SMALL_STATE(126)] = 4764,
  [SMALL_STATE(127)] = 4796,
  [SMALL_STATE(128)] = 4828,
  [SMALL_STATE(129)] = 4860,
  [SMALL_STATE(130)] = 4892,
  [SMALL_STATE(131)] = 4924,
  [SMALL_STATE(132)] = 4956,
  [SMALL_STATE(133)] = 4988,
  [SMALL_STATE(134)] = 5020,
  [SMALL_STATE(135)] = 5052,
  [SMALL_STATE(136)] = 5095,
  [SMALL_STATE(137)] = 5130,
  [SMALL_STATE(138)] = 5165,
  [SMALL_STATE(139)] = 5208,
  [SMALL_STATE(140)] = 5242,
  [SMALL_STATE(141)] = 5280,
  [SMALL_STATE(142)] = 5314,
  [SMALL_STATE(143)] = 5368,
  [SMALL_STATE(144)] = 5422,
  [SMALL_STATE(145)] = 5476,
  [SMALL_STATE(146)] = 5530,
  [SMALL_STATE(147)] = 5575,
  [SMALL_STATE(148)] = 5624,
  [SMALL_STATE(149)] = 5669,
  [SMALL_STATE(150)] = 5714,
  [SMALL_STATE(151)] = 5763,
  [SMALL_STATE(152)] = 5816,
  [SMALL_STATE(153)] = 5861,
  [SMALL_STATE(154)] = 5906,
  [SMALL_STATE(155)] = 5957,
  [SMALL_STATE(156)] = 6002,
  [SMALL_STATE(157)] = 6054,
  [SMALL_STATE(158)] = 6086,
  [SMALL_STATE(159)] = 6134,
  [SMALL_STATE(160)] = 6181,
  [SMALL_STATE(161)] = 6228,
  [SMALL_STATE(162)] = 6259,
  [SMALL_STATE(163)] = 6306,
  [SMALL_STATE(164)] = 6337,
  [SMALL_STATE(165)] = 6384,
  [SMALL_STATE(166)] = 6431,
  [SMALL_STATE(167)] = 6457,
  [SMALL_STATE(168)] = 6503,
  [SMALL_STATE(169)] = 6531,
  [SMALL_STATE(170)] = 6577,
  [SMALL_STATE(171)] = 6605,
  [SMALL_STATE(172)] = 6649,
  [SMALL_STATE(173)] = 6695,
  [SMALL_STATE(174)] = 6720,
  [SMALL_STATE(175)] = 6745,
  [SMALL_STATE(176)] = 6770,
  [SMALL_STATE(177)] = 6797,
  [SMALL_STATE(178)] = 6824,
  [SMALL_STATE(179)] = 6849,
  [SMALL_STATE(180)] = 6874,
  [SMALL_STATE(181)] = 6917,
  [SMALL_STATE(182)] = 6942,
  [SMALL_STATE(183)] = 6967,
  [SMALL_STATE(184)] = 6992,
  [SMALL_STATE(185)] = 7035,
  [SMALL_STATE(186)] = 7060,
  [SMALL_STATE(187)] = 7085,
  [SMALL_STATE(188)] = 7110,
  [SMALL_STATE(189)] = 7135,
  [SMALL_STATE(190)] = 7160,
  [SMALL_STATE(191)] = 7185,
  [SMALL_STATE(192)] = 7228,
  [SMALL_STATE(193)] = 7253,
  [SMALL_STATE(194)] = 7278,
  [SMALL_STATE(195)] = 7303,
  [SMALL_STATE(196)] = 7328,
  [SMALL_STATE(197)] = 7353,
  [SMALL_STATE(198)] = 7378,
  [SMALL_STATE(199)] = 7403,
  [SMALL_STATE(200)] = 7443,
  [SMALL_STATE(201)] = 7483,
  [SMALL_STATE(202)] = 7511,
  [SMALL_STATE(203)] = 7551,
  [SMALL_STATE(204)] = 7591,
  [SMALL_STATE(205)] = 7631,
  [SMALL_STATE(206)] = 7671,
  [SMALL_STATE(207)] = 7711,
  [SMALL_STATE(208)] = 7751,
  [SMALL_STATE(209)] = 7791,
  [SMALL_STATE(210)] = 7831,
  [SMALL_STATE(211)] = 7871,
  [SMALL_STATE(212)] = 7911,
  [SMALL_STATE(213)] = 7951,
  [SMALL_STATE(214)] = 7991,
  [SMALL_STATE(215)] = 8031,
  [SMALL_STATE(216)] = 8071,
  [SMALL_STATE(217)] = 8111,
  [SMALL_STATE(218)] = 8151,
  [SMALL_STATE(219)] = 8191,
  [SMALL_STATE(220)] = 8231,
  [SMALL_STATE(221)] = 8271,
  [SMALL_STATE(222)] = 8299,
  [SMALL_STATE(223)] = 8339,
  [SMALL_STATE(224)] = 8379,
  [SMALL_STATE(225)] = 8419,
  [SMALL_STATE(226)] = 8459,
  [SMALL_STATE(227)] = 8499,
  [SMALL_STATE(228)] = 8539,
  [SMALL_STATE(229)] = 8579,
  [SMALL_STATE(230)] = 8619,
  [SMALL_STATE(231)] = 8659,
  [SMALL_STATE(232)] = 8699,
  [SMALL_STATE(233)] = 8739,
  [SMALL_STATE(234)] = 8779,
  [SMALL_STATE(235)] = 8819,
  [SMALL_STATE(236)] = 8859,
  [SMALL_STATE(237)] = 8899,
  [SMALL_STATE(238)] = 8939,
  [SMALL_STATE(239)] = 8979,
  [SMALL_STATE(240)] = 9019,
  [SMALL_STATE(241)] = 9059,
  [SMALL_STATE(242)] = 9099,
  [SMALL_STATE(243)] = 9139,
  [SMALL_STATE(244)] = 9179,
  [SMALL_STATE(245)] = 9202,
  [SMALL_STATE(246)] = 9227,
  [SMALL_STATE(247)] = 9262,
  [SMALL_STATE(248)] = 9289,
  [SMALL_STATE(249)] = 9312,
  [SMALL_STATE(250)] = 9347,
  [SMALL_STATE(251)] = 9369,
  [SMALL_STATE(252)] = 9393,
  [SMALL_STATE(253)] = 9415,
  [SMALL_STATE(254)] = 9439,
  [SMALL_STATE(255)] = 9461,
  [SMALL_STATE(256)] = 9483,
  [SMALL_STATE(257)] = 9505,
  [SMALL_STATE(258)] = 9529,
  [SMALL_STATE(259)] = 9551,
  [SMALL_STATE(260)] = 9573,
  [SMALL_STATE(261)] = 9597,
  [SMALL_STATE(262)] = 9619,
  [SMALL_STATE(263)] = 9641,
  [SMALL_STATE(264)] = 9663,
  [SMALL_STATE(265)] = 9685,
  [SMALL_STATE(266)] = 9707,
  [SMALL_STATE(267)] = 9729,
  [SMALL_STATE(268)] = 9771,
  [SMALL_STATE(269)] = 9793,
  [SMALL_STATE(270)] = 9817,
  [SMALL_STATE(271)] = 9841,
  [SMALL_STATE(272)] = 9863,
  [SMALL_STATE(273)] = 9905,
  [SMALL_STATE(274)] = 9929,
  [SMALL_STATE(275)] = 9952,
  [SMALL_STATE(276)] = 9977,
  [SMALL_STATE(277)] = 9998,
  [SMALL_STATE(278)] = 10019,
  [SMALL_STATE(279)] = 10040,
  [SMALL_STATE(280)] = 10063,
  [SMALL_STATE(281)] = 10084,
  [SMALL_STATE(282)] = 10105,
  [SMALL_STATE(283)] = 10126,
  [SMALL_STATE(284)] = 10151,
  [SMALL_STATE(285)] = 10176,
  [SMALL_STATE(286)] = 10213,
  [SMALL_STATE(287)] = 10234,
  [SMALL_STATE(288)] = 10255,
  [SMALL_STATE(289)] = 10276,
  [SMALL_STATE(290)] = 10299,
  [SMALL_STATE(291)] = 10324,
  [SMALL_STATE(292)] = 10349,
  [SMALL_STATE(293)] = 10370,
  [SMALL_STATE(294)] = 10395,
  [SMALL_STATE(295)] = 10420,
  [SMALL_STATE(296)] = 10445,
  [SMALL_STATE(297)] = 10466,
  [SMALL_STATE(298)] = 10503,
  [SMALL_STATE(299)] = 10524,
  [SMALL_STATE(300)] = 10547,
  [SMALL_STATE(301)] = 10570,
  [SMALL_STATE(302)] = 10595,
  [SMALL_STATE(303)] = 10620,
  [SMALL_STATE(304)] = 10645,
  [SMALL_STATE(305)] = 10670,
  [SMALL_STATE(306)] = 10695,
  [SMALL_STATE(307)] = 10717,
  [SMALL_STATE(308)] = 10739,
  [SMALL_STATE(309)] = 10761,
  [SMALL_STATE(310)] = 10787,
  [SMALL_STATE(311)] = 10809,
  [SMALL_STATE(312)] = 10831,
  [SMALL_STATE(313)] = 10853,
  [SMALL_STATE(314)] = 10875,
  [SMALL_STATE(315)] = 10897,
  [SMALL_STATE(316)] = 10919,
  [SMALL_STATE(317)] = 10941,
  [SMALL_STATE(318)] = 10963,
  [SMALL_STATE(319)] = 10985,
  [SMALL_STATE(320)] = 11011,
  [SMALL_STATE(321)] = 11033,
  [SMALL_STATE(322)] = 11055,
  [SMALL_STATE(323)] = 11077,
  [SMALL_STATE(324)] = 11099,
  [SMALL_STATE(325)] = 11121,
  [SMALL_STATE(326)] = 11143,
  [SMALL_STATE(327)] = 11179,
  [SMALL_STATE(328)] = 11201,
  [SMALL_STATE(329)] = 11223,
  [SMALL_STATE(330)] = 11249,
  [SMALL_STATE(331)] = 11275,
  [SMALL_STATE(332)] = 11301,
  [SMALL_STATE(333)] = 11327,
  [SMALL_STATE(334)] = 11349,
  [SMALL_STATE(335)] = 11375,
  [SMALL_STATE(336)] = 11401,
  [SMALL_STATE(337)] = 11434,
  [SMALL_STATE(338)] = 11459,
  [SMALL_STATE(339)] = 11484,
  [SMALL_STATE(340)] = 11509,
  [SMALL_STATE(341)] = 11534,
  [SMALL_STATE(342)] = 11559,
  [SMALL_STATE(343)] = 11575,
  [SMALL_STATE(344)] = 11591,
  [SMALL_STATE(345)] = 11615,
  [SMALL_STATE(346)] = 11639,
  [SMALL_STATE(347)] = 11652,
  [SMALL_STATE(348)] = 11665,
  [SMALL_STATE(349)] = 11678,
  [SMALL_STATE(350)] = 11699,
  [SMALL_STATE(351)] = 11712,
  [SMALL_STATE(352)] = 11725,
  [SMALL_STATE(353)] = 11746,
  [SMALL_STATE(354)] = 11759,
  [SMALL_STATE(355)] = 11779,
  [SMALL_STATE(356)] = 11799,
  [SMALL_STATE(357)] = 11819,
  [SMALL_STATE(358)] = 11839,
  [SMALL_STATE(359)] = 11857,
  [SMALL_STATE(360)] = 11875,
  [SMALL_STATE(361)] = 11889,
  [SMALL_STATE(362)] = 11909,
  [SMALL_STATE(363)] = 11929,
  [SMALL_STATE(364)] = 11946,
  [SMALL_STATE(365)] = 11963,
  [SMALL_STATE(366)] = 11978,
  [SMALL_STATE(367)] = 11991,
  [SMALL_STATE(368)] = 12002,
  [SMALL_STATE(369)] = 12017,
  [SMALL_STATE(370)] = 12032,
  [SMALL_STATE(371)] = 12049,
  [SMALL_STATE(372)] = 12064,
  [SMALL_STATE(373)] = 12081,
  [SMALL_STATE(374)] = 12096,
  [SMALL_STATE(375)] = 12113,
  [SMALL_STATE(376)] = 12128,
  [SMALL_STATE(377)] = 12143,
  [SMALL_STATE(378)] = 12158,
  [SMALL_STATE(379)] = 12169,
  [SMALL_STATE(380)] = 12180,
  [SMALL_STATE(381)] = 12197,
  [SMALL_STATE(382)] = 12208,
  [SMALL_STATE(383)] = 12220,
  [SMALL_STATE(384)] = 12234,
  [SMALL_STATE(385)] = 12248,
  [SMALL_STATE(386)] = 12262,
  [SMALL_STATE(387)] = 12276,
  [SMALL_STATE(388)] = 12290,
  [SMALL_STATE(389)] = 12304,
  [SMALL_STATE(390)] = 12318,
  [SMALL_STATE(391)] = 12332,
  [SMALL_STATE(392)] = 12346,
  [SMALL_STATE(393)] = 12358,
  [SMALL_STATE(394)] = 12372,
  [SMALL_STATE(395)] = 12386,
  [SMALL_STATE(396)] = 12400,
  [SMALL_STATE(397)] = 12414,
  [SMALL_STATE(398)] = 12428,
  [SMALL_STATE(399)] = 12442,
  [SMALL_STATE(400)] = 12456,
  [SMALL_STATE(401)] = 12470,
  [SMALL_STATE(402)] = 12484,
  [SMALL_STATE(403)] = 12495,
  [SMALL_STATE(404)] = 12504,
  [SMALL_STATE(405)] = 12513,
  [SMALL_STATE(406)] = 12524,
  [SMALL_STATE(407)] = 12533,
  [SMALL_STATE(408)] = 12542,
  [SMALL_STATE(409)] = 12553,
  [SMALL_STATE(410)] = 12564,
  [SMALL_STATE(411)] = 12575,
  [SMALL_STATE(412)] = 12586,
  [SMALL_STATE(413)] = 12597,
  [SMALL_STATE(414)] = 12608,
  [SMALL_STATE(415)] = 12619,
  [SMALL_STATE(416)] = 12630,
  [SMALL_STATE(417)] = 12641,
  [SMALL_STATE(418)] = 12652,
  [SMALL_STATE(419)] = 12663,
  [SMALL_STATE(420)] = 12674,
  [SMALL_STATE(421)] = 12685,
  [SMALL_STATE(422)] = 12696,
  [SMALL_STATE(423)] = 12707,
  [SMALL_STATE(424)] = 12718,
  [SMALL_STATE(425)] = 12729,
  [SMALL_STATE(426)] = 12740,
  [SMALL_STATE(427)] = 12751,
  [SMALL_STATE(428)] = 12760,
  [SMALL_STATE(429)] = 12769,
  [SMALL_STATE(430)] = 12777,
  [SMALL_STATE(431)] = 12785,
  [SMALL_STATE(432)] = 12793,
  [SMALL_STATE(433)] = 12801,
  [SMALL_STATE(434)] = 12809,
  [SMALL_STATE(435)] = 12817,
  [SMALL_STATE(436)] = 12825,
  [SMALL_STATE(437)] = 12833,
  [SMALL_STATE(438)] = 12841,
  [SMALL_STATE(439)] = 12849,
  [SMALL_STATE(440)] = 12857,
  [SMALL_STATE(441)] = 12865,
  [SMALL_STATE(442)] = 12873,
  [SMALL_STATE(443)] = 12881,
  [SMALL_STATE(444)] = 12889,
  [SMALL_STATE(445)] = 12897,
  [SMALL_STATE(446)] = 12905,
  [SMALL_STATE(447)] = 12913,
  [SMALL_STATE(448)] = 12921,
  [SMALL_STATE(449)] = 12929,
  [SMALL_STATE(450)] = 12937,
  [SMALL_STATE(451)] = 12945,
  [SMALL_STATE(452)] = 12953,
  [SMALL_STATE(453)] = 12961,
  [SMALL_STATE(454)] = 12969,
  [SMALL_STATE(455)] = 12977,
  [SMALL_STATE(456)] = 12985,
  [SMALL_STATE(457)] = 12993,
  [SMALL_STATE(458)] = 13001,
  [SMALL_STATE(459)] = 13009,
  [SMALL_STATE(460)] = 13017,
  [SMALL_STATE(461)] = 13025,
  [SMALL_STATE(462)] = 13033,
  [SMALL_STATE(463)] = 13041,
  [SMALL_STATE(464)] = 13049,
  [SMALL_STATE(465)] = 13057,
  [SMALL_STATE(466)] = 13065,
  [SMALL_STATE(467)] = 13073,
  [SMALL_STATE(468)] = 13081,
  [SMALL_STATE(469)] = 13089,
  [SMALL_STATE(470)] = 13097,
  [SMALL_STATE(471)] = 13105,
  [SMALL_STATE(472)] = 13113,
  [SMALL_STATE(473)] = 13121,
  [SMALL_STATE(474)] = 13129,
  [SMALL_STATE(475)] = 13137,
  [SMALL_STATE(476)] = 13145,
  [SMALL_STATE(477)] = 13153,
  [SMALL_STATE(478)] = 13161,
  [SMALL_STATE(479)] = 13169,
  [SMALL_STATE(480)] = 13177,
  [SMALL_STATE(481)] = 13185,
  [SMALL_STATE(482)] = 13193,
  [SMALL_STATE(483)] = 13201,
  [SMALL_STATE(484)] = 13209,
  [SMALL_STATE(485)] = 13217,
  [SMALL_STATE(486)] = 13225,
  [SMALL_STATE(487)] = 13233,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(230),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(329),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(212),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(385),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(479),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(478),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(330),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(238),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(239),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(476),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(474),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(473),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(471),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(213),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(470),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(469),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(205),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(468),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(219),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(211),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(203),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(245),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(263),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(466),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(465),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(458),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(456),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(267),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(281),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(452),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(246),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(229),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(334),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(228),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(401),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(460),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(461),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(335),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(476),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(463),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(464),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(109),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(225),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(483),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(487),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(204),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(467),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(237),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(235),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(209),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(210),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(224),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(245),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(263),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(466),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(465),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(458),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(456),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(267),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(281),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(452),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(249),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2, .production_id = 11),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2, .production_id = 11),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(436),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(475),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 3, .production_id = 32),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 3, .production_id = 32),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 17),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 17),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 40),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 40),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 4, .production_id = 39),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 4, .production_id = 39),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_mixin, 4, .production_id = 28),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_mixin, 4, .production_id = 28),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_media, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_media, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, .production_id = 21),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, .production_id = 21),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 47),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 47),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_include, 4, .production_id = 30),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_include, 4, .production_id = 30),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_include, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_include, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_mixin, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_mixin, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 26),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 26),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 14),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 14),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, .production_id = 12),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, .production_id = 12),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 15),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 15),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2, .production_id = 10),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2, .production_id = 10),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 37),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 37),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_ruleset, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_ruleset, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_media, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_media, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 46),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 46),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_item, 1, .production_id = 20),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_item, 1, .production_id = 20),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 3, .production_id = 19),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_, 1, .production_id = 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_, 1, .production_id = 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_, 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_, 1, .production_id = 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_, 1, .production_id = 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, .production_id = 41),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, .production_id = 41),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, .production_id = 35),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, .production_id = 35),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(216),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(434),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(127),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(130),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(127),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 4, .production_id = 31),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(215),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(216),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(434),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(127),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(123),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(122),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(121),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(130),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(127),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(216),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(434),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(127),
  [800] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(123),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(122),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(121),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(130),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(127),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 6),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 6),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 22),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 22),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 23),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 23),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 7),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 7),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 24),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 24),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 16),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 16),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 25),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 25),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, .production_id = 23),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, .production_id = 23),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 34),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 34),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 33),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 33),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 18),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 18),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 9),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 9),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 8),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 8),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 34),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 34),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector_list, 1),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 18),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 18),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 45),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(208),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_css_selector_list_repeat1, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 43),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 29),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(451),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(419),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(414),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 5),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 42),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(171),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(309),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 27),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_selector_list_repeat1, 2), SHIFT_REPEAT(146),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(421),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(63),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector_list, 2),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(180),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 5, .production_id = 38),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3, .production_id = 35),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 1, .production_id = 12),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4, .production_id = 41),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, .production_id = 36),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, .production_id = 44),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scss_external_scanner_create(void);
void tree_sitter_scss_external_scanner_destroy(void *);
bool tree_sitter_scss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scss_external_scanner_serialize(void *, char *);
void tree_sitter_scss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scss(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_scss_external_scanner_create,
      tree_sitter_scss_external_scanner_destroy,
      tree_sitter_scss_external_scanner_scan,
      tree_sitter_scss_external_scanner_serialize,
      tree_sitter_scss_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
