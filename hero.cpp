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
	h.my_armor = {};
	h.my_shield = {};
	h.my_weapon = {};
	h.name = a;
	h.strength = b;
	h.hp = c;
	return h;
}
hero InputHero(armor* b, weapon* c, shield* d) // ���� ����������
{
	hero a = {};
	a.my_armor = *b;
	a.my_weapon = *c;
	a.my_shield = *d;
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
	cout << "������: ";
	cout << b.my_armor.protection+b.my_shield.protection << endl;
}

int Fight(hero a, enemy b) // ������� ��������
{
	int result;
	int loss = b.damage - a.my_armor.protection - a.my_shield.protection;
	int attack = a.strength * a.my_weapon.damage;
	int hp_hero = a.hp;
	int hp_enemy = b.hp;
	do
	{
		if (loss > 0)
			hp_hero = hp_hero - loss;
		hp_enemy = hp_enemy - attack;
	} while (hp_hero>0&&hp_enemy>0);
	if (hp_hero < 1)//������ �����
		result = 1;
	if (hp_enemy < 1)//������ �����
		result = 2;
	if (hp_hero < 1 && hp_enemy < 1)//�����
		result = 0;
	return result;
}