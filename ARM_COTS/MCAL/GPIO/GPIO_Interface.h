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
	DIO_RESET=0,	//low
	DIO_SET 		//HIGH
}GPIO_VALUE_e;

#define		GPIOA_OTYPER_OT0		0	
#define		GPIOA_OTYPER_OT1		1	
#define		GPIOA_OTYPER_OT2		2	
#define		GPIOA_OTYPER_OT3		3	
#define		GPIOA_OTYPER_OT4		4	
#define		GPIOA_OTYPER_OT5		5	
#define		GPIOA_OTYPER_OT6		6	
#define		GPIOA_OTYPER_OT7		7	
#define		GPIOA_OTYPER_OT8		8	
#define		GPIOA_OTYPER_OT9		9	
#define		GPIOA_OTYPER_OT10		10	
#define		GPIOA_OTYPER_OT11		11	
#define		GPIOA_OTYPER_OT12		12	
#define		GPIOA_OTYPER_OT13		13	
#define		GPIOA_OTYPER_OT14		14	
#define		GPIOA_OTYPER_OT15		15	

#define		GPIOB_OTYPER_OT0		0	
#define		GPIOB_OTYPER_OT1		1	
#define		GPIOB_OTYPER_OT2		2	
#define		GPIOB_OTYPER_OT3		3	
#define		GPIOB_OTYPER_OT4		4	
#define		GPIOB_OTYPER_OT5		5	
#define		GPIOB_OTYPER_OT6		6	
#define		GPIOB_OTYPER_OT7		7	
#define		GPIOB_OTYPER_OT8		8	
#define		GPIOB_OTYPER_OT9		9	
#define		GPIOB_OTYPER_OT10		10	
#define		GPIOB_OTYPER_OT11		11	
#define		GPIOB_OTYPER_OT12		12	
#define		GPIOB_OTYPER_OT13		13	
#define		GPIOB_OTYPER_OT14		14	
#define		GPIOB_OTYPER_OT15		15	

#define		GPIOC_OTYPER_OT0		0	
#define		GPIOC_OTYPER_OT1		1	
#define		GPIOC_OTYPER_OT2		2	
#define		GPIOC_OTYPER_OT3		3	
#define		GPIOC_OTYPER_OT4		4	
#define		GPIOC_OTYPER_OT5		5	
#define		GPIOC_OTYPER_OT6		6	
#define		GPIOC_OTYPER_OT7		7	
#define		GPIOC_OTYPER_OT8		8	
#define		GPIOC_OTYPER_OT9		9	
#define		GPIOC_OTYPER_OT10		10	
#define		GPIOC_OTYPER_OT11		11	
#define		GPIOC_OTYPER_OT12		12	
#define		GPIOC_OTYPER_OT13		13	
#define		GPIOC_OTYPER_OT14		14	
#define		GPIOC_OTYPER_OT15		15	

void GPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_MODE_e PinMode);
void GPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_MODE_e PinOutputMode);
void GPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_SPEED_e PinOutputSpeed);
void GPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_VALUE_e PinValue);
u8 GPIO_u8GetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID);
void GPIO_voidLockPin(GPIO_PORT_e portID, GPIO_PIN_e pinID);
void GPIO_voidSetPortMode(GPIO_PORT_e portID, GPIO_MODE_e PortMode);
void GPIO_voidSetPortOutputMode(GPIO_PORT_e portID, GPIO_OUTPUT_MODE_e PortOutputMode);
void GPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID, GPIO_OUTPUT_SPEED_e PortOutputSpeed);
void GPIO_voidSetPortValue(GPIO_PORT_e portID, GPIO_VALUE_e PortValue);
u8 GPIO_u8GetPortValue(GPIO_PORT_e portID);
void GPIO_voidLockPort(GPIO_PORT_e portID);



#endif