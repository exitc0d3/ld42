#pragma once

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();

	void run(); // Main game loop for logic, events and rendering

private:
	// Call every frame from game loop in run():
	void update(sf::Time deltaTime);
	void render();
	void processEvents();
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

	// Player movement states
	bool _isMovingUp = false;
	bool _isMovingDown = false;
	bool _isMovingLeft = false;
	bool _isMovingRight = false;

	float PlayerSpeed = 50.f;

	sf::Time TimePerFrame = sf::seconds(1.f / 60.f); // Time per logic tick 

	sf::RenderWindow _window;
	sf::CircleShape _player;

};