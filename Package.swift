// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterConao3Json",
    products: [
        .library(name: "TreeSitterConao3Json", targets: ["TreeSitterConao3Json"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterConao3Json",
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
            name: "TreeSitterConao3JsonTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterConao3Json",
            ],
            path: "bindings/swift/TreeSitterConao3JsonTests"
        )
    ],
    cLanguageStandard: .c11
)
