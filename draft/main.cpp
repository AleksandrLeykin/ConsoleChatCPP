#include <iostream>

#include "myFunctions.h"
#include "user.h"
#include "myChat.h"

//void startMessengerChat();

int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");

	std::cout << "���������� ����������!!" << std::endl;
	
	//����� ��� �����
	UserRegistration1 sasha("Sasha", "123", "Sasha");
	UserRegistration1 masha("Masha", "12", "Masha");
	
	//������ �������(start of the project)
	startMessengerChat();
		
	return 0;
}

