/*
  ******************************************************************************
  * @file         led.h
  * @brief        This file provides
  * @Author       mhanzout
  * @date         Mar 17, 2024
  ******************************************************************************
  ******************************************************************************
            EMBEDDED LOW LEVEL SOFWARE ACTIA 2024  All Rights Reserved.
  ******************************************************************************
  ******************************************************************************
 */
#ifndef BSP_LED_H_
#define BSP_LED_H_

typedef enum{
	LED_RESET,
	LED_SET
}LedStatus;

void led_init(void);
void led_red_control(LedStatus status );
void led_green_control(LedStatus status );
void led_blue_control(LedStatus status );
void led_orange_control(LedStatus status );


#define LEFT_LED                     led_red_control(LED_SET);led_green_control(LED_RESET);
#define RIGHT_LED                   led_red_control(LED_RESET);led_green_control(LED_SET);

#define DIRECTION_LED_OFF           led_red_control(LED_RESET);led_green_control(LED_RESET);



#endif /* BSP_LED_H_ */
