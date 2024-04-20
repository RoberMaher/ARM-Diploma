/*********************************************
 * Author:				Rober Maher
 * Creation Data:		23 Feb, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  23 Feb, 2024		Rober Maher			    Initial Creation
 * v2.0		  1  Mar, 2024		Rober Maher			    Solve the problems
*********************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

typedef enum{
	MGPIO_PORTA=0,
	MGPIO_PORTB,
	MGPIO_PORTC
}MGPIO_PORT_e;

typedef enum{
	PIN0=0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15
}MGPIO_PIN_e;

typedef enum{
	MGPIO_INPUT=0,
	MGPIO_OUTPUT,
	MGPIO_ALTERNATE_FUNCTION,
	MGPIO_ANALOG
}MGPIO_MODE_e;

typedef enum{
	MGPIO_OUTPUT_PUSH_PULL=0,
	MGPIO_OUTPUT_OPEN_DRAIN
}MGPIO_OUTPUT_MODE_e;

typedef enum{
	MGPIO_OUTPUT_LOW=0,
	MGPIO_OUTPUT_MEDIUM,
	MGPIO_OUTPUT_HIGH,
	MGPIO_OUTPUT_VERY_HIGH
}MGPIO_OUTPUT_SPEED_e;

typedef enum{
	MGPIO_RESET=0,	//low
	MGPIO_SET 		//HIGH
}MGPIO_VALUE_e;

typedef enum{
	AF00=0,
	AF01,
	AF02,
	AF03,
	AF04,
	AF05,
	AF06,
	AF07,
	AF08,
	AF09,
	AF10,
	AF11,
	AF12,
	AF13,
	AF14,
	AF15
}Alternative_Function_e;
	

void MGPIO_voidSetPinMode(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_MODE_e pinMode);
void MGPIO_voidSetPinOutputMode(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_OUTPUT_MODE_e pinOutputMode);
void MGPIO_voidSetPinOutputSpeed(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_OUTPUT_SPEED_e pinOutputSpeed);
void MGPIO_voidSetPinValue(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_VALUE_e pinValue);
u16 MGPIO_u8GetPinValue(MGPIO_PORT_e portID, MGPIO_PIN_e pinID);
void MGPIO_voidLockPin(MGPIO_PORT_e portID, MGPIO_PIN_e pinID);
void MGPIO_voidSetPortMode(MGPIO_PORT_e portID, MGPIO_MODE_e portMode);
void MGPIO_voidSetPortOutputMode(MGPIO_PORT_e portID, MGPIO_OUTPUT_MODE_e portOutputMode);
void MGPIO_voidSetPortOutputSpeed(MGPIO_PORT_e portID, MGPIO_OUTPUT_SPEED_e portOutputSpeed);
void MGPIO_voidSetPortValue(MGPIO_PORT_e portID, MGPIO_VALUE_e portValue);
u16 MGPIO_u8GetPortValue(MGPIO_PORT_e portID);
void MGPIO_voidLockPort(MGPIO_PORT_e portID);
void MGPIO_voidSetAlternativeFunction(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, Alternative_Function_e AlternativeFunctionID);



#endif