/*
  ******************************************************************************
  * @file         util.c
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 16, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#include "util.h"



uint8_t util_CheckValidpointer(uint32_t addr)
{
	uint8_t ret=0;
	extern uint32_t __SRAM_segment_start__[];
	extern uint32_t __SRAM_segment_end__[];

	if ((addr >(uint32_t)__SRAM_segment_end__)||
	    (addr<(uint32_t)__SRAM_segment_start__))
	{
		ret=1;
	}
	return ret;

}


uint8_t util_CheckValidCallback(uint32_t fun_addr)
{
	uint8_t ret=0;
	extern uint32_t __FLASH_segment_start__[];
	extern uint32_t __FLASH_segment_end__[];

	if ((fun_addr >(uint32_t)__FLASH_segment_end__)||
	    (fun_addr<(uint32_t)__FLASH_segment_start__))
	{
		ret=1;
	}
	return ret;
}
