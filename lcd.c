/*
 *  lcd.c
 *
 *  Created on: Oct 21, 2013
 *  Author: C15Travis.Schriner
 *  Description: This library allows
 *  me to interact with the LCD in the
 *  GeekBox. It gives me common functions
 *  that I would need.
 */


void INITSPI(){

	UCB0CTL1 |= UCSWRST;
	UCB0CTL0 |= UCCKPH|UCMSB|UCMST|UCSYNC;
	UCB0CTL1 |=	UCSSEL1;
	UCB0STAT |=	UCLISTEN;
	P1DIR	 |=	BIT0;
	P1SEL	 |=	BIT5;
	P1SEL2	 |=	BIT5;
	P1SEL	 |=	BIT7;
	P1SEL2	 |= BIT7;
	P1SEL	 |=	BIT6;
	P1SEL	 |=	BIT6;
	UCB0CTL1 |=	UCSWRST;
}

void LCDinit(){

}

void LCDclear(){

}

void cursorToLineTwo(){

}

void cursorToLineOne(){

}

void writeChar(char asciiChar){

}

void writeString(char * string){

}

void scrollString(char * string1, char * string2){

}


