#pragma once
#include "../../Maths/Vector2.h"
#include <SDL.h>
#include <unordered_map>
class KeyboardInput
{
public:
	static KeyboardInput* instance(bool refresh = false);
	Vector2 get_movement_input_raw();
	void handle_key_input();
	void handle_key_down(const SDL_Keycode& press);
	void handle_key_up(const SDL_Keycode& press);
	void reset_tick_vars();
	KeyboardInput();
	std::unordered_map<SDL_Keycode, bool>* pressed = new std::unordered_map<SDL_Keycode, bool>();
private:
	double mx, my = 0;
	
};



