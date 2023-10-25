#include <SDL.h>
#include <stdio.h>
#include <list>
#include "Objects/GameObject.h"

using namespace std;

#pragma once
class GameManager
{
public:
	void input_events();
	void game_loop();
	void render_stage();
	bool is_game_alive();
	GameManager();
	~GameManager();
private:
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;
	list<GameObject*>* objects = new list<GameObject*>();
	
	int screenWidth = 640;
	int screenHeight = 480;
	bool gameAlive = true;
};

