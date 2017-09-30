#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
class GameObject
{
public:

	GameObject();
	GameObject(sf::Shape * shape, sf::Vector2f ObjPosition);
	virtual ~GameObject() = 0;
	void Draw(sf::RenderWindow & window);
private:
	sf::Vector2f position;
	std::shared_ptr<sf::Shape> shapePtr;
};

