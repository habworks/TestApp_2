#include <gui/screen2_screen/Screen2View.hpp>
#ifdef USE_TGFX_CALL_FUNCTIONS
#include "IO_Support.h"
#endif

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

// Had Added functions
#ifdef USE_TGFX_CALL_FUNCTIONS
void Screen2View::mainPowerOff(void)
{
    MAIN_PWR_OFF();
}
#endif
