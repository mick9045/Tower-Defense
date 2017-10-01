#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "Bullet.h"
#include "Enemy.h"
class Tower : public GameObject
{
private:
	float RangeOfAttack; //������ ����� �����
	int x, y;//������� �������� ����� � �������
	int cost;
	int damage;
public:
	Tower();
	Tower(float RangeOfAttack, int x, int y, int cost, int damage, std::shared_ptr<sf::Shape> shape, sf::Vector2f position);
	Bullet Shoot(float movementSpeed, std::shared_ptr<Enemy> enemy);
	bool Aim(Enemy enemy); //���������, ���� �� ���� � ������� ����� �����. ���� ���� - ���������� ������� ����� ��� �� ���������� �� ���
};
