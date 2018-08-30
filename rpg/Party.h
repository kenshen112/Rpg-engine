#pragma once
#include <vector>
#include <fstream>
#include "Characters.h"

using json = nlohmann::json;

class Party
{

private:
	std::vector <Characters*> heroTeam;
	json characters;
	Characters* aHero;
	std::ifstream fin;

public:
	Party();
	void createParty();
	Characters* getCharacter(int characterID){
		return heroTeam[characterID];
	}



	~Party();
};

