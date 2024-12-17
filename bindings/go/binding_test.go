package tree_sitter_kappa_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_kappa "github.com/tree-sitter/tree-sitter-kappa/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kappa.Language())
	if language == nil {
		t.Errorf("Error loading Kappa grammar")
	}
}
