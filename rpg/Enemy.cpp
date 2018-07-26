#include "Enemy.h"

Enemy::Enemy()
{
}

void Enemy::init()
{
	fin.open("Enemies.json");

	while (fin >> read) //This'll probably read all enemies?
	{
		name = read["Name"].get<std::string>();
		e.stat.maxHP(read["HP"].get<int>());
		attack = read["Attack"].get<std::string>();
		type = read["Type"].get<std::string>();
	}
}

Enemy::~Enemy()
{
}
