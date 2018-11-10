#pragma once
#include "Items.h"
#include <vector>

class Invetory {
public:
  Invetory();
  std::vector<Items> pack;
  ~Invetory();
};
