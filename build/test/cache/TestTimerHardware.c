#include "build/test/mocks/MockTimerConfigurator.h"
#include "src/TimerHardware.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldDelegateAppropriatelyToConfigurator(void)

{

  Timer_EnablePeripheralClocks_CMockExpect(16);

  Timer_Reset_CMockExpect(17);

  Timer_ConfigureMode_CMockExpect(18);

  Timer_ConfigurePeriod_CMockExpect(19);

  Timer_EnableOutputPin_CMockExpect(20);

  Timer_Enable_CMockExpect(21);

  Timer_ConfigureInterruptHandler_CMockExpect(22);

  Timer_Start_CMockExpect(23);



  TimerHardware_Init();

}
