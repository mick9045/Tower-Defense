#include "Menu.h"

Menu::Menu(float width, float height)
{
	isMenu = true;
	font.loadFromFile("10733.otf");
	text[0].setString("PLAY");
	text[0].setFont(font);
	text[0].setCharacterSize(40);
	text[0].setPosition(sf::Vector2f(width/2, height / 2 - 80));

	text[1].setString("RULES");
	text[1].setFont(font);
	text[1].setCharacterSize(40);
	text[1].setPosition(sf::Vector2f(width / 2, height / 2 - 40));

	text[2].setString("RECORDS");
	text[2].setFont(font);
	text[2].setCharacterSize(40);
	text[2].setPosition(sf::Vector2f(width / 2, height / 2));

	text[3].setString("EXIT");
	text[3].setFont(font);
	text[3].setCharacterSize(40);
	text[3].setPosition(sf::Vector2f(width / 2, height / 2 + 40));
}

void Menu::Draw(sf::RenderWindow & window)
{
	for (int i = 0; i < 4; i++)
	{
		window.draw(text[i]);
	}
	window.display();
}

void Menu::MenuRun(sf::RenderWindow & window)
{
	sf::Event event;
	while (isMenu)
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::Resized)
				Draw(window);
		}
		text[0].setFillColor(sf::Color::White);
		text[1].setFillColor(sf::Color::White);
		text[2].setFillColor(sf::Color::White);
		text[3].setFillColor(sf::Color::White);

		if (text[0].getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		{ 
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				if (selectedIndex == 1) { isMenu = false; }
			}
			text[0].setFillColor(sf::Color::Red); selectedIndex = 1; 
		}
		if (text[1].getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) { text[1].setFillColor(sf::Color::Red); selectedIndex = 2; }
		if (text[2].getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) { text[2].setFillColor(sf::Color::Red); selectedIndex = 3; }
		if (text[3].getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) { text[3].setFillColor(sf::Color::Red); selectedIndex = 4; }
		window.clear();
		Draw(window);
		
	}
}
