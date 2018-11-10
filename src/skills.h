#pragma once
#include "creature.h"
#include <iostream>
#include <string.h>
class Skills {
private:
  std::string name;

public:
  Skills();
  virtual void apply(Creature c, int hp) = 0;
  virtual void update() = 0;

  ~Skills();
};

class Healing : public Skills {

  void apply(Creature c, int hp);
  void update();
};

class Damaging : public Skills {

  void apply(Creature c, int hp);

  void update();
};
