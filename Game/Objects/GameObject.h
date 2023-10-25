#pragma once
#include "../../Maths/Vector2.h"
#include "Components/Renderer.h"
#include "Components/Component.h"
//#include "../GameManager.h"
#include <list>
using namespace std;

class GameObject
{
public:
	Vector2& get_position();
	void render(SDL_Surface* surface);
	void add_component(Component* component);
	GameObject();
	~GameObject();
protected:
	Vector2 position = Vector2();
	Renderer* renderer = NULL;
	list<Component*>* components = new list<Component*>();
};

