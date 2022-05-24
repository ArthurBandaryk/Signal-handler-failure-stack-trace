#include "environment.h"

static testing::Environment* const sig_env =
    testing::AddGlobalTestEnvironment(new SignalHandlerEnvironment{});
