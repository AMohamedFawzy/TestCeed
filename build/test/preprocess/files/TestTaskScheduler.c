#include "src/TaskScheduler.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

  TaskScheduler_Init();

}



void tearDown(void)

{

}



void testShouldScheduleUsartTaskAfter1000ms(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(999);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(1000);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void testShouldClearUsartDoFlagAfterReported(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(1000);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

}



void testShouldScheduleUsartTaskEvery1000ms(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(1300);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(2000);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(3100);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

}



void testShouldScheduleUsartTaskOnlyOncePerPeriod(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(1000);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(1001);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(1999);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(2000);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoUsart())), (

 ((void *)0)

 ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT);

}



void testShouldScheduleAdcTaskAfter100ms(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(99);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(100);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

}



void testShouldClearAdcDoFlagAfterReported(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(100);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

}



void testShouldScheduleAdcTaskEvery100ms(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(121);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(200);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);



  TaskScheduler_Update(356);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(90), UNITY_DISPLAY_STYLE_INT);

}



void testShouldScheduleAdcTaskOnlyOncePerPeriod(void)

{

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(100);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(97), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(101);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(199);

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(101), UNITY_DISPLAY_STYLE_INT);

  TaskScheduler_Update(200);

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((TaskScheduler_DoAdc())), (

 ((void *)0)

 ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_INT);

}
