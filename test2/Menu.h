#pragma once
#include "User01.h"
#include "Chat.h"
#include "Mail.h"

void Menu()
{
	cout << "1)Sign Up\t2)Sign In\t3)Quit" << endl;
	int choice = 0;
	cin >> choice;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	else
	{
		while (choice != 3)
		{
			switch (choice)
			{
			case 1:
			{
				shared_ptr<User> newUser = make_shared<User>;
			}
			}
		}
	}
}