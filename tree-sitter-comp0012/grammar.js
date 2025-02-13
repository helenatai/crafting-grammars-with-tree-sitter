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
			prec(2, choice(
				$.bool,
				$.num,
				$.string,
			)),

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
				$.array,
				$.comparison_expression,
				$.unary_expression,
				$.postfix_expression,
				$.binary_expression,
				$.array_access
			),
		
		unary_operator: ($) =>
			choice("-", "!", "~", "++", "--"),

		unary_expression: ($) =>
			prec(3, seq(
				$.unary_operator,
				choice($._value, $.identifier, $.array_access)
			)),
		
		postfix_expression: ($) =>
			prec(4, seq(
				choice($.identifier, $._value, $.array, $.array_access),
				choice("++", "--")
			)),
		
		arithmetic_operator: ($) =>
			choice("+", "-", "*", "/"),

		bitwise_operator: ($) => 
			choice("&", "|", "^"),

		logical_operator: ($) =>
			choice("&&", "||"),

		binary_expression: ($) =>
			prec.left(2, seq(
				choice($._value, $.identifier, $.unary_expression, $.array_access),
				choice($.arithmetic_operator, $.bitwise_operator, $.logical_operator),
				choice($._value, $.identifier, $.unary_expression, $.array_access)
			)),

		array: ($) =>
			seq(
				"[",
				optional(
					seq(choice($._value, $.identifier, $.unary_expression, $.binary_expression, $.array), 
					repeat(seq(",", choice($._value, $.identifier, $.unary_expression, $.binary_expression, $.array))))
				),
				"]"
			),
		
		array_access: ($) =>
			prec.left(4, seq( 
				field("name", $.identifier),
				"[",
				field("index", $._expression),
				"]"
			)),
		
		array_element_assignment: ($) =>
			seq(
				field("name", $.identifier),
				"[",
				field("index", $._expression),
				"]",
				"=",
				field("value", $._expression)
			),
		 
		array_declaration: ($) =>
			seq(
				"var",
				field("name", $.identifier),
				"=",
				"new",
				"[",
				field("size", $.num),  
				"]"
			),
		
		if_statement: ($) =>
			seq(
				"if",
				field("condition", $.condition),
				field("consequence", $.block),
				optional(seq("else", field("alternative", $.block)))
			),
		
		while_statement: ($) =>
			seq(
				"while",
				field("condition", $.condition),  
				field("body", $.block)            
			),

		for_statement: ($) =>
			seq(
				"for",
				"(",
				field("initializer", seq($.assignment, ";")),
				field("condition", seq($.comparison_expression, ";")),
				field("update", choice($.assignment, $.reassignment)),
				")",
				field("body", $.block)
			),			
		
		condition: ($) => 
			seq(
				"(",
				choice($.comparison_expression, $.identifier, $.bool),
				")"
			),
		
		comparison_expression: ($) =>
			prec.left(1,
				seq(
					choice($._value, $.identifier, $.unary_expression, $.array_access, $.array),
					$.comparison_operator,
					choice($._value, $.identifier, $.unary_expression, $.array_access, $.array)
				)	
			),

		comparison_operator: ($) =>
			choice("==", "!=", "<", ">", "<=", ">="),

		assignment: ($) =>
			seq("var", field("name", $.identifier), "=", field("value", $._expression)),

		reassignment: ($) =>
			seq(
			  field("name", $.identifier),
			  "=",
			  field("value", $._expression)
			),

		_statement: ($) =>
			choice(
				seq($._expression,";"),
				seq($.block),
				seq($.assignment,";"),
				seq($.reassignment,";"),
				seq($.array_element_assignment,";"),
				seq($.array_declaration,";"),
				seq($.method_call,";"),
				seq($.if_statement),
				seq($.while_statement),
				seq($.for_statement),
				seq($.draw_function, ";")
			),
		
		draw_function: ($) =>
			choice(
				$.circle_function,
				$.rect_function,
				$.line_function
			),
		
		circle_function: ($) =>
			seq(
				"circle", "(",
				$._expression, ",",  // x coordinate
				$._expression, ",",  // y coordinate
				$._expression,       // diameter
				")",
			),

		rect_function: ($) =>
			seq(
				"rect", "(",
				$._expression, ",",  // x coordinate
				$._expression, ",",  // y coordinate
				$._expression, ",",  // width
				$._expression,       // height
				")", 
			),
		
		line_function: ($) =>
			seq(
				"line", "(",
				$._expression, ",",  // x1
				$._expression, ",",  // y1
				$._expression, ",",  // x2
				$._expression,       // y2
				")", 
			),

		_newline: (_$) => /\s*\n/,
		identifier: (_$) => /[A-Za-z_][A-Za-z0-9_]*/,
		bool: (_$) => choice("true", "false"),
		num: (_$) =>
			token(
				choice(
					/[0-9]+/,              
					/[0-9]+\.[0-9]+/,       
					/[0-9]+\.[0-9]+[eE][+-]?[0-9]+/,  
					/[0-9]+[eE][+-]?[0-9]+/   
				)
			),
		string: (_$) => seq('"', /[^"]+/, '"'),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: (_$) =>
			token(choice(
				seq("##", /[^\n]*/),
				seq(
					"#*",            
					repeat(choice(/[^*]/, /\*[^#]/)), 
					"*#"             
				),
			)),
	},
});
