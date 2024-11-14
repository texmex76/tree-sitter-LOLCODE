const PREC = {
  conditional: 3,
  assignment: 2,
  sequence: 1,
};

// @ts-nocheck
module.exports = grammar({
  name: "lolcode",

  extras: ($) => [/\s/, $.comment],

  rules: {
    // Entry point
    source_file: ($) => repeat($._statement),

    // Comment
    comment: (_) => token(seq("BTW", /.*/)),

    // Statements
    _statement: ($) => choice($.declaration, $.loop, $.output, $.assignment, $.conditional),

    declaration: ($) => seq("I HAS A", $.identifier, optional(seq("ITZ", $._expression))),

    assignment: ($) => seq($.identifier, "R", $._expression),

    output: ($) => seq("VISIBLE", $._expression),

    loop: ($) =>
      seq(
        "IM IN YR",
        $.identifier,
        repeat($._statement),
        optional($.exit_condition),
        "IM OUTTA YR",
        $.identifier
      ),

    exit_condition: ($) =>
      seq(
        "BOTH SAEM",
        $._expression,
        "AN",
        $._expression,
        "O RLY?",
        "YA RLY",
        "GTFO",
        "OIC"
      ),

    conditional: ($) =>
      seq(
        "O RLY?",
        "YA RLY",
        repeat($._statement),
        optional(seq("NO WAI", repeat($._statement))),
        "OIC"
      ),

    // Expressions
    _expression: ($) => choice($.identifier, $.number, $.binary_expression),

    binary_expression: ($) =>
      prec.left(PREC.sequence, seq("SUM OF", $._expression, "AN", $._expression)),

    // Terminals
    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: (_) => /\d+/,
  },
});

