#include "GameObject.h"
GameObject::GameObject()
{

}

GameObject::GameObject(sf::Shape * shape, sf::Vector2f ObjPosition)
{
	shapePtr = std::shared_ptr<sf::Shape>(shape);
	position = ObjPosition;
}

GameObject::~GameObject()
{
}