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

weapon AddWeapon(string a, int b, int c); // ������������� ������
weapon InputWeapon(); // ���� ������
void OutputWeapon(weapon b); // ����� ������
