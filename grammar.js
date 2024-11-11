/**
 * @file json parser
 * @author Naoya Yamashita <conao3@gmail.com>
 * @license Apache-2.0
 */

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "conao3_json",

  rules: {
    source_file: $ => $._value,

    _value: $ => choice(
      $.object,
      $.array,
      $.string,
      $.number,
      $.boolean,
      $.null,
    ),

    object: $ => seq('{', sep(seq($.string, ':', $._value), ','), '}'),
    array: $ => seq('[', sep($._value, ','), ']'),

    string: $ => /"[^"]*"/,

    number: $ => {
      const sign = /[+-]/
      const onenine = /[1-9]/
      const digit = choice('0', onenine)
      const digits = repeat1(digit)
      const fraction = seq('.', digits)
      const integer = seq(
        optional(sign),
        digits,
      )
      const exponent = seq(
        /[eE]/,
        optional(sign),
        digits
      )
      return seq(
        integer,
        optional(fraction),
        optional(exponent)
      )
    },

    boolean: $ => choice('true', 'false'),
    null: $ => 'null',
  }
});
