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
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

typedef enum
{
	MNVIC_INT_DISABLE = 0,
	MNVIC_INT_ENABLE
}NVIC_INT_CTRL_t;

void MNVIC_voidInit(void);
void MNVIC_voidPeripheralInterruptControl(u8 Copy_u8PeripheralID, u8 Copy_u8InterruptState);
void MNVIC_voidSetPendingFlag(u8 Copy_u8PeripheralID);
void MNVIC_SetPeripheralPriority(u8 Copy_u8PeripheralID, u8 Copy_u8Priority);


#endif
