/*
 * lcd_8bit_driver.h
 *
 * Created: 9/3/2019 1:15:47 PM
 *  Author: A
 */ 


#ifndef LCD_8BIT_DRIVER_H_
#define LCD_8BIT_DRIVER_H_
#include "macro.h"
#define CLEAR 0X01
#define HOME 0x02
#define SHIFT_CURSOR_L 0X10
#define SHIFT_CURSOR_R 0X14
#define SHIFT_DIS_L 0X18
#define SHIFT_DIS_4 0X1C
#define LINE_TWO 0XC0
#define LINE_ONE 0X80
#define increment_cursor 0x06
#define display_off_cursor 0x08
#define init_port SET_ALL(DDRC); SET_BIT(DDRB,0) | SET_BIT(DDRB,1);

#define EN(x)  if(x == 1) SET_BIT(PORTB,0); else CLEAR_BIT(PORTB,0);
#define RS(x)  if(x == 1) SET_BIT(PORTB,1); else CLEAR_BIT(PORTB,1);
#define D7(x)  if(x == 1) SET_BIT(PORTC,7); else CLEAR_BIT(PORTC,7);
#define D6(x)  if(x == 1) SET_BIT(PORTC,6); else CLEAR_BIT(PORTC,6);
#define D5(x)  if(x == 1) SET_BIT(PORTC,5); else CLEAR_BIT(PORTC,5);
#define D4(x)  if(x == 1) SET_BIT(PORTC,4); else CLEAR_BIT(PORTC,4);
#define D3(x)  if(x == 1) SET_BIT(PORTC,3); else CLEAR_BIT(PORTC,3);
#define D2(x)  if(x == 1) SET_BIT(PORTC,2); else CLEAR_BIT(PORTC,2);
#define D1(x)  if(x == 1) SET_BIT(PORTC,1); else CLEAR_BIT(PORTC,1);
#define D0(x)  if(x == 1) SET_BIT(PORTC,0); else CLEAR_BIT(PORTC,0);
#define TRIGGER EN(1); _delay_ms(1); EN(0); _delay_ms(1);

void lcd_init();
void lcd_write_command(uint8_t cmd);
void lcd_write_char(uint8_t data);
void lcd_write_string(uint8_t *str);
void lcd_write_num(uint32_t num);
void lcd_set_cursor(uint8_t row,uint8_t column);




#endif /* LCD_8BIT_DRIVER_H_ */