#include "GameObject.h"
#include "../GameManager.h"
void GameObject::render(SDL_Surface* surface) {
	SDL_Surface* blitting = this->renderer->get_render_surface();

	SDL_Rect test{ 0, 0, 75, 75 };
	SDL_Rect dest{ position->get_x(), position->get_y(), 0,0};

	SDL_BlitSurface(blitting, &test, surface, &dest);
}
const Vector2& GameObject::get_position() {
	return Vector2(*position);
}
void GameObject::set_position(const Vector2& newPosition) {
	delete position;
	position = new Vector2(newPosition);
}

void GameObject::add_component(Component* component) {
	this->components->push_back(component);
}
void GameObject::tick_components() {
	for (auto& component : *components) {
		component->tick();
	}
}

GameObject::GameObject()
{
	position = new Vector2(0, 0);
	GameManager::instance()->add_object(this);
}
GameObject::GameObject(Renderer* r) {
	position = new Vector2(0, 0);
	GameManager::instance()->add_object(this);
	renderer = r;
}
