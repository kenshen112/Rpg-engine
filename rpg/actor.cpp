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
		p.setPy(p.getPy() + vel.getDy());
		eventQueue.pop();
		r = 0;
		break;

	case Input::DOWN:
		vel.addDy(-5);
		p.setPy(p.getPy() + vel.getDy());
		eventQueue.pop();
		r = 0;
		break;

	case Input::LEFT:
		vel.addDx(-5.00);
		p.setPx(p.getPx() + vel.getDx());
		eventQueue.pop();
		r = 0;
		break;

	case Input::RIGHT:
		vel.addDx(5.00);
		p.setPx(p.getPx() + vel.getDx());
		eventQueue.pop();
		r = 0;
		break;
	}
}

void Actor::render(SDL_Renderer * rend, int L)
{
	c->spr.drawCharacter(40, 35, p, rend, L);
}

Actor::~Actor()
{
}
