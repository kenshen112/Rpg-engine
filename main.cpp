#include <iostream>
#include <SDL.h>
#include "game.h"

int main(int argc, char *args[]) 
{
	Game *rpg = new Game;
	rpg->init();
	rpg->update();
	return 0;
}