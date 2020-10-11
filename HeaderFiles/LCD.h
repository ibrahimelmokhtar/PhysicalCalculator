#ifndef LCD
#define LCD

#include <HeaderFiles/delay.h>
#include "tm4c123gh6pm.h"

void LCD_init(void);			/*initialize the LCD pins*/
void LCD_command(unsigned char command);		//uint8_t
void LCD_data(unsigned char data);

#endif
