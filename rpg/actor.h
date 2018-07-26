#pragma once
#include <iostream>
#include <queue>
#include "move.h"

#include "creature.h"
#include "position.h"
#include "velocity.h"

const enum Input { UP, DOWN, LEFT, RIGHT };

class Actor
{
private:
	std::queue <Input> eventQueue;
	Creature *c;
	Move M;
	Velocity vel;
	Position p;
	int r;

public:
	Actor();
	void init(SDL_Renderer *rend);
	void enqueue(Input playerMoves);
	Creature *getCreature() { return c; }
	void update();
	void render(SDL_Renderer *rend , int L = 0);
	~Actor();
};

