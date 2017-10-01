#include "GameController.h"

void GameController::Game()
{
	Menu menu(window.getSize().x, window.getSize().y);
	sf::Text text("lel", font, 20);
	text.setPosition(100, 100);
	Level level;
	sf::Vector2f pos;
	int x = 0, y = 0;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseButtonPressed) 
			{
				if (event.key.code == sf::Mouse::Left) //Высчитывает и устанавливает башню по координатам( тут должен изменятсья массив ar)
				{
					sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
					pos = window.mapPixelToCoords(pixelPos);

					x = pos.x / 64;
					y = pos.y / 64;
					cout << x << " " << y << endl;
					cout << x * 64 << " " << y * 64 << endl;

				}
			}
		}
		window.clear();
		//level.DrawLevel(window);
		menu.Draw(window);
		window.draw(text);
		window.display();
	}
}

GameController::GameController()
{
	font.loadFromFile("10733.otf");
	window.create(sf::VideoMode(700, 700), "Tower Defence");
}
