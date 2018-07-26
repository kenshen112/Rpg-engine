#pragma once
#include <vector>
#include "Items.h"

class Invetory
{
public:
	Invetory();
	std::vector<Items> pack;
	~Invetory();
};

