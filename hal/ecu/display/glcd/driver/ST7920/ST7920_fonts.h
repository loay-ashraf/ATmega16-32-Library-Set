/**********************************************************************
*
* File:         ST7920_fonts.h
*
* Author(s):    Loay Ashraf <loay.ashraf.96@gmail.com>
*
* Date created: 28/09/2019
*
* Description:  contains fonts used for ST7920 controller module.
*
**********************************************************************/

#ifndef ST7920_FONTS_H_
#define ST7920_FONTS_H_

/*------------------------------INCLUDES-----------------------------*/

#include "service/include/std_types.h"
#include <avr/pgmspace.h>

/*--------------------------GLOBAL VARIABLES-------------------------*/

/**********************************************************************
*
* Variable:    font_5x8
*
* Description: 5x8 font array used to print text to display for
*              ST7920 controller module.
*
* Notes:       This variable is stored in ROM (flash memory).
*
* Scope:       Program.
*
**********************************************************************/

const ubyte_t font_5x8[95][8] PROGMEM = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //Space 0
    {0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x08, 0x00}, //! 1
    {0x10, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00}, //� 2
    {0x00, 0x14, 0x3E, 0x14, 0x3E, 0x14, 0x00, 0x00}, //# 3
    {0x08, 0x1E, 0x20, 0x1C, 0x02, 0x3C, 0x08, 0x00}, //$ 4
    {0x00, 0x30, 0x32, 0x04, 0x08, 0x16, 0x26, 0x00}, //% 5
    {0x18, 0x24, 0x24, 0x18, 0x2A, 0x24, 0x1A, 0x00}, //&amp; 6
    {0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //&#39; 7
    {0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x00}, //( 8
    {0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00}, //) 9
    {0x2A, 0x1C, 0x1C, 0x1C, 0x2A, 0x00, 0x00, 0x00}, //* 10
    {0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, 0x00}, //+ 11
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x40}, //, 12
    {0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00}, //- 13
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00}, //. 14
    {0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x00}, /// 15
    {0x1C, 0x22, 0x22, 0x2A, 0x22, 0x22, 0x1C, 0x00}, //0 16
    {0x08, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}, //1 17
    {0x1C, 0x22, 0x02, 0x04, 0x08, 0x10, 0x3E, 0x00}, //2 18
    {0x1C, 0x22, 0x02, 0x0C, 0x02, 0x22, 0x1C, 0x00}, //3 19
    {0x04, 0x14, 0x14, 0x24, 0x3E, 0x04, 0x04, 0x00}, //4 20
    {0x3E, 0x20, 0x3C, 0x02, 0x02, 0x22, 0x1C, 0x00}, //5 21
    {0x1C, 0x20, 0x20, 0x2C, 0x32, 0x22, 0x1C, 0x00}, //6 22
    {0x3E, 0x02, 0x04, 0x04, 0x08, 0x08, 0x08, 0x00}, //7 23
    {0x1C, 0x22, 0x22, 0x1C, 0x22, 0x22, 0x1C, 0x00}, //8 24
    {0x1C, 0x22, 0x26, 0x1A, 0x02, 0x22, 0x1C, 0x00}, //9 25
    {0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x00}, //: 26
    {0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x40, 0x00}, //; 27
    {0x00, 0x06, 0x18, 0x60, 0x18, 0x06, 0x00, 0x00}, //&lt; 28
    {0x00, 0x00, 0x3E, 0x00, 0x3E, 0x00, 0x00, 0x00}, //= 29
    {0x00, 0x60, 0x18, 0x06, 0x18, 0x60, 0x00, 0x00}, //&gt; 30
    {0x1C, 0x22, 0x22, 0x04, 0x08, 0x00, 0x08, 0x00}, //? 31
    {0x3C, 0x42, 0x5D, 0x55, 0x5D, 0x47, 0x20, 0x1E}, //@ 32
    {0x1C, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x22, 0x00}, //A 33
    {0x3C, 0x22, 0x22, 0x3C, 0x22, 0x22, 0x3C, 0x00}, //B 34
    {0x1C, 0x22, 0x20, 0x20, 0x20, 0x22, 0x1C, 0x00}, //C 35
    {0x3C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x3C, 0x00}, //D 36
    {0x3E, 0x20, 0x20, 0x3C, 0x20, 0x20, 0x3E, 0x00}, //E 37
    {0x3C, 0x20, 0x20, 0x3C, 0x20, 0x20, 0x20, 0x00}, //F 38
    {0x1C, 0x22, 0x20, 0x20, 0x26, 0x22, 0x1C, 0x00}, //G 39
    {0x22, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x22, 0x00}, //H 40
    {0x1C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1C, 0x00}, //I 41
    {0x0C, 0x04, 0x04, 0x04, 0x24, 0x24, 0x18, 0x00}, //J 42
    {0x22, 0x24, 0x28, 0x30, 0x28, 0x24, 0x22, 0x00}, //K 43
    {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3E, 0x00}, //L 44
    {0x22, 0x36, 0x2A, 0x22, 0x22, 0x22, 0x22, 0x00}, //M 45
    {0x32, 0x32, 0x2A, 0x2A, 0x26, 0x26, 0x22, 0x00}, //N 46
    {0x1C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x00}, //O 47
    {0x3C, 0x22, 0x22, 0x3C, 0x20, 0x20, 0x20, 0x00}, //P 48
    {0x1C, 0x22, 0x22, 0x22, 0x2A, 0x24, 0x1A, 0x00}, //Q 49
    {0x3C, 0x22, 0x22, 0x3C, 0x28, 0x24, 0x22, 0x00}, //R 50
    {0x1C, 0x22, 0x20, 0x1C, 0x02, 0x22, 0x1C, 0x00}, //S 51
    {0x3E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}, //T 52
    {0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x00}, //U 53
    {0x22, 0x22, 0x22, 0x22, 0x14, 0x14, 0x08, 0x00}, //V 54
    {0x22, 0x22, 0x22, 0x2A, 0x2A, 0x14, 0x14, 0x00}, //W 55
    {0x22, 0x22, 0x14, 0x08, 0x14, 0x22, 0x22, 0x00}, //X 56
    {0x22, 0x22, 0x14, 0x08, 0x08, 0x08, 0x08, 0x00}, //Y 57
    {0x3E, 0x02, 0x04, 0x08, 0x10, 0x20, 0x3E, 0x00}, //Z 58
    {0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x00}, //[ 59
    {0x20, 0x20, 0x10, 0x10, 0x10, 0x08, 0x08, 0x00}, //&quot;\&quot; 60
    {0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x00}, //] 61
    {0x08, 0x14, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00}, //^ 62
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E}, //_ 63
    {0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //` 64
    {0x00, 0x00, 0x1C, 0x02, 0x1E, 0x22, 0x1C, 0x00}, //a 65
    {0x20, 0x20, 0x2C, 0x32, 0x22, 0x22, 0x3C, 0x00}, //b 66
    {0x00, 0x00, 0x1E, 0x20, 0x20, 0x20, 0x1E, 0x00}, //c 67
    {0x02, 0x02, 0x1A, 0x26, 0x22, 0x22, 0x1E, 0x00}, //d 68
    {0x00, 0x00, 0x1C, 0x22, 0x3E, 0x20, 0x1C, 0x00}, //e 69
    {0x0C, 0x12, 0x10, 0x3C, 0x10, 0x10, 0x10, 0x00}, //f 70
    {0x1A, 0x26, 0x22, 0x22, 0x1E, 0x02, 0x1C, 0x00}, //g 71
    {0x20, 0x20, 0x2C, 0x32, 0x22, 0x22, 0x22, 0x00}, //h 72
    {0x00, 0x08, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00}, //i 73
    {0x08, 0x00, 0x18, 0x08, 0x08, 0x08, 0x10, 0x00}, //j 74
    {0x10, 0x10, 0x12, 0x14, 0x18, 0x14, 0x12, 0x00}, //k 75
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00}, //l 76
    {0x00, 0x00, 0x34, 0x2A, 0x2A, 0x2A, 0x2A, 0x00}, //m 77
    {0x00, 0x00, 0x2C, 0x32, 0x22, 0x22, 0x22, 0x00}, //n 78
    {0x00, 0x00, 0x1C, 0x22, 0x22, 0x22, 0x1C, 0x00}, //o 79
    {0x00, 0x2C, 0x32, 0x22, 0x3C, 0x20, 0x20, 0x00}, //p 80
    {0x00, 0x1A, 0x26, 0x22, 0x1E, 0x02, 0x02, 0x00}, //q 81
    {0x00, 0x00, 0x2C, 0x32, 0x20, 0x20, 0x20, 0x00}, //r 82
    {0x00, 0x00, 0x1E, 0x20, 0x1C, 0x02, 0x3C, 0x00}, //s 83
    {0x08, 0x08, 0x1E, 0x08, 0x08, 0x08, 0x06, 0x00}, //t 84
    {0x00, 0x00, 0x22, 0x22, 0x22, 0x26, 0x1A, 0x00}, //u 85
    {0x00, 0x00, 0x22, 0x22, 0x22, 0x14, 0x08, 0x00}, //v 86
    {0x00, 0x00, 0x22, 0x22, 0x2A, 0x1C, 0x14, 0x00}, //w 87
    {0x00, 0x00, 0x22, 0x14, 0x08, 0x14, 0x22, 0x00}, //x 88
    {0x00, 0x00, 0x22, 0x14, 0x08, 0x10, 0x20, 0x00}, //y 89
    {0x00, 0x00, 0x3E, 0x04, 0x08, 0x10, 0x3E, 0x00}, //z 90
    {0x04, 0x08, 0x08, 0x10, 0x08, 0x08, 0x04, 0x00}, //{ 91
    {0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}, //| 92
    {0x10, 0x08, 0x08, 0x04, 0x08, 0x08, 0x10, 0x00}, //} 93
    {0x00, 0x00, 0x00, 0x32, 0x4C, 0x00, 0x00, 0x00} //~ 94
};

#endif /* ST7920_FONTS */