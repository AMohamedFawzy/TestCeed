#include "src/UsartBaudRateRegisterCalculator.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testCalculateBaudRateRegisterSettingShouldCalculateRegisterSettingAppropriately(void)

{



  UnityAssertEqualNumber((UNITY_INT)((26)), (UNITY_INT)((UsartModel_CalculateBaudRateRegisterSetting(48000000, 115200))), (

 ((void *)0)

 ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((6)), (UNITY_INT)((UsartModel_CalculateBaudRateRegisterSetting(3686400, 38400))), (

 ((void *)0)

 ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((23)), (UNITY_INT)((UsartModel_CalculateBaudRateRegisterSetting(14318180, 38400))), (

 ((void *)0)

 ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((20)), (UNITY_INT)((UsartModel_CalculateBaudRateRegisterSetting(12000000, 38400))), (

 ((void *)0)

 ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((13)), (UNITY_INT)((UsartModel_CalculateBaudRateRegisterSetting(12000000, 56800))), (

 ((void *)0)

 ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}
