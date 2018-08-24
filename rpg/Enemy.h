#pragma once
#include <vector>
#include <fstream>
#include "creature.h"

using json = nlohmann::json;

class Enemy
{

private:		
	std::vector <Enemy*> enemy;
	Creature villan;
	Enemy* listOfVillans;
	std::ifstream fin;
	std::string name;
	std::string type;
	std::string attack;
	//json baddie = json::parse(fin);

public:
	Enemy();
	Enemy(const Enemy& bad);
	Enemy operator=(const Enemy& bad);
	Enemy* create(json baddie);

	void init();
	void printTest();

	~Enemy();
};

