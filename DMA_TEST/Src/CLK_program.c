/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 5/2/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : LCD                   *****************/    
/********************************************************************/

#include  "DATA_TYPE.h"

#include "CLK_private.h"
#include "CLK_interface.h"
#include "CLK_config.h" 


void RCC_voidInit(void)
{
  RCC_REG      = ((INTERNANAL_HSP) | (HIGH_SPEED_EXT_CLK<<16) | (EXT_HSEBYP<<18) | (CONTROL_CSS<<19) | (ENABLE_PLL<<24));
  
  RCC_CFGR_REG = ((SYS_CLK) | (AHP_PRESCALER<<4) |(APB1_LOW_SPEED_PRESCALER<<8) |(APB2_HIGH_SPEED_PRESCALER<<11)|
                 (ADC_PRESCALER<<14) | (PLL_ENTRY_CLK_SOURCE<<16)|(HSE_DIV_FACTOR<<17) | (PLL_MUL_FACTOR<<18) | (MIC_CLK_OUT<<24));
	
	
  	
}


u8 RCC_u8EnPripheral(u8 Copy_u8PrefralEN)
{
	u8 Local_u8ST_ERROR =STD_TYPES_OK;
	if(Copy_u8PrefralEN<32)
	{
		RCC_APB2EN_REG |= (1<<Copy_u8PrefralEN);
	}
	if(Copy_u8PrefralEN >= 32 && Copy_u8PrefralEN <64)
	{
		Copy_u8PrefralEN  -=32;
		RCC_APB1EN_REG |=(1<<Copy_u8PrefralEN);
	}
	if(Copy_u8PrefralEN >=64)
	{
		Copy_u8PrefralEN  -=64;
		RCC_AHPEN_REG |=(1<<Copy_u8PrefralEN);
	}
	else
	{
		Local_u8ST_ERROR = STD_TYPES_NOK;
	}
	return Local_u8ST_ERROR;
	
}
u8 RCC_u8DisablePripheral(u8 Copy_u8PrefralEN)
{
	u8 Local_u8ST_ERROR =STD_TYPES_OK;
	if(Copy_u8PrefralEN<32)
	{
		RCC_APB2EN_REG &=~ (1<<Copy_u8PrefralEN);
	}
	else if(Copy_u8PrefralEN >= 32 && Copy_u8PrefralEN <64)
	{
		Copy_u8PrefralEN  -=32;
		RCC_APB1EN_REG &=~ (1<<Copy_u8PrefralEN);
	}
		else if(Copy_u8PrefralEN >= 64 && Copy_u8PrefralEN <75)
	{
		Copy_u8PrefralEN  -=64;
		RCC_AHPEN_REG &=~ (1<<Copy_u8PrefralEN);
	}
	else
	{
		Local_u8ST_ERROR = STD_TYPES_NOK;
	}
	return Local_u8ST_ERROR;
	
}
