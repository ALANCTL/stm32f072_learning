#ifndef FILE__MAIN_H
#define FILE__MAIN_H

#include "stm32f0xx_conf.h"
#include "usart.h"

void SysTick_Handler(void);
void RCC_Configuration(void);
void GPIO_Configuration(void);
void USART1_Initialization(void);

#endif
