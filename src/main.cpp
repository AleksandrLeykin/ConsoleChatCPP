#include <iostream>
#include "name_password.h"
#include "myChat.h"

int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");
	
	//имена для теста
	NamePassword sasha("Sasha", "123");
	NamePassword masha("Masha", "12");

	//запуск проекта
	while (true)
	{				
		std::cout << "Консольный мессенджер!!" << std::endl;
		
		myChat user1;
		user1.enterChat();
		user1.writeMessage();
		std::cout << user1.getOldMessage() << std::endl;

		//список всех пользователей
		getPersons();

		std::cout << "Хотите продолжить работу с мессенджером?" << std::endl;
		std::cout << "Если да то нажмите - y, если нет то - n" << std::endl;
		char enterExit;
		std::cin >> enterExit;
		switch (enterExit)
		{
		case 'n':
			return 0;
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
		
	return 0;
}