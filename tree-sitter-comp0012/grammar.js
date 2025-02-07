module.exports = grammar({
	name: "COMP0012Language",

	extras: ($) => [
		$.comment,
		/\s|\\\r?\n/,
	],

	word: ($) => $.identifier,

	rules: {
		source_file: ($) => repeat($._statement),

		block: ($) =>
			seq(
				"{",
				repeat($._statement),
				"}",
			),

		_value: ($) =>
			choice(
				$.bool,
				$.num,
				$.string,
			),

		argument_list: ($) => seq("(", repeat($._expression), ")"),
		method_call: ($) =>
			seq(
				field("receiver", $.identifier),
				".",
				field("name", $.identifier),
				$.argument_list,
			),

		_expression: ($) =>
			choice(
				$._value,
				$.identifier,
				$.list,
				$.comparison_expression
			),

		list: ($) =>
			seq(
				"[",
				choice(
					optional(choice($._value, $.identifier)),
					seq(choice($._value, $.identifier), repeat(seq(",", choice($._value, $.identifier))))
				),
				"]"
			),
		
		if_statement: ($) =>
			seq(
				"if",
				field("condition", $.condition),
				field("consequence", $.block),
				optional(seq("else", field("alternative", $.block)))
			),
		
		condition: ($) => 
			seq(
				"(",
				$._expression,
				")"
			),
		
		comparison_expression: ($) =>
			prec.left(1,
				seq(
					$._expression,
					$.comparison_operator,
					$._expression
				)	
			),

		comparison_operator: ($) =>
			choice("==", "!=", "<", ">", "<=", ">="),

		assignment: ($) =>
			seq("var", field("name", $.identifier), "=", field("value", $._value)),

		_statement: ($) =>
			choice(
				seq($._expression,";"),
				seq($.block),
				seq($.assignment,";"),
				seq($.method_call,";"),
				seq($.if_statement),
			),

		_newline: (_$) => /\s*\n/,
		identifier: (_$) => /[A-Za-z_]+/,
		bool: (_$) => choice("true", "false"),
		num: (_$) => /[0-9]+/,
		string: (_$) => seq('"', /[^"]+/, '"'),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: (_$) =>
			token(choice(
				seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
				seq(
					"/*",
					/[^*]*\*+([^/*][^*]*\*+)*/,
					"/",
				),
			)),
	},
});
