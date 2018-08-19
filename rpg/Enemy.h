#pragma once
#include <vector>
#include <fstream>
#include "creature.h"
#include "json.hpp"

using json = nlohmann::json;

class Enemy
{

private:		
	std::vector <Enemy*> enemy;
	Creature villan;
	std::ifstream fin;
	std::string name;
	std::string type;
	std::string attack;
	json baddie;

public:
	Enemy();
	Enemy(const Enemy& bad);
	Enemy operator=(const Enemy& bad);
	Enemy* create(Enemy*);

	void init();
	void printTest();

	~Enemy();
};

