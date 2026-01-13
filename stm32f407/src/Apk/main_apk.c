/*
  ******************************************************************************
  * @file         main_apk.c
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 16, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#include "processing.h"
#include "main_apk.h"
#include "main.h"
#include "global_err.h"
#include "autotest.h"
#include "led.h"
#include "accelero.h"
#include "watchdog.h"
#include <stdio.h>

/** @defgroup MAIN_APK  MAIN APK
 * @ingroup MAIN_APK
 * @brief the main appplication mdule.
 * @{
 */

int16_t Buffer[3];

uint8_t buttonPressed;

typedef enum{IDLE_STATE, CONTROL_STATE, STOP_STATE} apk_State;

apk_State state=IDLE_STATE;

/**
  * @brief  the main application
  * @retval int
  */
void main_apk(void)
{


 /**/
 led_orange_control(LED_SET);

  while(1)
   {

     switch (state)
	  {
 	   case IDLE_STATE:
	    {
             printf("IDLE_STATE\r\n");
		  break;
	    }
	   case CONTROL_STATE:
	    {
		  break;
	    }
	   case STOP_STATE:
	    {

		  break;
	    }
	   default:
	    {
	    	break;
	    }

	#ifdef  RELEASE
		    watchdog_refresh();
	#endif

         }
          HAL_Delay(50);

   }
}





/**
  * @brief  ISR Function
  * @retval int
  */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  UNUSED(GPIO_Pin);
  buttonPressed=1;
}
/**
 * @}
 */
