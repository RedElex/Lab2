#pragma once
#include <string>
#include <windows.h>

using namespace std;

typedef struct
{
	string name;
	int damage;
	int type;
} weapon;

weapon InitWeapon(string a, int b, int c); // ������������� ������
weapon InputWeapon(); // ���� ������
void OutputWeapon(weapon b); // ����� ������
