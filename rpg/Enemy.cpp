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

Enemy Enemy::operator=(const Enemy & bad)
{
	return Enemy();
}

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
		std::cout << "Name: " << listVillan->name << std::endl;
	}
	return listVillan;
}

void Enemy::init()
{
	fin.open("C:/Users/Timothy/source/repos/Rpg-engine/rpg/Data/Enemies.json");
	json baddie = json::parse(fin);

	listOfVillans =  create(baddie);
	enemy.push_back(listOfVillans);	

}

void Enemy::printTest()
{
	for (auto &it : enemy)
	{
		std::cout << it->name << std::endl;
		std::cout << it->type << std::endl;
	}
}

Enemy::~Enemy()
{
}
 