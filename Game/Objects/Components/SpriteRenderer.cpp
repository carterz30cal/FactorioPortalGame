#include "SpriteRenderer.h"
SpriteRenderer::SpriteRenderer(const char* file) {
	this->texture = IMG_Load(file);
}
SDL_Surface* SpriteRenderer::get_render_surface() 
{
	return this->texture;
}
