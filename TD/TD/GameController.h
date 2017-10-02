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

	void AddBullet(Bullet bullet); //�������� �����
	void AddEnemy(Enemy enemy); //������� ������, �����������
	void BuyTower(Tower tower); //����������� ����� �� ������� � �������� ���������� ������
	void TowerController(Tower tower); // ��� ������� �� ����� - ���� ��� �������� �����

	void EnemyPassLab(); // ���� ������ ����� �������� � �������� ��������

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
	int amountOfEnemies; //������ ������� ������� ���������� ������
	int playerGold; //� ��� ������� ������
	int playerHP; //� ��� ������� ��������
	float gameSpeed;
	sf::Shape * buttonBuyTower; //?
	int numberOfWave;
	bool isGame;
};
