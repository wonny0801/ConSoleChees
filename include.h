#pragma once
#include <stdio.h>
#include <iostream>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"
#include <string>
#include <map>
//-----------------------------------
#include "Singleton.h"
#include "State.h"
#include "StateCtrl.h"
#include "Unit.h"
#include "GameBoard.h"
//-------------------------------------
#include "Pawn.h"
#include "King.h"
#include "Queen.h"
#include "Knight.h"
#include "Rook.h"
#include "bishop.h"

#include "Player.h"

//----------------------------
#include "Team_Black.h"
#include "Team_White.h"
#include "MenuState.h"
#include "GameState.h"

#include "GameMng.h"
//--------------------------------
void Init();
void Update();
void Draw();
void Release();

void DrawChar(int x,int y,const char body, WORD fColor,WORD bColor);
void DrawStr(int x, int y, const char* str, WORD fColor, WORD bColor);
void DrawBoard(int x, int y, const wchar_t* board, WORD fColor, WORD bColor);
void EngineSync(int fps);
void ClearScreen();
void Flip();

