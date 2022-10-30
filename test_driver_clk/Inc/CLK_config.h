/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 5/1/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : CLK                   *****************/    
/********************************************************************/
#ifndef CLK_CONFIG_H
#define CLK_CONFIG_H
/* PLL
  option : 1- PLL_ON
           2- PLL_OFF
*/
#define ENABLE_PLL  PLL_OFF

/*  Clock security system enable
    Option : 1- CSS_ENABLE
             2- CSS_DISABLE 	

*/
#define CONTROL_CSS   CSS_DISABLE

/*External high-speed clock bypass
 options   : 1- NOT_BYPASS
           : 2- BYPASSED
*/
#define EXT_HSEBYP  NOT_BYPASS

/*High Speed External Clock
*  Options : 1- HSE_OSC_ON
*            2- HSE_OSC_OFF
*/

#define  HIGH_SPEED_EXT_CLK  HSE_OSC_OFF

/*  Internal high-speed clock enable
*    Options 1- INTERNAL_8MHZ_OSC_ON
*            2- INTERNAL_8MHZ_OSC_OFF 
*/  
#define INTERNANAL_HSP    INTERNAL_8MHZ_OSC_ON




/*RCC_CFGR_REG Configuuration*/


/* Microcontroller clock output
*  options : 1- NO_CLK
             2- SYS1_CLK
			 3- HSI_CLK
             4- HSE_CLK
             5- PLL_CLK_DIV_BY_TWO																						 			 
*/

#define MIC_CLK_OUT  NO_CLK

/* PLL multiplication factor
*   options   : 1- PLL_IN_CLK_X2
                2- PLL_IN_CLK_X3
				3- PLL_IN_CLK_X4
				4- PLL_IN_CLK_X5
				5- PLL_IN_CLK_X6
				6- PLL_IN_CLK_X7
				7- PLL_IN_CLK_X8
				8- PLL_IN_CLK_X9
				9- PLL_IN_CLK_X10
				10-PLL_IN_CLK_X11
				11-PLL_IN_CLK_X12
				12-PLL_IN_CLK_X13
                13-PLL_IN_CLK_X14
				14-PLL_IN_CLK_X15
				15-PLL_IN_CLK_X16
						
*/

#define   PLL_MUL_FACTOR      PLL_IN_CLK_X8

/*HSE divider for PLL entry
 Options  : 1- HSE_CLK_NOT_DIV
            2- HSE_CLK_DIV_BY_TWO  
*/

#define  HSE_DIV_FACTOR    HSE_CLK_NOT_DIV

/*  PLL entry clock source
 options  :  1- HSI_CLK_INP_DIV_BY_TWO
             2- HSE_CLK_INP
*/
#define   PLL_ENTRY_CLK_SOURCE   HSI_CLK_INP_DIV_BY_TWO

/*  ADC prescaler
 options   1- ADC_PRESCALER_DIV_BY_TWO
           2- ADC_PRESCALER_DIV_BY_FOUR
		   3- ADC_PRESCALER_DIV_BY_SIX
		   4- ADC_PRESCALER_DIV_BY_EIGHT
*/
#define ADC_PRESCALER  ADC_PRESCALER_DIV_BY_FOUR

/*  APB2 high speed prescaler
 options   1- HCLK_APB2_PRESCALER_NOT_DIV       
           2- HCLK_APB2_PRESCALER_DIV_BY_TWO    
           3- HCLK_APB2_PRESCALER_DIV_BY_FOUR   
		   4- HCLK_APB2_PRESCALER_DIV_BY_EIGHT  
		   5- HCLK_APB2_PRESCALER_DIV_BY_SIXTEEN
*/

#define  APB2_HIGH_SPEED_PRESCALER   HCLK_APB2_PRESCALER_NOT_DIV


/*  APB1 Low speed prescaler
 options   1- HCLK_APB1_PRESCALER_NOT_DIV       
           2- HCLK_APB1_PRESCALER_DIV_BY_TWO    
           3- HCLK_APB1_PRESCALER_DIV_BY_FOUR   
		   4- HCLK_APB1_PRESCALER_DIV_BY_EIGHT  
		   5- HCLK_APB1_PRESCALER_DIV_BY_SIXTEEN
*/

#define  APB1_LOW_SPEED_PRESCALER   HCLK_APB1_PRESCALER_NOT_DIV


/*  AHB prescaler
 options   1- SYS_CLK_PRESCALER_NOT_DIV       
           2- SYS_CLK_PRESCALER_DIV_BY2    
           3- SYS_CLK_PRESCALER_DIV_BY4   
		   4- SYS_CLK_PRESCALER_DIV_BY8  
		   5- SYS_CLK_PRESCALER_DIV_BY16    
           6- SYS_CLK_PRESCALER_DIV_BY64   
		   7- SYS_CLK_PRESCALER_DIV_BY128  
		   8- SYS_CLK_PRESCALER_DIV_BY256
		   9  SYS_CLK_PRESCALER_DIV_BY512		
*/

#define   AHP_PRESCALER    SYS_CLK_PRESCALER_NOT_DIV 


/*System clock switch
 Options   : 1- HSI_SYS_CLK
             2- HSE_SYS_CLK
			 3- PLL_SYS_CLK
*/
#define   SYS_CLK     HSI_SYS_CLK




#endif
