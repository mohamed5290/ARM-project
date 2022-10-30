/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 14/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : EXTI                  *****************/    
/********************************************************************/
#include "DATA_TYPE.h"
#include "STM32f103XX.h"
#include "EXTI_interface.h"

static void(*pf[20])(void) = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
u8 EXTI_u8Init(EXT_PIN_CONFIG *copy_pstr)
{
	u8 local_u8StateError = STD_TYPES_OK;
	u8 Local_u8pinNUM = copy_pstr->PIN_E ;
	if(copy_pstr->PORT_E<=2  && copy_pstr->PIN_E <=15 && pf !=NULL )
	{
    	if(copy_pstr->PIN_E <=3)
		{
		   if(copy_pstr->PORT_E == PORTA){
		  ALFIO->EXTI1 &=~ (0xf<<copy_pstr->PIN_E * 4); 	   
		  ALFIO-> EXTI1 |= (0x0<<(copy_pstr->PIN_E * 4));
		   }
		  else if(copy_pstr->PORT_E == PORTB){
		  ALFIO->EXTI1 &=~ (0xf<<copy_pstr->PIN_E * 4); 	  
		  ALFIO-> EXTI1 |= (0x1<<(copy_pstr->PIN_E * 4));
		   }
		  else if(copy_pstr->PORT_E == PORTC){
		  ALFIO->EXTI1 &=~ (0xf<<copy_pstr->PIN_E * 4);	  
		  ALFIO-> EXTI1 |= (0x2<<(copy_pstr->PIN_E * 4));
		   }		   
		}
		else if(copy_pstr->PIN_E>3 && copy_pstr->PIN_E<=7)
		{
			Local_u8pinNUM -=4;
		   if(copy_pstr->PORT_E == PORTA){
		   ALFIO->EXTI2 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI2 |= (0x0<<(Local_u8pinNUM * 4));
		   }
		   else if(copy_pstr->PORT_E == PORTB){
		   ALFIO->EXTI2 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI2 |=(0x1<<(Local_u8pinNUM * 4));
		   }
		   else if(copy_pstr->PORT_E == PORTC){
		   ALFIO->EXTI2 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI2 |=(0x2<<(Local_u8pinNUM * 4));
		   }			
		}
		else if(copy_pstr->PIN_E>7 && copy_pstr->PIN_E<=11)
		{
			Local_u8pinNUM -=8;
		   if(copy_pstr->PORT_E == PORTA){
		   ALFIO->EXTI3 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI3 |= (0x0<<(Local_u8pinNUM * 4));
		   }
		   else if(copy_pstr->PORT_E == PORTB){
          ALFIO->EXTI3 &=~ (0xf<<Local_u8pinNUM * 4);
		  ALFIO->EXTI3 |= (0x1<<(Local_u8pinNUM * 4));
		   }
		   else if(copy_pstr->PORT_E == PORTC){
		   ALFIO->EXTI3 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI3 |= (0x2<<(Local_u8pinNUM * 4));
		   }			
		}		
		else if(copy_pstr->PIN_E>11 && copy_pstr->PIN_E<=15)
		{
			Local_u8pinNUM -=12;
		   if(copy_pstr->PORT_E == PORTA){
		   ALFIO->EXTI4 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI4 |= (0x0<<(Local_u8pinNUM * 4));
		   }
		  else if(copy_pstr->PORT_E == PORTB){
		   ALFIO->EXTI4 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO-> EXTI4 |= (0x1<<(Local_u8pinNUM * 4));
		   }
		  else if(copy_pstr->PORT_E == PORTC){
		   ALFIO->EXTI4 &=~ (0xf<<Local_u8pinNUM * 4);
		   ALFIO->EXTI4 |= (0x2<<(Local_u8pinNUM * 4));
		   }			
		}

	}
	else
	{
	local_u8StateError = STD_TYPES_NOK;
	}		
	return local_u8StateError;
}

u8 EXTI_u8Enable(u8 copy_u8exti,u8 copy_u8TriggerStaet)
{
	u8 local_u8StateError = STD_TYPES_OK;
	if(copy_u8exti<=EXTI19_U8_PRIF)
	{
	  EXTI->IMR |= (1<<copy_u8exti)	;
	  if(copy_u8TriggerStaet == EN_RISING_TRIGGER)
      {
        EXTI->PTSR |=(1<<copy_u8exti);
	  }
	  else if(copy_u8TriggerStaet == DE_RISING_TRIGGER)
      {
        EXTI->PTSR &=~ (1<<copy_u8exti);
	  }

	  else if(copy_u8TriggerStaet == EN_FALLING_TRIGGER)
      {
        EXTI->FTSR |=(1<<copy_u8exti);
	  }
	  else if(copy_u8TriggerStaet == DE_FALLING_TRIGGER)
      {
        EXTI->FTSR &=~(1<<copy_u8exti);
	  } 
	}
		else
	{
	local_u8StateError = STD_TYPES_NOK;
	}		
	return local_u8StateError;
}
u8 EXTI_u8disable(u8 copy_u8exti)
{
	u8 local_u8StateError = STD_TYPES_OK;
	if(copy_u8exti<=EXTI19_U8_PRIF)
	{
	  EXTI->IMR &=~ (1<<copy_u8exti);
     	  
	}
	else
	{
	local_u8StateError = STD_TYPES_NOK;
	}		
	return local_u8StateError;
}
u8 EXTI_u8ClearFlag(u8 copy_u8exti)
{
	u8 local_u8StateError = STD_TYPES_OK;
    if(copy_u8exti<=EXTI19_U8_PRIF)
	{
	EXTI->PR |=(1<<copy_u8exti);
    }
	else
	{
	local_u8StateError = STD_TYPES_NOK;
	}		
	return local_u8StateError;	
	
}

u8 EXTI_voidCallBackFunEXTI0(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI1(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[1] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI2(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[2] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI3(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[3] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI4(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[4] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI5(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[5] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI6(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[6] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI7(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[7] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI8(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[8] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI9(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[9] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI10(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[10] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI11(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[11] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI12(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[12] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI13(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[13] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}

u8 EXTI_voidCallBackFunEXTI14(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[14] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
	  return  local_stateError;
}
u8 EXTI_voidCallBackFunEXTI15(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[15] = fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
  return  local_stateError;
}

void EXTI0_IRQHandler(void)
{
	if(pf[0]!=NULL)
	{
	  EXTI->PR |=(1<<0);
	  pf[0]();
	}

}

void EXTI1_IRQHandler(void)
{
	if(pf[1]!=NULL)
	{
	  EXTI->PR |=(1<<1);
	  pf[1]();
	}

}

void EXTI2_IRQHandler(void)
{
	if(pf[2]!=NULL)
	{
	  EXTI->PR |=(1<<2);
	  pf[2]();
	}

}
void EXTI3_IRQHandler(void)
{
	if(pf[3]!=NULL)
	{
	  EXTI->PR |=(1<<3);
	  pf[3]();
	}

}
void EXTI4_IRQHandler(void)
{
	if(pf[4]!=NULL)
	{
	  EXTI->PR |=(1<<4);
	  pf[4]();
	}

}



void EXTI9_5_IRQHandler(void)
{
	if(((EXTI->SWIER>>5)&1) == 1)
	{
		if(pf[5]!=NULL)
		{
		  EXTI->PR |=(1<<5);
		  pf[5]();
		}
	}
	if(((EXTI->SWIER>>6)&1) == 1)
	{
		if(pf[6]!=NULL)
		{
		  EXTI->PR |=(1<<6);
		  pf[6]();
		}
	}
	if(((EXTI->SWIER>>7)&1) == 1)
	{
		if(pf[7]!=NULL)
		{
		  EXTI->PR |=(1<<7);
		  pf[7]();
		}
	}
	if(((EXTI->SWIER>>8)&1) == 1)
	{
		if(pf[8]!=NULL)
		{
		  EXTI->PR |=(1<<8);
		  pf[8]();
		}
	}
	if(((EXTI->SWIER>>9)&1) == 1)
	{
		if(pf[9]!=NULL)
		{
		  EXTI->PR |=(1<<9);
		  pf[9]();
		}
	}
}

void EXTI15_10_IRQHandler(void)
{
	if(((EXTI->SWIER>>10)&1) == 1)
	{
		if(pf[10]!=NULL)
		{
		  EXTI->PR |=(1<<10);
		  pf[10]();
		}
	}
	if(((EXTI->SWIER>>11)&1) == 1)
	{
		if(pf[11]!=NULL)
		{
		  EXTI->PR |=(1<<11);
		  pf[11]();
		}
	}
	if(((EXTI->SWIER>>12)&1) == 1)
	{
		if(pf[12]!=NULL)
		{
		  EXTI->PR |=(1<<12);
		  pf[12]();
		}
	}
	if(((EXTI->SWIER>>13)&1) == 1)
	{
		if(pf[13]!=NULL)
		{
		  EXTI->PR |=(1<<13);
		  pf[13]();
		}
	}
	if(((EXTI->SWIER>>14)&1) == 1)
	{
		if(pf[14]!=NULL)
		{
		  EXTI->PR |=(1<<14);
		  pf[14]();
		}
	}
	if(((EXTI->SWIER>>15)&1) == 1)
	{
		if(pf[15]!=NULL)
		{
		  EXTI->PR |=(1<<15);
		  pf[15]();
		}
	}
}




