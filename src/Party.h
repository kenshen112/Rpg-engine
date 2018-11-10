#pragma once
#include "Characters.h"
#include <fstream>
#include <vector>

using json = nlohmann::json;

class Party {

private:
  std::vector<Characters *> heroTeam;
  json characters;
  Characters *aHero;
  std::ifstream fin;

public:
  Party();
  void createParty();
  Characters *getCharacter(int characterID) { return heroTeam[characterID]; }

  ~Party();
};
