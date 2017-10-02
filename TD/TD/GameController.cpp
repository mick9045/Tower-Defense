#include "GameController.h"

void GameController::DrawGame()
{
	sf::RectangleShape rect(sf::Vector2f(1000, 800));
	rect.setFillColor(sf::Color(51, 133, 255));
	rect.setPosition(sf::Vector2f(0, 0));
	rect.setOutlineThickness(-3);
	rect.setOutlineColor(sf::Color::Blue);
	sf::Event event;
	while (isGame)
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			//if (event.type == sf::Event::Resized)
				//Draw(window);
		}
		window.clear();
		window.draw(rect);
		level.DrawLevel(window);
		window.display();
	

	}
}

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
		menu.MenuRun(window);
		DrawGame();
		window.draw(text);
		window.display();
	}
}

GameController::GameController()
{
	font.loadFromFile("10733.otf");
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	isGame = true;
	window.create(sf::VideoMode(1000, 800), "Tower Defence", sf::Style::Default, settings);
}
