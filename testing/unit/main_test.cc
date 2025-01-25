#define TESTING

#include "gba/defines.h"
#include "gba/types.h"
#include "constants/global.h"

#include <gtest/gtest.h>

// TODO: move these to a header
// MOCKED GLOBALS START

void   Timer3Intr(void) {}
void   rfu_REQ_stopMode(void) {}
u16    rfu_waitREQComplete(void) { return u16{}; }
bool32 Overworld_SendKeysToLinkIsRunning(void) { return bool32{}; }
bool32 Overworld_RecvKeysFromLinkIsRunning(void) { return bool32{}; }
void   PlayTimeCounter_Update(void) {}
void   MapMusicMain(void) {}
void   CB2_InitCopyrightScreenAfterBootup(void) {}

#define SAVEBLOCK_MOVE_RANGE    128

struct SaveBlock1ASLR {
  struct SaveBlock1 block;
  u8 aslr[SAVEBLOCK_MOVE_RANGE];
};

struct SaveBlock2ASLR {
  struct SaveBlock2 block;
  u8 aslr[SAVEBLOCK_MOVE_RANGE];
};

EWRAM_DATA u32 *gTrainerHillVBlankCounter = NULL;
EWRAM_DATA struct SaveBlock1ASLR gSaveblock1 = {0};
EWRAM_DATA struct SaveBlock2ASLR gSaveblock2 = {0};

// MOCKED GLOBALS END

#include "src/main.c"  // Make static variables visible.

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
