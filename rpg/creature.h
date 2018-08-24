#pragma once
#include <vector>
#include "json.hpp"

#include "position.h"
#include "stats.h"
#include "sprite.h"
#include "Invetory.h"

struct Creature
{
	Position pos;
	Stats stat; 
	Sprite spr;
	Invetory inv;
};

