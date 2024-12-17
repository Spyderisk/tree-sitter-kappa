// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterKappa",
    products: [
        .library(name: "TreeSitterKappa", targets: ["TreeSitterKappa"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterKappa",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterKappaTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterKappa",
            ],
            path: "bindings/swift/TreeSitterKappaTests"
        )
    ],
    cLanguageStandard: .c11
)
