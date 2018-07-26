#pragma once
#include <string>
#include <SDL.h>
#include <SDL_ttf.h>
class ui
{
private:
	SDL_Renderer *rend;
	SDL_Rect box;
	TTF_Font *font;
	SDL_Color White = { 255, 255, 255 };
	SDL_Surface *writingSpace;
	SDL_Texture *tex;
	bool isAlive;
public:
	ui();
	void textBox(int w, int h, std::string text, SDL_Renderer *rend);
	~ui();
};

