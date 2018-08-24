#pragma once
#include <iostream>
#include <fstream>
#include "creature.h"

using json = nlohmann::json;

class Characters
{
private:
	std::string Name;
	Creature *party;
	std::ifstream fin;
	json players;


public:
	Characters();
	bool openFile();
	void createCharacters();

	~Characters();
};

