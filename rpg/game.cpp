#include "game.h"

Game::Game()
{
	
}

void Game::init()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("Rpg", 12, 12, window_H, window_W, 0);
	rend = SDL_CreateRenderer(window, -1, 0);
	Musungo.init(rend);
	Baddies.init();
	Musungo.getCreature()->spr.createSprite("C:/Users/Timothy/source/repos/Rpg-engine/rpg/Sprites/mio.png", rend);

	if (rend == NULL)
	{
		std::cout << "Renderer error" << std::endl;
	}
		SDL_RenderClear(rend);
}

/********************************
* A preliminary Event sender.
*********************************/
void Game::update()
{
	while (active)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			LAST = NOW;
			NOW = SDL_GetPerformanceCounter();
			deltaTime = (double)((NOW - LAST) * 1000 / SDL_GetPerformanceFrequency());
			render();
			spriteLoop = deltaTime * 4;
			if (e.type == SDL_KEYDOWN)
			{
				switch (e.key.keysym.sym)
				{
				case SDLK_LEFT:
					std::cout << "LEFT" << std::endl;
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
			
			if (e.type == SDL_QUIT)
			{
				active = false;
			}
		}
	}
}

void Game::render()
{
	Musungo.render(rend, spriteLoop);
	text.textBox(500, 500, "Test", rend);
	SDL_RenderPresent(rend);
	Baddies.printTest();
}

void Game::process()
{
}

Game::~Game()
{
	if (!active)
	{
		SDL_DestroyWindow(window);
		SDL_Quit();
	}
}
