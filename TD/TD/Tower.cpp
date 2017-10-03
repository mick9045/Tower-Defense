#include "Tower.h"
#include <memory>
Tower::Tower()
{
}

Tower::Tower(float RangeOfAttack, int cost, int damage, std::shared_ptr<sf::Shape> shape, sf::Vector2f position):GameObject(shape, position)
{
	Tower::RangeOfAttack = RangeOfAttack;
	
	Tower::cost = cost;
	Tower::damage = damage;

}

Bullet Tower::Shoot(float movementSpeed, std::shared_ptr<Enemy> enemy)
{
	std::shared_ptr<sf::Shape> shape (new sf::CircleShape(3));
	shape->setFillColor(sf::Color(255, 0, 0));
	return Bullet(damage, movementSpeed, enemy->getPosition(),shape, position);
}

bool Tower::Aim(Enemy enemy)
{
	sf::Vector2f distanceV = position - enemy.getPosition();
	float distance = sqrt(distanceV.x * distanceV.x + distanceV.y * distanceV.y);
	return (distance < RangeOfAttack);
}

void Tower::Draw(sf::RenderWindow & window)
{
	sf::Vector2f debug = shapePtr->getPosition();
	window.draw(*shapePtr);
}
