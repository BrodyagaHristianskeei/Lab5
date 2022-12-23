// Lab5-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>
#include "WeaponClass.h"

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	WeaponClass sword1("Sword 1", 10, 2, ONEHANDED);
	if (sword1.getType() == WeaponType::ONEHANDED)
	{
		cout << "Тип оружия: Одноручное оружие" << endl;
	}
	else
	{
		cout << "Тип оружия: Другой" << endl;
	}

	Player newPlayer = { 10345,"player","nwPsWrD1823" };
	printPlayer(newPlayer);

	MagicWeaponClass magicStaff("MagicStaff", 10, 2, ONEHANDED, 2);
	cout << magicStaff.getAddDamage() << endl;
}