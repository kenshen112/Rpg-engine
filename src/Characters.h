#pragma once
#include "creature.h"
#include <fstream>
#include <iostream>

using json = nlohmann::json;

class Characters {
private:
  std::string Name;
  std::string attack;
  std::ifstream fin;
  Creature *party;
  json Heros;
  // JobClass jobAccess;

public:
  Characters();
  bool openFile();
  bool canApplySkill();
  void
  applyJob(); // Should this be a seperate func or part of createCharaters I
              // could make a Job switch Eleminate the Character copying their
              // stats and such replacing them with a new character instead
  // Or I could go the sensicle and not stupif AF route and actually apply the
  // Job's the way they should be
  Characters *createCharacters();

  ~Characters();
};
