/*
  ******************************************************************************
  * @file         accelero.h
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 17, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#ifndef BSP_ACCELERO_H_
#define BSP_ACCELERO_H_

#include "stdint.h"

uint8_t acc_init(void);
uint8_t acc_getdata(int16_t *buff);



#endif /* BSP_ACCELERO_H_ */
