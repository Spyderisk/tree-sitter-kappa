// Copyright 2024 University of Southampton, Jacob Lewis

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// 	http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

module.exports = grammar({
	name: "kappa",

	rules: {
		// source_file: $ => repeat(
		// 	choice(
		// 		$.variable_declaration,
		// 		$.init_declaration,
		// 		$.signature_declaration,
		// 		$.parameter_setting,
		// 		$.declared_token,
		// 		$.intervention
		// 	)
		// ),

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#28
		pattern: $ => seq(
			$.agent, optional($.more_pattern)
		),

		agent_name: $ => $.name,
		site_name: $ => $.name,
		state_name: $ => $.name,

		agent: $ => seq($.agent_name, "(", optional($.interface), ")"),
		site: $ => choice( //FIXME (site_name internal_state) == counter
			seq($.site_name, optional($.internal_state), optional($.link_state)),
			seq($.site_name, optional($.link_state), optional($.internal_state)),
			$.counter
		),
		interface: $ => seq($.site, optional($.more_interface)), // Epsilon
		more_interface: $ => seq(optional(","), $.site, optional($.more_interface)), // Epsilon
		more_pattern: $ => seq(optional(","), $.pattern), // Epsilon
		internal_state: $ => choice( // Epsilon
			seq("{", $.state_name, "}"),
			"{#}"
		),
		link_state: $ => seq("[", choice( // Epsilon
			$.number,
			".",
			"_",
			"#",
			seq($.site_name, ".", $.agent_name),
		), "]"),

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#2a
		// Chemical notation

		f_rule: $ => seq(
			optional($.label), $.rule_expression, optional(seq("|", $.token)), "@", $.rate,
		),
		fr_rule: $ => seq(
			optional($.label), $.rev_rule_expression, optional(seq("|", $.token)), "@", $.rate, ",", $.rate,
		),

		ambi_rule: $ => seq(
			optional($.label), $.rule_expression, optional(seq("|", $.token)), "@", $.rate, "{", $.rate, "}",
		),
		ambi_fr_rule: $ => seq(
			optional($.label), $.rule_expression, optional(seq("|", $.token)), "@", $.rate, "{", $.rate, "}", $.rate,
		),

		rule_expression: $ => seq(
			choice($.agent, "."), $.more, choice($.agent, ".")
		),
		more: $ => choice(
			seq(
				",", choice($.agent, "."), $.more, choice($.agent, "."), ","
			),
			"->"
		),

		rev_rule_expression: $ => seq(
			choice($.agent, "."), $.rev_more, choice($.agent, ".")
		),
		rev_more: $ => choice(
			seq(
				",", choice($.agent, "."), $.more, choice($.agent, "."), ","
			),
			"<->"
		),

		rate: $ => $.algebraic_expression,

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#2b
		// Edit Notation

		f_rule: $ => seq(
			optional($.label), optional($.f_rule_expression), optional(seq("|", $.token)), "@", $.rate,
		),
		ambi_rule: $ => seq(
			optional($.label), optional($.f_rule_expression), optional(seq("|", $.token)), "@", $.rate, "{", $.rate, "}",
		),

		f_rule_expression: $ => seq($.agent_mod, optional($.more_agent_mod)), // Epsilon

		more_agent_mod: $ => seq( // Epsilon
			",", $.agent_mod, optional($.more_agent_mod)
		),

		agent_mod: $ => choice(
			seq($.agent_name, "(", optional($.interface_mod), ")"),
			seq($.agent_name, "(", $.interface, ")", choice("+", "-")) // Unknown if the +/- is correct?
		),

		site_mod: $ => choice(
			seq($.site_name, optional($.internal_state_mod), optional($.link_state_mod)),
			seq($.site_name, optional($.link_state_mod),     optional($.internal_state_mod)),
			seq($.counter_name, $.counter_state_mod)
		),

		interface_mod: $ => seq($.site_mod, optional($.more_mod)), // Epsilon
		more_mod: $ => seq(",", $.site_mod, optional($.more_mod)), // Epsilon

		internal_state_mod: $ => choice( // Epsilon
			seq("{", choice($.state_name, "#"), "/", $.state_name, "}"),
			seq("{", $.state_name, "}")
		),

		link_state_mod: $ => choice( // Epsilon
			seq("[", choice($.number, ".", "_", seq($.site_name, ".", $.agent_name), "#"), "/", choice($.number, "."), "]"),
			$.link_state
		),

		counter_state_mod: $ => seq(
			"{", choice(
				seq($.counter_expression, "/", $.counter_mod),
				$.counter_expression,
				$.counter_mod
			), "}"
		),

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#2c

		counter: $ => seq(
			$.counter_name, "{", choice($.counter_expression, $.counter_var, $.counter_mod), "}"
		),

		counter_name: $ => $.name,
		counter_expression: $ => seq(choice("=", ">="), $.integer),
		counter_var: $ => seq("=", $.variable_name),
		counter_mod: $ => seq(choice("-", "+"), "=", $.integer),
		variable_name: $ => $.name,
		
		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#2e

		variable_declaration: $ => seq("%var:", $.declared_variable_name, $.algebraic_expression),
		declared_variable_name: $ => $.variable_name,

		algebraic_expression: $ => choice(
			$.float,
			$.defined_constant,
			$.declared_variable_name,
			$.reserved_variable_name,
			seq($.algebraic_expression, $.binary_op, $.algebraic_expression),
			seq($.unary_op, "(", $.algebraic_expression, ")"),
			seq("[max](", $.algebraic_expression, ")(", $.algebraic_expression, ")"),
			seq("[min](", $.algebraic_expression, ")(", $.algebraic_expression, ")"),
			seq($.boolean_expression, "[?]", $.algebraic_expression, "[:]", $.algebraic_expression)
		),

		reserved_variable_name: $ => choice(
			"[E]",
			"[E-]",
			"[T]",
			"[Tsim]",
			seq("|", $.declared_token_name, "|"),
			seq("|", $.pattern, "|"),// FIXME pattern-expression => pattern?
			"inf"
		),

		binary_op: $ => choice(
			"+", "-", "*", "/", "^", "[mod]"
		),

		unary_op: $ => choice(
			"[log]", "[exp]", "[sin]", "[cos]", "[tan]", "[sqrt]"
		),

		defined_constant: $ => "[pi]",

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#2f

		boolean_expression: $ => choice(
			seq($.algebraic_expression, choice("=", "<", ">"), $.algebraic_expression),
			seq($.boolean_expression, choice("||", "&&"), $.boolean_expression),
			seq("[not]", $.boolean_expression),
			$.boolean
		),

		boolean: $ => choice("true", "false"),

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#30

		signature_declaration: $ => seq("%agent:", $.signature_expression),
		signature_expression: $ => seq($.agent_name, "(", $.signature_interface, ")"),
		signature_interface: $ => choice( // This one is weird, I'm interpreting it different to how it's defined
			seq($.site_name, optional($.set_of_internal_states), optional($.set_of_link_states),     optional($.more_signature)),
			seq($.site_name, optional($.set_of_link_states),     optional($.set_of_internal_states), optional($.more_signature)),
			seq($.site_name, "{=", $.integer, "/+=", $.integer, "}")
		),

		more_signature: $ => seq(optional(","), $.signature_interface), // Epsilon
		set_of_internal_states: $ => seq("{", optional($.set_of_state_names), "}"), // Epsilon
		set_of_state_names: $ => seq($.state_name, optional(","), optional($.set_of_state_names)), // Epsilon // "␣" => optional(",")
		set_of_link_states: $ => seq("[", optional($.set_of_stubs), "]"), // Epsilon
		set_of_stubs: $ => seq($.site_name, ".", $.agent_name, optional(","), optional($.set_of_stubs)), // Epsilon // "␣" => optional(",")

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#32

		init_declaration: $ => choice(
			seq("%init:", $.algebraic_expression, $.pattern),
			seq("%init:", $.algebraic_expression, $.declared_token_name)
		),

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#33

		parameter_setting: $ => seq("%def:", $.parameter_name, $.parameter_value),
		parameter_name: $ => $.name, // FIXME: What's going on here?
		parameter_value: $ => $.algebraic_expression,

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#34

		token: $ => seq($.algebraic_expression, $.declared_token_name, optional($.another_token)),
		another_token: $ => seq(",", $.token), // Epsilon

		declared_token: $ => seq("%token:", $.declared_token_name),
		declared_token_name: $ => $.name,

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#35

		effect_list: $ => seq($.effect, ";", optional($.effect_list)), // Epsilon
		effect: $ => choice(
			seq("$ADD", $.algebraic_expression, $.pattern),
			seq("$DEL", $.algebraic_expression, $.pattern),
			seq("$APPLY", $.algebraic_expression, $.rule_expression, optional(seq("|", $.token))),
			seq("$SNAPSHOT", optional($.string_expression)),
			seq("$STOP", optional($.string_expression)),
			seq("$DIN", optional($.string_expression), $.boolean),
			seq("$UPDATE", $.declared_variable_name, $.algebraic_expression), // FIXME: var_name => declared_variable_name
			"$PLOTENTRY",
			seq("$PRINT", optional($.string_expression), ">", optional($.string_expression)),
			seq("$SPECIES_OFF", optional($.string_expression), $.pattern, $.boolean)
		),

		string_expression: $ => choice ( // Epsilon
			seq("string.", optional($.string_expression)),
			seq($.algebraic_expression, ".", $.string_expression)
		),

		intervention: $ => seq(
			"%mod:", optional(seq("alarm", $.float)), $.boolean_expression, "do", $.effect_list, "repeat", $.boolean_expression
		),

		// https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#27
		name: $ => choice(/[a-zA-Z][a-zA-Z0-9_~\-+]*/, /[_][a-zA-Z0-9_~\-+]+/),
		label: $ => /"[^\n']+'/,
		number: $ => /[0-9]+/,
		integer: $ => /-?[0-9]+/,
		float: $ => /-?[0-9]+\.[0-9]+/,
	}
});
