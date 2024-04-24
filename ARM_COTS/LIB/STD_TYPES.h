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
 * v2.0		  1  Mar, 2024		Rober Maher			    Solve Problem
*********************************************/

//Header Guard File
#ifndef STD_TYPES_H
#define STD_TYPES_H

//typedef new_datatype old_datatype
typedef	unsigned char u8;
typedef	unsigned short int u16;
typedef	unsigned int u32;

typedef	signed char s8;
typedef	signed short s16;
typedef	signed int s32;

typedef	float f32;
typedef	double f64;

#define NULLPTR             (void*)0

#endif
