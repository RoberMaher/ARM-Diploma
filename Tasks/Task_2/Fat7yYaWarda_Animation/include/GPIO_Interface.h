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
*********************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

typedef enum{
	GPIO_PORTA=0,
	GPIO_PORTB,
	GPIO_PORTC
}GPIO_PORT_e;

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
}GPIO_PIN_e;

typedef enum{
	GPIO_INPUT=0,
	GPIO_OUTPUT,
	GPIO_ALTERNATE_FUNCTION,
	GPIO_ANALOG
}GPIO_MODE_e;

typedef enum{
	GPIO_OUTPUT_PUSH_PULL=0,
	GPIO_OUTPUT_OPEN_DRAIN
}GPIO_OUTPUT_MODE_e;

typedef enum{
	GPIO_OUTPUT_LOW=0,
	GPIO_OUTPUT_MEDIUM,
	GPIO_OUTPUT_HIGH,
	GPIO_OUTPUT_VERY_HIGH
}GPIO_OUTPUT_SPEED_e;

typedef enum{
	GPIO_RESET=0,	//low
	GPIO_SET 		//HIGH
}GPIO_VALUE_e;
	

void GPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_MODE_e pinMode);
void GPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_MODE_e pinOutputMode);
void GPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_SPEED_e pinOutputSpeed);
void GPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_VALUE_e pinValue);
u16 GPIO_u8GetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID);
void GPIO_voidLockPin(GPIO_PORT_e portID, GPIO_PIN_e pinID);
void GPIO_voidSetPortMode(GPIO_PORT_e portID, GPIO_MODE_e portMode);
void GPIO_voidSetPortOutputMode(GPIO_PORT_e portID, GPIO_OUTPUT_MODE_e portOutputMode);
void GPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID, GPIO_OUTPUT_SPEED_e portOutputSpeed);
void GPIO_voidSetPortValue(GPIO_PORT_e portID, GPIO_VALUE_e portValue);
u16 GPIO_u8GetPortValue(GPIO_PORT_e portID);
void GPIO_voidLockPort(GPIO_PORT_e portID);



#endif
