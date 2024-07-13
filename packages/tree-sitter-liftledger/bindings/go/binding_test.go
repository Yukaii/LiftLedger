package tree_sitter_liftledger_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-liftledger"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_liftledger.Language())
	if language == nil {
		t.Errorf("Error loading Liftledger grammar")
	}
}
