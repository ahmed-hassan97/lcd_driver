/*
 * lcd_8bit_mode.c
 *
 * Created: 9/3/2019 1:13:25 PM
 *  Author: A
 */ 


#include "macro.h"
#include "lcd_8bit_driver.h"
int main(void)
{
	lcd_init();
	lcd_write_command(CLEAR);
	lcd_write_string("ahmedhassan");
	//lcd_set_cursor(2,1);
	//lcd_write_num(233454656);
    while(1)
    {
        //TODO:: Please write your application code 
    }
}