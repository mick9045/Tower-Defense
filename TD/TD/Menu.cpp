#include "Menu.h"

Menu::Menu(float width, float height)
{
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
}

void Menu::MenuRun(sf::RenderWindow & window)
{
	while (isMenu)
	{
		if(text[1].getGlobalBounds().contains(sf::Mouse::getPosition(window)))
	}
}
