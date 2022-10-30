/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 5/1/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : CLK                   *****************/    
/********************************************************************/
#ifndef CLK_INTERFACE_H
#define CLK_INTERFACE_H


#define     ALT_FUN_U8_IO_CLK          0
#define     GPIO_U8_PORTA_CLK          2
#define     GPIO_U8_PORTB_CLK          3
#define     GPIO_U8_PORTC_CLK          4
#define     GPIO_U8_PORTD_CLK          5
#define     GPIO_U8_PORTE_CLK          6


#define    ADC1_U8_CLK            9
#define    ADC2_U8_CLK            10
#define    TMR1_U8_CLK            11
#define    SPI1_U8_CLK            12
#define    USART1_U8_CLK          14
#define    TMR2_U8_CLK            32
#define    TMR3_U8_CLK            33
#define    TMR4_U8_CLK            34
#define    TMR5_U8_CLK            35
#define    TMR6_U8_CLK            36
#define    TMR7_U8_CLK            37
#define    WWDG_U8_CLK            43
#define    SPI2_U8_CLK            46
#define    SPI3_U8_CLK            47
#define    USART2_U8_CLK          49
#define    USART3_U8_CLK          50
#define    USART4_U8_CLK          51
#define    USART5_U8_CLK          52

#define    I2C1_U8_CLK            53
#define    I2C2_U8_CLK            54
#define    CAN1_U8_CLK            57
#define    CAN2_U8_CLK            58
#define    BKP_U8_CLK             59
#define    PW_U8_CLK              60
#define    DAC_U8_CLK             61


#define   SDIO_U8_CLK                74
#define   FSMC_U8_CLK                72
#define   CRC_U8_CLK                 70
#define   FLITF_U8_CLK               68
#define   SRAM_U8_CLK                66
#define   DMA2_U8_CLK                65
#define   DMA1_U8_CLK                64


 

/*PLL Multiplication factor */
#define       PLL_IN_CLK_X2      0
#define       PLL_IN_CLK_X3      1
#define       PLL_IN_CLK_X4      2
#define       PLL_IN_CLK_X5      3
#define       PLL_IN_CLK_X6      4
#define       PLL_IN_CLK_X7      5
#define       PLL_IN_CLK_X8      6
#define       PLL_IN_CLK_X9      7
#define       PLL_IN_CLK_X10     8
#define       PLL_IN_CLK_X11     9
#define       PLL_IN_CLK_X12     10
#define       PLL_IN_CLK_X13     11
#define       PLL_IN_CLK_X14     12
#define       PLL_IN_CLK_X15     13
#define       PLL_IN_CLK_X16     14




#define    HSI_CLK_INP_DIV_BY_TWO   0
#define    HSE_CLK_INP              1

/*  Clock security system enable*/

#define   CSS_ENABLE           1
#define   CSS_DISABLE          0

/* PLL */
#define  PLL_ON                1
#define  PLL_OFF               0

#define  NOT_BYPASS            0
#define  BYPASSED              1

#define  HSE_OSC_ON            1
#define  HSE_OSC_OFF           0

#define  INTERNAL_8MHZ_OSC_ON  1 
#define  INTERNAL_8MHZ_OSC_OFF 0 

#define  NO_CLK                0
#define  SYS_CLK1              4
#define  HSI_CLK               5
#define  HSE_CLK               6
#define  PLL_CLK_DIV_BY_TWO    7 


#define   HSE_CLK_NOT_DIV      0    
#define   HSE_CLK_DIV_BY_TWO   1


#define   ADC_PRESCALER_DIV_BY_TWO        0
#define   ADC_PRESCALER_DIV_BY_FOUR       1 
#define   ADC_PRESCALER_DIV_BY_SIX        2
#define   ADC_PRESCALER_DIV_BY_EIGHT      3 

#define   HCLK_APB2_PRESCALER_NOT_DIV           0
#define   HCLK_APB2_PRESCALER_DIV_BY_TWO        4
#define   HCLK_APB2_PRESCALER_DIV_BY_FOUR       5
#define   HCLK_APB2_PRESCALER_DIV_BY_EIGHT      6
#define   HCLK_APB2_PRESCALER_DIV_BY_SIXTEEN    7

#define   HCLK_APB1_PRESCALER_NOT_DIV           0
#define   HCLK_APB1_PRESCALER_DIV_BY_TWO        4
#define   HCLK_APB1_PRESCALER_DIV_BY_FOUR       5
#define   HCLK_APB1_PRESCALER_DIV_BY_EIGHT      6
#define   HCLK_APB1_PRESCALER_DIV_BY_SIXTEEN    7

#define   SYS_CLK_PRESCALER_NOT_DIV             0
#define   SYS_CLK_PRESCALER_DIV_BY2             8
#define   SYS_CLK_PRESCALER_DIV_BY4             9
#define   SYS_CLK_PRESCALER_DIV_BY8             10
#define   SYS_CLK_PRESCALER_DIV_BY16            11
#define   SYS_CLK_PRESCALER_DIV_BY64            12
#define   SYS_CLK_PRESCALER_DIV_BY128           13
#define   SYS_CLK_PRESCALER_DIV_BY256           14
#define   SYS_CLK_PRESCALER_DIV_BY512           15

#define   HSI_SYS_CLK            0
#define   HSE_SYS_CLK            1
#define   PLL_SYS_CLK            2



void RCC_voidInit(void);

u8 RCC_u8EnPripheral(u8 Copy_u8PrefralEN);
u8 RCC_u8DisablePripheral(u8 Copy_u8PrefralEN);

#endif
