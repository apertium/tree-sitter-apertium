// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCg",
    products: [
        .library(name: "TreeSitterCg", targets: ["TreeSitterCg"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterCg",
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
            name: "TreeSitterCgTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterCg",
            ],
            path: "bindings/swift/TreeSitterCgTests"
        )
    ],
    cLanguageStandard: .c11
)
