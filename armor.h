#pragma once
#include <string>
#include <windows.h>

using namespace std;

typedef struct
{
	string name;
	int protection;
	int type;
} armor;

armor AddArmor(string a, int b, int c); // ������������� �����
armor InputArmor(); // ���� �����
void OutputArmor(armor b); // ����� �����