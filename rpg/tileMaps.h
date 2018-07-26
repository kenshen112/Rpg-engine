#pragma once
#include <string>
#include <SDL.h>
enum Types{WATER, GRASS, STONE, WALL};

struct Tile
{
	int sizeX;
	int sizeY;
	std::string name;
	int properties;
	bool isSolid;
};

class TileMaps
{
private:
	Types type;
	Tile tile;
	std::string fileName;
	int layers;

public:
	TileMaps();
	~TileMaps();
};

