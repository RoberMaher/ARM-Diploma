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

//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/GPIO_Interface.h"
#include "../include/GPIO_Private.h"
#include "../include/GPIO_Cfg.h"


//Pre_Build Configuration
void GPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_MODE_e PinMode)
{
	
}

void GPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_MODE_e PinOutputMode)
{
	
}

void GPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_SPEED_e PinOutputSpeed)
{
	
}

void GPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_VALUE_e PinValue)
{
	
}

u8 GPIO_u8GetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{
	
}

void GPIO_voidLockPin(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{
	
}

void GPIO_voidSetPortMode(GPIO_PORT_e portID, GPIO_MODE_e PortMode)
{
	
}

void GPIO_voidSetPortOutputMode(GPIO_PORT_e portID, GPIO_OUTPUT_MODE_e PortOutputMode)
{
	
}

void GPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID, GPIO_OUTPUT_SPEED_e PortOutputSpeed)
{
	
}

void GPIO_voidSetPortValue(GPIO_PORT_e portID, GPIO_VALUE_e PortValue)
{
	
}

u8 GPIO_u8GetPortValue(GPIO_PORT_e portID)
{
	
}

void GPIO_voidLockPort(GPIO_PORT_e portID)
{
	
}