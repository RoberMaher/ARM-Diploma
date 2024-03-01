/*********************************************
 * Author:				Rober Maher
 * Creation Data:		23 Feb, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				LIB
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  23 Feb, 2024		Rober Maher			    Initial Creation
*********************************************/

//Header Guard File
#ifndef BIT_MATH_H
#define BIT_MATH_H

#define		SET_BIT(REG, BIT)		(REG |= (1 << BIT))
#define		CLR_BIT(REG, BIT)		(REG &= ~(1 << BIT))
#define		TOG_BIT(REG, BIT)		(REG ^= (1 << BIT))
#define		GET_BIT(REG, BIT)		((REG >> BIT) & 0x01)

#endif