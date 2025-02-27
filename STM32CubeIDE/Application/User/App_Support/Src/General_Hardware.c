#include "General_Hardware.h"
#include "IO_Support.h"
#include "cmsis_os2.h"

// HAB ADDED
extern osSemaphoreId_t DisplaySemaphoreHandle;
float TestUpdateValue = 0.123;

void Init_GeneralHardware(void)
{
    STATUS_LED_OFF();
}

void generalHardwareTaskFunction(void)
{
    static uint8_t TaskTickCounter = 0;
    STATUS_LED_TOGGLE();
    TaskTickCounter++;
    if (TaskTickCounter >= 10)
    {
        TestUpdateValue++;
        TaskTickCounter = 0;
        osSemaphoreRelease(DisplaySemaphoreHandle);
    }
}
