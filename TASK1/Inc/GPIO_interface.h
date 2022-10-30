/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 6/2/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : GPIO                  *****************/    
/********************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#define    GPIOA_U8_PORT        0
#define    GPIOB_U8_PORT        1
#define    GPIOC_U8_PORT        2


#define    GPIO_U8_PIN0         0 
#define    GPIO_U8_PIN1         1
#define    GPIO_U8_PIN2         2
#define    GPIO_U8_PIN3         3
#define    GPIO_U8_PIN4         4
#define    GPIO_U8_PIN5         5
#define    GPIO_U8_PIN6         6
#define    GPIO_U8_PIN7         7
#define    GPIO_U8_PIN8         8
#define    GPIO_U8_PIN9         9
#define    GPIO_U8_PIN10        10
#define    GPIO_U8_PIN11        11
#define    GPIO_U8_PIN12        12
#define    GPIO_U8_PIN13        13
#define    GPIO_U8_PIN14        14
#define    GPIO_U8_PIN15        15




#define  	 GPIO_U8_INPUT_FLOATING                0x4 
#define  	 GPIO_U8_INPUT_PULLUP                  0xC
#define  	 GPIO_U8_INPUT_PULLDOWN                0x8 
#define  	 GPIO_U8_ANALOG                        0x0
#define  	 GPIO_U8_OUTPUT_OPEN_DRAIN_10MHZ       0x5
#define  	 GPIO_U8_OUTPUT_PUSH_PULL_10MHZ        0x1
#define  	 GPIO_U8_ALT_FUN_PUSH_PULL_10MHZ       0x9
#define  	 GPIO_U8_ALT_FUN_OPEN_DRAIN_10MHZ      0xD 
#define  	 GPIO_U8_OUTPUT_OPEN_DRAIN_2MHZ        0x6
#define  	 GPIO_U8_OUTPUT_PUSH_PULL_2MHZ         0x2
#define  	 GPIO_U8_ALT_FUN_PUSH_PULL_2MHZ        0xA
#define  	 GPIO_U8_ALT_FUN_OPEN_DRAIN_2MHZ       0xE
#define  	 GPIO_U8_OUTPUT_OPEN_DRAIN_50MHZ       0x7
#define  	 GPIO_U8_OUTPUT_PUSH_PULL_50MHZ        0x3
#define  	 GPIO_U8_ALT_FUN_PUSH_PULL_50MHZ       0xB
#define  	 GPIO_U8_ALT_FUN_OPEN_DRAIN_50MHZ      0xF
	




#define    GPIO_U8_HIGH         1
#define    GPIO_U8_LOW          0



typedef struct
{
	u8 copy_u8port;
	u8 copy_u8pinNum;
	u8 copy_PinMode;

}PIN_CINFIG;


u8   GPIO_voidInit        (PIN_CINFIG  *Copy_strPinConfig);
u8   GPIO_u8SetPinValue   (u8          copy_u8port, u8   copy_u8pinNum,u8    copy_u8Pinmode);
u8   GPIO_u8GetPinValue   (u8          copy_u8port, u8   copy_u8pinNum,u8    *get_u8PinVal);
u8   GPIO_u8Setport       (u8          copy_u8port, u16  copy_u8Val);
u8   GPIO_u8GetPORT       (u8          copy_u8port, u16  *get_u8PortVal); 
u8   GPIO_u8TogPin        (u8          copy_u8port, u8    copy_u8pinNum);
#endif
