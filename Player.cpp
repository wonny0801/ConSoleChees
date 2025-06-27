#include "include.h"

Player::Player()
{
	x = E_A;
	y = E_1;
	PlayerBody = "<-";
	fColor = RED;
	bColor = BLACK;
}

Player::~Player()
{
}

void Player::Update()
{
	Move();
	Clipping();
}

void Player::Draw()
{
	DrawStr(x + 5, y, PlayerBody.c_str(), fColor, bColor);
}

void Player::Move()
{
    static bool upPressed = false;
    static bool downPressed = false;
    static bool leftPressed = false;
    static bool rightPressed = false;

    // UP
    if (GetAsyncKeyState(VK_UP) & 0x8000) 
    {
        if (!upPressed) 
        {
            y -= 3;
            upPressed = true;
        }
    }
    else
        upPressed = false;
    
    // DOWN
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) 
    {
        if (!downPressed) 
        {
            y += 3;
            downPressed = true;
        }
    }
    else
        downPressed = false;
   
    // LEFT
    if (GetAsyncKeyState(VK_LEFT) & 0x8000)
    {
        if (!leftPressed)
        {
            x -= 7;
            leftPressed = true;
        }
    }
    else
        leftPressed = false;
   

    // RIGHT
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) 
    {
        if (!rightPressed) 
        {
            x += 7;
            rightPressed = true;
        }
    }
    else
        rightPressed = false;
   
}

void Player::Clipping()
{
	if (x < E_A)
		x = E_A;
	if (x > E_H)
		x = E_H;
	if (y < E_1)
		y = E_1;
	if (y > E_8)
		y = E_8;
}

void Player::Select()
{
    if (GetAsyncKeyState(VK_SPACE))
    {
        ((GameState*)GameMng::Getlns()->statectrl.m_pCurState)->whiteTeam.Select(x, y);
        ((GameState*)GameMng::Getlns()->statectrl.m_pCurState)->blackTeam.Select(x, y);
    }
}
