#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(const Enemy & bad)
{
	this->name = bad.name;
	this->type = bad.type;
	this->enemy = bad.enemy;
	this->attack = bad.attack;
}

/********************************************************
* This is needed since were making a vector it has to be
* a copieable object or I need to rule of zero's this.
*********************************************************/
Enemy Enemy::operator=(const Enemy & bad)
{
	return Enemy();
}

/*************************************************************
* Some serious rule of Zero's copy constructor magic below
**************************************************************/
 Enemy* Enemy::create(json baddie)
 {
	Enemy* listVillan = new Enemy;

	assert(baddie.is_array());

	for (auto& element : baddie)
	{
		listVillan->attack = element["Attack"].get<std::string>();
		int health = element["HP"].get<int>();
		listVillan->villan.stat.maxHP(health);
		listVillan->name = element["Name"].get<std::string>();
	}
	return listVillan;
}

void Enemy::init()
{
	fin.open("C:/Users/Timothy/source/repos/Rpg-engine/rpg/Data/Enemies.json");
	json baddie = json::parse(fin);

	listOfVillans = create(baddie);
	enemy.push_back(listOfVillans);	

}

Enemy::~Enemy()
{
}
 