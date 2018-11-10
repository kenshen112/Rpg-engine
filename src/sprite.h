#pragma once
#include "position.h"
#include <SDL.h>
#include <SDL_image.h>
#include <cstdint>
#include <iostream>
class Sprite {

private:
  SDL_Rect sRect, dRect;
  SDL_Texture *tex = NULL;
  SDL_Surface *surf;
  int imgFlags = IMG_INIT_PNG;

public:
  Sprite();
  SDL_Texture *createSprite(const char *fileName, SDL_Renderer *rend);
  SDL_Renderer *drawCharacter(int h, int w, Position &p, SDL_Renderer *rend,
                              std::uint32_t loop = 0);
  ~Sprite();
};
