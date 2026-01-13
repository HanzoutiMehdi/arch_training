/*
  ******************************************************************************
  * @file         global_err.c
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 16, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#include "global_err.h"
#include "log.h"

#include "main.h"

/** @defgroup GLOBALERR GLOBAL ERROR
 * @ingroup GLOBALERR_MODULE
 * @brief The GLOBAL ERROR file is responsible for implementing the functionality defined by the module.
 * @{
 */

#ifndef DEBUG
static void vGlobalErrors_global_errSignal( uint16_t errocode );
#endif

/**
 * @brief Global error handler function
 * @param errorCode: Error code indicating the specific error encountered
 * @return None
 * @note This function handles global errors based on the provided error code.
 *       It switches on the error code and performs specific actions for each case.
 */
void vGlobalErrors_globalErrorHandler( uint16_t errorCode )
{
    switch( errorCode )
    {
    case DERROR_SYSTEM_FAULT_:
    {
#ifdef DEBUG
    LOG_ERR( "CPU Fault!" );

    while( 1 )
    {
    }
#else
    vGlobalErrors_global_errSignal( errorCode );
    NVIC_SystemReset();
#endif


    }

    case DERROR_PERIPH_INIT_FAIL_:
    {
    	while(1);
    }


    default:
    {

    }

    }

}

#ifndef DEBUG
/**
 * @brief Global error signaling function
 * @param errorCode: Error code to be processed
 * @return None
 * @note This function handles the signaling of global errors.
 *       It performs various actions such as writing the error code to EEPROM,
 *       logging the error code, and triggering an error blink pattern on an LED.
 */
static void vGlobalErrors_global_errSignal( uint16_t errocode )
{
	UNUSED(errocode);

    LOG_ERR( "%d\n\n\n", errocode );

    /*Blink LED error */

}
#endif
