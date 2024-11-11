import XCTest
import SwiftTreeSitter
import TreeSitterConao3Json

final class TreeSitterConao3JsonTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_conao3_json())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Conao3Json grammar")
    }
}
