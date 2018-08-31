#include "actor.h"

Actor::Actor()
{
}

void Actor::init(SDL_Renderer *rend)
{
	setSprite("Data/Sprites/mio.png", rend);
}

void Actor::enqueue(Input playerMovement)
{
	eventQueue.push(playerMovement);
}

/****************************************************
* Testing the Messaging system and the point class
****************************************************/
void Actor::update()
{	
	r = eventQueue.front();
	switch (r)
	{
	case Input::UP:	
		vel.addDy(5.00);
		pos.setPy(pos.getPy() + vel.getDy());
		eventQueue.pop();
		r = 0;
		break;

	case Input::DOWN:
		vel.addDy(-5);
		pos.setPy(pos.getPy() + vel.getDy());
		eventQueue.pop();
		r = 0;
		break;

	case Input::LEFT:
		vel.addDx(-5.00);
		pos.setPx(pos.getPx() + vel.getDx());
		eventQueue.pop();
		r = 0;
		break;

	case Input::RIGHT:
		vel.addDx(5.00);
		pos.setPx(pos.getPx() + vel.getDx());
		eventQueue.pop();
		r = 0;
		break;
	}
}

void Actor::setSprite(const char* fileName, SDL_Renderer *rend)
{
	spr.createSprite(fileName, rend);
}

/****************************************
* L is meant for animation loop
* This will be highly refactored later. 
***************************************/
void Actor::render(SDL_Renderer * rend, int L)
{
	spr.drawCharacter(40, 35, pos, rend, L);
}

Actor::~Actor()
{
}
