#pragma once
#include <SDL.h>
#include <vector>
#include <string>
#include <fstream>
#include <SDL_image.h>
#include "json.hpp"

using json = nlohmann::json;

class Tile
{
private:
	int x;
	int y;
	int tileType;
	SDL_Rect srcTile;

public:
	Tile()
	{
		x = 0;
		y = 0;
		tileType = NULL;
	}

	Tile(int dx, int dy, int tile)
	{
		x = dx;
		y = dy;
		tileType = tile;
	}

};

class TileMaps
{
private:
	std::string filePath;
	int layers, tileAmount;
	int x, y;
	int rows, cols;
	int tileWidth, tileHeight, mapHeight, mapWidth;
	std::ifstream fin;
	std::string type;
	SDL_Texture *renderedMap;
	std::string fileName;
	json tile_map;
	Tile** map;

public:
	TileMaps();
	void load(std::string fileName, SDL_Renderer *rend);
	bool isValidTile();
	void drawMap(SDL_Renderer *rend);
	~TileMaps();
};

