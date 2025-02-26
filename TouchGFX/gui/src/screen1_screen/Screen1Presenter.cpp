#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}


// HAB ADDED
void Screen1Presenter::textDisplayUpdate_Presenter(float DisplayValue)
{
    view.textDisplayUpdate_View(DisplayValue);
}
