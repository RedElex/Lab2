#include "enemy.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

enemy AddEnemy(string a, int b, int c) //������������� �����
{
	enemy e;
	e.name = a;
	e.damage = b;
	e.hp = c;
	return e;
}
enemy InputEnemy() // ���� �����
{
	enemy a = {};
	cout << "�������� ��� �����: " << endl;
	cin >> a.name;
	cout << "������� ���� �����: " << endl;
	cin >> a.damage;
	cout << "������� �� �����: " << endl;
	cin >> a.hp;
	return a;
}
void OutputEnemy(enemy b) // ����� �����
{
	cout << "���: ";
	cout << b.name << endl;
	cout << "����: ";
	cout << b.damage << endl;
	cout << "��: ";
	cout << b.hp << endl;
}