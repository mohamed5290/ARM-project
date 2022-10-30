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

#define      GPIOE_U32_CRL_REG       *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_CRL)
#define      GPIOE_U32_CRH_REG       *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_CRH) 
#define      GPIOE_U32_IDR_REG       *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_IDR)
#define      GPIOE_U32_ODR_REG       *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_ODR)
#define      GPIOE_U32_BSRR_REG      *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_BSRR)
#define      GPIOE_U32_BRR_REG       *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_BRR)
#define      GPIOE_U32_LUKR_REG      *((volatile u32*)BASE_ADDRESS_GPIOE + OFST_ADD_GPIO_LUKR)

#define      GPIOF_U32_CRL_REG       *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_CRL)
#define      GPIOF_U32_CRH_REG       *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_CRH) 
#define      GPIOF_U32_IDR_REG       *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_IDR)
#define      GPIOF_U32_ODR_REG       *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_ODR)
#define      GPIOF_U32_BSRR_REG      *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_BSRR)
#define      GPIOF_U32_BRR_REG       *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_BRR)
#define      GPIOF_U32_LUKR_REG      *((volatile u32*)BASE_ADDRESS_GPIOF + OFST_ADD_GPIO_LUKR)

#define      GPIOG_U32_CRL_REG       *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_CRL)
#define      GPIOG_U32_CRH_REG       *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_CRH) 
#define      GPIOG_U32_IDR_REG       *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_IDR)
#define      GPIOG_U32_ODR_REG       *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_ODR)
#define      GPIOG_U32_BSRR_REG      *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_BSRR)
#define      GPIOG_U32_BRR_REG       *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_BRR)
#define      GPIOG_U32_LUKR_REG      *((volatile u32*)BASE_ADDRESS_GPIOG + OFST_ADD_GPIO_LUKR)

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
   volatile	u32 IABR[8];      /* Interrupt active bit register */
}NVIC_REGDEF_T; 
#define    NVIC        ((NVIC_REGDEF_T*)NVIC_BASE_ADDRES)
  

 
#endif
