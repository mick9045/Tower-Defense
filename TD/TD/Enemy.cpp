#include "Enemy.h"


bool Enemy::isAlive()
{
	return HP > 0 ? true : false;
}

Enemy::Enemy(int HP, int goldGain, int damage, float movementSpeed, std::shared_ptr<sf::Shape> shape, sf::Vector2f position):GameObject(shape, position)
{
	Enemy::HP = HP;
	Enemy::goldGain = goldGain;
	Enemy::movementSpeed = movementSpeed;
	Enemy::damage = damage;
}
