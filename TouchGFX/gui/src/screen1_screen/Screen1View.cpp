#include <gui/screen1_screen/Screen1View.hpp>
#ifdef USE_TGFX_CALL_FUNCTIONS
#include "IO_Support.h"
#include <string.h>
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

void Screen1View::textDisplayUpdate_View(float DisplayValue)
{
//    memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
    Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%2.3f", DisplayValue);
//    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 30);
//    textArea1.setWildcard1(textArea1Buffer);
    textArea1.invalidate();

}

void Screen1View::directText(void)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 100);
    textArea1.invalidate();
    MAIN_PWR_TOGGLE();
}

#endif
