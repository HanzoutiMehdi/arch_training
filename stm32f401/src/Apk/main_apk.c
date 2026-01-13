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
		    	if (buttonPressed==1)
		    	{
		    		buttonPressed=0;
		    		state=CONTROL_STATE;
		    		/**/
		    		led_orange_control(LED_RESET);
		    	}

			  break;
		    }
		   case CONTROL_STATE:
		    {
		  	  acc_getdata(Buffer);

		  	  process_data(Buffer);

		  	  HAL_Delay(50);

		      if (buttonPressed==1)
		    	{
		    		buttonPressed=0;
		    		state=STOP_STATE;

		    		led_blue_control(LED_SET);
		    		DIRECTION_LED_OFF;
		    	}

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

	#ifdef  DEBUG
		    watchdog_refresh();
	#endif


		  }


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
