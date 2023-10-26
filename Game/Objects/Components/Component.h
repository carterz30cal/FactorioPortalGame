#pragma once
//#include "../GameObject.h"

class GameObject;
class Component
{
public:
	virtual void tick() = 0;
	Component(GameObject* parent);
	Component();
	~Component();
protected:
	friend GameObject;
	GameObject* parent;
};

