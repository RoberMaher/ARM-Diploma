/*********************************************
 * Author:				Rober Maher
 * Creation Data:		22 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				HAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  22 Mar, 2024	    Rober Maher		        Initial Creation
 * v1.1		  21 Apr, 2024	    Rober Maher		        Editing in Names Of GPIO ports
*********************************************/
#ifndef LEDMAT_CONFIG_H
#define LEDMAT_CONFIG_H


#define     HLEDMAT_COL0_PORT_PIN       MGPIO_PORTA,PIN0
#define     HLEDMAT_COL1_PORT_PIN       MGPIO_PORTA,PIN1
#define     HLEDMAT_COL2_PORT_PIN       MGPIO_PORTA,PIN2
#define     HLEDMAT_COL3_PORT_PIN       MGPIO_PORTA,PIN3
#define     HLEDMAT_COL4_PORT_PIN       MGPIO_PORTA,PIN4
#define     HLEDMAT_COL5_PORT_PIN       MGPIO_PORTA,PIN5
#define     HLEDMAT_COL6_PORT_PIN       MGPIO_PORTA,PIN6
#define     HLEDMAT_COL7_PORT_PIN       MGPIO_PORTA,PIN7

#define     HLEDMAT_ROW0_PORT_PIN       MGPIO_PORTB,PIN0
#define     HLEDMAT_ROW1_PORT_PIN       MGPIO_PORTB,PIN1
#define     HLEDMAT_ROW2_PORT_PIN       MGPIO_PORTB,PIN2
#define     HLEDMAT_ROW3_PORT_PIN       MGPIO_PORTB,PIN3
#define     HLEDMAT_ROW4_PORT_PIN       MGPIO_PORTB,PIN4
#define     HLEDMAT_ROW5_PORT_PIN       MGPIO_PORTB,PIN5
#define     HLEDMAT_ROW6_PORT_PIN       MGPIO_PORTB,PIN6
#define     HLEDMAT_ROW7_PORT_PIN       MGPIO_PORTB,PIN7

#endif
