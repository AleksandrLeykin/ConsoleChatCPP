#pragma once

#include "name_password.h"

class myChat
{
public:
	//регистрация вход в чат
	void enterChat()
	{
		while (true)
		{
			int number = getValue();
			switch (number)
			{
			case 1:
				sign_in();
				return;
			case 2:
			{
				NamePassword user;
			}				
				return;
			case 3:
				return;
			default:
				std::cout << "Введен не верный символ!!" << "\n";
				break;
			}
		}
	}

	//набор сообщения
	std::string writeMessage()
	{		
		std::string message = getStringValue();			
		oldMessage.push_back(message);
		return message;
	}
	//просмотр последнего сообщения
	std::string getOldMessage()
	{
		return oldMessage[oldMessage.size() - 1];
	}
private:
	std::string getStringValue()
	{
		std::cout << "Выедите свое сообщение: ";
		std::string str = "";
		std::cin >> str;
		return str;		
	}
	int getValue()
	{
		std::cout << "Для входа нажмите - 1, для регистрации - 2, для выхода 3: ";
		int number;
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		return number;
	}	
	//функция входа.txt
	void sign_in() {
		std::cout << "Enter your login:" << std::endl;
		std::string buffer_login = "";
		std::cin >> buffer_login;
		for (int i = 0; i < m_data.size(); ++i)
		{
			if (m_data[i].m_name == buffer_login)
			{
				std::cout << "Enter password:" << std::endl;
				std::string buffer_password = "";
				std::cin >> buffer_password;
				for (int j = 0; j < m_data.size(); ++j)
				{
					if (m_data[j].m_password == buffer_password)
					{
						std::cout << m_data[j].m_name << ", welcome!" << std::endl;
						//срабатывает функция показа сообщений и выбора действий						
					}
					else
						continue;
				}
			}
			else
				continue;
		}
	}
	
	std::vector<std::string> oldMessage;
};
