#include "GameManager.h"


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
}
GameManager::~GameManager() {
	SDL_DestroyWindow(window);
}

void GameManager::input_events() 
{
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) gameAlive = false;
	}
}
// This is where all of the game action happens.
void GameManager::game_loop() 
{

}
void GameManager::render_stage() 
{
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
