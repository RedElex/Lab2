#include "shield.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

shield InitShield(string a, int b, int c) //������������� ����
{
	shield s;
	s.name = a;
	s.protection = b;
	s.type = c;
	return s;
}
shield InputShield() // ���� ����
{
	shield a = {};
	cout << "�������� �������� ����: " << endl;
	cin >> a.name;
	cout << "������� ������ ����: " << endl;
	cin >> a.protection;
	cout << "������� ��� ����: " << endl;
	cin >> a.type;
	return a;
}
void OutputShield(shield b) // ����� ����
{
	cout << "��������: ";
	cout << b.name << endl;
	cout << "������: ";
	cout << b.protection << endl;
	cout << "���: ";
	cout << b.type << endl;
}