#include "build/test/mocks/MockTaskScheduler.h"
#include "build/test/mocks/MockUsartHardware.h"
#include "build/test/mocks/MockUsartModel.h"
#include "src/UsartConductor.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testShouldInitializeHardwareWhenInitCalled(void)

{

  UsartModel_GetBaudRateRegisterSetting_CMockExpectAndReturn(18, 4);

  UsartHardware_Init_CMockExpect(19, 4);

  UsartModel_GetWakeupMessage_CMockExpectAndReturn(20, "Hey there!");

  UsartHardware_TransmitString_CMockExpect(21, "Hey there!");



  UsartConductor_Init();

}



void testRunShouldNotDoAnythingIfSchedulerSaysItIsNotTimeYet(void)

{

  TaskScheduler_DoUsart_CMockExpectAndReturn(28, (0));



  UsartConductor_Run();

}



void testRunShouldGetCurrentTemperatureAndTransmitIfSchedulerSaysItIsTime(void)

{

  TaskScheduler_DoUsart_CMockExpectAndReturn(35, (1));

  UsartModel_GetFormattedTemperature_CMockExpectAndReturn(36, "hey there");

  UsartHardware_TransmitString_CMockExpect(37, "hey there");



  UsartConductor_Run();

}
