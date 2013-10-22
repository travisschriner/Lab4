#include <msp430.h>
#include "lcd.h"

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

	while(1){

	}
}
