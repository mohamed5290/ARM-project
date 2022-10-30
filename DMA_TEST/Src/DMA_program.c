/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 15/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : DMA                   *****************/    
/********************************************************************/

#include "DATA_TYPE.h"
#include "STM32f103XX.h"


#include "DMA_interface.h"

static void(*pf[7])(void) ={NULL,NULL,NULL,NULL,NULL,NULL,NULL};
void DMA_voidInit(const Channel_Config * copy_strChConfig)
{
  if(copy_strChConfig->Mom_To_Mom == Memory_To_Memory_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<14);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<14);
  }
  
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (3<<12);
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (copy_strChConfig->Ch_Pr<<12);

  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (3<<10);
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (copy_strChConfig->Mom_Size<<10);
 
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (3<<8);
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (copy_strChConfig->Pri_Size<<8);

  
  if(copy_strChConfig->Mom_Inc == MEMORY_INC_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<7);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<7);
  }
  
  if(copy_strChConfig->Pri_Inc == PERIPHERAL_INC_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<6);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<6);
  }
  
  if(copy_strChConfig->Circ == CIRCULAR_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<5);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<5);
  }  
    
  if(copy_strChConfig->DATA_TX == MEMORY)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<4);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<4);
  }
  
  if(copy_strChConfig->TREI == TEI_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<3);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<3);
  }  
  
  if(copy_strChConfig->HTI == HTI_EN)
  {	                                                                         
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<2);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<2);
  }   
  
  if(copy_strChConfig->CTI == CTI_EN)
  {	                                                                         
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<1);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<1);
  }  
  if(copy_strChConfig->Ch_St == Channel_EN)
  {	                                                                         
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<0);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<0);
  } 
  
}


void  DMA_voidChannelStart(Channel_Config channel_strStart)
{
	DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<0);

	DMA->channel[channel_strStart->Ch_Num].CPAR  = &channel_strStart->copy_u32AddressSource;
	DMA->channel[channel_strStart->Ch_Num].CMAR  = &channel_strStart->copy_u32AddressDestintion;
    DMA->channel[channel_strStart->Ch_Num].CNDTR = channel_strStart->copy_u16NumDataTx;

    DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<0);

}

u8 DMA_voidCallBackFunCh1(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
u8 DMA_voidCallBackFunCh2(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
u8 DMA_voidCallBackFunCh3(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
u8 DMA_voidCallBackFunCh4(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
u8 DMA_voidCallBackFunCh5(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
u8 DMA_voidCallBackFunCh6(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[0] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
u8 DMA_voidCallBackFunCh7(void(*fun)(void))
{
	u8 local_stateError = STD_TYPES_OK;
	if(fun !=NULL)
	{
  	pf[6] = &fun;
	}
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}

void DMA1_Channel1_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[0] !=NULL)
    {
    	pf[0]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
void DMA1_Channel2_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[1] !=NULL)
    {
    	pf[1]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
void DMA1_Channel3_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[2] !=NULL)
    {
    	pf[2]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
void DMA1_Channel4_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[3] !=NULL)
    {
    	pf[3]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
void DMA1_Channel5_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[4] !=NULL)
    {
    	pf[4]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
void DMA1_Channel6_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[5] !=NULL)
    {
    	pf[5]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}

}
void DMA1_Channel7_IRQHandler(void)
{
	u8 local_stateError = STD_TYPES_OK;
    if(pf[6] !=NULL)
    {
    	pf[6]();
    }
	else
	{
		local_stateError = STD_TYPES_NOK;
	}
}

