#include "skills.h"

Skills::Skills()
{
}

void Healing::apply(Creature c, int hp)
{
	c.stat.increaseCurrentHP(hp);
}

void Healing::update()
{
	//TODO Animate Here.
}

void Damaging::apply(Creature c, int hp)
{
	c.stat.decreaseCurrentHP(hp);
}

void Damaging::update()
{
	//TODO Animate Here.
}

Skills::~Skills()
{
}
