#include <gui/screen1_screen/Screen1View.hpp>
#ifdef USE_TGFX_CALL_FUNCTIONS
#include "IO_Support.h"
#endif

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


// Hab Added functions
#ifdef USE_TGFX_CALL_FUNCTIONS

void Screen1View::mainPowerOn(void)
{
    MAIN_PWR_ON();
}

#endif
