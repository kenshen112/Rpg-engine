#pragma once
#include "json.hpp"
#include <vector>

#include "Invetory.h"
#include "position.h"
#include "sprite.h"
#include "stats.h"

struct Creature {
  Position pos;
  Stats stat;
  Invetory inv;
};
