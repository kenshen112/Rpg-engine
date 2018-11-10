#include "game.h"

Game::Game() {}

void Game::init() {
  TileMaps map;
  SDL_Init(SDL_INIT_EVERYTHING);
  text.init();
  window = SDL_CreateWindow("Rpg", 12, 12, window_H, window_W, 0);
  rend = SDL_CreateRenderer(window, -1, 0);
  Musungo.init(rend);
  Baddies.init();
  // map.load("/home/kenshen/Projects/Rpg-engine/Data/Maps/test.json", rend);

  if (rend == NULL) {
    std::cout << "Renderer error" << std::endl;
  }
  SDL_RenderClear(rend);
}

/********************************
 * A preliminary Event sender.
 *********************************/
void Game::update() {
  while (active) {
    while (SDL_PollEvent(&e) != 0) {
      LAST = NOW;
      NOW = SDL_GetPerformanceCounter();
      deltaTime = (double)((NOW - LAST) * 1000 / SDL_GetPerformanceFrequency());
      render();
      spriteLoop = deltaTime % 4;
      if (e.type == SDL_KEYDOWN) {
        switch (e.key.keysym.sym) {
        case SDLK_LEFT:
          Musungo.enqueue(LEFT);
          Musungo.update();
          SDL_RenderClear(rend);
          break;
        case SDLK_RIGHT:
          Musungo.enqueue(RIGHT);
          Musungo.update();
          SDL_RenderClear(rend);
          break;
        case SDLK_UP:
          Musungo.enqueue(UP);
          Musungo.update();
          SDL_RenderClear(rend);
          break;
        case SDLK_DOWN:
          Musungo.enqueue(DOWN);
          Musungo.update();
          SDL_RenderClear(rend);
          break;
        }
      }

      if (e.type == SDL_QUIT) {
        active = false;
      }
    }
  }
}

void Game::render() {
  Musungo.render(rend, spriteLoop);
  SDL_RenderPresent(rend);
  text.textBox(150, 50, "A test Box", rend);
}

void Game::process() {}

Game::~Game() {
  if (!active) {
    TTF_Quit();
    SDL_DestroyWindow(window);
    SDL_Quit();
  }
}
