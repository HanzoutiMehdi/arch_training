/*
  ******************************************************************************
  * @file         processing.c
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 17, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */

#include "stdint.h"
#include "util.h"
#include "led.h"

#define THRESHOLD_LEFT             100
#define THRESHOLD_RIGHT           -100




/**
 *
 */
uint8_t process_data(int16_t *buff)
{
	DIRECTION_LED_OFF;

	/*Check param */
	u_ASSERT(buff==0);

	if (buff[0] < THRESHOLD_RIGHT)
	{
		LEFT_LED;
		 return 0;
	}
	if (buff[0] > THRESHOLD_LEFT)
	{
		RIGHT_LED;
		 return 4;
	}


return 5;

}
