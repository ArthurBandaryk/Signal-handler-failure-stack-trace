#include "glog/logging.h"
#include "gtest/gtest.h"

TEST(StackTrace, CheckFailure) {
  CHECK(false);
}
