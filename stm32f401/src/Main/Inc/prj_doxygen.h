/*
 ***************************************************************************
 *
 * @file project_doxgen.h
 * @brief This file provides Doxyfile config header
 * @Author ahammami
 * @date Sep 11, 2023
 *
 ***************************************************************************
 ***************************************************************************
 *
 *  EMBEDDED LOW LEVEL SOFWARE ACTIA 2023 All Rights Reserved.
 *
 ***************************************************************************
 ***************************************************************************
 */
#ifndef UMC_APK_DOXYGEN_H_
#define UMC_APK_DOXYGEN_H_


/*PAGE DE DOCUMENTATION-------------------------------------------------*/


/*! \mainpage Main Page of Accelero Project
 *
 * \tableofcontents
 *
 * \section section_ig Introduction
 * - \ref Introduction
 * - \ref Project_StartUp
 * - \ref MISRA_Deviation
 *
 */



/*PAGE Introduction  -------------------------------------------------*/

/*! \page Introduction Introduction
 *  The ACCERLERO Software project is a bareMetal project the  following BSP :\n
 *   -WATCHDOG      :  Watchdog API \n
 *   -ACCERLO       :  Accelero driver  \n
 *   -LED           :  LED Driver \n
 */

/*PAGE  Project Startup  -------------------------------------------------*/

/*! \page Project_StartUp Project Startup
 *
 * todo \n
 *
 * After the power on reset the main function is called we start by initializing the periph then run \n
 * the main_apk......
 *
 */


/*PAGE MISRAC DEVIATION  -------------------------------------------------*/

/**
 * \page MISRAC_Deviation  MISRA-C:2012 Compliance Exceptions
 *
 * \n
 *
 *
 * *  main_apk.c violates the following MISRA-C:2012-R.18.6 :
 *  \n \Line93  : Pointer assignment to wider scope.
 *  \n Justification : \n
 *           - Purpose of the Line: The line u32MainStackStartCheck = (uint32_t) u32MSP; serves the purpose of
 *              saving the start address of MSP. It allows for further calculations or analysis
 *              related to the usage and manipulation of the stack.
 *
 *           - Necessity for Stack Analysis: The saved start address of the MSP can be used later to calculate
 *              the stack usage or perform any other operations that require knowledge of the stack's
 *              starting point.
 *


/** @defgroup APK_MODULE TASK MODULE
 * @brief Define the application Tasks Module
 * @{
 */
/**
 * @}
 */




/** @defgroup BSP_MODULE BSP MODULE
 * @brief Define the application Bsp Module
 * @{
 */
/**
 * @}
 */



/** @defgroup ACCELEORO BSP ACCELEORO
 * @ingroup BSP_MODULE
 * @brief Define the prototype and structure definition for the acceleor module
 * @{
 */
/**
 * @}
 */






/** @defgroup BSP_LED_DRIVER BSP LED DRIVER
 * @ingroup BSP_MODULE
 * @brief Define the prototype and structure definition for the Led Driver module
 * @{
 */
/**
 * @}
 */






/** @defgroup GLOBALERR_MODULE GLOBAL ERROR
 * @brief Define the application Global Error Module
 * @{
 */
/**
 * @}
 */



/** @defgroup UTIL_MODULE UTIL MODULE
 * @brief Define the application Util Module
 * @{
 */
/**
 * @}
 */



#endif /* PROJECT_DOXYGEN_H_ */
