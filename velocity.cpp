#include "velocity.h"



Velocity::Velocity()
{
	dX = 0;
	dY = 0;
}

Velocity::Velocity(float x, float y)
{
	dX = x;
	dY = y;
}

void Velocity::addDx(float x)
{
	dX += x;
}

void Velocity::addDy(float y)
{
	dY += y;
}

float Velocity::getDx()
{
	return dX;
}

float Velocity::getDy()
{
	return dY;
}


Velocity::~Velocity()
{
}
