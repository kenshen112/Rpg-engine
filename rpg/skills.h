#pragma once
#include "creature.h"
class Skills
{
private:
	std::string name;
	std::string job;
	Stats stats;
public:
	Skills();
	virtual void apply() = 0;
	virtual void update() = 0;
	
	~Skills();
};

class Healing : public Skills
{
	
	void apply()
	{
	
	}

	void update()
	{
	
	}
};

class Damaging : public Skills
{

	void apply()
	{

	}

	void update()
	{

	}
};

