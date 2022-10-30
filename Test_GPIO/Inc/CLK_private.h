/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 5/1/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : CLK                   *****************/    
/********************************************************************/
#ifndef CLK_PRIVATE_H
#define CLK_PRIVATE_H



#define  RCC_BASE_ADDRESS         0x40021000UL
#define  RCC_CFGR_OFFSET          0x04
#define  RCC_APB2EN_OFFSET        0x18
#define  RCC_APB1EN_OFFSET        0x1C
#define  RCC_AHPEN_OFFSET         0x14

#define  RCC_APB2EN_REG         *((volatile u32*)((RCC_BASE_ADDRESS) + (RCC_APB2EN_OFFSET)))
#define  RCC_APB1EN_REG         *((volatile u32*)((RCC_BASE_ADDRESS) + (RCC_APB1EN_OFFSET)))
#define  RCC_AHPEN_REG          *((volatile u32*)((RCC_BASE_ADDRESS) + (RCC_AHPEN_OFFSET)))
#define  RCC_REG                *((volatile u32*)(RCC_BASE_ADDRESS))
#define  RCC_CFGR_REG           *((volatile u32*)((RCC_BASE_ADDRESS) + (RCC_CFGR_OFFSET)))



     
#endif 
