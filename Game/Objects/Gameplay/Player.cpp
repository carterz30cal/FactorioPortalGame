#include "Player.h"
#include "../GameObject.h"
#include "../Components/SpriteRenderer.h"
#include "../../Input/KeyboardInput.h"
Player::Player(GameObject* parent) {
	this->parent = parent;
}
void Player::tick() {
	const Vector2& change = Vector2(1);

	Vector2 newPosition = parent->get_position() + KeyboardInput::instance()->get_movement_input_raw();

	this->parent->set_position(newPosition);

}

GameObject* Player::create_player() {
	SpriteRenderer* renderer = new SpriteRenderer("placeholder_trevor.jpg");
	
	GameObject* playerObject = new GameObject(renderer);
	Player* player = new Player(playerObject);
	playerObject->add_component(player);

	return playerObject;
}
