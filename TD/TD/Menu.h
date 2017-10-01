#pragma once
#include <SFML\Graphics.hpp>

class Menu
{
private: 
	sf::Font font;
	sf::Text text[4];
	int selectedIndex;
	bool isMenu;
public:
	Menu(float width, float height);
	void Draw(sf::RenderWindow & window);
	void MenuRun();

};