#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifdef USE_TGFX_CALL_FUNCTIONS
#include "cmsis_os2.h"
extern osSemaphoreId_t DisplaySemaphoreHandle;
extern float TestUpdateValue;
#endif

bool UpdateDisplay = true;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
    if (DisplaySemaphoreHandle != NULL)
    {
        if (osSemaphoreAcquire(DisplaySemaphoreHandle, 10U) == osOK)
            textDisplayUpdate();
    }
}


// HAB ADDED FUNCTIONS
void Model::textDisplayUpdate(void)
{
    if (UpdateDisplay)
    {
        modelListener->textDisplayUpdate_Presenter(TestUpdateValue);
    }
}
