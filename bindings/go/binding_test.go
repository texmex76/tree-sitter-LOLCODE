package tree_sitter_lolcode_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-lolcode"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lolcode.Language())
	if language == nil {
		t.Errorf("Error loading Lolcode grammar")
	}
}
