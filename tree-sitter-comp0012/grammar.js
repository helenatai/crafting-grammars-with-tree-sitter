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
				$.int,
				$.float,
				$.string,
			)),

		argument_list: ($) =>
			seq(
				"(",
				optional(seq($._expression, repeat(seq(",", $._expression)))),
				")"
			),
			

		method_call: ($) =>
			prec.left(4, seq(
				field("receiver", choice($.identifier, $.property_access, $.method_call)),
				".",
				field("name", $.identifier),
				$.argument_list
			)),
		
		function_declaration: ($) =>
			seq(
				"function",
				field("name", $.identifier),
				field("parameters", seq(
				"(",
				optional(seq($.identifier, repeat(seq(",", $.identifier)))),
				")"
				)),
				field("body", seq(
					"{",
					repeat(choice(
						$._statement,
						$.return_statement  
					)),
					"}"
				))
			),
		
		function_call: ($) =>
			seq(
				field("name", $.identifier),
				field("arguments", $.argument_list)
			),
		
		return_statement: ($) =>
			seq("return", optional($._expression), ";"),

		property_access: ($) =>
			prec.left(3, seq(
				field("object", choice($.identifier, $.property_access, $.method_call)),
				".",
				field("property", $.identifier)
			)),
		
		_expression: ($) =>
			choice(
				$.function_call,
				$._value,
				$.identifier,
				$.array,
				$.comparison_expression,
				$.unary_expression,
				$.postfix_expression,
				$.binary_expression,
				$.array_access,
				$.property_access,
				$.parenthesized_expression,
				$.particle_expression
			),
		
		unary_operator: ($) =>
			choice("-", "!", "~", "++", "--"),

		unary_expression: ($) =>
			prec(3, seq(
				$.unary_operator,
				choice(
					$._value,            
					$.identifier,        
					$.array_access,     
					$.parenthesized_expression  
				)
			)),
		
		postfix_expression: ($) =>
			prec(4, seq(
				$.identifier,
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
				choice(
					$._value,   
					$.identifier,  
					$.array_access,  
					$.unary_expression, 
					$.parenthesized_expression,
					$.binary_expression, 
					$.postfix_expression,
					$.function_call  
				),  
				choice($.arithmetic_operator, $.bitwise_operator, $.logical_operator),
				choice(
					$._value,   
					$.identifier,  
					$.array_access,  
					$.unary_expression,  
					$.parenthesized_expression,  
					$.binary_expression,
					$.postfix_expression,
					$.function_call  
				)  
			)),
		
		parenthesized_expression: ($) =>
			seq("(", $._expression, ")"),

		array: ($) =>
			seq(
				"[",
				optional(
					seq(choice($._value, $.identifier, $.unary_expression, $.binary_expression, $.array, $.function_call), 
					repeat(seq(",", choice($._value, $.identifier, $.unary_expression, $.binary_expression, $.array, $.function_call))))
				),
				"]"
			),
		
		array_access: ($) =>
			prec.left(4, seq( 
				field("array", choice($.identifier, $.array_access)),  
				"[",
				choice(
					field("index", $._expression),  
					seq(
						optional(field("start", $._expression)), 
						":",
						optional(field("end", $._expression))    
					)
				),
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
				field("size", choice($.int, $.identifier)),  
				"]"
			),
		
		particle_declaration: ($) =>
			seq(
				"particle",
				field("name", $.identifier),
				"=",
				"new",
				"particle",
				"(",
				"x:", $._expression, ",",
				"y:", $._expression, ",",
				"vx:", $._expression, ",",
				"vy:", $._expression, ",",
				"lifespan:", $._expression,
				")"
			),
		
		particle_expression: ($) =>
			seq(
				"new",
				"particle",
				"(",
				"x:", field("x", $._expression), ",",
				"y:", field("y", $._expression), ",",
				"vx:", field("vx", $._expression), ",",
				"vy:", field("vy", $._expression), ",",
				"lifespan:", field("lifespan", $._expression),
				")"
			),  
		
		particle_system: ($) =>
			seq(
				"system",
				field("name", $.identifier),
				"=",
				"new",
				"system",
				"(",
				optional(seq("max_particles:", $._expression)),  // Allows limiting max particles
				")"
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
					choice(
						$._value,   
						$.identifier,  
						$.array_access,  
						$.unary_expression,  
						$.parenthesized_expression,  
						$.unary_expression,
						$.array,
						$.function_call  
					),
					$.comparison_operator,
					choice(
						$._value,   
						$.identifier,  
						$.array_access,  
						$.unary_expression,  
						$.parenthesized_expression, 
						$.unary_expression,
						$.array, 
						$.property_access,
						$.method_call,
						$.function_call  
					)
				)	
			),

		comparison_operator: ($) =>
			choice("==", "!=", "<", ">", "<=", ">="),

		assignment: ($) =>
			seq("var", field("name", $.identifier), "=", field("value", $._expression)),

		reassignment: ($) =>
			prec.left(1,seq(
			  field("name", choice($.identifier, $.property_access)),
			  "=",
			  field("value", $._expression)
			)),

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
				seq($.function_declaration),
				seq($.particle_declaration, ";"),
				seq($.particle_system,";")
			),

		_newline: (_$) => /\s*\n/,
		identifier: (_$) => /[A-Za-z_][A-Za-z0-9_]*/,
		bool: (_$) => choice("true", "false"),
		int: (_$) =>
			token(
				/[0-9]+/
			),
		float: (_$) =>
			token(
				choice(
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
