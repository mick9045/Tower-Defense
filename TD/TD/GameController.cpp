#include "GameController.h"

void GameController::DrawGame()
{
	sf::RectangleShape rect(sf::Vector2f(1000, 800));
	rect.setFillColor(sf::Color(51, 133, 255));
	rect.setPosition(sf::Vector2f(0, 0));
	rect.setOutlineThickness(-3);
	rect.setOutlineColor(sf::Color::Blue);
	sf::Event event;

	sf::CircleShape Tower_;
	sf::CircleShape towerPlanting;
	sf::Text button;

	Tower_.setFillColor(sf::Color(0, 179, 6));
	Tower_.setRadius(40);
	Tower_.setOutlineThickness(4);
	Tower_.setOutlineColor(sf::Color(0, 102, 34));
	Tower_.setPosition(sf::Vector2f(window.getSize().x / 5 * 4, 44));

	button.setString("Buy");
	button.setFont(font);
	button.setCharacterSize(40);
	button.setPosition(sf::Vector2f(window.getSize().x / 4 * 3 + 40 + Tower_.getRadius() / 2, (40 + Tower_.getRadius() * 2 + Tower_.getOutlineThickness())));
	towerPlanting = Tower_;
	towerPlanting.setRadius(26);
	while (isGame)
	{
		towerPlanting.setFillColor(sf::Color(0, 179, 6));
		mouseCoords = sf::Mouse::getPosition(window);
		convertedMouseCoords = window.mapPixelToCoords(mouseCoords);
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				if (isPlanting == true)
				{
					if (convertedMouseCoords.x > 44 && convertedMouseCoords.x < 640 + 44 && convertedMouseCoords.y > 44 && convertedMouseCoords.y < 576 + 44)
					{
						if (level.map[y][x] == 0)
						{
							level.map[y][x] = 2;
							isPlanting = false;
						}
					}
				}
			}
			if (button.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
			{

				button.setFillColor(sf::Color::Red);

				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					isPlanting = true;
				}
			}
			button.setFillColor(sf::Color::White);

			//if (event.type == sf::Event::Resized)
				//Draw(window);
		}
		if (isPlanting)
		{
			if (convertedMouseCoords.x > 44 && convertedMouseCoords.x < 640 + 44 && convertedMouseCoords.y > 44 && convertedMouseCoords.y < 576 + 44)
			{
				x = (convertedMouseCoords.x - 44) / 64;
				y = (convertedMouseCoords.y - 44) / 64;
				cout << x << " " << y << endl;
				towerPlanting.setPosition(sf::Vector2f(x * 64 + 48, y * 64 + 48));
				if (level.map[y][x] == 1)
				{
					towerPlanting.setFillColor(sf::Color::Red);
				}
			}

		}

		window.clear();
		window.draw(rect);
		window.draw(button);
		window.draw(Tower_);
		level.DrawLevel(window);
		window.draw(towerPlanting);
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
	isGame = true;
	playerGold = 200;
	playerHP = 10;
	window.create(sf::VideoMode(1000, 800), "Tower Defence");
}
