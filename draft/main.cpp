#include <iostream>

#include "myFunctions.h"
#include "user.h"
#include "myChat.h"

//void startMessengerChat();

int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");

	std::cout << "Консольный мессенджер!!" << std::endl;
	
	//запуск проекта(start of the project)
	startMessengerChat();
		
	return 0;
}

