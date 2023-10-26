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
	const Vector2& get_position();
	void set_position(const Vector2& newPosition);
	void render(SDL_Surface* surface);
	void add_component(Component* component);
	void tick_components();
	GameObject();
	GameObject(Renderer* r);
	~GameObject();
protected:
	Vector2* position;
	Renderer* renderer = NULL;
	list<Component*>* components = new list<Component*>();
	
};

