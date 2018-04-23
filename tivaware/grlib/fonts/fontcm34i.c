//*****************************************************************************
//
// fontcm34i.c - Font definition for the 34pt Cm italic font.
//
// Copyright (c) 2011-2017 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.4.178 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 34 point
//     Bold: no
//     Italic: yes
//     Memory usage: 4492 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 34 point Cm italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm34iData[4290] =
{
      5,  14,   0,  61,  32,  30,  11, 240,  34, 131, 131, 131,
    115, 131, 131, 130, 146, 146, 131, 130, 146, 146, 145, 161,
    146, 145, 161, 240, 240, 194, 131, 130,   0,  13,  64,  26,
     14, 240, 243,  51,  68,  36,  68,  36, 113,  81,  97,  81,
    113,  81,  97,  81, 113,  81,  97,  81,  97,  81,   0,  41,
     16,  94,  27,   0,   8,  81,  97, 240,  65,  97, 240,  50,
     82, 240,  49,  97, 240,  50,  82, 240,  49,  97, 240,  50,
     82, 240,  49,  97, 240,  50,  82, 240,  49,  97, 240,  50,
     82, 240,  49,  97, 191,   7, 193,  97, 240,  50,  82, 240,
     49,  97, 240,  50,  82, 240,  49,  97, 207,   7, 177,  97,
    240,  50,  82, 240,  49,  97, 240,  50,  82, 240,  49,  97,
    240,  50,  82, 240,  49,  97, 240,  50,  82, 240,  49,  97,
    240,  50,  97, 240,  49,  97, 240,  65,  97,   0,   9,  58,
     23,   0,   7,  68, 240,  35,  49, 242,  97, 226,  97, 210,
     98, 210,  83, 194,  98, 210, 240,  98, 240,  98, 240,  82,
    240,  57, 240,  34, 240,  98, 240,  82, 240,  98, 240,  98,
    240,  98, 240,  82, 240,  38, 145,  97,  51, 129,  97,  68,
    113,  97,  50,  35,  50, 116, 100,   0,  27,  88,  26, 115,
    193, 130,  34, 147, 129,  67,  84, 130,  65,  37,  18, 130,
     81, 114, 146,  81,  98, 162,  81,  83, 146,  97,  67, 162,
     81,  82, 178,  81,  66, 194,  65,  66, 210,  65,  50, 241,
     49,  51, 242,  17,  66, 240,  49,  66, 240, 130,  84, 226,
     81,  65, 194,  82,  65, 194,  66,  81, 178,  82,  81, 162,
     98,  81, 146,  98,  97, 130, 114,  81, 145, 130,  81, 130,
    130,  65, 130, 146,  65, 114, 178,  33, 129, 211,   0,  23,
    112,  77,  25, 240, 240,  52, 240,  66,  65, 129, 130,  97,
     98, 129, 113, 113, 114,  83, 113,  98,  99,  97, 114,  98,
     97, 130, 210, 130, 194, 145,  35, 115, 147,  49,  82,  17,
    146,  65,  65,  65, 115,  50,  49,  81, 113,  35,  81,  81,
     98, 163,  49,  98, 163,  49,  82, 240,  33,  82, 240,  17,
     98, 240,  17,  98, 241, 114, 241, 130, 209, 162, 162, 194,
    114, 240,  23,   0,  29,  96,  16,   8, 240,  51,  68,  68,
    113,  97, 113,  97, 113,  97,  97,   0,  23, 112,  39,  16,
    193, 210, 210, 210, 210, 225, 226, 210, 225, 226, 226, 210,
    226, 210, 226, 226, 210, 226, 226, 226, 211, 210, 226, 226,
    226, 226, 226, 226, 226, 241, 242, 226, 241, 240,  17, 241,
    192,  38,  15, 129, 241, 225, 226, 225, 225, 226, 210, 210,
    210, 210, 210, 210, 210, 195, 195, 194, 210, 210, 195, 194,
    210, 194, 210, 210, 194, 210, 194, 209, 210, 194, 209, 209,
    209, 209, 224,  33,  16, 129, 226, 225, 161,  65,  65,  82,
     49,  35,  98,  17,  34, 147,  17, 210, 197, 146,  17,  34,
     98,  49,  50,  81,  65,  65, 161, 226, 226,   0,  41,  32,
     46,  23,   0,  21,  81, 240,  98, 240,  98, 240,  97, 240,
    113, 240, 113, 240,  98, 240,  97, 240, 113, 240, 113, 207,
      5, 193, 240, 113, 240, 113, 240,  98, 240,  97, 240, 113,
    240, 113, 240,  98, 240,  97, 240, 113,   0,  22,  16,   7,
      0,  20,  50,  67,  67,  97,  97,  81,  97,  81,  81,  97,
    240,  80,   9,  11,   0,  23,  56,  56,   0,  22,  48,  10,
      6,   0,  17,  50,  51,  50,   0,   7,  32,  74,  23, 240,
     65, 240,  98, 240,  97, 240,  98, 240,  97, 240,  97, 240,
     98, 240,  97, 240,  98, 240,  97, 240,  98, 240,  97, 240,
     98, 240,  97, 240,  97, 240,  98, 240,  97, 240,  98, 240,
     97, 240,  98, 240,  97, 240,  97, 240,  98, 240,  97, 240,
     98, 240,  97, 240,  98, 240,  97, 240,  98, 240,  97, 240,
     97, 240,  98, 240,  97, 240,  98, 240,  97, 240, 112,  51,
     18,   0,   7, 101, 179,  50, 146,  97, 130, 114, 114, 114,
     98, 130,  98, 130,  83, 130,  82, 131,  82, 131,  67, 130,
     82, 146,  82, 131,  82, 131,  67, 130,  83, 115,  82, 130,
     98, 130,  98, 114, 114, 114, 129,  98, 146,  66, 181,   0,
     21,  80,  31,  14,   0,   6,  65, 209, 179, 164, 115,  18,
    194, 194, 179, 178, 194, 194, 179, 178, 194, 194, 179, 178,
    194, 194, 194, 178, 194, 138,   0,  16,  32,  53,  18,   0,
      7, 100, 209,  66, 161,  97, 145, 114, 113,  33,  82, 113,
     33,  82,  98,  33,  82,  97,  49,  82,  97,  33,  82, 113,
     33,  82, 130,  82, 242, 242, 242, 226, 242, 241, 240,  17,
    145,  97, 145, 113, 145, 101,  81, 113,  55,  97,  99,   0,
     21,  32,  53,  19,   0,   8,  37, 194,  66, 161, 114, 129,
    130, 129, 130, 113,  33,  98, 113,  33,  98, 113,  18,  82,
    146,  98, 240,  18, 240,  18, 197, 240,  50, 240,  50, 240,
     34, 240,  34, 114, 130,  99, 115,  98, 130, 113, 146, 113,
    130, 146,  66, 198,   0,  22,  96,  45,  17,   0,   7, 114,
    242, 226, 242, 242, 226, 242, 242, 226, 242, 226, 242, 226,
    242, 226, 241,  50, 162,  50, 146,  50, 146,  66, 130,  82,
    114,  98, 103,  18, 113, 102, 194, 242, 226, 242, 242, 242,
    241, 240, 240, 208,  46,  17,   0,   7,  17,  97, 136, 150,
    177, 240,  17, 241, 240,  17, 240,  17, 240,  17,  20, 161,
     17,  50, 146,  81, 145,  98, 242, 242, 242, 242,  98,  99,
     83,  98,  98, 114,  97, 114, 113,  98, 145,  66, 180,   0,
     20,  64,  49,  17,   0,   7,  68, 178,  65, 146,  66, 130,
     82, 114,  98,  99, 226, 227, 226,  36, 146,  17,  50, 116,
     82,  99,  98,  99,  98,  83, 114,  83, 114,  82, 130,  82,
    115,  82, 114,  98, 114,  98,  98, 129,  97, 146,  50, 181,
      0,  20,  48,  55,  19,   0,   7,  65,  35,  97, 103,  65,
    115,  49,  50,  98,  81,  34, 113, 115, 114, 145, 113, 145,
    113, 146, 240,  33, 240,  34, 240,  33, 240,  34, 240,  34,
    240,  18, 240,  34, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18,   0,  23,  48,  18,
      0,   7, 116, 194,  65, 162,  97, 130, 113, 129, 129, 114,
    129, 114, 113, 131,  97, 132,  65, 167, 197, 214, 162,  52,
    130,  84,  98, 115,  82, 146,  66, 162,  66, 162,  66, 161,
     82, 145, 114, 113, 131,  66, 181,   0,  21,  64,  49,  17,
      0,   7,  52, 178,  50, 146,  81, 130,  98, 114,  98,  98,
    114,  98, 114,  83, 114,  83,  99,  82, 115,  82, 115,  82,
     99,  98,  99, 113,  84, 114,  49,  18, 148,  34, 226, 242,
    226, 114,  97, 130,  81, 145,  66, 181,   0,  20,  64,  15,
      9,   0,  12,  99,  99,  98,   0,  10,  98,  99,  99,   0,
     10, 112,  21,  10,   0,  14,  50, 115, 114,   0,  12,   2,
    115, 115, 145, 145, 129, 145, 129, 145, 129, 240, 224,  30,
     11,   0,  13,  18, 131, 130, 240, 240, 193, 161, 146, 145,
    161, 146, 146, 146, 131, 130, 146, 146, 131, 131, 131, 115,
    131, 131, 130, 240,  80,  13,  25,   0,  44,  15,   5,   0,
     16,  15,   5,   0,  44,  48,  43,  15,   0,  17, 115, 195,
    194,   0,   7,   3, 178,  33, 146,  49, 145,  65, 209, 210,
    179, 179, 178,  82,  82,  83,  66,  98,  81, 129,  66, 129,
     65, 129,  81, 129,  81, 113,  97,  97, 129,  65, 164, 240,
    144,  42,  15, 240, 100, 161,  65, 129,  97,  97, 113,  81,
    129,  65, 145,  65, 130,  66, 113,  67,  98,  66,  83, 179,
    179, 178, 194, 194, 209,  65, 145,  50, 145,  34, 179,   0,
      7,   2, 195, 195,   0,  18,  32,  85,  24,   0,   7,  54,
    240,  18,  82, 210, 145, 177, 193, 145,  84,  65, 129,  66,
     50,  65,  97,  51,  81,  65,  82,  50, 114,  33,  81,  50,
    130,  33,  65,  50, 146,  33,  65,  50, 145,  49,  65,  35,
    130,  49,  49,  50, 146,  49,  49,  50, 146,  33,  65,  50,
    131,  33,  65,  50, 130,  49,  65,  50, 115,  49,  65,  66,
     84,  33,  82,  51,  50,  18,  18,  97,  84,  67, 114, 240,
    130, 209, 146, 131, 216,   0,  28,  48,  63,  24, 240, 240,
    161, 240, 114, 240, 114, 240,  99, 240,  81,  18, 240,  81,
     18, 240,  65,  34, 240,  65,  34, 240,  49,  50, 240,  49,
     51, 240,  17,  67, 240,  17,  67, 241,  83, 225,  99, 225,
     99, 209, 115, 219, 193, 131, 193, 146, 177, 162, 177, 162,
    161, 178, 146, 178, 131, 179,  86, 120,   0,  27,  48,  52,
     25,   0,   6, 126, 226, 131, 194, 146, 179, 147, 163, 147,
    162, 163, 162, 163, 147, 147, 163, 146, 178, 146, 194, 115,
    218, 227, 115, 194, 147, 178, 163, 162, 163, 147, 163, 146,
    179, 146, 179, 146, 163, 147, 147, 162, 147, 178, 131, 158,
      0,  29,  64,  56,  24,   0,   7,  38,  65, 179,  66,  34,
    162, 131, 146, 163, 130, 194, 129, 210, 114, 209, 114, 225,
    114, 225,  98, 240, 114, 240, 114, 240,  98, 240, 114, 240,
    114, 240, 114, 225, 114, 225, 114, 209, 130, 209, 146, 177,
    162, 161, 194, 129, 226,  82, 240,  37,   0,  28,  96,  53,
     26,   0,   7,  45, 243, 114, 227, 130, 210, 162, 194, 177,
    179, 178, 163, 178, 162, 194, 162, 194, 147, 194, 147, 194,
    146, 195, 146, 195, 131, 194, 147, 194, 146, 194, 162, 194,
    147, 178, 163, 178, 162, 178, 178, 162, 194, 146, 195, 114,
    189,   0,  30, 112,  63,  26,   0,   7,  47,   2, 179, 147,
    179, 162, 179, 161, 194, 177, 194, 177, 179, 177, 179,  97,
     65, 178,  97, 240,  34,  97, 240,  19,  82, 240,  26, 240,
     18,  97, 240,  34,  97, 240,  19,  97, 240,  19,  97,  81,
    162, 193, 178, 193, 163, 193, 163, 177, 179, 162, 178, 177,
    179, 147, 143,   3,   0,  30,  32,  55,  25,   0,   7,  15,
      1, 179, 131, 179, 146, 179, 161, 178, 177, 178, 177, 163,
    177, 163, 177, 162,  97, 240,  18,  97, 243,  97, 243,  82,
    249, 240,  18,  82, 243,  97, 243,  97, 243,  81, 240,  18,
    240, 115, 240, 115, 240, 115, 240, 114, 240, 115, 240,  74,
      0,  30,  57,  24,   0,   7,  53,  65, 179,  81,  49, 162,
    129,  18, 146, 163, 130, 178, 130, 194, 114, 210,  98, 226,
     98, 225,  99, 225,  98, 240, 114, 240,  99, 240,  98, 240,
    114, 240, 114, 153,  66, 210, 114, 210, 114, 195, 130, 179,
    130, 178, 162, 147, 179,  82,  18, 214,  65,   0,  28,  54,
     29,   0,   8,   8,  57, 179, 147, 227, 146, 242, 162, 242,
    147, 227, 147, 227, 147, 226, 162, 242, 162, 227, 147, 227,
    147, 238, 242, 162, 227, 147, 227, 147, 226, 162, 242, 162,
    227, 147, 227, 147, 226, 162, 242, 162, 227, 147, 227, 147,
    185,  56,   0,  33,  96,  31,  17, 240, 240, 153, 179, 226,
    242, 242, 227, 226, 242, 242, 227, 227, 226, 242, 227, 227,
    226, 242, 227, 227, 226, 242, 242, 227, 185,   0,  20,  16,
     52,  20,   0,   6,   9, 243, 240,  34, 240,  50, 240,  35,
    240,  35, 240,  34, 240,  50, 240,  35, 240,  35, 240,  34,
    240,  50, 240,  35, 240,  35, 240,  34, 240,  50, 240,  35,
    240,  35, 240,  34, 178,  67, 163,  66, 178,  67, 177,  67,
    213,   0,  24,  32,  75,  30,   0,   8,  40, 103, 179, 163,
    227, 162, 243, 145, 240,  34, 145, 240,  50, 129, 240,  51,
    113, 240,  67,  82, 240,  82,  82, 240,  98,  66, 240,  99,
     51, 240,  99,  33,  18, 240,  98,  33,  35, 240,  82,  17,
     51, 240,  68,  83, 240,  51,  99, 240,  51, 114, 240,  50,
    131, 240,  19, 131, 240,  19, 146, 240,  19, 147, 242, 163,
    227, 164, 169,  88,   0,  34,  96,  54,  22,   0,   6,  41,
    243, 240,  67, 240,  67, 240,  66, 240,  82, 240,  67, 240,
     67, 240,  66, 240,  82, 240,  67, 240,  67, 240,  66, 240,
     82, 240,  67, 240,  67, 161, 130, 161, 146, 161, 131, 161,
    131, 145, 146, 146, 146, 131, 131, 115, 111,   1,   0,  25,
     64,  94,  34,   0,   9,  38, 214, 195, 193,  18, 225,  18,
    196, 225,  18, 177,  18, 241,  18, 177,  18, 241,  18, 161,
     34, 225,  34, 161,  19, 225,  35, 129,  34, 241,  35, 113,
     50, 241,  35, 113,  50, 241,  50,  97,  51, 225,  66,  97,
     51, 225,  66,  81,  66, 241,  66,  81,  66, 241,  66,  65,
     67, 225,  82,  49,  83, 225,  82,  49,  82, 241,  82,  33,
     98, 241,  83,  17,  98, 225, 100,  99, 225, 100,  98, 241,
    114, 114, 226, 114,  99, 183,  81,  73,   0,  39,  32,  71,
     29,   0,   8,   5, 135, 195, 147, 209,  18, 161, 225,  18,
    145, 241,  19, 129, 241,  34, 129, 225,  50, 129, 225,  51,
    113, 225,  66,  97, 241,  66,  97, 225,  83,  81, 225,  98,
     81, 225,  98,  65, 241,  99,  49, 225, 130,  49, 225, 130,
     49, 225, 131,  17, 241, 146,  17, 225, 162,  17, 225, 164,
    225, 178, 241, 178, 226, 178, 183, 161,   0,  34,  55,  24,
      0,   7,  54, 240,  18,  82, 211, 114, 178, 162, 146, 193,
    130, 210,  99, 210,  83, 226,  83, 226,  67, 242,  67, 242,
     67, 227,  52, 226,  67, 242,  67, 227,  67, 226,  83, 226,
     83, 210,  99, 194, 131, 163, 131, 162, 163, 114, 211,  82,
    240,  22,   0,  28,  80,  51,  24,   0,   6,  93, 227,  99,
    194, 145, 194, 146, 163, 146, 162, 162, 162, 162, 162, 147,
    147, 146, 163, 145, 178, 146, 178, 114, 202, 227, 240,  98,
    240, 114, 240,  99, 240,  99, 240,  98, 240, 114, 240,  99,
    240,  99, 240,  99, 240,  56,   0,  29,  82,  24,   0,   7,
     53, 240,  19,  82, 210, 130, 178, 162, 146, 178, 130, 210,
     98, 226,  98, 226,  82, 242,  82, 242,  66, 240,  18,  66,
    240,  18,  51, 242,  67, 242,  66, 240,  18,  66, 242,  82,
    242,  82, 226,  98, 210, 129,  98,  81, 146,  65,  33,  49,
    178,  33,  49,  18, 210,  17,  50, 240,  38, 240, 129,  97,
    240,  17,  97, 240,  17,  81, 240,  34,  50, 240,  38, 240,
     54, 240,  67,   0,   7,  32,  55,  25,   0,   6, 125, 243,
     99, 210, 131, 194, 147, 163, 147, 163, 147, 163, 147, 162,
    163, 162, 147, 163, 146, 179, 130, 194, 114, 233, 243,  98,
    227, 114, 210, 130, 210, 130, 195, 130, 195, 115, 194, 131,
    194, 131, 179, 131,  65,  99, 131,  49,  72, 117,   0,  28,
     96,  55,  21,   0,   6,  53,  49, 162,  81,  33, 146, 115,
    145, 130, 146, 130, 130, 161, 130, 161, 130, 145, 146, 240,
     68, 240,  54, 240,  23, 240,  22, 240,  52, 240,  51, 240,
     66, 129, 162, 113, 178, 113, 177, 129, 162, 130, 145, 131,
    129, 145,  34,  66, 161,  54,   0,  25,  61,  24,   0,   6,
     47,   4,  82,  99,  83,  66, 114, 114,  65, 130, 113,  81,
    115, 113,  81, 115, 113,  65, 130, 129,  65, 130, 129, 195,
    240,  99, 240,  98, 240, 114, 240,  99, 240,  99, 240,  98,
    240, 114, 240,  99, 240,  99, 240,  98, 240, 114, 240,  99,
    240,  99, 240,  99, 240,  43,   0,  28,  64,  54,  24,   0,
      6,  24,  87,  99, 163, 131, 177, 146, 177, 162, 177, 162,
    177, 147, 177, 146, 177, 162, 177, 162, 177, 147, 177, 146,
    177, 162, 177, 162, 177, 147, 177, 146, 177, 162, 177, 162,
    177, 162, 161, 178, 161, 178, 145, 210, 113, 242,  66, 240,
     37,   0,  29,  62,  25,   0,   6,  40, 134,  83, 195, 130,
    194, 146, 193, 162, 177, 178, 177, 179, 145, 195, 129, 211,
    129, 211, 113, 227, 113, 227,  97, 240,  18,  81, 240,  34,
     81, 240,  34,  65, 240,  50,  65, 240,  51,  33, 240,  67,
     33, 240,  67,  17, 240,  84, 240, 100, 240,  99, 240, 115,
    240, 129,   0,  30,  64,  94,  33,   0,   8,  40,  71,  86,
     83, 147, 146, 115, 146, 161, 131, 146, 161, 131, 146, 145,
    147, 131, 145, 147, 132, 113, 163, 113,  19, 113, 163,  97,
     35,  97, 194,  97,  35,  81, 210,  81,  51,  81, 210,  81,
     51,  65, 226,  65,  67,  65, 226,  65,  67,  49, 242,  49,
     83,  49, 242,  49,  83,  33, 240,  18,  33,  99,  33, 240,
     18,  33,  99,  17, 240,  34,  17, 115,  17, 240,  36, 116,
    240,  51, 147, 240,  50, 162, 240,  66, 161, 240,  81, 177,
      0,  39,  32,  69,  29,   0,   8,   8,  87, 180, 131, 243,
    129, 240,  35, 113, 240,  51,  97, 240,  83,  65, 240,  99,
     65, 240,  99,  49, 240, 131,  17, 240, 148, 240, 178, 240,
    195, 240, 179, 240, 161,  18, 240, 145,  35, 240, 113,  51,
    240,  97,  83, 240,  66,  83, 240,  65,  99, 240,  49, 131,
    240,  17, 147, 241, 163, 226, 164, 167, 104,   0,  33,  80,
     58,  25,   0,   6,  40, 134,  84, 179, 131, 177, 163, 162,
    163, 161, 195, 129, 211, 113, 227,  97, 240,  18,  82, 240,
     19,  65, 240,  35,  49, 240,  66,  33, 240,  84, 240, 100,
    240,  99, 240, 115, 240, 114, 240, 130, 240, 130, 240, 115,
    240, 114, 240, 130, 240, 115, 240,  73,   0,  30,  54,  23,
      0,   6,  78, 147, 131, 131, 131, 146, 146, 161, 146, 177,
    131, 161, 131, 177, 115, 240,  82, 240,  82, 240,  83, 240,
     67, 240,  67, 240,  82, 240,  82, 240,  83, 113, 179, 129,
    163, 129, 178, 145, 162, 161, 147, 146, 131, 146, 131, 132,
    143,   0,  26, 112,  38,  16, 148, 178, 225, 241, 241, 226,
    225, 241, 241, 241, 225, 241, 241, 241, 226, 225, 241, 241,
    226, 225, 241, 241, 226, 225, 241, 241, 226, 225, 241, 241,
    226, 225, 241, 241, 229, 176,  27,  14, 240, 240,  33,  81,
     97,  81,  97,  81,  97,  97,  97,  81,  97,  81, 113,  81,
    116,  36,  68,  36,  67,  51,   0,  40, 112,  38,  15, 132,
    210, 209, 225, 225, 210, 210, 209, 225, 210, 210, 209, 225,
    225, 210, 209, 225, 225, 210, 209, 225, 225, 210, 209, 225,
    225, 210, 209, 225, 225, 210, 209, 225, 225, 180, 176,  14,
     11, 240, 178, 131, 114,  18,  82,  49,  65,  97,   0,  38,
    112,   9,   6, 240,  66,  51,  50,   0,  22,  32,  16,   8,
    240,  81,  97,  97, 113,  97,  97, 113, 116,  68,  67,   0,
     23,  80,  42,  17,   0,  24,  19, 194,  49,  17, 130,  67,
    114,  98, 114,  98,  98,  98, 114,  98,  99,  98,  98, 114,
     98,  98, 114,  98,  49,  50,  98,  49,  50,  83,  33,  82,
     34,  18,  33,  99,  67,   0,  19,  96,  45,  14, 240, 244,
    194, 194, 194, 178, 194, 194, 194, 178, 194,  35, 114,  17,
     34,  99,  66,  67,  82,  66,  98,  66,  98,  66,  98,  51,
     83,  50,  98,  66,  98,  66,  83,  66,  82,  82,  66, 114,
     34, 148,   0,  16,  96,  29,  14,   0,  20,   4, 130,  65,
     98,  66,  82,  82,  82,  82,  66, 194, 179, 178, 194, 194,
    194, 129,  65, 113,  82,  66, 132,   0,  16,  80,  57,  18,
      0,   5, 101, 242, 240,  18, 240,  18, 240,  18, 240,  17,
    240,  18, 240,  18, 240,  18, 179,  33, 162,  51, 146,  67,
    130,  98, 130,  98, 114,  98, 130,  98, 115,  98, 114, 114,
    114,  98, 130,  98,  49,  66,  83,  49,  66,  83,  33,  98,
     34,  18,  33, 115,  67,   0,  21,  30,  14,   0,  20,   4,
    130,  50,  98,  81,  82,  97,  66,  98,  66,  67,  72,  98,
    194, 194, 194, 194, 129,  65, 113,  82,  66, 117,   0,  16,
     80,  64,  19,   0,   6,  35, 242,  33, 210,  34, 210, 240,
     19, 240,  18, 240,  34, 240,  34, 240,  19, 217, 210, 240,
     34, 240,  34, 240,  19, 240,  18, 240,  34, 240,  34, 240,
     19, 240,  19, 240,  18, 240,  34, 240,  34, 240,  19, 240,
     18, 240,  34, 240,  34, 240,  18, 210,  34, 210,  34, 209,
     34, 243,   0,   6,  80,  46,  17,   0,  24,  36, 194,  51,
    130,  67, 114,  98,  99,  98,  98,  98, 114,  98,  99,  98,
     98, 114,  98,  98, 114,  98, 114,  98, 114,  83, 130,  36,
    163,  34, 242, 227, 226, 129,  98, 115,  66, 130,  66, 166,
    240, 240, 224,  57,  18, 240, 240, 133, 240,  18, 243, 242,
    240,  18, 240,  18, 240,  18, 242, 240,  18, 240,  18,  36,
    162,  17,  51, 116,  82, 115,  98, 114, 114, 114, 114,  99,
     98, 114, 114, 114,  99, 114,  98, 114, 114,  49,  50,  98,
     65,  50,  98,  49,  66,  98,  34,  65, 132,   0,  20, 112,
     34,  11, 240, 240, 146, 146, 146,   0,   7,  83,  98,  34,
     81,  50,  65,  66,  65,  51, 130, 131, 130, 131, 130, 131,
     49,  66,  65,  66,  49,  82,  34, 100,   0,  13,  42,  16,
      0,   7,  50, 226, 226,   0,  11,  36, 177,  50, 145,  66,
    130,  66, 129,  82, 129,  67, 210, 226, 226, 211, 210, 226,
    211, 210, 226, 226, 211, 210, 130,  66, 130,  50, 145,  50,
    179, 240, 240, 224,  50,  16, 240, 240,  84, 226, 226, 226,
    210, 226, 226, 226, 210, 226,  83,  98,  50,  33,  98,  33,
     50,  83,  33, 162,  18, 179, 213, 162,  50, 146,  66, 130,
     66, 130,  66,  33,  82,  66,  33,  66,  82,  33,  66,  82,
     17,  82,  99,   0,  18,  80,  34,  10, 240, 117, 130, 130,
    114, 130, 130, 130, 114, 130, 130, 115, 114, 130, 130, 115,
    114, 130, 130, 115,  33,  66,  49,  66,  49,  66,  33,  82,
     33,  99,   0,  12,  63,  28,   0,  38,  99,  53,  68, 129,
     33,  34,  50,  33,  51,  81,  51,  82,  17,  82,  81,  50,
     99,  98,  81,  35,  98, 114, 130, 114, 114, 130,  99,  98,
    146,  98, 114, 130, 114,  99, 130, 114,  98, 146,  98, 114,
     49,  82,  98,  98,  65,  66, 114,  98,  49,  82, 114,  98,
     34,  82, 113, 132,   0,  32,  16,  46,  19,   0,  26,  51,
     68, 114,  18,  33,  50,  97,  34,  17,  66,  81,  51,  82,
     81,  50,  98, 146,  98, 131,  83, 130,  98, 146,  98, 146,
     98, 130,  99,  33,  82,  98,  49,  82,  98,  33,  98,  98,
     18,  97, 131,   0,  22,  35,  16,   0,  22, 100, 163,  50,
    114,  97,  98, 114,  82, 114,  66, 130,  66, 130,  51, 115,
     50, 130,  66, 130,  66, 114,  82, 114,  97,  98, 114,  66,
    164,   0,  19,  16,  54,  19,   0,  26,  83,  67, 129,  34,
     18,  34, 113,  35,  82,  81,  51,  82,  81,  50,  98, 146,
     98, 130, 114, 130,  99, 130,  98, 146,  98, 130,  99, 130,
     98, 147,  66, 163,  50, 162,  36, 178, 240,  34, 240,  34,
    240,  18, 240,  34, 240,  34, 247,   0,   6,  32,  45,  16,
      0,  22,  99,  49, 114,  49,  17, 114,  67,  98,  98,  98,
     98,  82,  98,  98,  98,  83,  98,  82, 114,  82,  98,  98,
     98,  98,  83,  98,  83, 114,  36, 148,  18, 226, 226, 210,
    226, 226, 226, 183, 240, 240, 128,  29,  16,   0,  22,  35,
     52,  81,  37,  34,  65,  35,  66,  49,  51, 145,  50, 226,
    211, 210, 226, 226, 210, 226, 226, 226, 225,   0,  19,  80,
     29,  14,   0,  19, 116, 130,  66,  97,  82,  82,  67,  82,
    196, 181, 166, 179, 194,  66,  98,  66,  98,  66,  82,  81,
     82, 117,   0,  16,  96,  34,  13,   0,   7,  33, 178, 178,
    178, 178, 162, 178, 122, 114, 162, 178, 178, 178, 162, 178,
    178, 163,  65,  82,  81,  82,  65,  98,  50,  98,  34, 132,
      0,  15,  64,  45,  19,   0,  26,  52, 113,  98,  34,  83,
     81,  50,  82,  81,  66,  82,  81,  51,  82, 146,  83, 131,
     82, 146,  98, 146,  98, 130,  98, 146,  98,  49,  82,  98,
     49,  82,  83,  33, 114,  49,  18,  33, 132,  51,   0,  22,
     40,  17,   0,  23,  84,  98,  66,  34,  67,  65,  50,  67,
     49,  66,  82,  49,  51,  82, 114,  97, 115,  97, 114, 113,
    114, 113,  98, 113, 114, 113, 114,  97, 130,  97, 146,  50,
    181,   0,  20,  16,  56,  23,   0,  31, 116,  98,  66,  65,
     50,  82,  51,  65,  50,  82,  51,  49,  66,  67,  66,  49,
     50,  82,  82, 114,  82,  82,  99,  82,  81, 114,  98,  81,
    114,  82,  97,  98,  98,  82,  98,  98,  81, 114,  98,  81,
    114,  83,  65, 146,  50,  18,  34, 165,  52,   0,  26,  96,
     41,  18,   0,  25,  36,  52,  97,  52,  34,  81,  67,  50,
     65,  83, 145,  82, 240,  18, 243, 243, 242, 240,  18,  81,
    147,  81,  66,  51,  65,  82,  51,  65,  81,  49,  18,  49,
    115,  52,   0,  21,  16,  52,  18,   0,  25,   4, 113,  82,
     34,  83,  65,  50,  82,  65,  66,  82,  65,  51,  82, 130,
     83, 115,  82, 130,  98, 130,  98, 114,  98, 130,  98, 130,
     98, 130,  83, 146,  51, 180,  18, 240,  18, 243, 130,  82,
    131,  66, 146,  67, 146,  50, 197,   0,   6,  31,  16,   0,
     22,  83,  65, 117,  34,  98,  52, 113,  97, 226, 210, 210,
    210, 209, 225, 226,  97,  98, 113, 100,  50,  97,  53,  97,
     83,   0,  18, 112,   8,  18,   0,  36,  15,   0,  40, 112,
     10,  34,   0,  68,  15,  15,   1,   0,  76, 112,  18,  13,
    240, 226,  50,  98,  50,  82,  50,  82,  50,  97,  65,  97,
     65,   0,  44,  96,  14,  14, 240, 240, 243,  65,  66,  33,
     34,  65,  82,   0,  51,  64,
};

//*****************************************************************************
//
// The font definition for the 34 point Cm italic font.
//
//*****************************************************************************
const tFont g_sFontCm34i =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    30,

    //
    // The height of the font.
    //
    35,

    //
    // The baseline of the font.
    //
    26,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   35,   61,  155,  213,  301,  378,
         394,  433,  471,  504,  550,  566,  575,  585,
         659,  710,  741,  794,  847,  892,  938,  987,
        1042, 1090, 1139, 1154, 1175, 1205, 1218, 1261,
        1303, 1388, 1451, 1503, 1559, 1612, 1675, 1730,
        1787, 1841, 1872, 1924, 1999, 2053, 2147, 2218,
        2273, 2324, 2406, 2461, 2516, 2577, 2631, 2693,
        2787, 2856, 2914, 2968, 3006, 3033, 3071, 3085,
        3094, 3110, 3152, 3197, 3226, 3283, 3313, 3377,
        3423, 3480, 3514, 3556, 3606, 3640, 3703, 3749,
        3784, 3838, 3883, 3912, 3941, 3975, 4020, 4060,
        4116, 4157, 4209, 4240, 4248, 4258, 4276,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm34iData
};
