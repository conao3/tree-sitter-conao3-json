from unittest import TestCase

import tree_sitter, tree_sitter_conao3_json


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_conao3_json.language())
        except Exception:
            self.fail("Error loading Conao3Json grammar")
