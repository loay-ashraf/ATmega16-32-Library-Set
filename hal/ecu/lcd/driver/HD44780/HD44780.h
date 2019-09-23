/*
 * HD44780.h
 *
 * Created: 23/09/2019 05:13:26 PM
 *  Author: Loay Ashraf
 */ 


#ifndef HD44780_H_
#define HD44780_H_

#include "hal/mcu/sys/std_types.h"

/*------------DEFINE HD44780 COMMANDS------------*/

#define HD44780_4BIT_MODE		0x28
#define HD44780_8BIT_MODE		0x38
#define HD44780_DISPLAY_ON		0x0C
#define HD44780_CURSOR_RIGHT	0x06
#define HD44780_CLEAR_DISPLAY	0x01
#define HD44780_SCROLL_DISPLAY	0x18
#define HD44780_SHIFT_CURSOR	0x10

/*------------DEFINE HD44780 ROW ADDRESSES------------*/

#define HD44780_ROW_ZERO		0x80
#define HD44780_ROW_ONE			0xC0
#define HD44780_ROW_TWO			0x94
#define HD44780_ROW_THREE		0xD4

typedef enum{HD44780_INSTRUCTION,HD44780_DATA}hd44780transmissiontype_t;

void HD44780_init(bool_t a_cursorVisible, bool_t a_cursorBlinking);
void HD44780_sendInstruction(ubyte_t a_instruction);
void HD44780_clearDisplay(void);
void HD44780_configCursor(bool_t a_cursorVisible, bool_t a_cursorBlinking);
void HD44780_setCursorPosition(ubyte_t a_row, ubyte_t a_col);
void HD44780_shiftCursor(bool_t a_dir);
void HD44780_scrollDisplay(bool_t a_dir);
void HD44780_defineCustomCharacter(ubyte_t a_characterIndex, ubyte_t a_characterArray[8]);
void HD44780_putc(char a_data);
char HD44780_readChar(void);

#endif /* HD44780_H_ */