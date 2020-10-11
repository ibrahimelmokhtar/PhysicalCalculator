#include "HeaderFiles/Keypad.h"
#include "HeaderFiles/LCD.h"


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
    char C_array[6];
    static int i = 0;

    /* main loop */
    while (1) {
        input = KEYPAD_getKey();
        validInput = RG_LED(input);

        if (validInput == 1) {
            if (input == 'C') {
                LCD_command(0x01);
                LCD_command(0x0F);
            }
            else{
                if (i < 6) {
                    C_array[i] = input;
                    LCD_data(input);
                    i++;
                }
                else {
                    printf("Hello\n");
                }
            }
            delay_Us(500000);
        }
    }
}
