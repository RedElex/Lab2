#include "armor.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

armor AddArmor(string a, int b, int c) //������������� �����
{
	armor ar;
	ar.name = a;
	ar.protection = b;
	ar.type = c;
	return ar;
}
armor InputArmor() // ���� �����
{
	armor a = {};
	cout << "�������� �������� �����: " << endl;
	cin >> a.name;
	cout << "������� ������ �����: " << endl;
	cin >> a.protection;
	cout << "������� ��� �����: " << endl;
	cin >> a.type;
	return a;
}
void OutputArmor(armor b) // ����� �����
{
	cout << "��������: ";
	cout << b.name << endl;
	cout << "������: ";
	cout << b.protection << endl;
	cout << "���: ";
	cout << b.type << endl;
}