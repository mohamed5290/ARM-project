/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 12/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : NVIC                  *****************/    
/********************************************************************/

#include "DATA_TYPE.h"
#include "STM32f103XX.h"

#include "NVIC_private.h"
#include "NVIC_interface.h"
#include "NVIC_config.h" 

void NVIC_u8EnableInterrupt(u8 copy_u8IRQ)
{

	u8 local_u8RegNum,local_u8BitNum;
	local_u8RegNum = copy_u8IRQ /32;
	local_u8BitNum =copy_u8IRQ%32;
	NVIC->ISER[local_u8RegNum]= (1<<local_u8BitNum);
}
void NVIC_u8DisableInterrupt(u8 copy_u8IRQ)
{

	u8 local_u8RegNum,local_u8BitNum;
	local_u8RegNum = copy_u8IRQ /32;
	local_u8BitNum =copy_u8IRQ%32;
	NVIC->ICER[local_u8RegNum]= (1<<local_u8BitNum);
}

void NVIC_u8u8Setpending(u8 copy_u8IRQ)
{
	u8 local_u8RegNum,local_u8BitNum;
	local_u8RegNum = copy_u8IRQ /32;
	local_u8BitNum =copy_u8IRQ%32;
	NVIC->ISPR[local_u8RegNum]= (1<<local_u8BitNum);
}

void NVIC_u8u8Clearpending(u8 copy_u8IRQ)
{
	u8 local_u8RegNum,local_u8BitNum;
	local_u8RegNum = copy_u8IRQ /32;
	local_u8BitNum =copy_u8IRQ%32;
	NVIC->ICPR[local_u8RegNum]= (1<<local_u8BitNum);
}
u8 NVIC_u8InterruptActive(u8 *Ret_u8Iinterruptactive)
{

	u8 i, local_u8state = STD_TYPES_OK;;
	u32 local_u32INT;
	if(Ret_u8Iinterruptactive !=NULL)
	{

	if(NVIC->IABR[0] !=0)
	{
	  local_u32INT = NVIC->IABR[0];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
	  }
     return i; 	  
	}
	
	 else if(NVIC->IABR[1] !=0)
	{
	  local_u32INT = NVIC->IABR[7];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+32);     	  
	}
	 else if(NVIC->IABR[2] !=0)
	{
	  local_u32INT = NVIC->IABR[2];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+64);     	  
	}
	 else if(NVIC->IABR[3] !=0)
	{
	  local_u32INT = NVIC->IABR[3];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+96);		
	}
	 else if(NVIC->IABR[4] !=0)
	{
	  local_u32INT = NVIC->IABR[4];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+128);     	  
	}
	 else if(NVIC->IABR[5] !=0)
	{
	  local_u32INT = NVIC->IABR[5];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+160);		
	}	
	 else if(NVIC->IABR[6] !=0)
	{
		
	  local_u32INT = NVIC->IABR[6];	
      for(i=0;i<32;i++)
	  {
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+192);     	  
	}
	 else if(NVIC->IABR[7] !=0)
	{
	  local_u32INT = NVIC->IABR[7];	
      for(i=0;i<32;i++)
	  { 
	  local_u32INT = (local_u32INT >> 1);
        if(local_u32INT == 1)
		{
		  break;	
		} 
 	  }
    	return (i+224);     	  
	}	

  }
   else 
   {
	 local_u8state = STD_TYPES_NOK;  
   }
   return local_u8state;
}


u8 SCB_u8InitPriortyField(u32 copy_u8NumBitGroupAndSubPriorty)
{ 
   u8 local_u8state = STD_TYPES_OK;
   if((copy_u8NumBitGroupAndSubPriorty<BIT0_SUB_4BIT_GROUP) && (copy_u8NumBitGroupAndSubPriorty > BIT4_SUB_0BIT_GROUP))
   {
   NVIC_AIRCR_REG =	copy_u8NumBitGroupAndSubPriorty;
   }
   else 
   {
	 local_u8state = STD_TYPES_NOK;  
   }
   return local_u8state;
}
void NVIC_u8Setpriorty(u8 copy_u8IRQNum,u8 copy_u8GroupPriorty,u8 copy_u8SubPriorty)
{

	NVIC->IPR[copy_u8IRQNum]= (copy_u8GroupPriorty<<6)|(copy_u8SubPriorty<<4);	
	
	
}
