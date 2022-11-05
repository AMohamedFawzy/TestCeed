#include "build/test/mocks/MockIntrinsicsWrapper.h"
#include "build/test/mocks/MockTimerConductor.h"
#include "build/test/mocks/MockAdcConductor.h"
#include "build/test/mocks/MockUsartConductor.h"
#include "build/test/mocks/MockModel.h"
#include "src/Executor.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldCallInitOfAllConductorsAndTheModel(void)

{

  Model_Init_CMockExpect(20);

  UsartConductor_Init_CMockExpect(21);

  AdcConductor_Init_CMockExpect(22);

  TimerConductor_Init_CMockExpect(23);

  Interrupt_Enable_CMockExpect(24);



  Executor_Init();

}



void testRunShouldCallRunForEachConductorAndReturnTrueAlways(void)

{

  UsartConductor_Run_CMockExpect(31);

  TimerConductor_Run_CMockExpect(32);

  AdcConductor_Run_CMockExpect(33);



  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((Executor_Run())), (

 ((void *)0)

 ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

}
