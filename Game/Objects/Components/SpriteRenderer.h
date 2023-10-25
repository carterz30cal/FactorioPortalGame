#pragma once
#include "Renderer.h"
#include <SDL.h>
#include <SDL_image.h>
class SpriteRenderer :
    public Renderer
{
public:
    SDL_Surface* get_render_surface();
    SpriteRenderer(char* file);
private:
    SDL_Surface* texture;
};

