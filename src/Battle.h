#pragma once
#include "Enemy.h"
#include "Party.h"
#include <random>
#include <vector>
class Battle {
private:
  std::vector<Characters *> tempParty;
  std::vector<Enemy *> mobs;
  SDL_Rect *enemySpaces;
  SDL_Rect *playerSpaces;
  Party *accessParty;
  Enemy *accessMob;
  int turnCounter;
  int whosTurn;

public:
  Battle();
  bool init();

  void startBattle();
  ~Battle();
};
