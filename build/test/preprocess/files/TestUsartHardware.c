#include "build/test/mocks/MockUsartPutChar.h"
#include "build/test/mocks/MockUsartConfigurator.h"
#include "src/UsartHardware.h"
#include "src/Types.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldConfigureUsartPeripheralByCallingConfiguratorAppropriately(void)

{

  Usart_ConfigureUsartIO_CMockExpect(17);

  Usart_EnablePeripheralClock_CMockExpect(18);

  Usart_Reset_CMockExpect(19);

  Usart_ConfigureMode_CMockExpect(20);

  Usart_SetBaudRateRegister_CMockExpect(21, 73);

  Usart_Enable_CMockExpect(22);



  UsartHardware_Init(73);

}



void testTransmitStringShouldSendDesiredStringOutUsingUsart(void)

{

  Usart_PutChar_CMockExpect(29, 'h');

  Usart_PutChar_CMockExpect(30, 'e');

  Usart_PutChar_CMockExpect(31, 'l');

  Usart_PutChar_CMockExpect(32, 'l');

  Usart_PutChar_CMockExpect(33, 'o');



  UsartHardware_TransmitString("hello");

}
