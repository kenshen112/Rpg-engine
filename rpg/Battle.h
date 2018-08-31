#pragma once
#include <vector>
#include <random>
#include "Party.h"
#include "Enemy.h"
class Battle
{
private:
	std::vector<Characters*>tempParty;
	std::vector<Enemy*>mobs;
	SDL_Rect * enemySpaces;
	SDL_Rect * playerSpaces;
	Party *accessParty;
	Enemy * accessMob;
	int turnCounter;
	int whosTurn;

public:
	Battle();
	bool init();

	void startBattle();
	~Battle();
};

