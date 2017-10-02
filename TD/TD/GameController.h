#pragma once
#include "Bullet.h"
#include "Enemy.h"
#include "Level.h"
#include <SFML\Graphics.hpp>
#include <vector>
#include "Menu.h"

class GameController
{
public:
	void KillBullet(int index);
	void KillEnemy(int index);
	void SellTower(int index);

	void BulletHitEnemy();//?

	void AddBullet(Bullet bullet); //стреляем пулей
	void AddEnemy(Enemy enemy); //спавним врагов, количеством
	void BuyTower(Tower tower); //располагаем башню на ячейках и вычитаем количество золота
	void TowerController(Tower tower); // При нажатии на тавер - меню для удаления башни

	void EnemyPassLab(); // враг прошел через лабиринт и отнимает здоровье

	void DrawGame();
	void Game();

	GameController();
private:
	vector <Bullet> bullets;
	vector <Enemy> enemies;
	vector <Tower> tower;

	sf::Font font;
	Level level;
	sf::RenderWindow window;
	sf::Event event;
	int amountOfEnemies; //каждый уровень спавним количество врагов
	int playerGold; //у нас столько золота
	int playerHP; //у нас столько здоровья
	float gameSpeed;
	sf::Shape * buttonBuyTower; //?
	int numberOfWave;
	bool isGame;
};
