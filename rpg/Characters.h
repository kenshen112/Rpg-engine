#pragma once
#include <iostream>
#include <fstream>
#include "creature.h"

using json = nlohmann::json;

class Characters
{
private:
	std::string Name;
	std::string attack;
	std::ifstream fin;
	Creature *party;
	json Heros;


public:
	Characters();
	bool openFile();
	Characters *createCharacters();

	~Characters();
};

