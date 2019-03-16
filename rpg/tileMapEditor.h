#pragma once
#include <SDL.h>

struct Tile {
	int tileHeight;
	int tileWidth;
	int rows;
	int cols;
	int tileType;
	int **data;

	SDL_Rect srcTile;
};


class tileMapEditor
{
private:
	SDL_Rect camera;
	int LEVEL_WIDTH, LEVEL_HEIGHT;
public:
	tileMapEditor();
	void drawEditor();
	void setCamera();

	~tileMapEditor();
};

