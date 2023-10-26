#include "GameManager.h"
#include "Input/KeyboardInput.h"


GameManager* GameManager::instance() {
	static GameManager* instance;
	if (instance == NULL) instance = new GameManager();
	
	return instance;
}

/*
Constructor for the GameManager, which handles the entire game loop.
Must be called when the game starts.
*/
GameManager::GameManager() {
	window = SDL_CreateWindow("version 24102023", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
	}
	else 
	{
		screenSurface = SDL_GetWindowSurface(window);
	}
	input = KeyboardInput::instance();
}
GameManager::~GameManager() {
	SDL_DestroyWindow(window);
}

void GameManager::input_events() 
{
	input = KeyboardInput::instance(false);
	input->reset_tick_vars();

	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) gameAlive = false;
		else if (e.type == SDL_KEYDOWN) {
			input->handle_key_down(e.key.keysym.sym);
		}
		else if (e.type == SDL_KEYUP) {
			input->handle_key_up(e.key.keysym.sym);
		}
	}

	input->handle_key_input();
}
// This is where all of the game action happens.
void GameManager::game_loop() 
{
	for (auto& object : *objects) {
		object->tick_components();
	}
}
void GameManager::render_stage() 
{
	SDL_FillRect(screenSurface, NULL, 0x000000);
	for (auto& object : *objects) {
		object->render(this->screenSurface);
	}
	SDL_UpdateWindowSurface(window);
}

bool GameManager::is_game_alive() 
{
	return gameAlive;
}

void GameManager::add_object(GameObject* object) {
	objects->push_back(object);
}
