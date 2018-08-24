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

void Characters::createCharacters()
{

	if (openFile())
	{
		while (fin >> players)
		{

		}
	}

}


Characters::~Characters()
{
}
