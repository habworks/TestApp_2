#include "General_Hardware.h"
#include "IO_Support.h"

void Init_GeneralHardware(void)
{
    STATUS_LED_OFF();
}

void generalHardwareTaskFunction(void)
{
    STATUS_LED_TOGGLE();
}
