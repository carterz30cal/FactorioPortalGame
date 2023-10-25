#include "SpriteRenderer.h"
SpriteRenderer::SpriteRenderer(char* file) {
	this->texture = IMG_Load(file);
}
SDL_Surface* SpriteRenderer::get_render_surface() 
{
	return this->texture;
}
