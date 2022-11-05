#include "src/Main.h"
#include "build/test/mocks/MockExecutor.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testMainShouldCallExecutorInitAndContinueToCallExecutorRunUntilHalted(void)

{

  Executor_Init_CMockExpect(16);

  Executor_Run_CMockExpectAndReturn(17, (1));

  Executor_Run_CMockExpectAndReturn(18, (1));

  Executor_Run_CMockExpectAndReturn(19, (1));

  Executor_Run_CMockExpectAndReturn(20, (1));

  Executor_Run_CMockExpectAndReturn(21, (0));



  AppMain();

}
