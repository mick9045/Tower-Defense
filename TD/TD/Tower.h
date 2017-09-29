#pragma once
#include <SFML/Graphics.hpp>
class Tower
{
private:
	float RangeOfAttack; //Радиус атаки башни
	sf::Vector2f position; //Позиция башни
	sf::CircleShape towerShape;
	int x, y;//индексы хранения башни
public:
	//Tower();
	void DrawTower(sf::RenderWindow & window, sf::Vector2f position); //Малюем башню 
};
