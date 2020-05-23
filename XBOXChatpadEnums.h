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

enum ChatpadModiferEnum {
        MODIFER_GREENBUTTON = 0,
        MODIFER_ORANGEBUTTON = 1,
        MODIFER_CAPSLOCK = 2,
        MODIFER_SHIFT = 3,
        MODIFER_MESSENGER = 4
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

        XBOX_CHATPAD_U = 7,
        XBOX_CHATPAD_Y = 8,
        XBOX_CHATPAD_T = 9,
        XBOX_CHATPAD_R = 10,
        XBOX_CHATPAD_E = 11,
        XBOX_CHATPAD_W = 12,
        XBOX_CHATPAD_Q = 13,

        XBOX_CHATPAD_J = 14,
        XBOX_CHATPAD_H = 15,
        XBOX_CHATPAD_G = 16,
        XBOX_CHATPAD_F = 17,
        XBOX_CHATPAD_D = 18,
        XBOX_CHATPAD_S = 19,
        XBOX_CHATPAD_A = 20,

        XBOX_CHATPAD_M = 21,
        XBOX_CHATPAD_N = 22,
        XBOX_CHATPAD_B = 23,
        XBOX_CHATPAD_V = 24,
        XBOX_CHATPAD_C = 25,
        XBOX_CHATPAD_X = 26,
        XBOX_CHATPAD_Z = 27,

        XBOX_CHATPAD_RIGHT = 28,
        XBOX_CHATPAD_SPACE = 29,
        XBOX_CHATPAD_LEFT = 30,

        XBOX_CHATPAD_COMMA = 31,
        XBOX_CHATPAD_ENTER = 32,
        XBOX_CHATPAD_P = 33,
        XBOX_CHATPAD_D0 = 34,
        XBOX_CHATPAD_D9 = 35,
        XBOX_CHATPAD_D8 = 36,

        XBOX_CHATPAD_BACK = 37,
        XBOX_CHATPAD_L = 38,
        XBOX_CHATPAD_O = 39,
        XBOX_CHATPAD_I = 40,
        XBOX_CHATPAD_K = 41
};

#endif
