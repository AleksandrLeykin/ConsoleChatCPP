#include <iostream>
#include "name_password.h"
#include "myChat.h"

int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");
	
	//����� ��� �����
	NamePassword sasha("Sasha", "123");
	NamePassword masha("Masha", "12");

	//������ �������
	while (true)
	{				
		std::cout << "���������� ����������!!" << std::endl;
		
		myChat user1;
		user1.enterChat();
		user1.writeMessage();
		std::cout << user1.getOldMessage() << std::endl;

		//������ ���� �������������
		getPersons();

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