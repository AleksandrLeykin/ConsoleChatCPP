#include <iostream>

#include "myFunctions.h"
#include "user.h"
#include "myChat.h"

//void startMessengerChat();

int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");

	std::cout << "Консольный мессенджер!!" << std::endl;
	
	//имена для теста
	UserRegistration1 sasha("Sasha", "123", "Sasha");
	UserRegistration1 masha("Masha", "12", "Masha");
	
	//запуск проекта(start of the project)
	startMessengerChat();
		
	return 0;
}

