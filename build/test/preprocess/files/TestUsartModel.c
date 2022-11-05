#include "build/test/mocks/MockUsartBaudRateRegisterCalculator.h"
#include "build/test/mocks/MockTemperatureFilter.h"
#include "src/ModelConfig.h"
#include "src/UsartModel.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void testGetBaudRateRegisterSettingShouldReturnAppropriateBaudRateRegisterSetting(void)

{

  uint8 dummyRegisterSetting = 17;

  UsartModel_CalculateBaudRateRegisterSetting_CMockExpectAndReturn(20, 48054857, 115200, dummyRegisterSetting);



  UnityAssertEqualNumber((UNITY_INT)((dummyRegisterSetting)), (UNITY_INT)((UsartModel_GetBaudRateRegisterSetting())), (

 ((void *)0)

 ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void testGetFormattedTemperatureFormatsTemperatureFromCalculatorAppropriately(void)

{

  TemperatureFilter_GetTemperatureInCelcius_CMockExpectAndReturn(27, 25.0f);

  UnityAssertEqualString((const char*)(("25.0 C\n")), (const char*)((UsartModel_GetFormattedTemperature())), (

 ((void *)0)

 ), (UNITY_UINT)(28));

}



void testShouldReturnErrorMessageUponInvalidTemperatureValue(void)

{

  TemperatureFilter_GetTemperatureInCelcius_CMockExpectAndReturn(33, -

 (__builtin_inff ())

 );

  UnityAssertEqualString((const char*)(("Temperature sensor failure!\n")), (const char*)((UsartModel_GetFormattedTemperature())), (

 ((void *)0)

 ), (UNITY_UINT)(34));

}



void testShouldReturnWakeupMessage(void)

{

  UnityAssertEqualString((const char*)(("It's Awesome Time!\n")), (const char*)((UsartModel_GetWakeupMessage())), (

 ((void *)0)

 ), (UNITY_UINT)(39));

}
