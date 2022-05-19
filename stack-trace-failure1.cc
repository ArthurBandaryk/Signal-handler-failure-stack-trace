#include "glog/logging.h"
#include "gtest/gtest.h"

TEST(StackTrace1, CheckFailure1) {
  CHECK(true);
}
