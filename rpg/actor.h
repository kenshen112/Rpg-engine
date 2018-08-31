#pragma once
#include <iostream>
#include <queue>
#include "move.h"
#include "sprite.h"
#include "position.h"
#include "velocity.h"

const enum Input { UP, DOWN, LEFT, RIGHT };


class Actor
{
private:
	std::queue <Input> eventQueue;
	Velocity vel;
	Sprite spr;
	Position pos;
	Move M;
	int r;

public:
	Actor();
	void setSprite(const char* fileName, SDL_Renderer *rend);
	void init(SDL_Renderer *rend);
	void enqueue(Input playerMoves);
	void update();
	void render(SDL_Renderer *rend , int L = 0);
	~Actor();
};

