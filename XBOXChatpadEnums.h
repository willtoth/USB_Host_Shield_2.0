/* Copyright (C) 2020 All rights reserved.

 This software may be distributed and modified under the terms of the GNU
 General Public License version 2 (GPL2) as published by the Free Software
 Foundation and appearing in the file GPL2.TXT included in the packaging of
 this file. Please note that GPL2 Section 2[b] requires that all works based
 on this software must also be made publicly available under the terms of
 the GPL2 ("Copyleft").

 Based on the project from here: https://github.com/Kytech/xbox360wirelesschatpad
 */

#ifndef _xbox_chatpad_enums_h_
#define _xbox_chatpad_enums_h_

enum ChatpadModifierEnum {
        MODIFIER_SHIFT = 0,
        MODIFIER_GREENBUTTON = 1,
        MODIFIER_ORANGEBUTTON = 2,
        MODIFIER_MESSENGER = 3
};

enum ChatpadLEDEnum {
        CHATPADLED_CAPSLOCK = 0,
        CHATPADLED_GREEN = 1,
        CHATPADLED_ORANGE = 2,
        CHATPADLED_MESSENGER = 3,
        
        __NUM_CHATPAD_LED
};

/** Buttons on the chatpad
 * This only accounts for the main keys and does not
 * use the modifiers (orange/green) 
 */
enum ChatpadButtonEnum {
        XBOX_CHATPAD_D7 = 0,
        XBOX_CHATPAD_D6 = 1,
        XBOX_CHATPAD_D5 = 2,
        XBOX_CHATPAD_D4 = 3,
        XBOX_CHATPAD_D3 = 4,
        XBOX_CHATPAD_D2 = 5,
        XBOX_CHATPAD_D1 = 6,

        XBOX_CHATPAD_U = 8,
        XBOX_CHATPAD_Y = 9,
        XBOX_CHATPAD_T = 10,
        XBOX_CHATPAD_R = 11,
        XBOX_CHATPAD_E = 12,
        XBOX_CHATPAD_W = 13,
        XBOX_CHATPAD_Q = 14,

        XBOX_CHATPAD_J = 16,
        XBOX_CHATPAD_H = 17,
        XBOX_CHATPAD_G = 18,
        XBOX_CHATPAD_F = 19,
        XBOX_CHATPAD_D = 20,
        XBOX_CHATPAD_S = 21,
        XBOX_CHATPAD_A = 22,

        XBOX_CHATPAD_M = 33,
        XBOX_CHATPAD_N = 24,
        XBOX_CHATPAD_B = 25,
        XBOX_CHATPAD_V = 26,
        XBOX_CHATPAD_C = 27,
        XBOX_CHATPAD_X = 28,
        XBOX_CHATPAD_Z = 29,

        XBOX_CHATPAD_RIGHT = 32,
        XBOX_CHATPAD_SPACE = 35,
        XBOX_CHATPAD_LEFT = 36,

        XBOX_CHATPAD_COMMA = 41,
        XBOX_CHATPAD_PERIOD = 34,
        XBOX_CHATPAD_ENTER = 42,
        XBOX_CHATPAD_P = 43,
        XBOX_CHATPAD_D0 = 44,
        XBOX_CHATPAD_D9 = 45,
        XBOX_CHATPAD_D8 = 46,

        XBOX_CHATPAD_BACK = 48,
        XBOX_CHATPAD_L = 49,
        XBOX_CHATPAD_O = 52,
        XBOX_CHATPAD_I = 53,
        XBOX_CHATPAD_K = 54,

        __XBOX_CHATPAD_ENUM_MAX
};

#endif
