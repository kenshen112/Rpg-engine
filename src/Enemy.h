#pragma once
#include "creature.h"
#include <fstream>
#include <vector>

using json = nlohmann::json;

class Enemy {

private:
  std::vector<Enemy *> enemy;
  Creature villan;
  Enemy *listOfVillans;
  std::ifstream fin;
  std::string name;
  std::string type;
  std::string attack;

public:
  Enemy();
  Enemy(const Enemy &bad);
  Enemy operator=(const Enemy &bad);
  Enemy *create(json baddie);
  Enemy *getEnemy(int id) { return enemy[id]; }
  void init();

  ~Enemy();
};
