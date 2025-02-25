#include <gui/screen2_screen/Screen2View.hpp>
#include "IO_Support.h"

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::mainPowerOff(void)
{
    MAIN_PWR_OFF();
}
