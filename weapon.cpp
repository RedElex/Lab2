#include "weapon.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

weapon AddWeapon(string a, int b, int c) //������������� ������
{
	weapon w;
	w.name = a;
	w.damage = b;
	w.type= c;
	return w;
}
weapon InputWeapon() // ���� ������
{
	weapon a = {};
	cout << "�������� �������� ������: " << endl;
	cin >> a.name;
	cout << "������� ���� �����: " << endl;
	cin >> a.damage;
	cout << "������� �� �����: " << endl;
	cin >> a.type;
	return a;
}
void OutputWeapon(weapon b) // ����� ������
{
	cout << "��������: ";
	cout << b.name << endl;
	cout << "����: ";
	cout << b.damage << endl;
	cout << "���: ";
	cout << b.type << endl;
}