#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_EQ = 1,
  anon_sym_import = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_PERCENT = 7,
  sym__identifier_without_ver = 8,
  anon_sym_AT = 9,
  sym_text = 10,
  sym_number = 11,
  aux_sym_string_token1 = 12,
  aux_sym_string_token2 = 13,
  sym_wildcard = 14,
  anon_sym_LF = 15,
  anon_sym_CR = 16,
  anon_sym_LF_CR = 17,
  anon_sym_ = 18,
  sym__left_square_bracket = 19,
  sym__right_square_bracket = 20,
  sym__comma = 21,
  sym__dot = 22,
  sym__single_quotation_mark = 23,
  sym__double_quotation_mark = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym__body = 27,
  sym__expr = 28,
  sym_variable_def = 29,
  sym_import_expr = 30,
  sym_namespace = 31,
  sym_command = 32,
  sym__path = 33,
  sym_identifier = 34,
  sym_nested_identifier = 35,
  sym_variable = 36,
  sym_identifier_without_ver = 37,
  sym__identifier_with_ver = 38,
  sym__primitive = 39,
  sym_string = 40,
  sym_array = 41,
  sym__newline = 42,
  aux_sym__body_repeat1 = 43,
  aux_sym_command_repeat1 = 44,
  aux_sym_string_repeat1 = 45,
  aux_sym_string_repeat2 = 46,
  aux_sym_array_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PERCENT] = "%",
  [sym__identifier_without_ver] = "_identifier_without_ver",
  [anon_sym_AT] = "@",
  [sym_text] = "text",
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_wildcard] = "wildcard",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_LF_CR] = "\n\r",
  [anon_sym_] = " ",
  [sym__left_square_bracket] = "_left_square_bracket",
  [sym__right_square_bracket] = "_right_square_bracket",
  [sym__comma] = "_comma",
  [sym__dot] = "_dot",
  [sym__single_quotation_mark] = "_single_quotation_mark",
  [sym__double_quotation_mark] = "_double_quotation_mark",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__body] = "_body",
  [sym__expr] = "_expr",
  [sym_variable_def] = "variable_def",
  [sym_import_expr] = "import_expr",
  [sym_namespace] = "namespace",
  [sym_command] = "command",
  [sym__path] = "_path",
  [sym_identifier] = "identifier",
  [sym_nested_identifier] = "nested_identifier",
  [sym_variable] = "variable",
  [sym_identifier_without_ver] = "identifier_without_ver",
  [sym__identifier_with_ver] = "_identifier_with_ver",
  [sym__primitive] = "_primitive",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym__newline] = "_newline",
  [aux_sym__body_repeat1] = "_body_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym__identifier_without_ver] = sym__identifier_without_ver,
  [anon_sym_AT] = anon_sym_AT,
  [sym_text] = sym_text,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_wildcard] = sym_wildcard,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF_CR] = anon_sym_LF_CR,
  [anon_sym_] = anon_sym_,
  [sym__left_square_bracket] = sym__left_square_bracket,
  [sym__right_square_bracket] = sym__right_square_bracket,
  [sym__comma] = sym__comma,
  [sym__dot] = sym__dot,
  [sym__single_quotation_mark] = sym__single_quotation_mark,
  [sym__double_quotation_mark] = sym__double_quotation_mark,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__body] = sym__body,
  [sym__expr] = sym__expr,
  [sym_variable_def] = sym_variable_def,
  [sym_import_expr] = sym_import_expr,
  [sym_namespace] = sym_namespace,
  [sym_command] = sym_command,
  [sym__path] = sym__path,
  [sym_identifier] = sym_identifier,
  [sym_nested_identifier] = sym_nested_identifier,
  [sym_variable] = sym_variable,
  [sym_identifier_without_ver] = sym_identifier_without_ver,
  [sym__identifier_with_ver] = sym__identifier_with_ver,
  [sym__primitive] = sym__primitive,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym__newline] = sym__newline,
  [aux_sym__body_repeat1] = aux_sym__body_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier_without_ver] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__left_square_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym__right_square_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quotation_mark] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quotation_mark] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__body] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_def] = {
    .visible = true,
    .named = true,
  },
  [sym_import_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_without_ver] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_with_ver] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_id = 2,
  field_name = 3,
  field_namespace_name = 4,
  field_path = 5,
  field_program = 6,
  field_val = 7,
  field_var = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_id] = "id",
  [field_name] = "name",
  [field_namespace_name] = "namespace_name",
  [field_path] = "path",
  [field_program] = "program",
  [field_val] = "val",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_program, 0},
  [1] =
    {field_args, 1},
    {field_program, 0},
  [3] =
    {field_var, 1},
  [4] =
    {field_name, 2},
    {field_path, 0},
  [6] =
    {field_id, 0},
    {field_val, 2},
  [8] =
    {field_namespace_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 7,
  [22] = 22,
  [23] = 23,
  [24] = 8,
  [25] = 25,
  [26] = 14,
  [27] = 25,
  [28] = 16,
  [29] = 16,
  [30] = 19,
  [31] = 15,
  [32] = 32,
  [33] = 33,
  [34] = 12,
  [35] = 19,
  [36] = 15,
  [37] = 12,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 23,
  [48] = 48,
  [49] = 22,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 53,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 66,
  [67] = 67,
  [68] = 61,
  [69] = 63,
  [70] = 63,
  [71] = 71,
};

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? c == '\t'
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == 0) ADVANCE(68);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '/') ADVANCE(13);
      if (anon_sym__character_set_2(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(50);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(51);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(40);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(41);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (anon_sym__character_set_1(lookahead)) SKIP(11)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '/') ADVANCE(53);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(50);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(53);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(37);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(38);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(39);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(37);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(38);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(39);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__left_square_bracket);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__right_square_bracket);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__single_quotation_mark);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__double_quotation_mark);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym__identifier_without_ver] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__left_square_bracket] = ACTIONS(1),
    [sym__right_square_bracket] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__single_quotation_mark] = ACTIONS(1),
    [sym__double_quotation_mark] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym__body] = STATE(71),
    [sym__expr] = STATE(2),
    [sym_variable_def] = STATE(2),
    [sym_import_expr] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym_command] = STATE(39),
    [sym__path] = STATE(7),
    [sym_identifier] = STATE(11),
    [sym_nested_identifier] = STATE(7),
    [sym_identifier_without_ver] = STATE(64),
    [sym__identifier_with_ver] = STATE(12),
    [anon_sym_import] = ACTIONS(5),
    [sym__identifier_without_ver] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym__identifier_with_ver,
    STATE(39), 1,
      sym_command,
    STATE(64), 1,
      sym_identifier_without_ver,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym__path,
      sym_nested_identifier,
    STATE(3), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [37] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym__identifier_with_ver,
    STATE(39), 1,
      sym_command,
    STATE(64), 1,
      sym_identifier_without_ver,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym__path,
      sym_nested_identifier,
    STATE(4), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [74] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(18), 1,
      sym__identifier_without_ver,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym__identifier_with_ver,
    STATE(39), 1,
      sym_command,
    STATE(64), 1,
      sym_identifier_without_ver,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym__path,
      sym_nested_identifier,
    STATE(4), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [111] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym__identifier_with_ver,
    STATE(39), 1,
      sym_command,
    STATE(64), 1,
      sym_identifier_without_ver,
    STATE(66), 1,
      sym__body,
    STATE(7), 2,
      sym__path,
      sym_nested_identifier,
    STATE(2), 4,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
  [146] = 4,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(23), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [167] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(37), 1,
      sym__dot,
    STATE(8), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(35), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [193] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      sym_text,
    STATE(14), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(41), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(46), 1,
      sym__left_square_bracket,
    ACTIONS(49), 1,
      sym__right_square_bracket,
    ACTIONS(51), 1,
      sym__single_quotation_mark,
    ACTIONS(54), 1,
      sym__double_quotation_mark,
    STATE(9), 1,
      aux_sym_array_repeat1,
    STATE(62), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [243] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(61), 1,
      sym__right_square_bracket,
    ACTIONS(63), 1,
      sym__single_quotation_mark,
    ACTIONS(65), 1,
      sym__double_quotation_mark,
    STATE(9), 1,
      aux_sym_array_repeat1,
    STATE(62), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [270] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [287] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(23), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [302] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(63), 1,
      sym__single_quotation_mark,
    ACTIONS(65), 1,
      sym__double_quotation_mark,
    ACTIONS(71), 1,
      sym__right_square_bracket,
    STATE(10), 1,
      aux_sym_array_repeat1,
    STATE(62), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [329] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      sym_text,
    STATE(14), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(82), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [352] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [367] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(23), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [384] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [398] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(23), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [412] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(88), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(63), 1,
      sym__single_quotation_mark,
    ACTIONS(65), 1,
      sym__double_quotation_mark,
    ACTIONS(90), 1,
      sym_number,
    STATE(46), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [447] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_PERCENT,
    ACTIONS(96), 1,
      sym_text,
    ACTIONS(98), 1,
      sym__dot,
    STATE(24), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [470] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(100), 7,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [483] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(102), 7,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [496] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_PERCENT,
    ACTIONS(104), 1,
      sym_text,
    STATE(26), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym__identifier_without_ver,
    STATE(37), 1,
      sym__identifier_with_ver,
    STATE(68), 1,
      sym_command,
    STATE(21), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [534] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_PERCENT,
    ACTIONS(114), 1,
      sym_text,
    STATE(26), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym__identifier_without_ver,
    STATE(37), 1,
      sym__identifier_with_ver,
    STATE(61), 1,
      sym_command,
    STATE(21), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AT,
    ACTIONS(23), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__dot,
  [588] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_AT,
    ACTIONS(23), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__dot,
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__dot,
  [628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym__dot,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(129), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__comma,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__dot,
  [669] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(88), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [680] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [691] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(23), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__comma,
  [715] = 3,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym__newline,
    ACTIONS(141), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__comma,
  [741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 5,
      sym_number,
      sym__left_square_bracket,
      sym__right_square_bracket,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
  [752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__comma,
  [765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__identifier_without_ver,
    STATE(34), 1,
      sym__identifier_with_ver,
    STATE(32), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(155), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(159), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(163), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [816] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(167), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [838] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
  [848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__identifier_without_ver,
    ACTIONS(169), 1,
      sym_wildcard,
    STATE(30), 1,
      sym_identifier,
    STATE(34), 1,
      sym__identifier_with_ver,
  [864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_PERCENT,
      sym__identifier_without_ver,
      sym_number,
  [873] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_string_token1,
    ACTIONS(175), 1,
      sym__double_quotation_mark,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym__identifier_without_ver,
    STATE(35), 1,
      sym_identifier,
    STATE(37), 1,
      sym__identifier_with_ver,
  [899] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_string_token2,
    ACTIONS(180), 1,
      sym__single_quotation_mark,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [912] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_string_token1,
    ACTIONS(185), 1,
      sym__double_quotation_mark,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_PERCENT,
      sym__identifier_without_ver,
      sym_number,
  [934] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_string_token1,
    ACTIONS(191), 1,
      sym__double_quotation_mark,
    STATE(52), 1,
      aux_sym_string_repeat1,
  [947] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__single_quotation_mark,
    ACTIONS(193), 1,
      aux_sym_string_token2,
    STATE(59), 1,
      aux_sym_string_repeat2,
  [960] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__single_quotation_mark,
    ACTIONS(195), 1,
      aux_sym_string_token2,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__identifier_without_ver,
    STATE(18), 1,
      sym__identifier_with_ver,
    STATE(19), 1,
      sym_identifier,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__comma,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__identifier_without_ver,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_EQ,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__identifier_without_ver,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [1042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__identifier_without_ver,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__identifier_without_ver,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 193,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 398,
  [SMALL_STATE(19)] = 412,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 447,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 483,
  [SMALL_STATE(24)] = 496,
  [SMALL_STATE(25)] = 516,
  [SMALL_STATE(26)] = 534,
  [SMALL_STATE(27)] = 554,
  [SMALL_STATE(28)] = 572,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 602,
  [SMALL_STATE(31)] = 615,
  [SMALL_STATE(32)] = 628,
  [SMALL_STATE(33)] = 643,
  [SMALL_STATE(34)] = 656,
  [SMALL_STATE(35)] = 669,
  [SMALL_STATE(36)] = 680,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 702,
  [SMALL_STATE(39)] = 715,
  [SMALL_STATE(40)] = 728,
  [SMALL_STATE(41)] = 741,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 765,
  [SMALL_STATE(44)] = 780,
  [SMALL_STATE(45)] = 792,
  [SMALL_STATE(46)] = 804,
  [SMALL_STATE(47)] = 816,
  [SMALL_STATE(48)] = 826,
  [SMALL_STATE(49)] = 838,
  [SMALL_STATE(50)] = 848,
  [SMALL_STATE(51)] = 864,
  [SMALL_STATE(52)] = 873,
  [SMALL_STATE(53)] = 886,
  [SMALL_STATE(54)] = 899,
  [SMALL_STATE(55)] = 912,
  [SMALL_STATE(56)] = 925,
  [SMALL_STATE(57)] = 934,
  [SMALL_STATE(58)] = 947,
  [SMALL_STATE(59)] = 960,
  [SMALL_STATE(60)] = 973,
  [SMALL_STATE(61)] = 986,
  [SMALL_STATE(62)] = 993,
  [SMALL_STATE(63)] = 1000,
  [SMALL_STATE(64)] = 1007,
  [SMALL_STATE(65)] = 1014,
  [SMALL_STATE(66)] = 1021,
  [SMALL_STATE(67)] = 1028,
  [SMALL_STATE(68)] = 1035,
  [SMALL_STATE(69)] = 1042,
  [SMALL_STATE(70)] = 1049,
  [SMALL_STATE(71)] = 1056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(43),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_without_ver, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(51),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_with_ver, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_identifier, 3, .production_id = 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(56),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_identifier, 3, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_with_ver, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(54),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(55),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_repkg(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
