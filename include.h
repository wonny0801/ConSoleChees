#pragma once
#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"
#include <string>
//-----------------------------------
#include "Singleton.h"
#include "State.h"
#include "StateCtrl.h"





//----------------------------
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
void EngineSync(int fps);
void ClearScreen();
void Flip();
