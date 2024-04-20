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
 * v1.1		  1  Mar, 2024		Rober Maher			    Solve the problems
 * v1.2		  2  Mar, 2024		Rober Maher			    Solve the MODER problem
 * v2.0		  19 Apr, 2024		Rober Maher			    Adding Alternative Function
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

// Function to set the mode (input, output, alternate function, analog) of a specific pin
void MGPIO_voidSetPinMode(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_MODE_e pinMode)
{
	// Ensure portID and pinID are within valid range
	if((portID <= MGPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the portA
		switch(portID)
		{
		// If port is A
		case MGPIO_PORTA:
			// Switch on the mode to configure
			switch(pinMode)
			{
			// If mode is input
			case MGPIO_INPUT:
				CLR_BIT(GPIOA_MODER,(pinID*2));
				CLR_BIT(GPIOA_MODER,((pinID*2)+1));
				break;

				// If mode is output
			case MGPIO_OUTPUT:
				SET_BIT(GPIOA_MODER,(pinID*2));
				CLR_BIT(GPIOA_MODER,((pinID*2)+1));
				break;

				// If mode is alternate function
			case MGPIO_ALTERNATE_FUNCTION:
				CLR_BIT(GPIOA_MODER,(pinID*2));
				SET_BIT(GPIOA_MODER,((pinID*2)+1));
				break;

				// If mode is analog
			case MGPIO_ANALOG:
				SET_BIT(GPIOA_MODER,(pinID*2));
				SET_BIT(GPIOA_MODER,((pinID*2)+1));
				break;
			}
			break;

			// If port is B
			case MGPIO_PORTB:
				// Switch on the mode to configure
				switch(pinMode)
				{
				// If mode is input
				case MGPIO_INPUT:
					CLR_BIT(GPIOB_MODER,(pinID*2));
					CLR_BIT(GPIOB_MODER,((pinID*2)+1));
					break;

					// If mode is output
				case MGPIO_OUTPUT:
					SET_BIT(GPIOB_MODER,(pinID*2));
					CLR_BIT(GPIOB_MODER,((pinID*2)+1));
					break;

					// If mode is alternate function
				case MGPIO_ALTERNATE_FUNCTION:
					CLR_BIT(GPIOB_MODER,(pinID*2));
					SET_BIT(GPIOB_MODER,((pinID*2)+1));
					break;

					// If mode is analog
				case MGPIO_ANALOG:
					SET_BIT(GPIOB_MODER,(pinID*2));
					SET_BIT(GPIOB_MODER,((pinID*2)+1));
					break;
				}
				break;

				// If port is C
				case MGPIO_PORTC:
					// Switch on the mode to configure
					switch(pinMode)
					{
					// If mode is input
					case MGPIO_INPUT:
						CLR_BIT(GPIOC_MODER,(pinID*2));
						CLR_BIT(GPIOC_MODER,((pinID*2)+1));
						break;

						// If mode is output
					case MGPIO_OUTPUT:
						SET_BIT(GPIOC_MODER,(pinID*2));
						CLR_BIT(GPIOC_MODER,((pinID*2)+1));
						break;

						// If mode is alternate function
					case MGPIO_ALTERNATE_FUNCTION:
						CLR_BIT(GPIOC_MODER,(pinID*2));
						SET_BIT(GPIOC_MODER,((pinID*2)+1));
						break;

						// If mode is analog
					case MGPIO_ANALOG:
						SET_BIT(GPIOC_MODER,(pinID*2));
						SET_BIT(GPIOC_MODER,((pinID*2)+1));
						break;
					}
					break;

					default:
						//ERROR
						break;
		}
	}
	else
	{
		// Do Nothing
	}
}

// Function to set the output mode (push pull , open drain) of a specific pin
void MGPIO_voidSetPinOutputMode(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_OUTPUT_MODE_e pinOutputMode)
{
	// Check if portID, pinID, and pinOutputMode are within valid range
	if ((portID <= MGPIO_PORTC) && (pinID <= PIN15) && (pinOutputMode <= MGPIO_OUTPUT_OPEN_DRAIN))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			// Switch on the desired output mode
			switch (pinOutputMode)
			{
			// If output mode is push-pull
			case MGPIO_OUTPUT_PUSH_PULL:
				CLR_BIT(GPIOA_OTYPER, pinID);
				break;

				// If output mode is open-drain
			case MGPIO_OUTPUT_OPEN_DRAIN:
				SET_BIT(GPIOA_OTYPER, pinID);
				break;
			}
			break;

			// If port is B
			case MGPIO_PORTB:
				// Switch on the desired output mode
				switch (pinOutputMode)
				{
				// If output mode is push-pull
				case MGPIO_OUTPUT_PUSH_PULL:
					CLR_BIT(GPIOB_OTYPER, pinID);
					break;

					// If output mode is open-drain
				case MGPIO_OUTPUT_OPEN_DRAIN:
					SET_BIT(GPIOB_OTYPER, pinID);
					break;
				}
				break;

				// If port is C
				case MGPIO_PORTC:
					// Switch on the desired output mode
					switch (pinOutputMode)
					{
					// If output mode is push-pull
					case MGPIO_OUTPUT_PUSH_PULL:
						CLR_BIT(GPIOC_OTYPER, pinID);
						break;

						// If output mode is open-drain
					case MGPIO_OUTPUT_OPEN_DRAIN:
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

// Function to set the output speed (low , medium , high , very high) of a specific pin
void MGPIO_voidSetPinOutputSpeed(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_OUTPUT_SPEED_e pinOutputSpeed)
{
	// Check if portID and pinID are within valid range
	if ((portID <= MGPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			// Switch on the desired output speed
			switch (pinOutputSpeed)
			{
			// If output speed is low
			case MGPIO_OUTPUT_LOW:
				CLR_BIT(GPIOA_OSPEEDR, (pinID * 2));
				CLR_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;

				// If output speed is medium
			case MGPIO_OUTPUT_MEDIUM:
				SET_BIT(GPIOA_OSPEEDR, (pinID * 2));
				CLR_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;

				// If output speed is high
			case MGPIO_OUTPUT_HIGH:
				CLR_BIT(GPIOA_OSPEEDR, (pinID * 2));
				SET_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;

				// If output speed is very high
			case MGPIO_OUTPUT_VERY_HIGH:
				SET_BIT(GPIOA_OSPEEDR, (pinID * 2));
				SET_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;
			}
			break;

			// If port is B
			case MGPIO_PORTB:
				// Switch on the desired output speed
				switch (pinOutputSpeed)
				{
				// If output speed is low
				case MGPIO_OUTPUT_LOW:
					CLR_BIT(GPIOB_OSPEEDR, (pinID * 2));
					CLR_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;

					// If output speed is medium
				case MGPIO_OUTPUT_MEDIUM:
					SET_BIT(GPIOB_OSPEEDR, (pinID * 2));
					CLR_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;

					// If output speed is high
				case MGPIO_OUTPUT_HIGH:
					CLR_BIT(GPIOB_OSPEEDR, (pinID * 2));
					SET_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;

					// If output speed is very high
				case MGPIO_OUTPUT_VERY_HIGH:
					SET_BIT(GPIOB_OSPEEDR, (pinID * 2));
					SET_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;
				}
				break;

				// If port is C
				case MGPIO_PORTC:
					// Switch on the desired output speed
					switch (pinOutputSpeed)
					{
					// If output speed is low
					case MGPIO_OUTPUT_LOW:
						CLR_BIT(GPIOC_OSPEEDR, (pinID * 2));
						CLR_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
						break;

						// If output speed is medium
					case MGPIO_OUTPUT_MEDIUM:
						SET_BIT(GPIOC_OSPEEDR, (pinID * 2));
						CLR_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
						break;

						// If output speed is high
					case MGPIO_OUTPUT_HIGH:
						CLR_BIT(GPIOC_OSPEEDR, (pinID * 2));
						SET_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
						break;

						// If output speed is very high
					case MGPIO_OUTPUT_VERY_HIGH:
						SET_BIT(GPIOC_OSPEEDR, (pinID * 2));
						SET_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
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

// Function to set the pin value (reset , set) of a specific pin
void MGPIO_voidSetPinValue(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, MGPIO_VALUE_e pinValue)
{
	// Check if portID, pinID, and pinValue are within valid range
	if ((portID <= MGPIO_PORTC) && (pinID <= PIN15) && (pinValue <= MGPIO_SET))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			// Switch on the desired pin value
			switch (pinValue)
			{
			// If pin value is reset
			case MGPIO_RESET:
				SET_BIT(GPIOA_BSRR, (pinID + 16));
				break;

				// If pin value is set
			case MGPIO_SET:
				SET_BIT(GPIOA_BSRR, pinID);
				break;
			}
			break;

			// If port is B
			case MGPIO_PORTB:
				// Switch on the desired pin value
				switch (pinValue)
				{
				// If pin value is reset
				case MGPIO_RESET:
					SET_BIT(GPIOB_BSRR, (pinID + 16));
					break;

					// If pin value is set
				case MGPIO_SET:
					SET_BIT(GPIOB_BSRR, pinID);
					break;
				}
				break;

				// If port is C
				case MGPIO_PORTC:
					// Switch on the desired pin value
					switch (pinValue)
					{
					// If pin value is reset
					case MGPIO_RESET:
						SET_BIT(GPIOC_BSRR, (pinID + 16));
						break;

						// If pin value is set
					case MGPIO_SET:
						SET_BIT(GPIOC_BSRR, pinID);
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

// Function to get the pin value (reset , set) of a specific pin
u16 MGPIO_u8GetPinValue(MGPIO_PORT_e portID, MGPIO_PIN_e pinID)
{
	// Variable to store the pin value
	u16 pinValue;

	// Check if portID and pinID are within valid range
	if ((portID <= MGPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			// Get the value of the specified pin
			pinValue = GET_BIT(GPIOA_IDR, pinID);
			break;

			// If port is B
		case MGPIO_PORTB:
			// Get the value of the specified pin
			pinValue = GET_BIT(GPIOB_IDR, pinID);
			break;

			// If port is C
		case MGPIO_PORTC:
			// Get the value of the specified pin
			pinValue = GET_BIT(GPIOC_IDR, pinID);
			break;
		}
	}
	else
	{
		// Do Nothing
	}

	// Return the pin value
	return pinValue;
}

void MGPIO_voidLockPin(MGPIO_PORT_e portID, MGPIO_PIN_e pinID)
{

}

// Function to set the mode (input, output, alternate function, analog) of a specific port
void MGPIO_voidSetPortMode(MGPIO_PORT_e portID, MGPIO_MODE_e portMode)
{
	// Check if portID is within valid range
	if (portID <= MGPIO_PORTC) {
		u32 modeValue = 0;

		// Iterate through all pins and set the modeValue accordingly
		for (int i = 0; i < 16; i++)
		{
			modeValue |= (portMode << (2 * i));
		}

		// Switch on the port to set the modeValue in the corresponding MODER register
		switch (portID) {
		// If port is A
		case MGPIO_PORTA:
			GPIOA_MODER = modeValue;
			break;

			// If port is B
		case MGPIO_PORTB:
			GPIOB_MODER = modeValue;
			break;

			// If port is C
		case MGPIO_PORTC:
			GPIOC_MODER = modeValue;
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

// Function to set the output mode (push pull , open drain) of a specific port
void MGPIO_voidSetPortOutputMode(MGPIO_PORT_e portID, MGPIO_OUTPUT_MODE_e portOutputMode)
{
	// Check if portID is within valid range
	if ((portID <= MGPIO_PORTC))
	{
		u32 modeValue = 0;

		// Iterate through all pins and set the speedValue accordingly
		for (int i = 0; i < 16; i++)
		{
			modeValue |= (portOutputMode << (i));
		}

		// Switch on the port to set the portOutputMode in the corresponding OTYPER register
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			GPIOA_OTYPER = modeValue;
			break;

			// If port is B
		case MGPIO_PORTB:
			GPIOB_OTYPER = modeValue;
			break;

			// If port is C
		case MGPIO_PORTC:
			GPIOC_OTYPER = modeValue;
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

// Function to set the output speed (low , medium , high , very high) of a specific port
void MGPIO_voidSetPortOutputSpeed(MGPIO_PORT_e portID, MGPIO_OUTPUT_SPEED_e portOutputSpeed) {
	// Check if portID is within valid range
	if (portID <= MGPIO_PORTC)
	{
		u32 speedValue = 0;

		// Iterate through all pins and set the speedValue accordingly
		for (int i = 0; i < 16; i++)
		{
			speedValue |= (portOutputSpeed << (2 * i));
		}

		// Switch on the port to set the speedValue in the corresponding OSPEEDR register
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			GPIOA_OSPEEDR = speedValue;
			break;

			// If port is B
		case MGPIO_PORTB:
			GPIOB_OSPEEDR = speedValue;
			break;

			// If port is C
		case MGPIO_PORTC:
			GPIOC_OSPEEDR = speedValue;
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

// Function to set the port value (reset , set) of a specific port
void MGPIO_voidSetPortValue(MGPIO_PORT_e portID, MGPIO_VALUE_e portValue)
{
	// Check if portID is within valid range
	if ( (portID <= MGPIO_PORTC) )
	{
		u32 portvalue = 0;

		// Iterate through all pins and set the speedValue accordingly
		for (int i = 0; i < 16; i++)
		{
			portvalue |= (portValue << (i));
		}
		// Switch on the port to set the specified portValue in the corresponding ODR register
		switch (portID)
		{
		// If port is A
		case MGPIO_PORTA:
			GPIOA_ODR = portvalue;
			break;

			// If port is B
		case MGPIO_PORTB:
			GPIOB_ODR = portvalue;
			break;

			// If port is C
		case MGPIO_PORTC:
			GPIOC_ODR = portvalue;
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}

// Function to get the port value (reset , set) of a specific port
u16 MGPIO_u8GetPortValue(MGPIO_PORT_e portID)
{
	u16 value = 0;

	// Switch on the port to read the value from the corresponding IDR register
	switch (portID)
	{
	// If port is A
	case MGPIO_PORTA:
		value = (u16)GPIOA_IDR;
		break;

		// If port is B
	case MGPIO_PORTB:
		value = (u16)GPIOB_IDR;
		break;

		// If port is C
	case MGPIO_PORTC:
		value = (u16)GPIOC_IDR;
		break;

	default:
		// Do Nothing
		break;
	}

	return value;
}


void MGPIO_voidLockPort(MGPIO_PORT_e portID)
{

}

/**
 * @brief A Function to set the alternative function for a pin
 *
 * @param portID: GPIO_PORTA, GPIO_PORTB, GPIO_PORTC
 * @param pinID: GPIO_PIN0, GPIO_PIN1, ..., GPIO_PIN15
 * @param AlternativeFunctionID: GPIO_AF00, GPIO_AF01, ..., GPIO_AF15
 */
void MGPIO_voidSetAlternativeFunction(MGPIO_PORT_e portID, MGPIO_PIN_e pinID, Alternative_Function_e AlternativeFunctionID)
{
	switch (portID)
	{
	case MGPIO_PORTA:
		if(pinID <= PIN7 && pinID >= PIN0)
		{
			GPIOA_AFRL &= ~(AF_MASK << (pinID * AF_BITS_OFFSET));
			GPIOA_AFRL |= (AlternativeFunctionID << (pinID * AF_BITS_OFFSET));
		}
		else if(pinID <= PIN15 && pinID >= PIN8)
		{
			GPIOA_AFRH &= ~(AF_MASK << ((pinID-AF_HIGH_BITS_OFFSET) * AF_BITS_OFFSET));
			GPIOA_AFRH |= (AlternativeFunctionID << ((pinID-AF_HIGH_BITS_OFFSET) * AF_BITS_OFFSET));
		}
		else
		{
			//Error
		}
		break;

	default:
		break;
	}
}
