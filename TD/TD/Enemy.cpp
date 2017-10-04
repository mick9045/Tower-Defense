#include "Enemy.h"


void Enemy::move()
{
	position.x += direction.x;
	position.y += direction.y;
	shapePtr->setPosition(position);
}

bool Enemy::isAlive()
{
	return HP > 0 ? true : false;
}

Enemy::Enemy(int HP, int goldGain, int damage, sf::Vector2f direction, std::shared_ptr<sf::Shape> shape, sf::Vector2f position):GameObject(shape, position)
{
	Enemy::HP = HP;
	Enemy::goldGain = goldGain;
	Enemy::direction = direction;
	Enemy::damage = damage;
	

}

sf::Vector2f Enemy::getDirection()
{
	return direction;
}

void Enemy::setDirection(sf::Vector2f newDirection)
{
	direction = newDirection;
}

