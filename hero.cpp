#define _CRT_SECURE_NO_WARNINGS
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