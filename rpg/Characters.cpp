#include "Characters.h"



Characters::Characters()
{
}

bool Characters::openFile()
{
	fin.open("Data/Actors.json");

	if (fin)
	{
		return true;
	}

	else
	{
		return false;
	}
}

Characters *Characters::createCharacters()
{
	Characters *plusUltra = new Characters();


	if (openFile())
	{
		Heros = json::parse(fin);
		int hp = 0;
		for (auto& it : Heros)
		{
			plusUltra->Name = it["Name"].get<std::string>();
			plusUltra->attack = it["Attack"].get<std::string>();
			hp = it["HP"].get<int>();
			plusUltra->party->stat.increaseCurrentHP(hp);
		}
	}

	return plusUltra;
}


Characters::~Characters()
{
}
