/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "demos/lv_demos.h"

#include <stdio.h>

#include "LVGL_Cpp.hpp"

int main(void)
{
	lv_init();

	hal_setup();

  //lv_demo_widgets();

  LVGL::Object_Type Screen(lv_scr_act());

  LVGL::Button_Type B(Screen);
  B.Set_Align(LV_ALIGN_CENTER);

  LVGL::Label_Type Label(B);

  LVGL::Switch_Type S(Screen);
  S.Set_Align(LV_ALIGN_BOTTOM_LEFT);
  
  LVGL::Colorwheel_Type C(Screen, true);
  C.Set_Align(LV_ALIGN_BOTTOM_RIGHT);
  C.Set_Size(200, 200);

  Label.Set_Text("Hello World!");

	hal_loop();
}
