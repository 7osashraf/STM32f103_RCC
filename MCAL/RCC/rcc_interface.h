#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#include <stdint.h>

typedef enum {
	RCC_CLK_HSI,
	RCC_CLK_HSE,
	RCC_CLK_PLL
} RCC_ClkType;

typedef enum {
	RCC_CLK_OFF,
	RCC_CLK_ON
}RCC_ClkStatus;

typedef enum {
    RCC_HSE_DIV1,
    RCC_HSE_DIV2
} RCC_HSE_Config;

typedef enum {
    RCC_PLL_MUL_2 = 0,
    RCC_PLL_MUL_3,
    RCC_PLL_MUL_4,
    RCC_PLL_MUL_5,
    RCC_PLL_MUL_6,
    RCC_PLL_MUL_7,
    RCC_PLL_MUL_8,
    RCC_PLL_MUL_9,
    RCC_PLL_MUL_10,
    RCC_PLL_MUL_11,
    RCC_PLL_MUL_12,
    RCC_PLL_MUL_13,
    RCC_PLL_MUL_14,
    RCC_PLL_MUL_15,
    RCC_PLL_MUL_16
} RCC_PLLMul;

typedef enum {
    RCC_PLL_SRC_HSI_DIV2,
    RCC_PLL_SRC_HSE
} RCC_PLLSrc;

typedef enum {
    RCC_AHB_DMA1 = 0,
    RCC_AHB_DMA2,
    RCC_AHB_SRAM,
    RCC_AHB_FLITF,
    RCC_AHB_CRC
} RCC_AHBPeriph;

typedef enum {
    RCC_APB1_TIM2,
    RCC_APB1_TIM3,
    RCC_APB1_TIM4,
    RCC_APB1_TIM5,
    RCC_APB1_TIM6,
    RCC_APB1_TIM7,
    RCC_APB1_WWDG,
    RCC_APB1_SPI2,
    RCC_APB1_SPI3,
    RCC_APB1_USART2,
    RCC_APB1_USART3,
    RCC_APB1_UART4,
    RCC_APB1_UART5,
    RCC_APB1_I2C1,
    RCC_APB1_I2C2,
    RCC_APB1_USB,
    RCC_APB1_CAN,
    RCC_APB1_BKP,
    RCC_APB1_PWR,
    RCC_APB1_DAC
} RCC_APB1Periph;

typedef enum {
    RCC_APB2_AFIO,
    RCC_APB2_GPIOA,
    RCC_APB2_GPIOB,
    RCC_APB2_GPIOC,
    RCC_APB2_GPIOD,
    RCC_APB2_GPIOE,
    RCC_APB2_ADC1,
    RCC_APB2_ADC2,
    RCC_APB2_TIM1,
    RCC_APB2_SPI1,
    RCC_APB2_USART1,
    RCC_APB2_TIM8,
    RCC_APB2_ADC3
} RCC_APB2Periph;

// Function prototypes for RCC functions
void RCC_SetClkSts(RCC_ClkType ClkType, RCC_ClkStatus Stauts); //set clock status
void RCC_SetSysClk(RCC_ClkType ClkType); //set the system clock
void RCC_HSEConfig(RCC_HSE_Config config); //select HSE config
void RCC_PLLConfig(RCC_PLLMul mul, RCC_PLLSrc src);
void RCC_AHBEnableClock(RCC_AHBPeriph peripheral);
void RCC_AHBDisableClock(RCC_AHBPeriph peripheral);
void RCC_APB1EnableClock(RCC_APB1Periph peripheral);
void RCC_APB1DisableClock(RCC_APB1Periph peripheral);
void RCC_APB2EnableClock(RCC_APB2Periph peripheral);
void RCC_APB2DisableClock(RCC_APB2Periph peripheral);




#endif // RCC_INTERFACE_H
