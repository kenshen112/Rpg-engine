#pragma once
#include <SDL.h>
#include <iostream>
#include <SDL_image.h>
#include "position.h"
class Sprite
{

private:
	SDL_Rect sRect, dRect;
	SDL_Texture *tex = NULL;
	SDL_Surface *surf;
	int imgFlags = IMG_INIT_PNG;

public:
	Sprite();
	SDL_Texture* createSprite(const char *fileName, SDL_Renderer *rend);
	SDL_Renderer* drawCharacter(int h, int w, Position &p, SDL_Renderer *rend, int loop = 0);
	
	~Sprite();
};

