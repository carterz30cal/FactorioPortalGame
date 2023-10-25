#pragma once
#include <SDL.h>
class Renderer
{
public:
	virtual SDL_Surface* get_render_surface() = 0;
};

