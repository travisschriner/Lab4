/*
 * ClockSpeed.c
 *
 * Description: This file creates functions to adjust the
 * clock of the MSP430 microprocessor to specific speeds.
 * uses .ASM code from 5.2.5.2 from the data sheet.
 * Jenae Steinmiller told me what the four clock vals were
 *
 *  Created on: Oct 24, 2013
 *  Author: C15Travis.Schriner
 */

#include "msp430.h"
#include "ClockSpeed.h"

void Speed1MHz(){
	BCSCTL1 = CALBC1_1MHZ;
	DCOCTL  = CALDCO_1MHZ;
}

void Speed8MHz(){
	BCSCTL1 = CALBC1_8MHZ;
	DCOCTL  = CALDCO_8MHZ;

}

void Speed12MHz(){
	BCSCTL1 = CALBC1_12MHZ;
	DCOCTL  = CALDCO_12MHZ;

}

void Speed16MHz(){
	BCSCTL1 = CALBC1_16MHZ;
	DCOCTL  = CALDCO_16MHZ;

}

