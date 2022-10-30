/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 10/2/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : SYSTICK_TIMER         *****************/    
/********************************************************************/

#include "DATA_TYPE.h"
#include "STM32f103XX.h"

#include "SYSTICK_TIMER_interface.h"

void sys_tictime_asy(u32 val)
{
	SYST_RVR  = val;
	SYST_CSR |=3;

}
void sys_tictime(u32 val)
{
	SYST_RVR  = val;
	SYST_CSR |=1;

}
u32 ReturnSystickval(void)
{
	return SYST_CVR;
}
void disableSys_tmr(void)
{
	SYST_CSR =0;
}


