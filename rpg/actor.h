#pragma once
#include <iostream>
#include <queue>
#include "move.h"

#include "creature.h"
#include "velocity.h"

const enum Input { UP, DOWN, LEFT, RIGHT };

using json = nlohmann::json;

class Actor
{
private:
	std::queue <Input> eventQueue;
	Move M;
	Velocity vel;
	json actors = NULL;
	Creature *c;
	int r;

public:
	Actor();
	Creature *getCreature() { return c; }
	void init(SDL_Renderer *rend);
	void enqueue(Input playerMoves);
	void update();
	void render(SDL_Renderer *rend , int L = 0);
	~Actor();
};

