#include "Vector2.h"
#include "Renderer.h"
#pragma once
class GameObject
{
public:
	Vector2& get_position();
	void render(SDL_Surface* surface);
protected:
	Vector2* position = new Vector2();
	Renderer* renderer;
};

