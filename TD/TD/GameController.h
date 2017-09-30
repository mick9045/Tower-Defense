#pragma once
#include "Bullet.h"
#include "Enemy.h"
#include "Level.h"
#include <SFML\Graphics.hpp>
#include <vector>


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
	void SFMLWindowProcedure(); //��������� sf::RenderWindow window(sf::VideoMode(700, 700), "Tower Defence"); 
	void TowerController(Tower tower); // ��� ������� �� ����� - ���� ��� �������� �����

	void EnemyPassLab(); // ���� ������ ����� �������� � �������� ��������
private:
	vector <Bullet> bullets;
	vector <Enemy> enemies;
	vector <Tower> tower;

	Level level;
	sf::RenderWindow window;
	sf::Event event;
	int amountOfEnemies; //������ ������� ������� ���������� ������
	int playerGold; //� ��� ������� ������
	int playerHP; //� ��� ������� ��������
	float gameSpeed;
	sf::Shape * buttonBuyTower; //?
};
