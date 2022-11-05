#include "src/Types.h"








void AdcHardware_Init(void);

void AdcHardware_StartConversion(void);

bool AdcHardware_GetSampleComplete(void);

uint16 AdcHardware_GetSample(void);
