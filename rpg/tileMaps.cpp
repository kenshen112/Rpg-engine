#include "tileMaps.h"

TileMaps::TileMaps()
{
}

void TileMaps::load(std::string fileName, SDL_Renderer *rend)
{
	fin.open("Data/Maps/Test_Map.json");
	tile_map = json::parse(fin);

	filePath = tile_map["File_Path"].get<std::string>();
	tileAmount = tile_map["Tile_Amount"].get<int>();
	tileHeight = tile_map["Tile_Height"].get<int>();
	tileWidth = tile_map["Tile_Width"].get<int>();
	mapHeight = tile_map["Map_Height"].get<int>();
	mapWidth = tile_map["Map_Width"].get<int>();

}

bool TileMaps::isValidTile()
{
	return false;
}

void TileMaps::drawMap(SDL_Renderer *rend)
{
	int i = 0;
	int curTile = 0;
	for (auto& it : tile_map["Layer1"])
	{
		i++;
		curTile = it;

		map[i] = new Tile(x, y, curTile);
	}


	SDL_Rect src;
	src.x = rows;
	src.y = cols;
	src.w = tileWidth;
	src.h = tileHeight;

	SDL_Rect dest;
	dest.x = x;
	dest.y = y;
	dest.w = src.w;
	dest.h = src.h;

	SDL_RenderCopy(rend, renderedMap, &src, &dest);

}

TileMaps::~TileMaps()
{
}
