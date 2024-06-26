/****************************************************************************************
* Author:				Rober Maher
* Creation Data:		06 Apr, 2024
* Version:				v1.0
* Compiler:				GNU ARM-GCC
* Controller:			STM32F401CCU6
* Layer:				MCAL
****************************************************************************************/
/***************************************************************************************
* Version	  Date				  	Author				  			Description
* v1.0		  20 Apr, 2024			Rober Maher		  	            Initial Creation
***************************************************************************************/
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "../include/SPI_Interface.h"
#include "../include/SPI_Private.h"
#include "../include/SPI_Cfg.h"

void MSPI1_voidInit(void)
{
	MSPI1->CR1 = 0x47;
}

u8 MSPI1_u8TrancieveSynchronous(u8 Copy_u8Data)
{
    u8 Local_u8ReceivedData;
    MSPI1 -> DR = Copy_u8Data;
    while(GET_BIT(MSPI1 -> SR, 7));        // while(GET_BIT(MSPI1 -> SR, 7) == 1);
    Local_u8ReceivedData = MSPI1 -> DR;
    return Local_u8ReceivedData;
}

/*
* Tasks:
*       - Complete Init function 
*       - Implement ISR of SPI1, SPI2, SPI3, and SPI4
*       - Implement Callbacks
*/
