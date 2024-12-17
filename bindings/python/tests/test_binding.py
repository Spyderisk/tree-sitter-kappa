from unittest import TestCase

import tree_sitter, tree_sitter_kappa


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_kappa.language())
        except Exception:
            self.fail("Error loading Kappa grammar")
