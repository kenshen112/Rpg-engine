#include "tileMaps.h"

TileMaps::TileMaps() {}

void TileMaps::load(std::string fileName, SDL_Renderer *rend) {

  json data;
  json layers;
  fin.open(fileName);
  tile_map = json::parse(fin);
  Tile tempLayer;

  // tempLayer.tileHeight = tile_map["tileheight"].get<int>();
  // tempLayer.tileWidth = tile_map["tilewidth"].get<int>();
  layers = tile_map["layers"];
  data = layers["data"];
  for (auto i = data.begin(); i != data.end(); i++) {

    std::cout << i.key() << " " << i.value() << std::endl;

    for (auto j = data.begin(); j != data.end(); j++) {
    }
  }

  tempLayer.gid = tile_map["firstgid"].get<int>();
  theMapTiles.push_back(tempLayer);
}

void TileMaps::drawMap(SDL_Renderer *rend) {
  SDL_Rect src;
  SDL_Rect dest;

  for (int i = 0; i < theMapTiles.size(); i++) {
    src.x = theMapTiles[i].rows;
    src.y = theMapTiles[i].cols;
    src.w = theMapTiles[i].tileWidth;
    src.h = theMapTiles[i].tileHeight;

    dest.x = theMapTiles[i].rows;
    dest.y = theMapTiles[i].cols;
    dest.w = src.w;
    dest.h = src.h;

    SDL_RenderCopy(rend, renderedMap, &src, &dest);
  }
}

TileMaps::~TileMaps() {}
