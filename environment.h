#include "glog/logging.h"
#include "gtest/gtest.h"

class SignalHandlerEnvironment : public ::testing::Environment {
 public:
  ~SignalHandlerEnvironment() override {}

  // Override this to define how to set up the environment.
  void SetUp() override {
    std::cout << "env!!!!" << std::endl;
    google::InstallFailureSignalHandler();
  }

  // Override this to define how to tear down the environment.
  void TearDown() override {}
};
