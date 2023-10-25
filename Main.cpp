#include <SDL.h>
#include <stdio.h>
#include "Game/GameManager.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
	GameManager* game = GameManager::instance();
	while (game->is_game_alive()) {
		game->input_events();
		game->game_loop();
		game->render_stage();
	}

	delete game;

	SDL_Quit();

	return 0;
}