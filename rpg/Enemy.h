#pragma once
#include <vector>
#include <fstream>
#include "creature.h"
#include <rapidJson/document.h>

class Enemy
{

private:		
	std::vector <Enemy*> enemy;
		
	Creature villan;
	
	std::ifstream fin;
	std::string name;
	std::string type;
	std::string attack;
	

public:
	Enemy();
	Enemy(const Enemy& bad);
	Enemy operator=(const Enemy& bad);

	void init();
	void printTest();

	~Enemy();
};

