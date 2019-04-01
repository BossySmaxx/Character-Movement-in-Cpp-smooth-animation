#pragma once
#include "characters.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void drawMan(int x,int y);
	void drawJunglee(int x, int y);
	void runMan(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	character man,man2,man3;
	int count = 0;
	bool strokeUp=false;
	/********************************/
};