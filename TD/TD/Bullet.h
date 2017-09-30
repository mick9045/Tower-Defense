#pragma once
#include <SFML\Graphics.hpp>
#include "GameObject.h"

class Bullet : GameObject
{
public:
	Bullet();
	Bullet(int damage, float movementSpeed, sf::Shape &shape, sf::Vector2f position);
	bool isAlive(); //���� ������� �� ������� ���� = false
	void Move(sf::RenderWindow & window);
private:
	int damage; //���� �� �����
	float movementSpeed; //�������� �������� ����

};
