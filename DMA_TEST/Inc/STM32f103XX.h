/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 6/2/2021              *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : GPIO                  *****************/    
/********************************************************************/

#ifndef STM32F103XX_H
#define STM32F103XX_H


#define  ADC3_BASE_ADDRESS     0x40013C00UL      
#define  ADC1_BASE_ADDRESS     0x40012400UL
#define  ADC2_BASE_ADDRESS     0x40012800UL

#define  DAC_BASE_ADDRESS      0x40007400UL

#define  USART1_BASE_ADDRESS   0x40013800UL
#define  USART2_BASE_ADDRESS   0x40004400UL
#define  USART3_BASE_ADDRESS   0x40004800UL

#define  UART4_BASE_ADDRESS    0x40004C00UL
#define  UART5_BASE_ADDRESS    0x40005000UL

#define  TMR1_BASE_ADDRESS     0x40012C00UL
#define  TMR2_BASE_ADDRESS     0x40000000UL 
#define  TMR3_BASE_ADDRESS     0x40000400UL
#define  TMR4_BASE_ADDRESS     0x40000800UL
#define  TMR5_BASE_ADDRESS     0x40000C00UL
#define  TMR6_BASE_ADDRESS     0x40001000UL
#define  TMR7_BASE_ADDRESS     0x40001400UL
                                         
#define  I2C1_BASE_ADDRESS     0x40005400UL
#define  I2C2_BASE_ADDRESS     0x40005800UL
                                         
#define  SPI1_BASE_ADDRESS     0x40013000UL
#define  SPI2_BASE_ADDRESS     0x40003800UL
#define  SPI3_BASE_ADDRESS     0x40003C00UL
                                         
#define  CAN1_BASE_ADDRESS     0x40006400UL
#define  CAN2_BASE_ADDRESS     0x40006800UL




#define BASE_ADDRESS_GPIOA    (0x40010800UL)
                                         
#define BASE_ADDRESS_GPIOB    (0x40010C00UL)
                                         
#define BASE_ADDRESS_GPIOC    (0x40011000UL)
                                         
#define BASE_ADDRESS_GPIOD    (0x40011400UL)
                                         
#define BASE_ADDRESS_GPIOE    (0x40011800UL)
                                         
#define BASE_ADDRESS_GPIOF    (0x40011C00UL)
                                         
#define BASE_ADDRESS_GPIOG    (0x40012000UL)


#define OFST_ADD_GPIO_CRL    (0x00UL)
#define OFST_ADD_GPIO_CRH    (0x04UL)
#define OFST_ADD_GPIO_IDR    (0x08UL)
#define OFST_ADD_GPIO_ODR    (0x0CUL)
#define OFST_ADD_GPIO_BSRR   (0x10UL)
#define OFST_ADD_GPIO_BRR    (0x14UL)
#define OFST_ADD_GPIO_LUKR   (0x18UL)

#define      GPIOA_U32_CRL_REG       *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_CRL))
#define      GPIOA_U32_CRH_REG       *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_CRH))
#define      GPIOA_U32_IDR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_IDR))
#define      GPIOA_U32_ODR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_ODR))
#define      GPIOA_U32_BSRR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_BSRR))
#define      GPIOA_U32_BRR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_BRR))
#define      GPIOA_U32_LUKR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOA + OFST_ADD_GPIO_LUKR))

#define      GPIOB_U32_CRL_REG       *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_CRL))
#define      GPIOB_U32_CRH_REG       *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_CRH))
#define      GPIOB_U32_IDR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_IDR))
#define      GPIOB_U32_ODR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_ODR))
#define      GPIOB_U32_BSRR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_BSRR))
#define      GPIOB_U32_BRR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_BRR))
#define      GPIOB_U32_LUKR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOB + OFST_ADD_GPIO_LUKR))

#define      GPIOC_U32_CRL_REG       *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_CRL))
#define      GPIOC_U32_CRH_REG       *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_CRH))
#define      GPIOC_U32_IDR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_IDR))
#define      GPIOC_U32_ODR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_ODR))
#define      GPIOC_U32_BSRR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_BSRR))
#define      GPIOC_U32_BRR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_BRR))
#define      GPIOC_U32_LUKR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOC + OFST_ADD_GPIO_LUKR))

#define      GPIOD_U32_CRL_REG       *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_CRL))
#define      GPIOD_U32_CRH_REG       *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_CRH))
#define      GPIOD_U32_IDR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_IDR))
#define      GPIOD_U32_ODR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_ODR))
#define      GPIOD_U32_BSRR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_BSRR))
#define      GPIOD_U32_BRR_REG       *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_BRR))
#define      GPIOD_U32_LUKR_REG      *((volatile u32*)(BASE_ADDRESS_GPIOD + OFST_ADD_GPIO_LUKR))


/*SYSTACK*/
#define SYST_CSR     *((volatile u32*)(0xE000E010))
#define SYST_RVR     *((volatile u32*)(0xE000E014))
#define SYST_CVR     *((volatile u32*)(0xE000E018))
#define SYST_CALIB   *((volatile u32*)(0xE000E01C))

/*  INVIC REG*/
#define    NVIC_BASE_ADDRES   0xE000E100UL

typedef struct
{
   volatile	u32 ISER[8];       /* interrpt set enable reg*/ 
         	u32 reseved1[24];
   volatile	u32 ICER[8];       /* interrpt clear enable reg*/ 
        	u32 reseved2[24];   
   volatile	u32 ISPR[8];       /*interrupt set pending reg*/
        	u32 reseved3[24];
   volatile	u32 ICPR[8];       /* interrpt Clear pending reg*/
        	u32 reseved4[24];
   volatile	u32 IABR[8];       /* Interrupt active bit register */
        	u32 reseved5[56];   
   volatile	u8  IPR[240];
}NVIC_REGDEF_T; 
#define    NVIC             ((NVIC_REGDEF_T*)NVIC_BASE_ADDRES)
#define    NVIC_AIRCR_REG   *((volatile u32*)0xE000ED0C)

#define    ALFIO_BASE_ADDRESS      0x40010000  
typedef  struct 
{
	volatile  u32  EVCR;
	volatile  u32  MAPR;
	volatile  u32  EXTI1;
	volatile  u32  EXTI2;
	volatile  u32  EXTI3;
	volatile  u32  EXTI4;
	volatile  u32  MAPR2;
}ALFIO_REGDEF_T;

#define   ALFIO     ((ALFIO_REGDEF_T*)ALFIO_BASE_ADDRESS) 
 
 
#define    EXTI_BASE_ADDRESS      0x40010400 
 
typedef  struct 
{
	volatile  u32  IMR;   /* mask and nonmask for intrrupt*/
	volatile  u32  EMR;   
	volatile  u32  PTSR;  /* enable and disable rising trigger */
	volatile  u32  FTSR;   /*enable and disable falling trigger*/
	volatile  u32  SWIER;
	volatile  u32  PR;     /* panding register */
	
}EXTI_REGDEF_T; 
 
#define   EXTI     ((EXTI_REGDEF_T*)EXTI_BASE_ADDRESS)
 
 
 /* DMA regisrer */
 #define    DMA_BASE_ADDRESS      0x40020000 
 typedef struct
 {
	 volatile  u32 CCR;
	 volatile  u32 CNDTR ;
	 volatile  u32 CPAR ;
     volatile  u32 CMAR ;
     volatile  u32 reseved ;
	 
 }Channel_Reg_t;

 typedef struct
 {

	 volatile  u32 ISR ;
	 volatile  u32 IFCR;
	volatile   Channel_Reg_t channel[7];
	 
 }DMA_Ch;
 
#define  DMA    ((DMA_Ch*)DMA_BASE_ADDRESS)  
 
#endif
