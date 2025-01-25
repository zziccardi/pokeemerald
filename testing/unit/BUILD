"""Tests for files under //src.

Further reading: https://stackoverflow.com/a/1410143
"""

cc_test(
    name = "main_test",
    srcs = ["main_test.cc"],
    deps = [
        "//include/gba",
        # Uncomment when building entire codebase.
        # "//src:all",
        "//src:main",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
