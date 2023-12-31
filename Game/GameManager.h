#pragma once
#include <SDL.h>
#include <stdio.h>
#include <list>
#include "Objects/GameObject.h"
#include "Input/KeyboardInput.h"

using namespace std;
//class GameObject;
class GameManager
{
	friend GameObject;
public:
	static GameManager* instance();
	void input_events();
	void game_loop();
	void render_stage();
	bool is_game_alive();
	GameManager();
	~GameManager();
	KeyboardInput* input;
private:
	void add_object(GameObject* object);

	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;
	list<GameObject*>* objects = new list<GameObject*>();
	int screenWidth = 640;
	int screenHeight = 480;
	bool gameAlive = true;
};

