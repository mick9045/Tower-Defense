#include <SFML/Graphics.hpp>
#include "Level.h"
#include "Tower.h"
#include "Map.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "Tower Defence");
	Level level;
	Tower tower;
	sf::Vector2f pos;
	//---------------------
	bool isMove = false;
	float dX = 0;
	float dY = 0;
	//------------------
	int x = 0, y = 0;
	//------------------
	while (window.isOpen())
	{
		//-----------------
		//std::cout << pixelPos.x << "\n";
		//std::cout << pos.x << "\n";
		//-----------------
		sf::Event event;
		sf::CircleShape towerShape;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseButtonPressed) //
			{
				if (event.key.code == sf::Mouse::Left)
				{
					sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
					pos = window.mapPixelToCoords(pixelPos);

					x = pos.x / 64;
					y = pos.y / 64;
					//ar[x][y] = 2;
					cout << x << " " << y << endl;
					cout << x * 64 << " " << y * 64 << endl;
					
				}
			}
		}
		window.clear();
		//level.DrawLevel(window);
		tower.DrawTower(window, sf::Vector2f((x * 64) + 8, (y * 64) + 8));
		window.display();
	}


	return 0;
}