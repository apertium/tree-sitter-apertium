// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterXfst",
    products: [
        .library(name: "TreeSitterXfst", targets: ["TreeSitterXfst"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterXfst",
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
            name: "TreeSitterXfstTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterXfst",
            ],
            path: "bindings/swift/TreeSitterXfstTests"
        )
    ],
    cLanguageStandard: .c11
)
