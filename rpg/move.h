#pragma once
#include <SDL.h>
#include "position.h"
#include "velocity.h"
class Move
{
private:
	Velocity vel;
public:
	void moveLeft(Position p)
	{
		vel.addDx(-5.00);
		p.setPx(p.getPx() + vel.getDx());
		std::cout << "Point X: " << p.getPx() << std::endl;
	}

	void moveRight(Position p)
	{
		vel.addDx(5.00);

		p.setPx(p.getPx() + vel.getDx());
	}

	void moveUp(Position p)
	{
		vel.addDy(5.00);
		p.setPy(p.getPy() + vel.getDy());
	}

	void moveDown(Position p)
	{
		vel.addDy(-5.00);
		p.setPy(p.getPy() + vel.getDy());
	}
};