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
        cout << i+1 << ")" << endl;
        OutputWeapon(w[i]);
    }

    int ChoiceWeapon; // ���������� ������ ������
    do
    {
        cin >> ChoiceWeapon;

    } while (ChoiceWeapon<1||ChoiceWeapon>k);

    shield all_shield[3];//����������� ������ �����
    for (int i = 0; i < 3; i++)
    {
        all_shield[i] = AddShield("", 0, 0);
        all_shield[i] = InputShield();
    }
    cout << "�������� ���" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ")" << endl;
        OutputShield(all_shield[i]);
    }

    int ChoiceShield; // ���������� ������ ����
    do
    {
        cin >> ChoiceShield;

    } while (ChoiceShield <1 || ChoiceShield>k);
    //shield s = AddShield("", 0, 0);
    //s = InputShield();
    //OutputShield(s);

    armor ar = AddArmor("", 0, 0);
    ar = InputArmor();
    OutputArmor(ar);
    
}