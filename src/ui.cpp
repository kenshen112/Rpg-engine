#include "ui.h"


ui::ui()
{
}


SDL_Renderer *ui::textBox(int w, int h, std::string text, SDL_Renderer *rend)
{
	font = TTF_OpenFont("Sans.ttf", 24);
	srcbox.h = h;
	srcbox.w = w;
	destbox.h = h;
	destbox.w = w;
	destbox.x = 300;
	destbox.y = 300;
	TTF_SizeText(font, text.c_str(), &w, &h);
	writingSpace = TTF_RenderText_Solid(font, text.c_str(), White);	
	tex = SDL_CreateTextureFromSurface(rend, writingSpace);
	SDL_RenderCopy(rend, tex, &srcbox, &destbox);
	
	return rend;
}


ui::~ui()
{
}
