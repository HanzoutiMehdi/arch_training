/*
  ******************************************************************************
  * @file         watchdog.h
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 17, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#ifndef BSP_WATCHDOG_H_
#define BSP_WATCHDOG_H_
#include "stdint.h"

uint8_t watchdog_init(void);
uint8_t watchdog_refresh(void);

#endif /* BSP_WATCHDOG_H_ */
