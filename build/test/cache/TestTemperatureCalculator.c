#include "src/TemperatureCalculator.c"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








extern float TemperatureCalculator_Calculate(uint16_t val);



void setUp(void)

{

}



void tearDown(void)

{

}



void testTemperatureCalculatorShouldCalculateTemperatureFromMillivolts(void)

{

  float result;







  result = TemperatureCalculator_Calculate(1000);

  UnityAssertFloatsWithin((UNITY_FLOAT)((0.01f)), (UNITY_FLOAT)((25.0f)), (UNITY_FLOAT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(24));



  result = TemperatureCalculator_Calculate(2985);

  UnityAssertFloatsWithin((UNITY_FLOAT)((0.01f)), (UNITY_FLOAT)((68.317f)), (UNITY_FLOAT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(27));



  result = TemperatureCalculator_Calculate(3);

  UnityAssertFloatsWithin((UNITY_FLOAT)((0.01f)), (UNITY_FLOAT)((-19.96f)), (UNITY_FLOAT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(30));

}



void testShouldReturnNegativeInfinityWhen_0_millivoltsInput(void)

{

  UnityAssertFloatSpecial((UNITY_FLOAT)((TemperatureCalculator_Calculate(0))), (

 ((void *)0)

 ), (UNITY_UINT)(35), UNITY_FLOAT_IS_NEG_INF);

}
