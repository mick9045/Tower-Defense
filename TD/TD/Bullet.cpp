#include "Bullet.h"

Bullet::Bullet(int damage, float movementSpeed, sf::Vector2f target, std::shared_ptr<sf::Shape> shape, sf::Vector2f position) :GameObject(shape, position)
{
	Bullet::damage = damage;
	Bullet::movementSpeed = movementSpeed;
	Bullet::target = target;
}

bool Bullet::isAlive(int width, int height)
{
	return(position.x < width && position.y < height && position.x > 0 && position.y > 0);
}

void Bullet::Move()
{	
	sf::Vector2f moved = target - position; 
	int length = sqrt((moved.x*moved.x + moved.y * moved.y));
	moved = sf::Vector2f(moved.x / length, moved.y / length);
	moved.x *= movementSpeed;
	moved.y *= movementSpeed;
	position += moved;
}
