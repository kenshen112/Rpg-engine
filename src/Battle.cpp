#include "Battle.h"

Battle::Battle() {}

bool Battle::init() {
  int eID = rand() % 3;

  for (int i = 0; i < 2; i++) {
    tempParty.push_back(accessParty->getCharacter(i));
  }

  for (int i = 0; i < 2; i++) {
    mobs.push_back(accessMob->getEnemy(eID));
  }

  return true;
}

void Battle::startBattle() {
  turnCounter = 0;
  whosTurn = 0;
  // Draw menus call Battle Loop.
}

Battle::~Battle() {}
