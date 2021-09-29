#include "enemy.h"
#include "weapon.h"
#include "armor.h"
#include "shield.h"
#include "hero.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

hero AddHero(string a, int b, int c) //�������������� �����
{
	hero h;
	h.name = a;
	h.strength = b;
	h.hp = c;
	return h;
}
hero InputHero()
{
	hero a = {};
	cout << "�������� ��� �����: " << endl;
	cin >> a.name;
	cout << "������� ���� �����: " << endl;
	cin >> a.strength;
	cout << "������� �� �����: " << endl;
	cin >> a.hp;
	return a;
}
void OutputHero(hero b)/*������� ������ ����������*/
{
	cout << "���: ";
	cout << b.name << endl;
	cout << "����: ";
	cout << b.strength << endl;
	cout << "��: ";
	cout << b.hp << endl;
}
int Fight(hero a, enemy b, weapon c, shield d, armor e)
{
	int result;
	int loss = b.damage - d.protection - e.protection;
	int attack = a.strength * c.damage;
	int hp_hero = a.hp;
	int hp_enemy = b.hp;
	cout << "hp_hero" << hp_hero << endl;
	cout << "hp_enemy" << hp_enemy << endl;
	cout << "loss" << loss << endl;
	cout << "attack" << attack << endl;
	do
	{
		if (loss > 0)
			hp_hero = hp_hero - loss;
		hp_enemy = hp_enemy - attack;
		cout << "hp_hero" << hp_hero << "hp_enemy" << hp_enemy << endl;

	} while (hp_hero>0&&hp_enemy>0);

	if (hp_hero < 1)//������ �����
		result = 1;
	if (hp_enemy < 1)//������ �����
		result = 2;
	if (hp_hero < 1 && hp_enemy < 1)//�����
		result = 0;
	return result;
}