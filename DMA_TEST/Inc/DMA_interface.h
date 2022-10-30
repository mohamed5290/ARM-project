/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 15/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : DMA                   *****************/    
/********************************************************************/

enum Memory_To_Memory
{
	Memory_To_Memory_EN,
	Memory_To_Memory_DS
};

enum  Channel_Priority
{
	LOW  = 0,
	MEDIUM,
	HIGH,
	VERY_HIGH
};
enum Memory_SIZE
{
	BYTE1 = 0,
    BYTE2,
	BYTE4
};
enum Peripheral_SIZE
{
	BYTE1_PR = 0,
    BYTE2_PR,
	BYTE4_PR
};
enum Memory_Inc
{
	MEMORY_INC_DE,
	MEMORY_INC_EN
};

enum Peripheral_Inc
{
	PERIPHERAL_INC_DE,
	PERIPHERAL_INC_EN
};
enum Circular
{
	CIRCULAR_DE,
	CIRCULAR_EN
};
enum DATA_Transfer
{
	PERIPHERAL,
	MEMORY
};

enum Transfer_Error_Int
{
	TEI_DE,
	TEI_EN
};
enum Half_Transfer_Int
{
	HTI_DE,
	HTI_EN
};
enum Complete_Transfer_Int
{
	CTI_DE,
	CTI_EN
};
enum Channel_State
{
	Channel_DE,
	Channel_EN
};


enum  Channel_Number
{
	Channel_Num1 = 0,
	Channel_Num2,
	Channel_Num3,
	Channel_Num4,
	Channel_Num5, 
	Channel_Num6, 
	Channel_Num7
};

typedef struct
{
   enum   Channel_Number    Ch_Num;
   enum   Memory_To_Memory  Mom_To_Mom;
   enum   Channel_Priority  Ch_Pr ;
   enum   Memory_SIZE       Mom_Size;
   enum   Peripheral_SIZE   Pri_Size;
   enum   Memory_Inc        Mom_Inc;
   enum   Peripheral_Inc    Pri_Inc ;
   enum   Circular          Circ ;
   enum   DATA_Transfer     DATA_TX;
   enum   Transfer_Error_Int TREI  ;
   enum   Half_Transfer_Int  HTI;
   enum   Complete_Transfer_Int CTI;
   enum   Channel_State      Ch_St;
   u32  *copy_u32AddressDestintion;
   u32  *copy_u32AddressSource;
   u16   copy_u16NumDataTx;

} Channel_Config; 


void DMA_voidInit(const Channel_Config *copy_strChConfig);
void  DMA_voidChannelStart(u8 copy_u8chNum,u32  *copy_u32AddressDestintion,u32  *copy_u32AddressSource,u16 copy_u16NumDataTx);
u8 DMA_voidCallBackFunCh1(void(*fun)(void));
u8 DMA_voidCallBackFunCh2(void(*fun)(void));
u8 DMA_voidCallBackFunCh3(void(*fun)(void));
u8 DMA_voidCallBackFunCh4(void(*fun)(void));
u8 DMA_voidCallBackFunCh5(void(*fun)(void));
u8 DMA_voidCallBackFunCh6(void(*fun)(void));
u8 DMA_voidCallBackFunCh7(void(*fun)(void));

