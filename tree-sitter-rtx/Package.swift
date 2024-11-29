// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRtx",
    products: [
        .library(name: "TreeSitterRtx", targets: ["TreeSitterRtx"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterRtx",
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
            name: "TreeSitterRtxTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterRtx",
            ],
            path: "bindings/swift/TreeSitterRtxTests"
        )
    ],
    cLanguageStandard: .c11
)
