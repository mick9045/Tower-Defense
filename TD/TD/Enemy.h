#pragma once
#include "GameObject.h"
#include <SFML\Graphics.hpp>
class Enemy : public GameObject
{
private:
	int HP;
	int goldGain;
	int damage;
	float movementSpeed;
public:
	
	
	bool isAlive(); //if hp > 0       = true
	Enemy(int HP, int goldGain, int damage, float movementSpeed, std::shared_ptr<sf::Shape> shape, sf::Vector2f position);
};