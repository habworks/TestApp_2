#include <gui/screen3_screen/Screen3View.hpp>
#ifdef USE_TGFX_CALL_FUNCTIONS
#include "IO_Support.h"
#include <touchgfx/Color.hpp>
#include "C:\TouchGFXProjects\TestApp_2\TouchGFX\generated\texts\include\texts\TextKeysAndLanguages.hpp"
#include "C:\TouchGFXProjects\TestApp_2\TouchGFX\generated\images\include\images\BitmapDatabase.hpp"
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

void Screen3View::toggleOutputEnable(void)
{
    static bool ButtonEnable = true;

    using namespace touchgfx;
    if (ButtonEnable)
    {
//        Unicode::UnicodeChar ButtonText[] = {'O', 'N', '\0'};
//        flexButton1.setText(ButtonText);
        flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2), touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2), touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2), touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2));
        flexButton1.setText(TypedText(T_RESOURCEID2));
//        flexButton1.setStyle(FlexButton::FILLED);
//        flexButton1.setButtonColor(touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2));
//        flexButton1.setBoxColor(touchgfx::Color::getColorFromRGB(0xA7, 0xC4, 0xB2));
        MAIN_PWR_OFF();
        ButtonEnable = false;
    }
    else
    {
        flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0x5E, 0xEB, 0x13), touchgfx::Color::getColorFromRGB(0x5E, 0xEB, 0x13), touchgfx::Color::getColorFromRGB(0x5E, 0xEB, 0x13), touchgfx::Color::getColorFromRGB(0x5E, 0xEB, 0x13));
        flexButton1.setText(TypedText(T___SINGLEUSE_6BJM));
//
//        Unicode::UnicodeChar ButtonText[] = {'O', 'F', 'F', '\0'};
//        flexButton1.setText(ButtonText);
//        flexButton1.setBackgroundColor(touchgfx::Color::getColorFromRGB(0x5E, 0xEB, 0x13));
        MAIN_PWR_ON();
        ButtonEnable = true;
    }
    flexButton1.invalidate();
}


void Screen3View::iconToggleColor(void)
{
    static bool ToggleOn = true;
    if (ToggleOn)
    {
        flexButton2.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_SETTINGS_70_70_287F9C_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_SETTINGS_70_70_287F9C_SVG_ID));
        ToggleOn = false;
    }
    else
    {
        flexButton2.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_SETTINGS_70_70_B5A974_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_SETTINGS_70_70_B5A974_SVG_ID));
        ToggleOn = true;
    }
    flexButton2.invalidate();
}

#endif
