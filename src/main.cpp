#include <iostream>
#include "name_password.h"
#include "myChat.h"

int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");
	
	//����� ��� �����
	NamePassword sasha("Sasha", "123", "Sasha");
	
	NamePassword masha("Masha", "12", "Masha");

	//������ �������
	while (true)
	{				
		std::cout << "���������� ����������!!" << std::endl;
		
		std::unique_ptr<myChat> user1 = std::make_unique<myChat>();
		user1->enterChat();

		//������ ���� �������������
		getPersons();
		//����� ������������
		user1->user_selection();
		//����� ���������
		//user1->writeMessage();

		std::cout << user1->getOldMessage() << std::endl;
		

		std::cout << "������ ���������� ������ � ������������?" << std::endl;
		std::cout << "���� �� �� ������� - y, ���� ��� �� - n" << std::endl;
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
			std::cout << "������ �� ������ ������! ������ ���������� ������:)" << std::endl;
			break;
		}
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}	
		
	return 0;
}