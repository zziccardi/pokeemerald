[cc_library(
    name = path.split(".")[0],  # e.g. "main"
    srcs = [path],              # e.g. "main.c"
    hdrs = [path],              # Make .c files available to #include in tests.
    deps = [
        "//include",
        "//include/constants",
        "//include/gba",
    ],
) for path in glob(["*.c"])]

# Expose all targets for use in tests.
cc_library(
    name = "all",
    visibility = ["//testing/unit:__pkg__"],
    deps = [
        "//src:" + path.split(".")[0] for path in glob(["*.c"])
    ],
)
