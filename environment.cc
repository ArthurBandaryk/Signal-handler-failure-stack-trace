#include "environment.h"

static testing::Environment* const foo_env =
    testing::AddGlobalTestEnvironment(new SignalHandlerEnvironment{});
