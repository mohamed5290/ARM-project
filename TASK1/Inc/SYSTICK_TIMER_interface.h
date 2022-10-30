/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 10/2/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : SYSTACK_TIMER         *****************/    
/********************************************************************/

#ifndef SYSTICK_TIMER_INTERFACE_H
#define SYSTICK_TIMER_INTERFACE_H

void sys_tictime(u32 val);
u32 ReturnSystickval(void);
void disableSys_tmr(void);

#endif 
