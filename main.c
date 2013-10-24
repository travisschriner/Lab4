#include <msp430.h>
#include "lcd.h"
#include "buttons/button.h"

/*Author: Travis Schriner
 * Date 21 Oct 2013
 * Description: This program interacts with the
 * LCD in the geekbox and allows me to write to it
 *
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    initSPI();
    LCDinit();
    LCDclear();

    char *topMessage = "ECE382 is my Favorite Class!";
    char *prompt = "Message?";
    char *promptKey = "Press123";
    char *message1 = "This is message 1 fool!";
    char *message2 = "This is message 2 fool!";
    char *message3 = "This is message 3 fool!";



    cursorToLineOne();
    writeString(prompt);
    cursorToLineTwo();
    writeString(promptKey);


    configureP1PinAsButton(BIT1|BIT2|BIT3);         // configure pins 1, 2, and 3 as buttons

       P1DIR |= BIT0|BIT6;                             // set launchpad LEDs to output

           char buttons[] = {BIT1, BIT2, BIT3};
           char pressedButton = pollP1Buttons(buttons, 3);

           switch (pressedButton) {
               case BIT1:

            	   waitForP1ButtonRelease(BIT1);
            	   scrollString(topMessage, message1);

                   break;
               case BIT2:

            	   waitForP1ButtonRelease(BIT2);
            	   scrollString(topMessage, message2);
                   break;
               case BIT3:

            	   waitForP1ButtonRelease(BIT3);
            	   scrollString(topMessage, message3);

                   break;
           }
 while(1){

 }
}
