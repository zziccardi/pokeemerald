[cc_library(
    name = path.split(".")[0],  # e.g. "main"
    srcs = [path],  # e.g. "main.c"
    hdrs = [path],  # Make .c files available to #include in tests.
    visibility = ["//testing/unit:__pkg__"],
    deps = [
        "//include",
        "//include/constants",
        "//include/gba",
        "//src/data",
    ],
) for path in glob(["*.c"])]

# Expose all targets for use in tests.
cc_library(
    name = "all",
    visibility = ["//testing/unit:__pkg__"],
    deps = [
        "//src:" + path.split(".")[0]
        for path in glob(["*.c"])
    ],
)
