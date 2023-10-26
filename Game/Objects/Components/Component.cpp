#include "Component.h"
#include "../GameObject.h"
Component::Component(GameObject* parent) {
	this->parent = parent;
	this->parent->add_component(this);
}

Component::Component()
{
	parent = NULL;
}
