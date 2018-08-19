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

 Enemy* Enemy::create(Enemy* listVillan)
 {
	 listVillan = new Enemy;

	 listVillan->name = baddie["Name"].get<std::string>();



	return listVillan;
}

void Enemy::init()
{
	fin.open("Enemies.json");

	int i = 0;

	Enemy* villans;

	while (fin >> baddie && i < 100) 
	{
		
		create(villans);

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
 