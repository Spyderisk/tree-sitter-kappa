import XCTest
import SwiftTreeSitter
import TreeSitterKappa

final class TreeSitterKappaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kappa())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Kappa grammar")
    }
}
