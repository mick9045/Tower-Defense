#pragma once
#include <SFML\Graphics.hpp>
#include "GameObject.h"
#include "Enemy.h"
#include <memory>
class Bullet : public GameObject
{
public:

	Bullet(int damage, float movementSpeed, sf::Vector2f target, std::shared_ptr<sf::Shape> shape, sf::Vector2f position);
	bool Bullet::isAlive(int width, int height); //если выходит за пределы поля = false
	void Move();
private:
	int damage; //урон по врагу
	float movementSpeed; //скорость движения пуль
	sf::Vector2f target;
};
