/*
  ******************************************************************************
  * @file         util.h
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 16, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#ifndef UTIL_H_
#define UTIL_H_

#include "stdint.h"
#include "main.h"


#ifdef UNIT_TEST
#define u_ASSERT( x )   if( ( x ) == 1 )  return 1;/*Error*/
#else

#define u_ASSERT( x )   if( ( x ) == 1 ) { __disable_irq(); for( ;; ); }

#endif






uint8_t util_CheckValidCallback(uint32_t fun_addr);
uint8_t util_CheckValidpointer(uint32_t addr);
#endif /* UTIL_H_ */
