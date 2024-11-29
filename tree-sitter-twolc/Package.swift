// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterTwolc",
    products: [
        .library(name: "TreeSitterTwolc", targets: ["TreeSitterTwolc"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterTwolc",
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
            name: "TreeSitterTwolcTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterTwolc",
            ],
            path: "bindings/swift/TreeSitterTwolcTests"
        )
    ],
    cLanguageStandard: .c11
)
