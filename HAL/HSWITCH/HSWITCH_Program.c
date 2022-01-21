/*
 * HSWITCH_Program.c
 *
 *  Created on: Jan 20, 2022
 *      Author: Ahmed Khaled Hammad
 */

#include"../../MCAL/MDIO/MDIO_Interface.h"
#include"HSWITCH_Interface.h"
void HSWITCH_VidInit_PullUP(SWITCH_t *Copy_SWITCH_tSwitch)
{
 /*Set pin direction*/
  /*Active Pull up resistor*/
  MDIO_VidActivePullUP(Copy_SWITCH_tSwitch->Copy_u8PinNumber, Copy_SWITCH_tSwitch->Copy_u8PortNumber);
}
