/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 12/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : NVIC                  *****************/    
/********************************************************************/
#ifndef  NVIC_INTERFACE_H
#define  NVIC_INTERFACE_H


#define  GROUP_U8_PRIORITY_ZERO        0
#define  GROUP_U8_PRIORITY_ONE         1
#define  GROUP_U8_PRIORITY_TWO         2
#define  GROUP_U8_PRIORITY_THREE       3
                                       
#define  SUB_U8_PRIORITY_ZERO          0
#define  SUB_U8_PRIORITY_ONE           1
#define  SUB_U8_PRIORITY_TWO           2
#define  SUB_U8_PRIORITY_THREE         3

#define  BIT0_SUB_4BIT_GROUP       0x05FA0300
#define  BIT1_SUB_3BIT_GROUP       0x05FA0400
#define  BIT2_SUB_2BIT_GROUP       0x05FA0500
#define  BIT3_SUB_1BIT_GROUP       0x05FA0600
#define  BIT4_SUB_0BIT_GROUP       0x05FA0700

   

void  NVIC_u8u8Setpending         (u8 copy_u8IRQ);
void  NVIC_u8u8Clearpending       (u8 copy_u8IRQ);
void  NVIC_u8EnableInterrupt      (u8 copy_u8IRQ);
void  NVIC_u8DisableInterrupt     (u8 copy_u8IRQ);
u8    NVIC_u8InterruptActive      (u8 *Ret_u8Iinterruptactive);
u8    SCB_u8InitPriortyField      (u32 copy_u8NumBitGroupAndSubPriorty);

void NVIC_u8Setpriorty             (u8 copy_u8IRQNum,u8 copy_u8GroupPriorty,u8 copy_u8SubPriorty);


#endif
