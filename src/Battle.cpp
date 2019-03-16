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

void Battle::inBattle()
{
	while (SDL_PollEvent(&e) != 0) 
	{

	}

}

void Battle::startBattle() {
  turnCounter = 0;
  whosTurn = 0;
  battleActive = true;

  while (battleActive)
  {
	  inBattle();
  }
}

Battle::~Battle() {}
