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

void Enemy::init()
{
	fin.open("Enemies.json");

	int i = 0;

	Enemy *Baddie;

	while (fin >> read && i < 100) 
	{
		Baddie = new Enemy;
		
		enemy.push_back(Baddie);
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
 