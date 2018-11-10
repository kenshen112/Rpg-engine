#pragma once
#include "move.h"
#include "position.h"
#include "sprite.h"
#include "velocity.h"
#include <iostream>
#include <queue>

enum Input { UP, DOWN, LEFT, RIGHT };
enum JobClass { FIGHTER, MAGE, WARRIOR, THEIF, SUMMONER };

class Actor {
private:
  std::queue<Input> eventQueue;
  Velocity vel;
  Sprite spr;
  Position pos;
  Move M;
  int r;

public:
  Actor();
  void setSprite(const char *fileName, SDL_Renderer *rend);
  void init(SDL_Renderer *rend);
  void enqueue(Input playerMoves);
  void update();
  void render(SDL_Renderer *rend, int L = 0);
  ~Actor();
};
