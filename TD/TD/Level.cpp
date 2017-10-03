#include "Level.h"
#include "Map.h"

void Level::DrawLevel(sf::RenderWindow & window)
{
	sf::CircleShape towerPlanting;
	towerPlanting.setRadius(26);
	towerPlanting.setFillColor(sf::Color(0, 179, 6));
	towerPlanting.setOutlineThickness(4);
	towerPlanting.setOutlineColor(sf::Color(0, 102, 34));
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (map[i][j] == 0)
			{	
				Void.setPosition(j * 64 + 44, i * 64 + 44);
				window.draw(Void);
			}
			if (map[i][j] == 1)
			{
				Way.setPosition(j * 64 + 44, i * 64 + 44);
				window.draw(Way);
			}
			if (map[i][j] == 2)
			{
				Void.setPosition(j * 64 + 44, i * 64 + 44);
				window.draw(Void);
				towerPlanting.setPosition(sf::Vector2f(j * 64 + 48, i * 64 + 48));
				window.draw(towerPlanting);
			}
		}
	}
}

Level::Level()
{
	Way.setSize(sf::Vector2f(64, 64));
	Way.setFillColor(sf::Color(179, 236, 255));

	Void.setSize(sf::Vector2f(60, 60));
	Void.setFillColor(sf::Color(148, 77, 255));

	Void.setOutlineThickness(4);
	Void.setOutlineColor(sf::Color(38, 38, 115));
}
