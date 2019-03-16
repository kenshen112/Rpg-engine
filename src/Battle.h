#pragma once
#include "Enemy.h"
#include "Party.h"
#include "ui.h"
#include <random>
#include <vector>
class Battle {
private:
  std::vector<Characters *> tempParty;
  std::vector<Enemy *> mobs;
  SDL_Rect *enemySpaces;
  SDL_Rect *playerSpaces;
  SDL_Event e;
  Party *accessParty;
  Enemy *accessMob;
  int turnCounter;
  int whosTurn;
  bool battleActive;

public:
  Battle();
  bool init();
  void startBattle();
  void inBattle();
  ~Battle();
};
