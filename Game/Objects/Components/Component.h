#pragma once
#include "../GameObject.h"
class Component
{
public:
	virtual void tick() = 0;
	Component(GameObject parent);
private:
	friend GameObject;
	GameObject parent;
};

