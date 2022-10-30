/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 6/2/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : GPIO                  *****************/    
/********************************************************************/



#include "DATA_TYPE.h"
#include "STM32f103XX.h"

#include "GPIO_private.h"
#include "GPIO_interface.h"
#include "GPIO_config.h" 


u8   GPIO_voidInit(PIN_CINFIG *Copy_strPinConfig)
{
	u8 local_statError =STD_TYPES_OK;
    if((Copy_strPinConfig->copy_u8port <=GPIOC_U8_PORT) && (Copy_strPinConfig->copy_u8pinNum <= GPIO_U8_PIN15) && (Copy_strPinConfig->copy_PinMode<=0xf))
  	{
    if(Copy_strPinConfig->copy_u8pinNum<=GPIO_U8_PIN7)
	{
	  if(Copy_strPinConfig->copy_u8port ==GPIOA_U8_PORT)
	  {
		  GPIOA_U32_CRL_REG &=~ (0xf<<(Copy_strPinConfig->copy_u8pinNum)*4);
		  if(Copy_strPinConfig->copy_PinMode == GPIO_U8_INPUT_PULLUP)
		  {
			GPIOA_U32_CRL_REG |=(0x8<<(Copy_strPinConfig->copy_u8pinNum)*4);
            GPIOA_U32_BSRR_REG =(1<<Copy_strPinConfig->copy_u8pinNum); 			
		  }
		  else
		  {

			 GPIOA_U32_CRL_REG |=((Copy_strPinConfig->copy_PinMode)<<(Copy_strPinConfig->copy_u8pinNum)*4); 
		  }
	
	  }
	  else if(Copy_strPinConfig->copy_u8port ==GPIOB_U8_PORT)
	  {
		  GPIOB_U32_CRL_REG &=~ (0xf<<(Copy_strPinConfig->copy_u8pinNum)*4);
		  if(Copy_strPinConfig->copy_PinMode == GPIO_U8_INPUT_PULLUP)
		  {
			GPIOB_U32_CRL_REG |=(0x8<<(Copy_strPinConfig->copy_u8pinNum)*4);
            GPIOB_U32_BSRR_REG =(1<<Copy_strPinConfig->copy_u8pinNum); 			
		  }
		  else
		  {
			 GPIOB_U32_CRL_REG |=((Copy_strPinConfig->copy_PinMode)<<(Copy_strPinConfig->copy_u8pinNum)*4); 
		  }
	
	  }
	  else if(Copy_strPinConfig->copy_u8port ==GPIOC_U8_PORT)
	  {
		  GPIOC_U32_CRL_REG &=~ (0xf<<(Copy_strPinConfig->copy_u8pinNum)*4);
		  if(Copy_strPinConfig->copy_PinMode == GPIO_U8_INPUT_PULLUP)
		  {
			GPIOC_U32_CRL_REG |=(0x8<<(Copy_strPinConfig->copy_u8pinNum)*4);
            GPIOC_U32_BSRR_REG =(1<<Copy_strPinConfig->copy_u8pinNum); 			
		  }
		  else
		  {
			 GPIOC_U32_CRL_REG |=((Copy_strPinConfig->copy_PinMode)<<(Copy_strPinConfig->copy_u8pinNum)*4); 
		  }
	
	  }
	}
    else
    {
    	Copy_strPinConfig->copy_u8pinNum  -= 8;
		if(Copy_strPinConfig->copy_u8port ==GPIOA_U8_PORT)
	    {
	   	GPIOA_U32_CRH_REG &=~ (0xf<<(Copy_strPinConfig->copy_u8pinNum)*4);
		  if(Copy_strPinConfig->copy_PinMode == GPIO_U8_INPUT_PULLUP)
		  {
			GPIOA_U32_CRH_REG |=(0x8<<(Copy_strPinConfig->copy_u8pinNum)*4);
			Copy_strPinConfig->copy_u8pinNum  += 8;
            GPIOA_U32_BSRR_REG =(1<<Copy_strPinConfig->copy_u8pinNum); 			
		  }
		  else
		  {
			 GPIOA_U32_CRH_REG |=((Copy_strPinConfig->copy_PinMode)<<(Copy_strPinConfig->copy_u8pinNum)*4); 
		  }
	
	  }
		else if(Copy_strPinConfig->copy_u8port ==GPIOB_U8_PORT)
	  {
		  GPIOB_U32_CRH_REG &=~ (0xf<<(Copy_strPinConfig->copy_u8pinNum)*4);
		  if(Copy_strPinConfig->copy_PinMode == GPIO_U8_INPUT_PULLUP)
		  {
			GPIOB_U32_CRH_REG =(0x8<<(Copy_strPinConfig->copy_u8pinNum)*4);
			Copy_strPinConfig->copy_u8pinNum  += 8;
            GPIOB_U32_BSRR_REG =(1<<Copy_strPinConfig->copy_u8pinNum); 			
		  }
		  else
		  {
			 GPIOB_U32_CRH_REG |=((Copy_strPinConfig->copy_PinMode)<<(Copy_strPinConfig->copy_u8pinNum)*4); 
		  }
	
	  }
		else if(Copy_strPinConfig->copy_u8port ==GPIOC_U8_PORT)
	  {
		  GPIOC_U32_CRH_REG &=~ (0xf<<(Copy_strPinConfig->copy_u8pinNum)*4);
		  if(Copy_strPinConfig->copy_PinMode == GPIO_U8_INPUT_PULLUP)
		  {
			GPIOC_U32_CRH_REG |=(0x8<<(Copy_strPinConfig->copy_u8pinNum)*4);
			Copy_strPinConfig->copy_u8pinNum  += 8;
            GPIOC_U32_BSRR_REG =(1<<Copy_strPinConfig->copy_u8pinNum); 			
		  }
		  else
		  {
			 GPIOC_U32_CRH_REG |=((Copy_strPinConfig->copy_PinMode)<<(Copy_strPinConfig->copy_u8pinNum)*4); 
		  }
	
	  }
	
	}		
	  
 }
   else
	{
		local_statError =STD_TYPES_NOK;
	}
	return local_statError;
}    


u8   GPIO_u8SetPinValue(u8 copy_u8port,u8 copy_u8pinNum,u8 copy_u8Val)
{
	u8 local_u8StatError  = STD_TYPES_OK;
	if(copy_u8port <= GPIOC_U8_PORT && copy_u8pinNum <= GPIO_U8_PIN15 && copy_u8Val <= GPIO_U8_HIGH)
	{
	  if(copy_u8port == GPIOA_U8_PORT)
	  {
		if(copy_u8Val == GPIO_U8_LOW)
		{
			//copy_u8pinNum +=16;
			GPIOA_U32_ODR_REG = (1<<copy_u8pinNum);
		}
        else if(copy_u8Val == GPIO_U8_HIGH)
        {
		GPIOA_U32_ODR_REG = (1<<copy_u8pinNum);
		}			
	  }
	  
	else if(copy_u8port == GPIOB_U8_PORT)
	  {
		if(copy_u8Val == GPIO_U8_LOW)
		{
			//copy_u8pinNum +=16;
			GPIOB_U32_ODR_REG = (1<<copy_u8pinNum);
		}
        else if(copy_u8Val == GPIO_U8_HIGH)
        {
		GPIOB_U32_ODR_REG = (1<<copy_u8pinNum);
		}			
	  }
	  
	 else if(copy_u8port == GPIOC_U8_PORT)
	  {
		if(copy_u8Val == GPIO_U8_LOW)
		{
			//copy_u8pinNum +=16;
			GPIOC_U32_ODR_REG = (1<<copy_u8pinNum);
		}
        else if(copy_u8Val == GPIO_U8_HIGH)
        {
		GPIOC_U32_ODR_REG = (1<<copy_u8pinNum);
		}			
	  }

	}
	else
	{
		local_u8StatError  = STD_TYPES_NOK;
	}
	return local_u8StatError;              
}

u8   GPIO_u8GetPinValue(u8 copy_u8port,u8 copy_u8pinNum,u8 *get_u8PinVal)
{
  	u8 local_u8StatError  = STD_TYPES_OK;
	if(copy_u8port <= GPIOC_U8_PORT && copy_u8pinNum <= GPIO_U8_PIN15 && get_u8PinVal !=NULL)
	{
		if(copy_u8port == GPIOA_U8_PORT)
		{
		*get_u8PinVal = ((GPIOA_U32_IDR_REG >> copy_u8pinNum)&1);
		}
	    else if(copy_u8port == GPIOB_U8_PORT)
		{
		*get_u8PinVal = ((GPIOB_U32_IDR_REG >> copy_u8pinNum)&1);
		}
	    else if(copy_u8port == GPIOC_U8_PORT)
		{
		*get_u8PinVal = ((GPIOC_U32_IDR_REG >> copy_u8pinNum)&1);
		}		
	}	
	else
	{
		local_u8StatError  = STD_TYPES_NOK;
	}
	return local_u8StatError;
}

u8 GPIO_u8Setport(u8 copy_u8port,u16 copy_u8Val)
{
	  	u8 local_u8StatError  = STD_TYPES_OK;
	if(copy_u8port <= GPIOC_U8_PORT && copy_u8Val <=0xffff)
	{
	  if(copy_u8port == GPIOA_U8_PORT)
	  {
	   GPIOA_U32_ODR_REG = 	copy_u8Val;
	  }
	 else if(copy_u8port == GPIOB_U8_PORT)
	  {
	   GPIOB_U32_ODR_REG = 	copy_u8Val;
	  }
	 else if(copy_u8port == GPIOC_U8_PORT)
	  {
	   GPIOC_U32_ODR_REG = 	copy_u8Val;
	  }
	}
	else
	{
		local_u8StatError  = STD_TYPES_NOK;
	}
	return local_u8StatError;	
}


u8   GPIO_u8GetPORT(u8 copy_u8port,u16 *get_u8PortVal)
{
	u8 local_u8StatError  = STD_TYPES_OK;
	if(copy_u8port <= GPIOC_U8_PORT && get_u8PortVal !=NULL)
	{
	  if(copy_u8port == GPIOA_U8_PORT)
	  {
	   *get_u8PortVal =(u16)GPIOA_U32_IDR_REG;
	  }
	 else if(copy_u8port == GPIOB_U8_PORT)
	  {
	   *get_u8PortVal =(u16)GPIOB_U32_IDR_REG;
	  }
	 else if(copy_u8port == GPIOC_U8_PORT)
	  {
	   *get_u8PortVal =(u16)GPIOC_U32_IDR_REG;
	  }
	}
	else
	{
		local_u8StatError  = STD_TYPES_NOK;
	}
	return local_u8StatError;	

}

u8   GPIO_u8TogPin  (u8 copy_u8port,u8 copy_u8pinNum)
{
	u8 local_u8StatError  = STD_TYPES_OK;
	if(copy_u8port <= GPIOC_U8_PORT && copy_u8pinNum <= GPIO_U8_PIN15)
	{
	  if(copy_u8port == GPIOA_U8_PORT)
	  {
	   GPIOA_U32_ODR_REG ^=(1<<copy_u8pinNum);
	  }
	 else if(copy_u8port == GPIOB_U8_PORT)
	  {
	   GPIOB_U32_ODR_REG ^=(1<<copy_u8pinNum);
	  }
	 else if(copy_u8port == GPIOC_U8_PORT)
	  {
	   GPIOC_U32_ODR_REG ^=(1<<copy_u8pinNum);
	  }
	}
	else
	{
		local_u8StatError  = STD_TYPES_NOK;
	}
	return local_u8StatError;	
 }








