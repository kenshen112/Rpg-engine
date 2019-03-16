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
  int tileHeight; // Do these really belong here?
  int tileWidth;
  int currentTile; // Not So sure about this
  int **data; // Wouldn't this do the same as currentTile?

  SDL_Rect srcTile;
};

class TileMaps {
private:
  std::ifstream fin;
  std::string filePath;
  // Remeber Tile maps can be bigger then the screen
  int gridX;
  int gridY;

  SDL_Texture *renderedMap;
  std::string fileName;
  json tile_map;
  std::vector<Tile> theMapTiles; // better Way to hold this?

public:
  TileMaps();
  void load(std::string fileName, SDL_Renderer *rend);
  bool isValidTile();
  void drawMap(SDL_Renderer *rend);
  ~TileMaps();
};
