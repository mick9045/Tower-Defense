#include "GameObject.h"
GameObject::GameObject()
{

}

GameObject::GameObject(std::shared_ptr<sf::Shape> shape, sf::Vector2f ObjPosition)
{
	shapePtr = shape;
	position = ObjPosition;
	shapePtr->setPosition(position);
}

GameObject::~GameObject()
{
}

void GameObject::Draw(sf::RenderWindow & window)
{
	window.draw(*shapePtr);
}

sf::Vector2f GameObject::getPosition()
{
	return position;
}
