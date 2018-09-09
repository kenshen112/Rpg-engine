#include "sprite.h"



Sprite::Sprite()
{
	if (!(IMG_Init(imgFlags) & imgFlags))
	{
		std::cout << "Could not initalize SDL Image!" << std::endl;
	}
}

SDL_Renderer* Sprite::drawCharacter(int h, int w, Position &p, SDL_Renderer *rend, int loop)
{
	sRect.h = h;
	sRect.w = w;
	sRect.x = p.getPx() * h;
	sRect.y = 0;
	
	dRect.h = h;
	dRect.w = w;
	dRect.x = p.getPx();
	dRect.y = p.getPy();
	
	SDL_RenderCopy(rend, tex, &sRect, &dRect);

	return rend;
}

SDL_Texture* Sprite::createSprite(const char * fileName, SDL_Renderer *rend)
{

surf = IMG_Load(fileName);

 if (surf == NULL) 
 {
	std::cout << "Texture ERROR: " << SDL_GetError() << std::endl; 
 }
 return tex = SDL_CreateTextureFromSurface(rend, surf);
}

Sprite::~Sprite()
{
}
