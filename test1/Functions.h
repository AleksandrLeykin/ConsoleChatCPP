#pragma once
#include "User01.h"
#include "Chat.h"
#include "Mail.h"

//������� ����
void Menu()
{
	cout << "1)Sign Up\t2)Sign In\t3)Quit" << endl;
}

//������� ����� ��������
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
