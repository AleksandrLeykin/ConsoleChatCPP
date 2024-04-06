#pragma once

#include "user.h"
#include "myChat.h"

	//����� ���� ������������� (displaying usernames)
    void getPersons()
	{	
		std::cout << "������������������ �������������: " << m_data.size() << std::endl;
		for (int i = 0; i < m_data.size(); i++)
		{
			std::cout << (i + 1) << ")." << m_data[i].m_nickName << " ";
		}
		std::cout << "\n";
	}

	//������ �������(start of the project)
	void startMessengerChat()
	{		
		while (true)
		{
			//���������� ��� ������ � ����� (variable for working with chat)
			std::unique_ptr<myChat> user1 = std::make_unique<myChat>();
			user1->enterChat();

			//������ ���� �������������(list of all users)
			getPersons();
			//�������� ���� ���� ���������, ���� �������� ��������
			//fork either enter a message or view inbox
			user1->MenuChoice();

			std::cout << "������ ���������� ������ � ������������?" << std::endl;
			std::cout << "���� �� �� ������� - y, ���� ��� �� - n" << std::endl;
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
				std::cout << "������ �� ������ ������! ������ ���������� ������:)" << std::endl;
				break;
			}
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
	}
