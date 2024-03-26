#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

struct User {
	string _login;
	string _password;
	string _nickname;
	vector<string> _mail;			//контейнер для хранения писем

	User() {};
	~User() {};
	
	//функция для отображение всех сообщений
	void getAllMail() const {
		for (int i = 0; i < _mail.size(); ++i)
		{
			cout << _mail[i] << endl;
		}
	}
	//функция для отображения последнего
	void getLastMail() const {
		cout << (_mail.size() - 1) << endl;
	}
};

vector<User> _data;

void getUser() {
	for (int i = 0; i < _data.size(); ++i)
	{
		cout << _data[i]._nickname << endl;
	}
}

class UserRegistration{
private:
	User _user;
public:
	UserRegistration() {
		cout << "Enter login: " << endl;
		_user._login = getValue();
		cout << "Enter password: " << endl;
		_user._password = getValue();
		cout << "Enter nickname: " << endl;
		_user._nickname = getValue();
		_data.push_back(_user);
	}
	
	~UserRegistration() {};

	string getValue() {
		string buffer = "";
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
};

void showmenu() {
	cout << "1)sign up\t2)sign in\t3)quit" << endl;
}

/*void ShowAction() {
	cout << "1)send\t 2)show" << endl;
	auto choice = 0;
	cin >> choice;
	if (choice == 1)
	{
		send_mail();
	}
	else
		
}*/

void sign_in() {
	cout << "Enter your login:" << endl;
	string buffer_login = "";
	cin >> buffer_login;
	for (int i = 0; i < _data.size(); ++i)
	{
		if (_data[i]._login == buffer_login)
		{
			cout << "Enter password:" << endl;
			string buffer_password = "";
			cin >> buffer_password;
			for (int j = 0; j < _data.size(); ++j)
			{
				if (_data[j]._password == buffer_password)
				{
					cout << _data[j]._nickname << ", welcome!" << endl;
				}
				else
					continue;
			}
		}
		else
			continue;
	}
}

void send_mail() {
	cout << "1)Everyone\t2)someone" << endl;
	auto choice = 0;
	cin >> choice;
	if (choice == 1)						
	{
		cout << "Type mail: " << endl;
		string buffer_mail = "";
		getline(cin, buffer_mail);
		for (int i = 0; i < _data.size(); ++i)
		{
			_data[i]._mail.push_back(buffer_mail);
		}
	}
	else
	{
		for (int i = 0; i < _data.size(); ++i)
		{
			cout << i << ") " << _data[i]._nickname << endl;
		}
		cout << "Enter the number to send mail:" << endl;
		auto number = 0;
		cin >> number;
		cout << "Type mail: " << endl;
		string buffer_mail = "";
		getline(cin, buffer_mail);
		_data[number]._mail.push_back(buffer_mail);
	}
}
