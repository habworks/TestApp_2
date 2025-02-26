#include <gui/screen3_screen/Screen3View.hpp>
#ifdef USE_TGFX_CALL_FUNCTIONS
#include "IO_Support.h"
#include <touchgfx/Color.hpp>
#endif

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}


// Hab Added Functions
#ifdef USE_TGFX_CALL_FUNCTIONS

void Screen3View::toggleMainPower(void)
{
    MAIN_PWR_TOGGLE();
    using namespace touchgfx;
    if (MAIN_PWR_STATUS() == GPIO_PIN_SET)
    {
        MAIN_PWR_ON();
        box1.setColor(touchgfx::Color::getColorFromRGB(0x5E, 0xEB, 0x13));
//        button1.setBitmaps(Bitmap(BITMAP_BUTTON_NORMAL_ID), Bitmap(BITMAP_BUTTON_PRESSED_ID));
        buttonHome.setAlpha(255);
        container2.setTouchable(true);
    }
    else
    {
        MAIN_PWR_OFF();
        box1.setColor(touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2));
//        button1.setBitmaps(Bitmap(BITMAP_BUTTON_DISABLED_ID), Bitmap(BITMAP_BUTTON_DISABLED_ID));
        buttonHome.setAlpha(75);
        container2.setTouchable(false);
    }
    box1.invalidate();
    buttonHome.invalidate();
    container2.invalidate();
}

#endif
