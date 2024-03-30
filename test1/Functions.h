#pragma once
#include "User01.h"
#include "Chat.h"
#include "Mail.h"

//функция меню
void Menu()
{
	cout << "1)Sign Up\t2)Sign In\t3)Quit" << endl;
}

//функция ввода значения
int getIntValue()
{
	int buffer = 0;
	while (true)
	{
		cin >> buffer;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return buffer;
	}
}
