#include "GameObject.h"
void GameObject::render(SDL_Surface* surface) {
	SDL_Surface* blitting = this->renderer->get_render_surface();

	SDL_Rect dest{position.get_x(), this->position.get_y(), 0,0};

	SDL_BlitSurface(blitting, NULL, surface, &dest);
}
Vector2& GameObject::get_position() {
	return position;
}
