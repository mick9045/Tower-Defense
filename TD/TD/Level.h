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
	const int map_Height = 9;
	const int map_Width = 10;
	int **ar;
public:
	void DrawLevel(sf::RenderWindow & window);
	Level(); //ar = ar[map_Height][map_Width] =
			//{
			//	0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
			//	0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
			//	0, 0, 1, 1, 1, 1, 1, 1, 1, 0,
			//	0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
			//	0, 1, 1, 1, 1, 1, 1, 1, 1, 0,
			//	0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
			//	0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
			//	0, 1, 1, 1, 1, 1, 1, 1, 1, 0,
			//	0, 0, 0, 0, 0, 0, 0, 0, 1, 0
};
