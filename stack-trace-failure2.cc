#include "glog/logging.h"
#include "gtest/gtest.h"

TEST(StackTrace2, CheckFailure2) {
  CHECK(false);
}
