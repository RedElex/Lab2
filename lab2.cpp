// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include "hero.h"
#include "enemy.h"
#include "shield.h"
#include "weapon.h"
#include "armor.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    hero h = AddHero(" ", 0, 0); // �������������� �����
    h = InputHero(); // ������ �������������� �����
    OutputHero(h); // ������� �������������� �����

    enemy e = AddEnemy(" ", 0, 0); // �������������� �����
    e = InputEnemy(); // ������ �������������� �����
    OutputEnemy(e); // ������� �������������� �����

    int k; // ���������� ���������� ������
    cout << "������� ���������� ������ � ���������" << endl;
    do
    {
        cin >> k;
    } while (k < 1);
    weapon* w = new weapon[k]; //������������ ������ ������
    for (int i = 0; i < k; i++)
    {
        w[i] = AddWeapon(" ", 0, 0);
        w[i] = InputWeapon();
    }

    cout << "�������� ������" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << i << ")" << endl;
        OutputWeapon(w[i]);
    }

    int ChoiceWeapon; // ���������� ������ ������
    do
    {
        cin >> ChoiceWeapon;

    } while (ChoiceWeapon<0||ChoiceWeapon>k);

    shield all_shield[2];//����������� ������ �����
    for (int i = 0; i < 2; i++)
    {
        all_shield[i] = AddShield("", 0, 0);
        all_shield[i] = InputShield();
    }
    cout << "�������� ���" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << i << ")" << endl;
        OutputShield(all_shield[i]);
    }

    int ChoiceShield; // ���������� ������ ����
    do
    {
        cin >> ChoiceShield;

    } while (ChoiceShield <0 || ChoiceShield>(2-1));

    armor ar = AddArmor("", 0, 0); // �������������� �����
    ar = InputArmor(); // ������ �����
    OutputArmor(ar); // ������� �����

    int res = 0;
    res = Fight(h, e, w[ChoiceWeapon], all_shield[ChoiceShield], ar); // ��������

    switch (res)
    {
    case 0:
        cout << "�����" << endl;
        break;
    case 1:
        cout << "���������" << endl;
        break;
    case 2:
        cout << "������" << endl;
        break;
    }
}