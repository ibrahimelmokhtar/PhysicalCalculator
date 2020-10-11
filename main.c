#include "HeaderFiles/Keypad.h"


/**
 * main.c
 */

int main(void) {

    /* initialize used utilities and ports */
    KEYPAD_init();
    PORTF_init();

    /* used variables */
    unsigned char input = '0';
    int validInput = 0;

    /* main loop */
    while(1){
        input = KEYPAD_getKey();
        validInput = RG_LED(input);

        if (validInput == 1){
            printf("input is: %c \n", input);
            delay_Us(500000);
        }
    }
}
