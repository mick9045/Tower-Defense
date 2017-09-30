#pragma once
#include "GameObject.h"
#include <SFML\Graphics.hpp>
class Enemy : GameObject
{
private:
	int HP;
	int goldGain;
	int damage;
	float movementSpeed;
public:
	sf::Vector2f GetPosition();
	void Move(sf::RenderWindow & window);
	bool isAlive(); //if hp > 0       = true
	Enemy();
	Enemy(int HP, int goldGain, int damage, float movementSpeed, sf::Shape * shape, sf::Vector2f position);
};