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


//this is copied pretty much from Lab 3 example code
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

void LCDDELAY1(){

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

void setSSHi(){
	P1OUT |= BIT0;
}

void setSSLo(){
	P1OUT &= ~BIT0;
}

void LCDWRT4(){
	LCDDATA = r5;
	r5 += 15;
	LCDCON |= r5;
	r5 += 127;
	SPISEND();
	LCDDELAY1();
	r5 |= 128;
	SPISEND();
	LCDDELAY1();
	r5 += 127;
	SPISEND();
	LCDDELAY1();


}

void LCDWRT8(){

}

void SPISEND(){
	setSSLo();
	UCB0TXBUF = r5;
	//need to complete all of wait1.
	//I dont know how to pipe bit.b command

}


