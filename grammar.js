/**
 * @file json parser
 * @author Naoya Yamashita <conao3@gmail.com>
 * @license Apache-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "conao3_json",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
