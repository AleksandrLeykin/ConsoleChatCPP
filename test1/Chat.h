#pragma once
#include "User01.h"
#include "Mail.h"

class Chat : public User
{
	string _login;
	string _password;

public:
	Chat() {};
	~Chat() {};

	string signIn()
	{
		cout << "Login:" << endl;
		_login = getValue();
		if (_login == m_login)
		{
			cout << "Password:" << endl;
			_password = getValue();
			if (_password == m_password)
				cout << "Welcome, " << m_nickname << endl;
			else
			{
				cout << "Wrong password." << endl;
			}
		}
		else
			cout << "Wrong login." << endl;
	}
};