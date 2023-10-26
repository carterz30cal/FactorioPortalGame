#pragma once
#include "../Components/Component.h"
class Player :
    public Component
{
public:
    static GameObject* create_player();
    virtual void tick();
    Player(GameObject* parent);
};

