#include "Party.h"

Party::Party() {}

void Party::createParty() {
  Characters *allMight;
  allMight = aHero->createCharacters();
  heroTeam.push_back(allMight);
}

Party::~Party() {}
