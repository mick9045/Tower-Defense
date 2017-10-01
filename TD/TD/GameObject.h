#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
class GameObject
{
public:

	GameObject();
	GameObject(std::shared_ptr<sf::Shape> shape, sf::Vector2f ObjPosition);
	virtual ~GameObject() = 0;
	void Draw(sf::RenderWindow & window);
	sf::Vector2f getPosition();
protected:
	sf::Vector2f position;
	std::shared_ptr<sf::Shape> shapePtr;
};

