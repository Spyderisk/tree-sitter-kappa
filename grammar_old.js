/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/*
%var: rabbitbirth 2.1
%var: rabbiteaten 0.4
%var: foxbirth 0.01

%agent: Rabbit()
%agent: Fox()

// These rabbits reproduce asexually
'rabbits born'  Rabbit(), . -> Rabbit(), Rabbit() @ rabbitbirth
// Foxes die of natural causes
'foxes died'    Fox() -> . @ foxdeath
// Foxes reproduce by eating a rabbit
'foxes born'    Fox(), Rabbit(), . -> Fox(), ., Fox() @ foxbirth

%obs: Rabbits |Rabbit()|
%obs: Foxes   |Fox()|
*/

module.exports = grammar({
  name: "kappa",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.var
      // TODO: other kinds of definitions
    ),

    var: $ => seq(
      "%var: ",
      $.identifier,
      // choice($._operation, $._value),
      $._math_expression
    ),

    agent: $ => seq(
      "%agent: ",
      $.identifier,
      
    ),

    _math_expression: $ => choice(
      $.parenthesies,
      $._operation,
      $.float,
      $.int,
    ),

    unary_expression: $ => choice(
      seq('-', $._expression),
      seq('1', $._expression),
    ),

    binary_expression: $ => choice(
      seq($._expression, '%', $._expression),

      seq($._expression, '^', $._expression),
      seq($._expression, '/', $._expression),
      seq($._expression, '*', $._expression),
      seq($._expression, '+', $._expression),
      seq($._expression, '-', $._expression),
    )

    // _value: $ => choice(
    //   $.parenthesies,
    //   $._operation,
    //   $.float,
    //   $.int,
    // ),

    _operation: $ => choice (
      $.indices,
      $.division,
      $.multiplication,
      $.addition,
      $.subtraction,
    ),

    parenthesies: $ => seq(
      "(",
      $._math_expression,
      //choice($._value, $._operation),
      ")",
    ),
    
    indices: $ => prec.left(3,seq(
      $._math_expression,
      "^",
      $._math_expression
    )),

    division: $ => prec.left(2,seq(
      $._math_expression,
      "/",
      $._math_expression,
    )),

    multiplication: $ => prec.left(2,seq(
      $._math_expression,
      "*",
      $._math_expression,
    )),

    addition: $ => prec.left(1,seq(
      $._math_expression,
      "+",
      $._math_expression,
    )),

    subtraction: $ => prec.left(1,seq(
      $._math_expression,
      "-",
      $._math_expression,
    )),

    float: $ => seq(
      $.int,
      ".",
      $.int,
    ),

    int: $ => /\d+/,

    identifier: $ => /[a-z]+/,


  }
});
