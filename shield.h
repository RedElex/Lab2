#pragma once
#include <string>
#include <windows.h>

using namespace std;

typedef struct
{
	string name;
	int protection;
	int type;
} shield;

shield InitShield(string a, int b, int c); // ������������� ����
shield InputShield(); // ���� ����
void OutputShield (shield b); // ����� ����