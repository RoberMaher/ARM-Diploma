/*********************************************
 * Author:				Rober Maher
 * Creation Data:		2 MAR, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  2 MAR, 2024		Rober Maher			    Initial Creation
*********************************************/

#ifndef STK_CFG_H
#define STK_CFG_H

/*
Options
1-STK_AHB_DIV_8
2-STK_AHB
*/
#define     STK_CLK_SRC     STK_AHB_DIV_8

/*
Options
1-STK_DISABLE
2-STK_ENABLE
*/
#define     STK_INT_CTRL    STK_DISABLE
#define     STK_CTRL        STK_ENABLE

#endif