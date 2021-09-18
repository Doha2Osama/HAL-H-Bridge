/*
File Name:HBRIDGE_program
Author:DohaOsama
Date:18/9/2021
Description:H bridge Driver
version 1.0
*/

#include "../../LIB/BIT_MATH.h"

#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "HBRIDGE_interface.h"

#include "HBRIDGE_private.h"

#include "HBRIDGE_config.h"

void HBRIDGE_voidInit(void)
{
	DIO_voidSetPinDirection(HBRIDGE_PORT,HBRIDGE_PIN0,OUTPUT);
	DIO_voidSetPinDirection(HBRIDGE_PORT,HBRIDGE_PIN1,OUTPUT);
}
void HBRIDGE_voidClockWise(void)
{
	//rotate clock wise
	DIO_voidSetPinValue(HBRIDGE_PORT,HBRIDGE_PIN1,LOW);
	DIO_voidSetPinValue(HBRIDGE_PORT,HBRIDGE_PIN0,HIGH);
}
void HBRIDGE_voidCounterClockWise(void)
{
	//rotate counter clock wise
	DIO_voidSetPinValue(HBRIDGE_PORT,HBRIDGE_PIN0,LOW);
	DIO_voidSetPinValue(HBRIDGE_PORT,HBRIDGE_PIN1,HIGH);
}