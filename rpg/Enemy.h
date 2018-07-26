#pragma once
#include "creature.h"
#include <vector>
#include <fstream>
using nlohmann::json;

class Enemy
{

private:		
	std::vector <Creature> enemy;
	
	json read;
	
	std::ifstream fin;
	std::string name;
	std::string type;
	std::string attack;
	
	Creature e;

public:
	Enemy();
	void init();

	~Enemy();
};

