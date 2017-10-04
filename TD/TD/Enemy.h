#pragma once
#include "GameObject.h"
#include <SFML\Graphics.hpp>
#include <vector>
class Enemy : public GameObject
{
private:
	int HP;
	int goldGain;
	int damage;
	sf::Vector2f direction;
	
public:
	std::vector<sf::Vector2i> path;
	void move();
	bool isAlive(); //if hp > 0       = true
	Enemy(int HP, int goldGain, int damage, sf::Vector2f direction, std::shared_ptr<sf::Shape> shape, sf::Vector2f position);
	sf::Vector2f getDirection();
	void setDirection(sf::Vector2f newDirection);

};