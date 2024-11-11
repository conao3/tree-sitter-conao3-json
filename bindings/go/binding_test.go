package tree_sitter_conao3_json_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_conao3_json "github.com/conao3/tree-sitter-conao3-json/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_conao3_json.Language())
	if language == nil {
		t.Errorf("Error loading Conao3Json grammar")
	}
}
