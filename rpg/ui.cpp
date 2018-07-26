#include "ui.h"


ui::ui()
{
}


void ui::textBox(int w, int h, std::string text, SDL_Renderer *rend)
{
	font = TTF_OpenFont("Sans.ttf", 24);
	box.h = h;
	box.w = w;
	box.x = 300;
	box.y = 300;
	writingSpace = TTF_RenderText_Solid(font, text.c_str(), White);	
	tex = SDL_CreateTextureFromSurface(rend, writingSpace);
	SDL_RenderCopy(rend, tex, NULL, &box);
}


ui::~ui()
{
}
