#pragma once
#include <SFML\Graphics.hpp>
#include "GameObject.h"

class Bullet : GameObject
{
public:
	Bullet();
	Bullet(int damage, float movementSpeed, sf::Shape &shape, sf::Vector2f position);
	bool isAlive(); //если выходит за пределы поля = false
	void Move(sf::RenderWindow & window);
private:
	int damage; //урон по врагу
	float movementSpeed; //скорость движения пуль

};
