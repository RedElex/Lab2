#pragma once
#include <string>
#include <windows.h>

using namespace std;

typedef struct
{
	string name;
	int damage;
	int hp;
} enemy;
enemy AddEnemy(string a, int b, int c); //������������� �����
enemy InputEnemy(); // ���� �����
void OutputEnemy(enemy b); // ����� �����