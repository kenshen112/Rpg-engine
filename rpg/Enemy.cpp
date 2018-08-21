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

 Enemy* Enemy::create()
 {
	Enemy* listVillan = new Enemy;

	assert(baddie.is_array());

	for (auto& element : baddie)
	{
		listVillan->attack = element["Attack"].get<std::string>();
		int health = element["HP"].get<int>();
		listVillan->villan.stat.maxHP(health);
	}
	return listVillan;
}

void Enemy::init()
{
	fin.open("Data/Enemies.json");

	int i = 0;


	while (fin >> baddie && i < 100) 
	{		
	listOfVillans =  create();
	enemy.push_back(listOfVillans);	
	i++;
	}

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
 