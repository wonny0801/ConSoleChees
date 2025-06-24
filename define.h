#pragma once
#define BLACK 0
#define BLUE           FOREGROUND_BLUE
#define GREEN          FOREGROUND_GREEN
#define RED            FOREGROUND_RED
#define YELLOW         (FOREGROUND_RED | FOREGROUND_GREEN)
#define MAGENTA        (FOREGROUND_BLUE | FOREGROUND_RED)
#define CYAN           (FOREGROUND_BLUE | FOREGROUND_GREEN)
#define WHITE          (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED)

#define INTENSITY_BLACK    FOREGROUND_INTENSITY
#define INTENSITY_BLUE     (FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define INTENSITY_GREEN    (FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define INTENSITY_RED      (FOREGROUND_RED | FOREGROUND_INTENSITY)
#define INTENSITY_YELLOW   (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define INTENSITY_MAGENTA  (FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY)
#define INTENSITY_CYAN     (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define INTENSITY_WHITE    (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY)

#define COLORNUMBER_WHITE 0
#define COLORNUMBER_BLACK 1

#define PAWN_MAX 8
#define UNIT_MAX 2

#define WHITE_KING      L"\u2654 "
#define WHITE_QUEEN     L"\u2655 "
#define WHITE_ROOK 	    L"\u2656 "
#define WHITE_BISHOP    L"\u2657 "
#define WHITE_KNIGHT    L"\u2658 "
#define WHITE_PAWN 	    L"\u2659 "

#define BLACK_KING  	L"\u265A "
#define BLACK_QUEEN     L"\u265B "
#define BLACK_ROOK  	L"\u265C "
#define BLACK_BISHOP    L"\u265D "
#define BLACK_KNIGHT    L"\u265E "
#define BLACK_PAWN 	    L"\u265F"




#define D_BOARD_SIZE 8

#define BOARD_A1 E_A,E_1
#define BOARD_A2 E_A,E_2
#define BOARD_A3 E_A,E_3
#define BOARD_A4 E_A,E_4
#define BOARD_A5 E_A,E_5
#define BOARD_A6 E_A,E_6
#define BOARD_A7 E_A,E_7
#define BOARD_A8 E_A,E_8

#define BOARD_B1 E_B,E_1
#define BOARD_B2 E_B,E_2
#define BOARD_B3 E_B,E_3
#define BOARD_B4 E_B,E_4
#define BOARD_B5 E_B,E_5
#define BOARD_B6 E_B,E_6
#define BOARD_B7 E_B,E_7
#define BOARD_B8 E_B,E_8

#define BOARD_C1 E_C,E_1
#define BOARD_C2 E_C,E_2
#define BOARD_C3 E_C,E_3
#define BOARD_C4 E_C,E_4
#define BOARD_C5 E_C,E_5
#define BOARD_C6 E_C,E_6
#define BOARD_C7 E_C,E_7
#define BOARD_C8 E_C,E_8

#define BOARD_D1 E_D,E_1
#define BOARD_D2 E_D,E_2
#define BOARD_D3 E_D,E_3
#define BOARD_D4 E_D,E_4
#define BOARD_D5 E_D,E_5
#define BOARD_D6 E_D,E_6
#define BOARD_D7 E_D,E_7
#define BOARD_D8 E_D,E_8

#define BOARD_E1 E_E,E_1
#define BOARD_E2 E_E,E_2
#define BOARD_E3 E_E,E_3
#define BOARD_E4 E_E,E_4
#define BOARD_E5 E_E,E_5
#define BOARD_E6 E_E,E_6
#define BOARD_E7 E_E,E_7
#define BOARD_E8 E_E,E_8

#define BOARD_F1 E_F,E_1
#define BOARD_F2 E_F,E_2
#define BOARD_F3 E_F,E_3
#define BOARD_F4 E_F,E_4
#define BOARD_F5 E_F,E_5
#define BOARD_F6 E_F,E_6
#define BOARD_F7 E_F,E_7
#define BOARD_F8 E_F,E_8

#define BOARD_G1 E_G,E_1
#define BOARD_G2 E_G,E_2
#define BOARD_G3 E_G,E_3
#define BOARD_G4 E_G,E_4
#define BOARD_G5 E_G,E_5
#define BOARD_G6 E_G,E_6
#define BOARD_G7 E_G,E_7
#define BOARD_G8 E_G,E_8

#define BOARD_H1 E_H,E_1
#define BOARD_H2 E_H,E_2
#define BOARD_H3 E_H,E_3
#define BOARD_H4 E_H,E_4
#define BOARD_H5 E_H,E_5
#define BOARD_H6 E_H,E_6
#define BOARD_H7 E_H,E_7
#define BOARD_H8 E_H,E_8

enum
{
	E_MENU,
	E_GAME,
	E_STATE_MAX
};
enum
{
	E_A = 11,
	E_B = 18,
	E_C = 25,
	E_D = 32,
	E_E = 39,
	E_F = 46,
	E_G = 53,
	E_H = 60
};
enum
{
	E_1 = 3,
	E_2 = 6,
	E_3 = 9,
	E_4 = 12,
	E_5 = 15,
	E_6 = 18,
	E_7 = 21,
	E_8 = 24
};

