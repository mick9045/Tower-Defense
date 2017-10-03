#pragma once
#include <SFML/Graphics.hpp>
#include "Tower.h"
#include <iostream>
#include <list>
#include <iterator> 

using namespace std;
class Level
{
private:
	sf::RectangleShape Way;
	sf::RectangleShape Void;
	
public:
	int map[9][10] = { { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 1, 1, 1, 1, 1, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } };
	void DrawLevel(sf::RenderWindow & window);
	Level(); 
};
