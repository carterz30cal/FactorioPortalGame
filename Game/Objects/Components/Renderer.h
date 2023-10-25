#include <SDL.h>
#pragma once
class Renderer
{
public:
	virtual SDL_Surface* get_render_surface() = 0;
};

