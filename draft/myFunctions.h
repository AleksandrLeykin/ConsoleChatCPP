#pragma once

#include "myChat.h"
#include "user.h"



//вывод имен пользователей
void getPersons()
{
	std::cout << "Зарегестрированных пользователей: " << m_data.size() << std::endl;
	for (int i = 0; i < m_data.size(); i++)
	{
		std::cout << (i + 1) << ")." << m_data[i].m_nickName << " ";
	}
	std::cout << "\n";
}


//запуск проекта(start of the project)
void startMessengerChat()
{
	//запуск проекта
	while (true)
	{
		std::unique_ptr<myChat> user1 = std::make_unique<myChat>();
		user1->enterChat();
		
		//список всех пользователей
		getPersons();
		//развилка либо ввод сообщения, либо просмотр входящих
		user1->MenuChoice();

		//выбор пользователя
		//user1->user_selection();
		//набор сообщения
		//user1->writeMessage();
		//std::cout << user1->getOldMessage() << std::endl;

		std::cout << "Хотите продолжить работу с мессенджером?" << std::endl;
		std::cout << "Если да то нажмите - y, если нет то - n" << std::endl;
		char enterExit;
		std::cin >> enterExit;
		switch (enterExit)
		{
		case 'n':
			return;
			break;
		case 'y':
			break;
		default:
			std::cout << "Введен не верный символ! Значит продолжаем работу:)" << std::endl;
			break;
		}
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}
}


