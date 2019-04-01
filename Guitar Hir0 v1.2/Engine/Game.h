
#pragma once

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
	void jimmy(int jimmyX,int jimmyY);
	void gOverFun(int gOverX,int gOverY);
	void guitar(int guitarX, int guitarY);
	void inputs();
	void collision(int jimmyX,int jimmyY,int guitarX,int guitarY);
	void title(int titleX, int titleY);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int gOver = 0;
	int jimmyX = 400, jimmyY = 300;
	int gOverX = 250, gOverY=200;
	int guitar0X=100, guitar0Y=200;
	int guitar1X = 450, guitar1Y = 500;
	int guitar2X = 600, guitar2Y = 200;
	bool guitar0Eaten = true;
	bool guitar1Eaten = true;
	bool guitar2Eaten = true;
	bool start = wnd.kbd.KeyIsPressed(VK_RETURN);
	int titleX = 400, titleY = 300;
	int guitar0VX = 2, guitar0VY = 2;
	int guitar1VX = 2, guitar1VY = 2;
	int guitar2VX = 2, guitar2VY = 2;

	/* ****************************** */
};