#include <SDL.h>
#include <stdio.h>

#pragma once
class GameManager
{
public:
	void input_events();
	void game_loop();
	void render_stage();
	GameManager();
private:
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;

};

