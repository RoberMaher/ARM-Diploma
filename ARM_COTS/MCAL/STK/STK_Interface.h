/*********************************************
 * Author:				Rober Maher
 * Creation Data:		02 MAR, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  02 MAR, 2024		Rober Maher			    Initial Creation
 * 
 * v2.0		  21 Apr, 2024	    Rober Maher		        Add New APIs 
 *                                                        - MSTK_u32GetRemainingTime
 *                                                        - MSTK_u32GetElapsedTime
 *                                                        - MSTK_voidResetTimer
 *                                                        - MSTK_voidSetPreloadValue
 *                                                        - MSTK_voidSetSingleInterval
 *                                                        - MSTK_voidSetPeriodicInterval
 *                                                        - SysTick_Handler
 * 
 * v3.0		  22 Apr, 2024	    Rober Maher		        Add New APIs 
 *                                                        - MSTK_voidSTKEnable
 *                                                        - MSTK_voidSTKDisable
*********************************************/

#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H

void MSTK_voidInit(void);
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks);
u32 MSTK_u32GetRemainingTime(void);
u32 MSTK_u32GetElapsedTime(void);
void MSTK_voidResetTimer(void);
void MSTK_voidSTKEnable(void);
void MSTK_voidSTKDisable(void);
void MSTK_voidSetPreloadValue(u32 Copy_u32PreloadValue);
void MSTK_voidSetSingleInterval(void (*CallBackFunction) (void));
void MSTK_voidSetPeriodicInterval(void (*CallBackFunction) (void));

#endif