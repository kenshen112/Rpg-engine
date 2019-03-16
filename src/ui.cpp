#include "ui.h"

ui::ui() {}

void ui::init() {
  if (TTF_Init() < 0) {
    std::cerr << "Error: " << TTF_GetError() << std::endl;
  }

  if ((font = TTF_OpenFont("Sans.ttf", 24)) < 0) {
    std::cerr << "Font fail" << std::endl;
  }
}

void ui::rectangle(int w, int h, SDL_Renderer *rend) {

  SDL_Rect *sorc = nullptr, *dest = nullptr;

  if (rend == nullptr) {
    std::cerr << "Renderer is NULL" << std::endl;
  }

  else {
    sorc->h = h;
    sorc->w = w;
    dest->h = h;
    dest->w = w;
    dest->x = 300;
    dest->y = 300;
  }
}

void ui::textBox(int w, int h, std::string text, SDL_Renderer *rend) {

  if (rend == NULL) {
    std::cerr << "Null Render error" << std::endl;
  }

  srcbox.h = h;
  srcbox.w = w;
  destbox.h = h;
  destbox.w = w;
  destbox.x = 300;
  destbox.y = 300;
  TTF_SizeText(font, text.c_str(), &w, &h);
  std::cout << "No Segfault here lads" << std::endl;

  if ((writingSpace = TTF_RenderText_Solid(font, text.c_str(), White)) != 0) {
    std::cerr << "WritingSpace fail" << std::endl;
  }

  if ((tex = SDL_CreateTextureFromSurface(rend, writingSpace)) != 0) {
    std::cerr << "Texture failed" << std::endl;
  }
  SDL_RenderCopy(rend, tex, &srcbox, &destbox);

  TTF_CloseFont(font);
}

ui::~ui() {}
