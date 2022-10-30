/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 14/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : EXTI                  *****************/    
/********************************************************************/


#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H
enum PORT
{
	   PORTA,
	   PORTB,
	   PORTC
};



enum PIN
{
	   PIN0 = 0,
	   PIN1,
	   PIN2,
	   PIN3,
	   PIN4,
	   PIN5,
	   PIN6,
	   PIN7,
	   PIN8,
	   PIN9,
	   PIN10,
	   PIN11,
	   PIN12,
	   PIN13,
	   PIN14,
	   PIN15
	   
};

typedef struct
{
	enum PORT PORT_E;
	enum PIN  PIN_E;
}EXT_PIN_CONFIG;

#define    DE_RISING_TRIGGER     0
#define    EN_RISING_TRIGGER     1
#define    DE_FALLING_TRIGGER    2
#define    EN_FALLING_TRIGGER    3

#define     EXTI0_U8_PRIF          0
#define     EXTI1_U8_PRIF          1
#define     EXTI2_U8_PRIF          2
#define     EXTI3_U8_PRIF          3
#define     EXTI4_U8_PRIF          4
#define     EXTI5_U8_PRIF          5
#define     EXTI6_U8_PRIF          6
#define     EXTI7_U8_PRIF          7
#define     EXTI8_U8_PRIF          8
#define     EXTI9_U8_PRIF          9
#define     EXTI10_U8_PRIF         10
#define     EXTI11_U8_PRIF         11
#define     EXTI12_U8_PRIF         12
#define     EXTI13_U8_PRIF         13
#define     EXTI14_U8_PRIF         14
#define     EXTI15_U8_PRIF         15
#define     EXTI16_U8_PRIF         16
#define     EXTI17_U8_PRIF         17
#define     EXTI18_U8_PRIF         18
#define     EXTI19_U8_PRIF         19








u8 EXTI_u8Init(EXT_PIN_CONFIG *copy_pstr);

u8 EXTI_u8Enable(u8 copy_u8exti,u8 copy_u8TriggerStaet);

u8 EXTI_u8disable(u8 copy_u8exti);

u8 EXTI_u8ClearFlag(u8 copy_u8exti);

u8 EXTI_voidCallBackFunEXTI0(void(*fun)(void));

u8 EXTI_voidCallBackFunEXTI1(void(*fun)(void));

u8 EXTI_voidCallBackFunEXTI2(void(*fun)(void));

u8 EXTI_voidCallBackFunEXTI3(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI4(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI5(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI6(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI7(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI8(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI9(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI10(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI11(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI12(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI13(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI14(void(*fun)(void));
u8 EXTI_voidCallBackFunEXTI15(void(*fun)(void));


#endif 
