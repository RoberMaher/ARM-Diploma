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
void GPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_MODE_e pinMode)
{
	if((portID <= GPIO_PORTC) && (pinID <= PIN15))
	{
		switch(portID)
		{
			case GPIO_PORTA:
				switch(pinMode)
				{
					case GPIO_INPUT:
						CLR_BIT(GPIOA_MODER,(pinID*2);
						CLR_BIT(GPIOA_MODER,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT:
						CLR_BIT(GPIOA_MODER,(pinID*2);
						SET_BIT(GPIOA_MODER,((pinID*2)+1));
					break;
					
					case GPIO_ALTERNATE_FUNCTION:
						SET_BIT(GPIOA_MODER,(pinID*2);
						CLR_BIT(GPIOA_MODER,((pinID*2)+1));
					break;
					
					case GPIO_ANALOG:
						SET_BIT(GPIOA_MODER,(pinID*2);
						SET_BIT(GPIOA_MODER,((pinID*2)+1));
					break;
				}
			break;
			
			case GPIO_PORTB:
				switch(pinMode)
				{
					case GPIO_INPUT:
						CLR_BIT(GPIOB_MODER,(pinID*2);
						CLR_BIT(GPIOB_MODER,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT:
						CLR_BIT(GPIOB_MODER,(pinID*2);
						SET_BIT(GPIOB_MODER,((pinID*2)+1));
					break;
					
					case GPIO_ALTERNATE_FUNCTION:
						SET_BIT(GPIOB_MODER,(pinID*2);
						CLR_BIT(GPIOB_MODER,((pinID*2)+1));
					break;
					
					case GPIO_ANALOG:
						SET_BIT(GPIOB_MODER,(pinID*2);
						SET_BIT(GPIOB_MODER,((pinID*2)+1));
					break;
				}
			break;
			
			case GPIO_PORTC:
				switch(pinMode)
				{
					case GPIO_INPUT:
						CLR_BIT(GPIOC_MODER,(pinID*2);
						CLR_BIT(GPIOC_MODER,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT:
						CLR_BIT(GPIOC_MODER,(pinID*2);
						SET_BIT(GPIOC_MODER,((pinID*2)+1));
					break;
					
					case GPIO_ALTERNATE_FUNCTION:
						SET_BIT(GPIOC_MODER,(pinID*2);
						CLR_BIT(GPIOC_MODER,((pinID*2)+1));
					break;
					
					case GPIO_ANALOG:
						SET_BIT(GPIOC_MODER,(pinID*2);
						SET_BIT(GPIOC_MODER,((pinID*2)+1));
					break;
				}
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

void GPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_MODE_e pinOutputMode)
{
	if((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinOutputMode <= GPIO_OUTPUT_OPEN_DRAIN))
	{
		switch(portID)
		{
			case GPIO_PORTA:
				switch(pinOutputMode)
				{
					case GPIO_OUTPUT_PUSH_PULL:
						CLR_BIT(GPIOA_OTYPER, pinID);
					break;
					
					case GPIO_OUTPUT_OPEN_DRAIN:
						SET_BIT(GPIOA_OTYPER, pinID);
					break;
				}
			break;
		
			case GPIO_PORTB:
				switch(pinOutputMode)
				{
					case GPIO_OUTPUT_PUSH_PULL:
						CLR_BIT(GPIOB_OTYPER, pinID);
					break;
					
					case GPIO_OUTPUT_OPEN_DRAIN:
						SET_BIT(GPIOB_OTYPER, pinID);
					break;
				}
			break;

			case GPIO_PORTC:
				switch(pinOutputMode)
				{
					case GPIO_OUTPUT_PUSH_PULL:
						CLR_BIT(GPIOC_OTYPER, pinID);
					break;
					
					case GPIO_OUTPUT_OPEN_DRAIN:
						SET_BIT(GPIOC_OTYPER, pinID);
					break;
				}
			break;
			
		}
	}
	else
	{
		// Do Nothing
	}
}

void GPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_SPEED_e pinOutputSpeed)
{
	if((portID <= GPIO_PORTC) && (pinID <= PIN15))
	{
		switch(portID)
		{
			case GPIO_PORTA:
				switch(pinOutputSpeed)
				{
					case GPIO_OUTPUT_LOW:
						CLR_BIT(GPIOA_OSPEEDR,(pinID*2);
						CLR_BIT(GPIOA_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_MEDIUM:
						CLR_BIT(GPIOA_OSPEEDR,(pinID*2);
						SET_BIT(GPIOA_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_HIGH:
						SET_BIT(GPIOA_OSPEEDR,(pinID*2);
						CLR_BIT(GPIOA_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_VERY_HIGH:
						SET_BIT(GPIOA_OSPEEDR,(pinID*2);
						SET_BIT(GPIOA_OSPEEDR,((pinID*2)+1));
					break;
				}
			break;
			
			case GPIO_PORTB:
				switch(pinOutputSpeed)
				{
					case GPIO_OUTPUT_LOW:
						CLR_BIT(GPIOB_OSPEEDR,(pinID*2);
						CLR_BIT(GPIOB_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_MEDIUM:
						CLR_BIT(GPIOB_OSPEEDR,(pinID*2);
						SET_BIT(GPIOB_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_HIGH:
						SET_BIT(GPIOB_OSPEEDR,(pinID*2);
						CLR_BIT(GPIOB_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_VERY_HIGH:
						SET_BIT(GPIOB_OSPEEDR,(pinID*2);
						SET_BIT(GPIOB_OSPEEDR,((pinID*2)+1));
					break;
				}
			break;
			
			case GPIO_PORTC:
				switch(pinOutputSpeed)
				{
					case GPIO_OUTPUT_LOW:
						CLR_BIT(GPIOC_OSPEEDR,(pinID*2);
						CLR_BIT(GPIOC_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_MEDIUM:
						CLR_BIT(GPIOC_OSPEEDR,(pinID*2);
						SET_BIT(GPIOC_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_HIGH:
						SET_BIT(GPIOC_OSPEEDR,(pinID*2);
						CLR_BIT(GPIOC_OSPEEDR,((pinID*2)+1));
					break;
					
					case GPIO_OUTPUT_VERY_HIGH:
						SET_BIT(GPIOC_OSPEEDR,(pinID*2);
						SET_BIT(GPIOC_OSPEEDR,((pinID*2)+1));
					break;
				}
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

void GPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_VALUE_e pinValue)
{
	if((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinValue <= DIO_SET))
	{
		switch(portID)
		{
			case GPIO_PORTA:
				switch(pinValue)
				{
					case GPIO_RESET:
						SET_BIT(GPIOA_BSRR,(pinID+16));
					case GPIO_SET:
						SET_BIT(GPIOA_BSRR,pinID);
					break;
				}
			break;
			
			case GPIO_PORTB:
				switch(pinValue)
				{
					case GPIO_RESET:
						SET_BIT(GPIOB_BSRR,(pinID+16));
					case GPIO_SET:
						SET_BIT(GPIOB_BSRR,pinID);
					break;
				}
			break;
			
			case GPIO_PORTC:
				switch(pinValue)
				{
					case GPIO_RESET:
						SET_BIT(GPIOC_BSRR,(pinID+16));
					case GPIO_SET:
						SET_BIT(GPIOC_BSRR,pinID);
					break;
				}
			break;
		}
	}
	
	else
	{
		// Do Nothing
	}
}

u8 GPIO_u8GetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{
	u8 pinvalue;
	
	if ( (portID <= GPIO_PORTC) && (pinID <= PIN15) )
	{
		switch (portID)
		{
		case GPIO_PORTA:
			PinValue = GET_BIT(GPIOA_IDR, pinID);
			break;
		
		case GPIO_PORTB:
			PinValue = GET_BIT(GPIOB_IDR, pinID);
			break;
			
		case GPIO_PORTC:
			PinValue = GET_BIT(GPIOC_IDR, pinID);
			break;
		}
	}
	else
	{
		// Do Nothing
	}
	
	return pinvalue;
}

void GPIO_voidLockPin(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{
	
}

void GPIO_voidSetPortMode(GPIO_PORT_e portID, GPIO_MODE_e portMode)
 {
	if ( (portID <= GPIO_PORTC) )
	{
		u32 modeValue = 0;
		for (int i = 0; i < 16; i++) {
			modeValue |= (portMode << (2 * i));
		}
	
		switch (portID) {
			case GPIO_PORTA:
				GPIOA_MODER = modeValue;
				break;
			case GPIO_PORTB:
				GPIOB_MODER = modeValue;
				break;
			case GPIO_PORTC:
				GPIOC_MODER = modeValue;
				break;
		}
	}
	else
	{
		// Do Nothing
	}
}

void GPIO_voidSetPortOutputMode(GPIO_PORT_e portID, GPIO_OUTPUT_MODE_e portOutputMode)
{
	
}

void GPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID, GPIO_OUTPUT_SPEED_e portOutputSpeed)
{
	
}

void GPIO_voidSetPortValue(GPIO_PORT_e portID, GPIO_VALUE_e portValue)
{
	if ( (portID <= GPIO_PORTC) )
	{
		switch (portID)
		{
		case GPIO_PORTA:
			GPIOA_ODR = portValue;
			break;
		case GPIO_PORTB:
			GPIOB_ODR = portValue;
			break;
		case GPIO_PORTC:
			GPIOBCODR = portValue;
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

u8 GPIO_u8GetPortValue(GPIO_PORT_e portID)
{
	
}

void GPIO_voidLockPort(GPIO_PORT_e portID)
{
	
}