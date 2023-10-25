#include "../../Maths/Vector2.h"
#include "Components/Renderer.h"
#pragma once
class GameObject
{
public:
	Vector2& get_position();
	void render(SDL_Surface* surface);
protected:
	Vector2 position = Vector2();
	Renderer* renderer;
};

