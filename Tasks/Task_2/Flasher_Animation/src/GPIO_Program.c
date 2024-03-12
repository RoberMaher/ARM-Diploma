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
 * v3.0		  2  Mar, 2024		Rober Maher			    Solve the MODER problem
 * v4.0		  7  Mar, 2024		Rober Maher			    Fix Port functions
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
void GPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_MODE_e pinMode)
{
	// Ensure portID and pinID are within valid range
	if((portID <= GPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the port
		switch(portID)
		{
		// If port is A
		case GPIO_PORTA:
			// Switch on the mode to configure
			switch(pinMode)
			{
			// If mode is input
			case GPIO_INPUT:
				CLR_BIT(GPIOA_MODER,(pinID*2));
				CLR_BIT(GPIOA_MODER,((pinID*2)+1));
				break;

				// If mode is output
			case GPIO_OUTPUT:
				SET_BIT(GPIOA_MODER,(pinID*2));
				CLR_BIT(GPIOA_MODER,((pinID*2)+1));
				break;

				// If mode is alternate function
			case GPIO_ALTERNATE_FUNCTION:
				CLR_BIT(GPIOA_MODER,(pinID*2));
				SET_BIT(GPIOA_MODER,((pinID*2)+1));
				break;

				// If mode is analog
			case GPIO_ANALOG:
				SET_BIT(GPIOA_MODER,(pinID*2));
				SET_BIT(GPIOA_MODER,((pinID*2)+1));
				break;
			}
			break;

			// If port is B
			case GPIO_PORTB:
				// Switch on the mode to configure
				switch(pinMode)
				{
				// If mode is input
				case GPIO_INPUT:
					CLR_BIT(GPIOB_MODER,(pinID*2));
					CLR_BIT(GPIOB_MODER,((pinID*2)+1));
					break;

					// If mode is output
				case GPIO_OUTPUT:
					SET_BIT(GPIOB_MODER,(pinID*2));
					CLR_BIT(GPIOB_MODER,((pinID*2)+1));
					break;

					// If mode is alternate function
				case GPIO_ALTERNATE_FUNCTION:
					CLR_BIT(GPIOB_MODER,(pinID*2));
					SET_BIT(GPIOB_MODER,((pinID*2)+1));
					break;

					// If mode is analog
				case GPIO_ANALOG:
					SET_BIT(GPIOB_MODER,(pinID*2));
					SET_BIT(GPIOB_MODER,((pinID*2)+1));
					break;
				}
				break;

				// If port is C
				case GPIO_PORTC:
					// Switch on the mode to configure
					switch(pinMode)
					{
					// If mode is input
					case GPIO_INPUT:
						CLR_BIT(GPIOC_MODER,(pinID*2));
						CLR_BIT(GPIOC_MODER,((pinID*2)+1));
						break;

						// If mode is output
					case GPIO_OUTPUT:
						SET_BIT(GPIOC_MODER,(pinID*2));
						CLR_BIT(GPIOC_MODER,((pinID*2)+1));
						break;

						// If mode is alternate function
					case GPIO_ALTERNATE_FUNCTION:
						CLR_BIT(GPIOC_MODER,(pinID*2));
						SET_BIT(GPIOC_MODER,((pinID*2)+1));
						break;

						// If mode is analog
					case GPIO_ANALOG:
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
void GPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_MODE_e pinOutputMode)
{
	// Check if portID, pinID, and pinOutputMode are within valid range
	if ((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinOutputMode <= GPIO_OUTPUT_OPEN_DRAIN))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case GPIO_PORTA:
			// Switch on the desired output mode
			switch (pinOutputMode)
			{
			// If output mode is push-pull
			case GPIO_OUTPUT_PUSH_PULL:
				CLR_BIT(GPIOA_OTYPER, pinID);
				break;

				// If output mode is open-drain
			case GPIO_OUTPUT_OPEN_DRAIN:
				SET_BIT(GPIOA_OTYPER, pinID);
				break;
			}
			break;

			// If port is B
			case GPIO_PORTB:
				// Switch on the desired output mode
				switch (pinOutputMode)
				{
				// If output mode is push-pull
				case GPIO_OUTPUT_PUSH_PULL:
					CLR_BIT(GPIOB_OTYPER, pinID);
					break;

					// If output mode is open-drain
				case GPIO_OUTPUT_OPEN_DRAIN:
					SET_BIT(GPIOB_OTYPER, pinID);
					break;
				}
				break;

				// If port is C
				case GPIO_PORTC:
					// Switch on the desired output mode
					switch (pinOutputMode)
					{
					// If output mode is push-pull
					case GPIO_OUTPUT_PUSH_PULL:
						CLR_BIT(GPIOC_OTYPER, pinID);
						break;

						// If output mode is open-drain
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

// Function to set the output speed (low , medium , high , very high) of a specific pin
void GPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OUTPUT_SPEED_e pinOutputSpeed)
{
	// Check if portID and pinID are within valid range
	if ((portID <= GPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case GPIO_PORTA:
			// Switch on the desired output speed
			switch (pinOutputSpeed)
			{
			// If output speed is low
			case GPIO_OUTPUT_LOW:
				CLR_BIT(GPIOA_OSPEEDR, (pinID * 2));
				CLR_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;

				// If output speed is medium
			case GPIO_OUTPUT_MEDIUM:
				SET_BIT(GPIOA_OSPEEDR, (pinID * 2));
				CLR_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;

				// If output speed is high
			case GPIO_OUTPUT_HIGH:
				CLR_BIT(GPIOA_OSPEEDR, (pinID * 2));
				SET_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;

				// If output speed is very high
			case GPIO_OUTPUT_VERY_HIGH:
				SET_BIT(GPIOA_OSPEEDR, (pinID * 2));
				SET_BIT(GPIOA_OSPEEDR, ((pinID * 2) + 1));
				break;
			}
			break;

			// If port is B
			case GPIO_PORTB:
				// Switch on the desired output speed
				switch (pinOutputSpeed)
				{
				// If output speed is low
				case GPIO_OUTPUT_LOW:
					CLR_BIT(GPIOB_OSPEEDR, (pinID * 2));
					CLR_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;

					// If output speed is medium
				case GPIO_OUTPUT_MEDIUM:
					SET_BIT(GPIOB_OSPEEDR, (pinID * 2));
					CLR_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;

					// If output speed is high
				case GPIO_OUTPUT_HIGH:
					CLR_BIT(GPIOB_OSPEEDR, (pinID * 2));
					SET_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;

					// If output speed is very high
				case GPIO_OUTPUT_VERY_HIGH:
					SET_BIT(GPIOB_OSPEEDR, (pinID * 2));
					SET_BIT(GPIOB_OSPEEDR, ((pinID * 2) + 1));
					break;
				}
				break;

				// If port is C
				case GPIO_PORTC:
					// Switch on the desired output speed
					switch (pinOutputSpeed)
					{
					// If output speed is low
					case GPIO_OUTPUT_LOW:
						CLR_BIT(GPIOC_OSPEEDR, (pinID * 2));
						CLR_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
						break;

						// If output speed is medium
					case GPIO_OUTPUT_MEDIUM:
						SET_BIT(GPIOC_OSPEEDR, (pinID * 2));
						CLR_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
						break;

						// If output speed is high
					case GPIO_OUTPUT_HIGH:
						CLR_BIT(GPIOC_OSPEEDR, (pinID * 2));
						SET_BIT(GPIOC_OSPEEDR, ((pinID * 2) + 1));
						break;

						// If output speed is very high
					case GPIO_OUTPUT_VERY_HIGH:
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
void GPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_VALUE_e pinValue)
{
	// Check if portID, pinID, and pinValue are within valid range
	if ((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinValue <= GPIO_SET))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case GPIO_PORTA:
			// Switch on the desired pin value
			switch (pinValue)
			{
			// If pin value is reset
			case GPIO_RESET:
				SET_BIT(GPIOA_BSRR, (pinID + 16));
				break;

				// If pin value is set
			case GPIO_SET:
				SET_BIT(GPIOA_BSRR, pinID);
				break;
			}
			break;

			// If port is B
			case GPIO_PORTB:
				// Switch on the desired pin value
				switch (pinValue)
				{
				// If pin value is reset
				case GPIO_RESET:
					SET_BIT(GPIOB_BSRR, (pinID + 16));
					break;

					// If pin value is set
				case GPIO_SET:
					SET_BIT(GPIOB_BSRR, pinID);
					break;
				}
				break;

				// If port is C
				case GPIO_PORTC:
					// Switch on the desired pin value
					switch (pinValue)
					{
					// If pin value is reset
					case GPIO_RESET:
						SET_BIT(GPIOC_BSRR, (pinID + 16));
						break;

						// If pin value is set
					case GPIO_SET:
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
u16 GPIO_u8GetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{
	// Variable to store the pin value
	u16 pinValue;

	// Check if portID and pinID are within valid range
	if ((portID <= GPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case GPIO_PORTA:
			// Get the value of the specified pin
			pinValue = GET_BIT(GPIOA_IDR, pinID);
			break;

			// If port is B
		case GPIO_PORTB:
			// Get the value of the specified pin
			pinValue = GET_BIT(GPIOB_IDR, pinID);
			break;

			// If port is C
		case GPIO_PORTC:
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

void GPIO_voidLockPin(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{

}

// Function to set the mode (input, output, alternate function, analog) of a specific port
void GPIO_voidSetPortMode(GPIO_PORT_e portID, GPIO_MODE_e portMode)
{
	// Check if portID is within valid range
	if (portID <= GPIO_PORTC) {
		u32 modeValue = 0;

		// Iterate through all pins and set the modeValue accordingly
		for (int i = 0; i < 16; i++)
		{
			modeValue |= (portMode << (2 * i));
		}

		// Switch on the port to set the modeValue in the corresponding MODER register
		switch (portID) {
		// If port is A
		case GPIO_PORTA:
			GPIOA_MODER = modeValue;
			break;

			// If port is B
		case GPIO_PORTB:
			GPIOB_MODER = modeValue;
			break;

			// If port is C
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

// Function to set the output mode (push pull , open drain) of a specific port
void GPIO_voidSetPortOutputMode(GPIO_PORT_e portID, GPIO_OUTPUT_MODE_e portOutputMode)
{
	// Check if portID is within valid range
	if ((portID <= GPIO_PORTC))
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
		case GPIO_PORTA:
			GPIOA_OTYPER = modeValue;
			break;

			// If port is B
		case GPIO_PORTB:
			GPIOB_OTYPER = modeValue;
			break;

			// If port is C
		case GPIO_PORTC:
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
void GPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID, GPIO_OUTPUT_SPEED_e portOutputSpeed) {
	// Check if portID is within valid range
	if (portID <= GPIO_PORTC)
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
		case GPIO_PORTA:
			GPIOA_OSPEEDR = speedValue;
			break;

			// If port is B
		case GPIO_PORTB:
			GPIOB_OSPEEDR = speedValue;
			break;

			// If port is C
		case GPIO_PORTC:
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
void GPIO_voidSetPortValue(GPIO_PORT_e portID, GPIO_VALUE_e portValue)
{
	// Check if portID is within valid range
	if ( (portID <= GPIO_PORTC) )
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
		case GPIO_PORTA:
			GPIOA_ODR = portvalue;
			break;

			// If port is B
		case GPIO_PORTB:
			GPIOB_ODR = portvalue;
			break;

			// If port is C
		case GPIO_PORTC:
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
u16 GPIO_u8GetPortValue(GPIO_PORT_e portID) 
{
	u16 value = 0;

	// Switch on the port to read the value from the corresponding IDR register
	switch (portID)
	{
	// If port is A
	case GPIO_PORTA:
		value = (u16)GPIOA_IDR;
		break;

		// If port is B
	case GPIO_PORTB:
		value = (u16)GPIOB_IDR;
		break;

		// If port is C
	case GPIO_PORTC:
		value = (u16)GPIOC_IDR;
		break;

	default:
		// Do Nothing
		break;
	}

	return value;
}


void GPIO_voidLockPort(GPIO_PORT_e portID)
{

}
