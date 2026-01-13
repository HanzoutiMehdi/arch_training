/*
  ******************************************************************************
  * @file         accelero.c
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 17, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#include "accelero.h"

#include "stm32f401_discovery_accelerometer.h"

/** @defgroup ACCELEORO ACCELEORO
 * @ingroup ACCELEORO
 * @brief The ACCELEOROfile is responsible for implementing BSP function
 * @{
 */



/**
  * @brief  This function initialize the accelero
  * @retval None
  */
uint8_t acc_init(void)
{
uint8_t ret=0;

 if ( BSP_ACCELERO_Init()!=ACCELERO_OK)
 {
  ret =1;
 }
return ret;
}

/**
  * @brief  This function return accelero data.
  * @retval None
  */
uint8_t acc_getdata(int16_t *buff)
{
	   BSP_ACCELERO_GetXYZ(buff);

	   return 0;

}
/**
 * @}
 */
