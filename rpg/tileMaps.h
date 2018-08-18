#pragma once
#include <SDL.h>
#include <vector>
#include <string>
#include <SDL_image.h>

class TileMaps
{
private:
	int row;
	int col;
	int w;
	int h;
	int layers;
	SDL_Texture *renderedMap;
	std::string fileName;

public:
	TileMaps();
	void load(std::string fileName, SDL_Renderer *rend);
	~TileMaps();
};

