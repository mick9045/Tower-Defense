#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "Bullet.h"
#include "Enemy.h"
class Tower : GameObject
{
private:
	float RangeOfAttack; //Радиус атаки башни
	int x, y;//индексы хранения башни в массиве asdasdasd
	int cost;
	int damage;
public:
	Tower();
	Tower(float RangeOfAttack, int x, int y, int cost, int damage, sf::Shape * shape, sf::Vector2f position); 
	void DrawTower(sf::RenderWindow & window, sf::Vector2f position); //Малюем башню 
	Bullet Shoot(int damage, float movementSpeed, sf::Shape &shape, sf::Vector2f position);
	sf::Vector2f Aim(Enemy enemy); //Проверяем, есть ли враг в радиусе атаки башни. если есть - возвращаем позицию врага что бы стрельнуть по ней
};
