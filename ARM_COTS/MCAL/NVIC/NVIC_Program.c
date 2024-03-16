/*********************************************
 * Author:				Rober Maher
 * Creation Data:		16 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  16 Mar, 2024		Rober Maher			    Initial Creation
*********************************************/

//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/NVIC_Interface.h"
#include "../include/NVIC_Private.h"
#include "../include/NVIC_Cfg.h"


//Pre_Build Configuration

void MNVIC_voidInit()
{
	#define		SCB_AIRCR		*((volatile u32 *)0xE000ED00 + 0x0C)
	//set the group and sub priorities distribution
	SCB_AIRCR |= (AIRCR_PRIKEY << 16) | (NVIC_GRO_SUB_DISTRIBUTION << 8);
}

void MNVIC_voidPeripheralInterruptControl(u8 Copy_u8PeripheralID , NVIC_INT_CTRL_t Copy_tInterruptState)
{
	u8 Local_u8RegisterIndex = 0;
	Local_u8RegisterIndex = Copy_u8PeripheralID / 32;
	switch (Copy_tInterruptState)
	{
		case MNVIC_INT_ENABLE:
			NVIC -> ISER[Local_u8RegisterIndex] = (1 << (Copy_u8PeripheralID % 32));
		break;

		case MNVIC_INT_DISABLE:
			NVIC -> ICER[Local_u8RegisterIndex] = (1 << (Copy_u8PeripheralID % 32));
		break;	

		default:
			//Error
		break;
	}
}

void MNVIC_voidSetPendingFlag(u8 Copy_u8PeripheralID)
{
	if(Copy_u8PeripheralID <= 239)
	{
	u8 Local_u8RegisterIndex = 0;
	Local_u8RegisterIndex = Copy_u8PeripheralID / 32;
	NVIC -> ISPR[Local_u8RegisterIndex] = (1 << ((Copy_u8PeripheralID % 32)));
	}
}

void MNVIC_SetPeripheralPriority(u8 Copy_u8PeripheralID, u8 Copy_u8Priority)
{
    NVIC -> IP[Copy_u8PeripheralID] = (1 << (Copy_u8Priority << 4));
}
