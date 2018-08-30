#include "actor.h"

Actor::Actor()
{
}

void Actor::init(SDL_Renderer *rend)
{
	c = new Creature;
	c->stat.setDefaults();
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
	std::cout << "R: " << r << std::endl;
	switch (r)
	{
	case Input::UP:	
		std::cout << "UP" << std::endl;
		vel.addDy(5.00);
		c->pos.setPy(c->pos.getPy() + vel.getDy());
		eventQueue.pop();
		r = 0;
		break;

	case Input::DOWN:
		vel.addDy(-5);
		c->pos.setPy(c->pos.getPy() + vel.getDy());
		eventQueue.pop();
		r = 0;
		break;

	case Input::LEFT:
		vel.addDx(-5.00);
		c->pos.setPx(c->pos.getPx() + vel.getDx());
		eventQueue.pop();
		r = 0;
		break;

	case Input::RIGHT:
		vel.addDx(5.00);
		c->pos.setPx(c->pos.getPx() + vel.getDx());
		eventQueue.pop();
		r = 0;
		break;
	}
}

/****************************************
* L is meant for animation loop
* This will be highly refactored later. 
***************************************/
void Actor::render(SDL_Renderer * rend, int L)
{
	c->spr.drawCharacter(40, 35, c->pos, rend, L);
}

Actor::~Actor()
{
}
