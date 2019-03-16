#include "tileMapEditor.h"



tileMapEditor::tileMapEditor()
{
}

void tileMapEditor::drawEditor()
{
}

void tileMapEditor::setCamera()
{
	int X, Y;

	SDL_GetMouseState(&X, &Y);


	//Keep the camera in bounds.
	if (camera.x < 0)
	{
		camera.x = 0;
	}
	if (camera.y < 0)
	{
		camera.y = 0;
	}
	if (camera.x > LEVEL_WIDTH - camera.w)
	{
		camera.x = LEVEL_WIDTH - camera.w;
	}
	if (camera.y > LEVEL_HEIGHT - camera.h)
	{
		camera.y = LEVEL_HEIGHT - camera.h;
	}

}


tileMapEditor::~tileMapEditor()
{
}
