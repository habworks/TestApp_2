#include <gui/screen1_screen/Screen1View.hpp>
#include "IO_Support.h"

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
void Screen1View::mainPowerOn(void)
{
    MAIN_PWR_ON();
}
