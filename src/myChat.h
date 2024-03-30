#pragma once

#include "myFunctions.h"
#include "user.h"

class myChat
{
public:
	//регистрация вход в чат
	void enterChat()
	{
		while (true)
		{
			std::cout << "Для входа нажмите - 1, для регистрации - 2, для выхода 3: ";
			int number = getValue();
			switch (number)
			{
			case 1:
				sign_in();
				return;
			case 2:
			{				
				std::unique_ptr<UserRegistration1> newUser = std::make_unique<UserRegistration1>();
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

	//выбор пользователя
	void user_selection()
	{
		while (true)
		{
			std::cout << "Кому хотите послать сообщение? ";
			int number = getValue();
			if (number < 1 || number > m_data.size())
			{
				std::cout << "Такого пользователя не существует!!\n";				
			}
			else
			{
				for (int i = 0; i < m_data.size(); i++)
				{
					if (number == i + 1)
					{
						std::cout << "Вы пишите - " << m_data[i].m_nickName << "\n";
						m_data[i].m_mail.push_back(writeMessage());
					}
					continue;
				}
				return;
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
		std::cout << "Введите свое сообщение: ";
		std::string str = "";
		std::cin >> str;
		return str;		
	}
	
	int getValue()
	{		
		while (true)
		{		
			int number = 0;
			std::cin >> number;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
				std::cout << "Веден не верный символ! ";
			}	
			else
			return number;
		}		
	}	
	//функция входа.txt
	void sign_in() {
		std::cout << "Enter your login:" << std::endl;
		std::string buffer_login = "";
		std::cin >> buffer_login;
		for (int i = 0; i < m_data.size(); ++i)
		{
			if (m_data[i].m_login == buffer_login)
			{
				std::cout << "Enter password:" << std::endl;
				std::string buffer_password = "";
				std::cin >> buffer_password;
				for (int j = 0; j < m_data.size(); ++j)
				{
					if (m_data[j].m_password == buffer_password)
					{
						std::cout << m_data[j].m_nickName << ", welcome!" << std::endl;
						//срабатывает функция показа сообщений и выбора действий						
					}
					else
					//	std::cout << "Не правильный пароль!" << std::endl;
						continue;
				}
			}
			else
				//std::cout << "Не правильный логин!" << std::endl;
				continue;
		}
	}
	
	std::vector<std::string> oldMessage;
};
