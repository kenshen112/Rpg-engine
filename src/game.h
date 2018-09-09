#pragma once
#include <iostream>
#include <SDL.h>
#include "actor.h"
#include "Enemy.h"
#include "ui.h"
#include "common.h"



static int window_H = 1280;
static int window_W = 720;	
	
static enum State{TITLE, CUTSCENE, PLAYABLE, BATTLE, GAME_OVER};	 

class Game
{
private:
	Common C;

	Uint64 NOW = SDL_GetPerformanceCounter();
	Uint64 LAST = 0;

	double deltaTime = 0;
	bool active = true;

	SDL_Window * window;
	SDL_Renderer * rend;
	SDL_Surface *surf;
	SDL_Rect sRect, dRect;
	SDL_Texture *tex;
	SDL_Event e;

	ui text;

	int spriteLoop;

	Actor Musungo;
	Enemy Baddies;

public:
	Game();
	void init();
	void update();
	void render();
	void process();
	~Game();

};

