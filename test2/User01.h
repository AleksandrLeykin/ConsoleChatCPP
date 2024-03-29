#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class User
{
protected:
	string m_login;
	string m_password;
	string m_nickname;
	//почтовый ящик
	vector<string> m_mail;

public:
	//создание профиля User
	User()
	{
		cout << "Login:" << endl;
		m_login = getValue();
		cout << "Password:" << endl;
		m_password = getValue();
		cout << "Nickname:" << endl;
		m_nickname = getValue();
	}

	//деструктор
	~User() {};

	//метод чтения сообщения
	string getMail() const
	{
		if (m_mail.size() == 0)
		{
			cout << "You have no messages." << endl;
		}
		else
		{
			for (int i = 0; i < m_mail.size(); ++i)
				return m_mail[i];
		}
	}

	//метод ввода данных
	virtual string getValue() const
	{
		string buffer = "";
		while (true)
		{
			getline(cin, buffer);
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
			}
			else
				return buffer;
		}
	}
};