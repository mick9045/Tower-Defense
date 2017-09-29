#include "Tower.h"

void Tower::DrawTower(sf::RenderWindow & window, sf::Vector2f position)
{
	towerShape.setRadius(26);

	towerShape.setFillColor(sf::Color(255, 153, 0));
	towerShape.setOutlineThickness(4);
	towerShape.setOutlineColor(sf::Color(255, 0, 0));

	towerShape.setPosition(position);

	window.draw(towerShape);

}