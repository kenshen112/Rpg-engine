#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "json.hpp"

using json = nlohmann::json;

struct Tile {
  int tileHeight;
  int tileWidth;
  int rows;
  int cols;
  int gid;
  int tileType;
  int **data;

  SDL_Rect srcTile;
};

class TileMaps {
private:
  std::ifstream fin;
  std::string filePath;

  SDL_Texture *renderedMap;
  std::string fileName;
  json tile_map;
  std::vector<Tile> theMapTiles;

public:
  TileMaps();
  void load(std::string fileName, SDL_Renderer *rend);
  bool isValidTile();
  void drawMap(SDL_Renderer *rend);
  ~TileMaps();
};
