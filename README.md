# tree-sitter-conao3-json

A Tree-sitter grammar for parsing JSON files.

## Overview

This project provides a Tree-sitter parser for JSON, enabling fast and accurate syntax analysis for editors, code analysis tools, and other applications that require structured parsing.

## Features

- Full JSON specification support (objects, arrays, strings, numbers, booleans, null)
- Language bindings for C, Go, Node.js, Python, Rust, and Swift
- Incremental parsing for efficient re-parsing on edits

## Installation

### Node.js

```bash
npm install tree-sitter-conao3-json
```

### Rust

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-conao3-json = "0.1"
```

### Building from Source

```bash
git clone https://github.com/conao3/tree-sitter-conao3-json.git
cd tree-sitter-conao3-json
npm install
npx tree-sitter generate
```

## Usage

### Node.js

```javascript
const Parser = require('tree-sitter');
const JSON = require('tree-sitter-conao3-json');

const parser = new Parser();
parser.setLanguage(JSON);

const tree = parser.parse('{"key": "value"}');
console.log(tree.rootNode.toString());
```

### Rust

```rust
use tree_sitter::Parser;

fn main() {
    let mut parser = Parser::new();
    parser.set_language(&tree_sitter_conao3_json::LANGUAGE.into()).unwrap();

    let tree = parser.parse(r#"{"key": "value"}"#, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

## Development

### Running Tests

```bash
npx tree-sitter test
```

### Generating the Parser

```bash
npx tree-sitter generate
```

## License

Apache-2.0

## Author

Naoya Yamashita ([@conao3](https://github.com/conao3))
