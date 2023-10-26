#include "KeyboardInput.h"
void KeyboardInput::handle_key_input() {
	if (pressed->size() == 0) return;

	// Iterate through key presses and update tick variables.
	for (auto& k : *pressed) {
		if (!k.second) continue;

		switch (k.first) {
		case SDLK_w:
			my = -1;
			break;
		case SDLK_a:
			mx = -1;
			break;
		case SDLK_s:
			my = 1;
			break;
		case SDLK_d:
			mx = 1;
			break;
		}
	}
	
}
void KeyboardInput::handle_key_down(const SDL_Keycode& press) {
	pressed->insert_or_assign(press, true);
}
void KeyboardInput::handle_key_up(const SDL_Keycode& press) {
	pressed->insert_or_assign(press, false);
}
void KeyboardInput::reset_tick_vars() {
	mx = 0;
	my = 0;
}

Vector2 KeyboardInput::get_movement_input_raw() {
	return Vector2(mx, my);
}

KeyboardInput* KeyboardInput::instance(bool refresh) {
	static KeyboardInput* instance;
	if (instance == NULL || refresh) instance = new KeyboardInput();
	
	//instance->pressed->insert_or_assign(SDLK_0, false);
	return instance;
}

KeyboardInput::KeyboardInput() {
	pressed = new std::unordered_map<SDL_Keycode, bool>();

}
