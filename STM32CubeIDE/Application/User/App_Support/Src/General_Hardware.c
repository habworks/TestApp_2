#include "General_Hardware.h"
#include "IO_Support.h"
#include "cmsis_os2.h"
#include "../gui/screen1_screen/Screen1View.hpp"

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
        Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%2.3f", DisplayValue);
        textArea1.invalidate();
    }
}
