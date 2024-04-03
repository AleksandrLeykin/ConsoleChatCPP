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
			{
				bool fl = sign_in();
				if (fl == false)
				{
					std::cout << "Не верный логин или пароль!!" << std::endl;
					break;
				}
			}
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

	//меню действий (написать/прочитать)
	void MenuChoice()
	{
		std::cout << "Выберите дейтсвие:\n"
			<< "1)Ввести сообщение.\t2)Просмотреть сообщения.\t3)Назад.\n";
		int buffer = getValue();
		while (true)

		{
			switch (buffer)
			{
			case 1:
			{
				std::cout << "1)Личное сообщение.\t2)Всем.\n";
				int x = getValue();
				if (x == 1)
				{
					user_selection();
				}
				else
				{
					std::string text = getStringValue();
					for (int i = 0; i < m_data.size(); ++i)
					{
						m_data[i].m_mail.push_back(text);
					}
				}
				return;
			}
			case 2:
			{
				std::cout << "Зарегестрированных пользователей: " << m_data.size() << std::endl;
				for (int i = 0; i < m_data.size(); i++)
				{
					std::cout << (i + 1) << ")." << m_data[i].m_nickName << " ";
				}
				std::cout << "\n";
				std::cout << "Выберите себя." << std::endl;
				int temp = getValue() - 1;
				for (int i = 0; i < m_data[temp].m_mail.size(); ++i)
				{
					std::cout << m_data[temp].m_mail[i] << std::endl;
				}
				return;
			}
			case 3:
				return;
			}

		}
	}
private:
	std::string getStringValue()
	{
		std::cout << "Введите свое сообщение: ";
		std::string str = "";
		std::cin.get();
		getline(std::cin, str);
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
	bool sign_in() {
		std::cout << "Enter your login:" << std::endl;
		std::string buffer_login = "";
		std::cin >> buffer_login;
		int count = 0;
		for (int i = 0; i < m_data.size(); ++i)
		{
			if (m_data[i].m_login == buffer_login)
			{
				std::cout << "Enter password:" << std::endl;
				std::string buffer_password = "";
				std::cin >> buffer_password;				
				if (m_data[i].m_password == buffer_password)
				{
					std::cout << m_data[i].m_nickName << ", welcome!" << std::endl;						
					++count;
				}						
				++count;
			}
			else				
				continue;			
		}
		if (count != 2)
		{
			return false;
		}
		return true;
	}
	
	std::vector<std::string> oldMessage;
	int temp = 0;
};
