#include "src/main.c"  // Make static variables visible.

#include <gtest/gtest.h>

// TODO: mock globals

namespace unit_tests {
namespace {

class MainTest : public testing::Test {
  void SetUp() {
    // TODO: overwrite statics
  }
};

TEST_F(MainTest, TestRunGameLoopIteration) {
  // TODO
}

}  // namespace
}  // namespace unit_tests
