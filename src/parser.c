#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_IHASA = 2,
  anon_sym_ITZ = 3,
  anon_sym_R = 4,
  anon_sym_VISIBLE = 5,
  anon_sym_IMINYR = 6,
  anon_sym_IMOUTTAYR = 7,
  anon_sym_BOTHSAEM = 8,
  anon_sym_AN = 9,
  anon_sym_ORLY_QMARK = 10,
  anon_sym_YARLY = 11,
  anon_sym_GTFO = 12,
  anon_sym_OIC = 13,
  anon_sym_NOWAI = 14,
  anon_sym_SUMOF = 15,
  sym_identifier = 16,
  sym_number = 17,
  sym_source_file = 18,
  sym__statement = 19,
  sym_declaration = 20,
  sym_assignment = 21,
  sym_output = 22,
  sym_loop = 23,
  sym_exit_condition = 24,
  sym_conditional = 25,
  sym__expression = 26,
  sym_binary_expression = 27,
  aux_sym_source_file_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_IHASA] = "I HAS A",
  [anon_sym_ITZ] = "ITZ",
  [anon_sym_R] = "R",
  [anon_sym_VISIBLE] = "VISIBLE",
  [anon_sym_IMINYR] = "IM IN YR",
  [anon_sym_IMOUTTAYR] = "IM OUTTA YR",
  [anon_sym_BOTHSAEM] = "BOTH SAEM",
  [anon_sym_AN] = "AN",
  [anon_sym_ORLY_QMARK] = "O RLY\?",
  [anon_sym_YARLY] = "YA RLY",
  [anon_sym_GTFO] = "GTFO",
  [anon_sym_OIC] = "OIC",
  [anon_sym_NOWAI] = "NO WAI",
  [anon_sym_SUMOF] = "SUM OF",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_declaration] = "declaration",
  [sym_assignment] = "assignment",
  [sym_output] = "output",
  [sym_loop] = "loop",
  [sym_exit_condition] = "exit_condition",
  [sym_conditional] = "conditional",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_IHASA] = anon_sym_IHASA,
  [anon_sym_ITZ] = anon_sym_ITZ,
  [anon_sym_R] = anon_sym_R,
  [anon_sym_VISIBLE] = anon_sym_VISIBLE,
  [anon_sym_IMINYR] = anon_sym_IMINYR,
  [anon_sym_IMOUTTAYR] = anon_sym_IMOUTTAYR,
  [anon_sym_BOTHSAEM] = anon_sym_BOTHSAEM,
  [anon_sym_AN] = anon_sym_AN,
  [anon_sym_ORLY_QMARK] = anon_sym_ORLY_QMARK,
  [anon_sym_YARLY] = anon_sym_YARLY,
  [anon_sym_GTFO] = anon_sym_GTFO,
  [anon_sym_OIC] = anon_sym_OIC,
  [anon_sym_NOWAI] = anon_sym_NOWAI,
  [anon_sym_SUMOF] = anon_sym_SUMOF,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_declaration] = sym_declaration,
  [sym_assignment] = sym_assignment,
  [sym_output] = sym_output,
  [sym_loop] = sym_loop,
  [sym_exit_condition] = sym_exit_condition,
  [sym_conditional] = sym_conditional,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IHASA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ITZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VISIBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMINYR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMOUTTAYR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOTHSAEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORLY_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YARLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOWAI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUMOF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 3,
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 10,
  [16] = 10,
  [17] = 10,
  [18] = 13,
  [19] = 13,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 20,
  [28] = 21,
  [29] = 24,
  [30] = 25,
  [31] = 31,
  [32] = 25,
  [33] = 24,
  [34] = 25,
  [35] = 11,
  [36] = 11,
  [37] = 24,
  [38] = 21,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 39,
  [52] = 39,
  [53] = 43,
  [54] = 41,
  [55] = 44,
  [56] = 56,
  [57] = 46,
  [58] = 47,
  [59] = 59,
  [60] = 42,
  [61] = 56,
  [62] = 59,
  [63] = 45,
  [64] = 50,
  [65] = 56,
  [66] = 42,
  [67] = 59,
  [68] = 45,
  [69] = 48,
  [70] = 43,
  [71] = 41,
  [72] = 44,
  [73] = 46,
  [74] = 42,
  [75] = 56,
  [76] = 59,
  [77] = 45,
  [78] = 47,
  [79] = 48,
  [80] = 50,
  [81] = 43,
  [82] = 41,
  [83] = 44,
  [84] = 50,
  [85] = 46,
  [86] = 47,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 90,
  [94] = 89,
  [95] = 89,
  [96] = 90,
  [97] = 92,
  [98] = 90,
  [99] = 99,
  [100] = 90,
  [101] = 101,
  [102] = 102,
  [103] = 92,
  [104] = 101,
  [105] = 101,
  [106] = 89,
  [107] = 87,
  [108] = 101,
  [109] = 87,
  [110] = 92,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 111,
  [122] = 122,
  [123] = 50,
  [124] = 113,
  [125] = 118,
  [126] = 114,
  [127] = 127,
  [128] = 116,
  [129] = 117,
  [130] = 117,
  [131] = 116,
  [132] = 118,
  [133] = 118,
  [134] = 134,
  [135] = 111,
  [136] = 136,
  [137] = 116,
  [138] = 138,
  [139] = 117,
  [140] = 116,
  [141] = 122,
  [142] = 142,
  [143] = 127,
  [144] = 138,
  [145] = 114,
  [146] = 114,
  [147] = 122,
  [148] = 138,
  [149] = 127,
  [150] = 138,
  [151] = 113,
  [152] = 152,
  [153] = 122,
  [154] = 111,
  [155] = 127,
  [156] = 113,
  [157] = 152,
  [158] = 152,
  [159] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      ADVANCE_MAP(
        'A', 44,
        'B', 47,
        'G', 57,
        'I', 1,
        'N', 49,
        'O', 2,
        'R', 78,
        'S', 61,
        'V', 34,
        'Y', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '?') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'F') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(83);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(5);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(4);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 61:
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'W') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'W') ADVANCE(15);
      END_STATE();
    case 65:
      if (lookahead == 'Y') ADVANCE(11);
      END_STATE();
    case 66:
      if (lookahead == 'Y') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'Y') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'Y') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'Z') ADVANCE(76);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'V') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_IHASA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ITZ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ITZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_VISIBLE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_VISIBLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_IMINYR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_IMOUTTAYR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BOTHSAEM);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ORLY_QMARK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_YARLY);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GTFO);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_OIC);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_OIC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_NOWAI);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SUMOF);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 71},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 70},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 70},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 70},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 70},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 22},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 23},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(1),
    [anon_sym_ITZ] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [anon_sym_VISIBLE] = ACTIONS(1),
    [anon_sym_IMINYR] = ACTIONS(1),
    [anon_sym_IMOUTTAYR] = ACTIONS(1),
    [anon_sym_BOTHSAEM] = ACTIONS(1),
    [anon_sym_AN] = ACTIONS(1),
    [anon_sym_ORLY_QMARK] = ACTIONS(1),
    [anon_sym_YARLY] = ACTIONS(1),
    [anon_sym_GTFO] = ACTIONS(1),
    [anon_sym_OIC] = ACTIONS(1),
    [anon_sym_NOWAI] = ACTIONS(1),
    [anon_sym_SUMOF] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym__statement] = STATE(31),
    [sym_declaration] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym_output] = STATE(31),
    [sym_loop] = STATE(31),
    [sym_conditional] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(7),
    [anon_sym_VISIBLE] = ACTIONS(9),
    [anon_sym_IMINYR] = ACTIONS(11),
    [anon_sym_ORLY_QMARK] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(11),
    [sym_declaration] = STATE(11),
    [sym_assignment] = STATE(11),
    [sym_output] = STATE(11),
    [sym_loop] = STATE(11),
    [sym_exit_condition] = STATE(155),
    [sym_conditional] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(23),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_output] = STATE(2),
    [sym_loop] = STATE(2),
    [sym_exit_condition] = STATE(153),
    [sym_conditional] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(31),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [4] = {
    [sym__statement] = STATE(11),
    [sym_declaration] = STATE(11),
    [sym_assignment] = STATE(11),
    [sym_output] = STATE(11),
    [sym_loop] = STATE(11),
    [sym_exit_condition] = STATE(149),
    [sym_conditional] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(33),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_declaration] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_output] = STATE(4),
    [sym_loop] = STATE(4),
    [sym_exit_condition] = STATE(147),
    [sym_conditional] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(35),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [6] = {
    [sym__statement] = STATE(11),
    [sym_declaration] = STATE(11),
    [sym_assignment] = STATE(11),
    [sym_output] = STATE(11),
    [sym_loop] = STATE(11),
    [sym_exit_condition] = STATE(143),
    [sym_conditional] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(37),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [7] = {
    [sym__statement] = STATE(6),
    [sym_declaration] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_output] = STATE(6),
    [sym_loop] = STATE(6),
    [sym_exit_condition] = STATE(141),
    [sym_conditional] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(39),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [8] = {
    [sym__statement] = STATE(9),
    [sym_declaration] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_output] = STATE(9),
    [sym_loop] = STATE(9),
    [sym_exit_condition] = STATE(122),
    [sym_conditional] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(41),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [9] = {
    [sym__statement] = STATE(11),
    [sym_declaration] = STATE(11),
    [sym_assignment] = STATE(11),
    [sym_output] = STATE(11),
    [sym_loop] = STATE(11),
    [sym_exit_condition] = STATE(127),
    [sym_conditional] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(17),
    [anon_sym_VISIBLE] = ACTIONS(19),
    [anon_sym_IMINYR] = ACTIONS(21),
    [anon_sym_IMOUTTAYR] = ACTIONS(43),
    [anon_sym_BOTHSAEM] = ACTIONS(25),
    [anon_sym_ORLY_QMARK] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [10] = {
    [sym__statement] = STATE(12),
    [sym_declaration] = STATE(12),
    [sym_assignment] = STATE(12),
    [sym_output] = STATE(12),
    [sym_loop] = STATE(12),
    [sym_conditional] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(53),
    [anon_sym_NOWAI] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
  },
  [11] = {
    [sym__statement] = STATE(11),
    [sym_declaration] = STATE(11),
    [sym_assignment] = STATE(11),
    [sym_output] = STATE(11),
    [sym_loop] = STATE(11),
    [sym_conditional] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(59),
    [anon_sym_VISIBLE] = ACTIONS(62),
    [anon_sym_IMINYR] = ACTIONS(65),
    [anon_sym_IMOUTTAYR] = ACTIONS(68),
    [anon_sym_BOTHSAEM] = ACTIONS(68),
    [anon_sym_ORLY_QMARK] = ACTIONS(70),
    [sym_identifier] = ACTIONS(73),
  },
  [12] = {
    [sym__statement] = STATE(12),
    [sym_declaration] = STATE(12),
    [sym_assignment] = STATE(12),
    [sym_output] = STATE(12),
    [sym_loop] = STATE(12),
    [sym_conditional] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(76),
    [anon_sym_VISIBLE] = ACTIONS(79),
    [anon_sym_IMINYR] = ACTIONS(82),
    [anon_sym_ORLY_QMARK] = ACTIONS(85),
    [anon_sym_OIC] = ACTIONS(88),
    [anon_sym_NOWAI] = ACTIONS(68),
    [sym_identifier] = ACTIONS(90),
  },
  [13] = {
    [sym__statement] = STATE(15),
    [sym_declaration] = STATE(15),
    [sym_assignment] = STATE(15),
    [sym_output] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_conditional] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(93),
    [anon_sym_NOWAI] = ACTIONS(95),
    [sym_identifier] = ACTIONS(57),
  },
  [14] = {
    [sym__statement] = STATE(10),
    [sym_declaration] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_output] = STATE(10),
    [sym_loop] = STATE(10),
    [sym_conditional] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(97),
    [anon_sym_NOWAI] = ACTIONS(99),
    [sym_identifier] = ACTIONS(57),
  },
  [15] = {
    [sym__statement] = STATE(12),
    [sym_declaration] = STATE(12),
    [sym_assignment] = STATE(12),
    [sym_output] = STATE(12),
    [sym_loop] = STATE(12),
    [sym_conditional] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(101),
    [anon_sym_NOWAI] = ACTIONS(103),
    [sym_identifier] = ACTIONS(57),
  },
  [16] = {
    [sym__statement] = STATE(12),
    [sym_declaration] = STATE(12),
    [sym_assignment] = STATE(12),
    [sym_output] = STATE(12),
    [sym_loop] = STATE(12),
    [sym_conditional] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(105),
    [anon_sym_NOWAI] = ACTIONS(107),
    [sym_identifier] = ACTIONS(57),
  },
  [17] = {
    [sym__statement] = STATE(12),
    [sym_declaration] = STATE(12),
    [sym_assignment] = STATE(12),
    [sym_output] = STATE(12),
    [sym_loop] = STATE(12),
    [sym_conditional] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(109),
    [anon_sym_NOWAI] = ACTIONS(111),
    [sym_identifier] = ACTIONS(57),
  },
  [18] = {
    [sym__statement] = STATE(16),
    [sym_declaration] = STATE(16),
    [sym_assignment] = STATE(16),
    [sym_output] = STATE(16),
    [sym_loop] = STATE(16),
    [sym_conditional] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(113),
    [anon_sym_NOWAI] = ACTIONS(115),
    [sym_identifier] = ACTIONS(57),
  },
  [19] = {
    [sym__statement] = STATE(17),
    [sym_declaration] = STATE(17),
    [sym_assignment] = STATE(17),
    [sym_output] = STATE(17),
    [sym_loop] = STATE(17),
    [sym_conditional] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IHASA] = ACTIONS(45),
    [anon_sym_VISIBLE] = ACTIONS(47),
    [anon_sym_IMINYR] = ACTIONS(49),
    [anon_sym_ORLY_QMARK] = ACTIONS(51),
    [anon_sym_OIC] = ACTIONS(117),
    [anon_sym_NOWAI] = ACTIONS(119),
    [sym_identifier] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_OIC,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(30), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [31] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [62] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_OIC,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(34), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [93] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [124] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_OIC,
    STATE(23), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [155] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_OIC,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(32), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [217] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_OIC,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(25), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [248] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [279] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_OIC,
    STATE(28), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [341] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_IHASA,
    ACTIONS(9), 1,
      anon_sym_VISIBLE,
    ACTIONS(11), 1,
      anon_sym_IMINYR,
    ACTIONS(13), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(36), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [372] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [403] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_OIC,
    STATE(38), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [434] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_OIC,
    ACTIONS(147), 1,
      anon_sym_IHASA,
    ACTIONS(150), 1,
      anon_sym_VISIBLE,
    ACTIONS(153), 1,
      anon_sym_IMINYR,
    ACTIONS(156), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      anon_sym_IHASA,
    ACTIONS(165), 1,
      anon_sym_VISIBLE,
    ACTIONS(168), 1,
      anon_sym_IMINYR,
    ACTIONS(171), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(36), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_OIC,
    STATE(21), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_IHASA,
    ACTIONS(123), 1,
      anon_sym_VISIBLE,
    ACTIONS(125), 1,
      anon_sym_IMINYR,
    ACTIONS(127), 1,
      anon_sym_ORLY_QMARK,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_OIC,
    STATE(35), 7,
      sym__statement,
      sym_declaration,
      sym_assignment,
      sym_output,
      sym_loop,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_ITZ,
    ACTIONS(183), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(179), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_ITZ,
    ACTIONS(183), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(179), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(187), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(191), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(195), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(199), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(203), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(207), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(211), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(215), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(215), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(219), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_ITZ,
    ACTIONS(183), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_ITZ,
    ACTIONS(179), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(183), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(195), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(187), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(199), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(227), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(207), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(211), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(231), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(191), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(227), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(231), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(203), 5,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_IMOUTTAYR,
      anon_sym_BOTHSAEM,
      anon_sym_ORLY_QMARK,
  [974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
    ACTIONS(219), 4,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
      anon_sym_NOWAI,
  [989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(193), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(229), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(233), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(205), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(217), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(221), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(197), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(189), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(201), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_VISIBLE,
      sym_identifier,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(209), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_IHASA,
      anon_sym_IMINYR,
      anon_sym_ORLY_QMARK,
    ACTIONS(213), 3,
      anon_sym_VISIBLE,
      anon_sym_OIC,
      sym_identifier,
  [1297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SUMOF,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      sym_number,
    STATE(71), 2,
      sym__expression,
      sym_binary_expression,
  [1314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SUMOF,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_number,
    STATE(82), 2,
      sym__expression,
      sym_binary_expression,
  [1331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym_number,
    STATE(123), 2,
      sym__expression,
      sym_binary_expression,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(255), 1,
      sym_number,
    STATE(137), 2,
      sym__expression,
      sym_binary_expression,
  [1365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SUMOF,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_number,
    STATE(50), 2,
      sym__expression,
      sym_binary_expression,
  [1382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SUMOF,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      sym_number,
    STATE(69), 2,
      sym__expression,
      sym_binary_expression,
  [1399] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_number,
    STATE(128), 2,
      sym__expression,
      sym_binary_expression,
  [1416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SUMOF,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym_number,
    STATE(64), 2,
      sym__expression,
      sym_binary_expression,
  [1433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SUMOF,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_number,
    STATE(80), 2,
      sym__expression,
      sym_binary_expression,
  [1450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_number,
    STATE(116), 2,
      sym__expression,
      sym_binary_expression,
  [1467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SUMOF,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_number,
    STATE(49), 2,
      sym__expression,
      sym_binary_expression,
  [1484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_number,
    STATE(131), 2,
      sym__expression,
      sym_binary_expression,
  [1501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SUMOF,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_number,
    STATE(134), 2,
      sym__expression,
      sym_binary_expression,
  [1518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      sym_number,
    STATE(140), 2,
      sym__expression,
      sym_binary_expression,
  [1535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SUMOF,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_number,
    STATE(72), 2,
      sym__expression,
      sym_binary_expression,
  [1552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SUMOF,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_number,
    STATE(136), 2,
      sym__expression,
      sym_binary_expression,
  [1569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SUMOF,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(311), 1,
      sym_number,
    STATE(79), 2,
      sym__expression,
      sym_binary_expression,
  [1586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SUMOF,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      sym_number,
    STATE(83), 2,
      sym__expression,
      sym_binary_expression,
  [1603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SUMOF,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_number,
    STATE(55), 2,
      sym__expression,
      sym_binary_expression,
  [1620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SUMOF,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_number,
    STATE(84), 2,
      sym__expression,
      sym_binary_expression,
  [1637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SUMOF,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_number,
    STATE(41), 2,
      sym__expression,
      sym_binary_expression,
  [1654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SUMOF,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      sym_number,
    STATE(44), 2,
      sym__expression,
      sym_binary_expression,
  [1671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SUMOF,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      sym_number,
    STATE(54), 2,
      sym__expression,
      sym_binary_expression,
  [1688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SUMOF,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(339), 1,
      sym_number,
    STATE(48), 2,
      sym__expression,
      sym_binary_expression,
  [1705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [1712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_GTFO,
  [1719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
  [1726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_R,
  [1733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_YARLY,
  [1740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_AN,
  [1747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [1754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
  [1761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_IMOUTTAYR,
  [1768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_OIC,
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [1782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_IMOUTTAYR,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_AN,
  [1796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_identifier,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
  [1810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_R,
  [1817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_IMOUTTAYR,
  [1824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_AN,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_identifier,
  [1838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [1845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_AN,
  [1852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [1859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_identifier,
  [1866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_ORLY_QMARK,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_AN,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_AN,
  [1894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_YARLY,
  [1901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_AN,
  [1915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_IMOUTTAYR,
  [1922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_IMOUTTAYR,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_YARLY,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_R,
  [1950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_R,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_IMOUTTAYR,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_YARLY,
  [1971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_IMOUTTAYR,
  [1978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_YARLY,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_IMOUTTAYR,
  [2006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [2013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_IMOUTTAYR,
  [2020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 31,
  [SMALL_STATE(22)] = 62,
  [SMALL_STATE(23)] = 93,
  [SMALL_STATE(24)] = 124,
  [SMALL_STATE(25)] = 155,
  [SMALL_STATE(26)] = 186,
  [SMALL_STATE(27)] = 217,
  [SMALL_STATE(28)] = 248,
  [SMALL_STATE(29)] = 279,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 341,
  [SMALL_STATE(32)] = 372,
  [SMALL_STATE(33)] = 403,
  [SMALL_STATE(34)] = 434,
  [SMALL_STATE(35)] = 465,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 558,
  [SMALL_STATE(39)] = 589,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 625,
  [SMALL_STATE(42)] = 640,
  [SMALL_STATE(43)] = 655,
  [SMALL_STATE(44)] = 670,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 700,
  [SMALL_STATE(47)] = 715,
  [SMALL_STATE(48)] = 730,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 760,
  [SMALL_STATE(51)] = 775,
  [SMALL_STATE(52)] = 792,
  [SMALL_STATE(53)] = 809,
  [SMALL_STATE(54)] = 824,
  [SMALL_STATE(55)] = 839,
  [SMALL_STATE(56)] = 854,
  [SMALL_STATE(57)] = 869,
  [SMALL_STATE(58)] = 884,
  [SMALL_STATE(59)] = 899,
  [SMALL_STATE(60)] = 914,
  [SMALL_STATE(61)] = 929,
  [SMALL_STATE(62)] = 944,
  [SMALL_STATE(63)] = 959,
  [SMALL_STATE(64)] = 974,
  [SMALL_STATE(65)] = 989,
  [SMALL_STATE(66)] = 1003,
  [SMALL_STATE(67)] = 1017,
  [SMALL_STATE(68)] = 1031,
  [SMALL_STATE(69)] = 1045,
  [SMALL_STATE(70)] = 1059,
  [SMALL_STATE(71)] = 1073,
  [SMALL_STATE(72)] = 1087,
  [SMALL_STATE(73)] = 1101,
  [SMALL_STATE(74)] = 1115,
  [SMALL_STATE(75)] = 1129,
  [SMALL_STATE(76)] = 1143,
  [SMALL_STATE(77)] = 1157,
  [SMALL_STATE(78)] = 1171,
  [SMALL_STATE(79)] = 1185,
  [SMALL_STATE(80)] = 1199,
  [SMALL_STATE(81)] = 1213,
  [SMALL_STATE(82)] = 1227,
  [SMALL_STATE(83)] = 1241,
  [SMALL_STATE(84)] = 1255,
  [SMALL_STATE(85)] = 1269,
  [SMALL_STATE(86)] = 1283,
  [SMALL_STATE(87)] = 1297,
  [SMALL_STATE(88)] = 1314,
  [SMALL_STATE(89)] = 1331,
  [SMALL_STATE(90)] = 1348,
  [SMALL_STATE(91)] = 1365,
  [SMALL_STATE(92)] = 1382,
  [SMALL_STATE(93)] = 1399,
  [SMALL_STATE(94)] = 1416,
  [SMALL_STATE(95)] = 1433,
  [SMALL_STATE(96)] = 1450,
  [SMALL_STATE(97)] = 1467,
  [SMALL_STATE(98)] = 1484,
  [SMALL_STATE(99)] = 1501,
  [SMALL_STATE(100)] = 1518,
  [SMALL_STATE(101)] = 1535,
  [SMALL_STATE(102)] = 1552,
  [SMALL_STATE(103)] = 1569,
  [SMALL_STATE(104)] = 1586,
  [SMALL_STATE(105)] = 1603,
  [SMALL_STATE(106)] = 1620,
  [SMALL_STATE(107)] = 1637,
  [SMALL_STATE(108)] = 1654,
  [SMALL_STATE(109)] = 1671,
  [SMALL_STATE(110)] = 1688,
  [SMALL_STATE(111)] = 1705,
  [SMALL_STATE(112)] = 1712,
  [SMALL_STATE(113)] = 1719,
  [SMALL_STATE(114)] = 1726,
  [SMALL_STATE(115)] = 1733,
  [SMALL_STATE(116)] = 1740,
  [SMALL_STATE(117)] = 1747,
  [SMALL_STATE(118)] = 1754,
  [SMALL_STATE(119)] = 1761,
  [SMALL_STATE(120)] = 1768,
  [SMALL_STATE(121)] = 1775,
  [SMALL_STATE(122)] = 1782,
  [SMALL_STATE(123)] = 1789,
  [SMALL_STATE(124)] = 1796,
  [SMALL_STATE(125)] = 1803,
  [SMALL_STATE(126)] = 1810,
  [SMALL_STATE(127)] = 1817,
  [SMALL_STATE(128)] = 1824,
  [SMALL_STATE(129)] = 1831,
  [SMALL_STATE(130)] = 1838,
  [SMALL_STATE(131)] = 1845,
  [SMALL_STATE(132)] = 1852,
  [SMALL_STATE(133)] = 1859,
  [SMALL_STATE(134)] = 1866,
  [SMALL_STATE(135)] = 1873,
  [SMALL_STATE(136)] = 1880,
  [SMALL_STATE(137)] = 1887,
  [SMALL_STATE(138)] = 1894,
  [SMALL_STATE(139)] = 1901,
  [SMALL_STATE(140)] = 1908,
  [SMALL_STATE(141)] = 1915,
  [SMALL_STATE(142)] = 1922,
  [SMALL_STATE(143)] = 1929,
  [SMALL_STATE(144)] = 1936,
  [SMALL_STATE(145)] = 1943,
  [SMALL_STATE(146)] = 1950,
  [SMALL_STATE(147)] = 1957,
  [SMALL_STATE(148)] = 1964,
  [SMALL_STATE(149)] = 1971,
  [SMALL_STATE(150)] = 1978,
  [SMALL_STATE(151)] = 1985,
  [SMALL_STATE(152)] = 1992,
  [SMALL_STATE(153)] = 1999,
  [SMALL_STATE(154)] = 2006,
  [SMALL_STATE(155)] = 2013,
  [SMALL_STATE(156)] = 2020,
  [SMALL_STATE(157)] = 2027,
  [SMALL_STATE(158)] = 2034,
  [SMALL_STATE(159)] = 2041,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 5, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 6, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 6, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_condition, 8, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lolcode(void) {
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
