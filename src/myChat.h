#pragma once

#include "name_password.h"

class myChat
{
public:
	//����������� ���� � ���
	void enterChat()
	{
		while (true)
		{
			std::cout << "��� ����� ������� - 1, ��� ����������� - 2, ��� ������ 3: ";
			int number = getValue();
			switch (number)
			{
			case 1:
				sign_in();
				return;
			case 2:
			{
				//NamePassword user;
				//std::shared_ptr<NamePassword> newUser = std::make_shared<NamePassword>();
				std::unique_ptr<NamePassword> newUser = std::make_unique<NamePassword>();
				
			}				
				return;
			case 3:
				return;
			default:
				std::cout << "������ �� ������ ������!!" << "\n";
				break;
			}
		}
	}

	//����� ������������
	void user_selection()
	{
		while (true)
		{
			std::cout << "���� ������ ������� ���������? ";
			int number = getValue();
			if (number < 1 && number > m_data.size())
			{
				std::cout << "������ ������������ �� ����������!!\n";
			}
			else
			{
				for (int i = 0; i < m_data.size(); i++)
				{
					if (number == i + 1)
					{
						std::cout << "�� ������ - " << m_data[i].m_nickName << "\n";
						m_data[i].m_mail.push_back(writeMessage());
					}
					continue;
				}
				return;
			}
		}	
 	}

	//����� ���������
	std::string writeMessage()
	{		
		std::string message = getStringValue();			
		oldMessage.push_back(message);
		return message;
	}
	//�������� ���������� ���������
	std::string getOldMessage()
	{
		return oldMessage[oldMessage.size() - 1];
	}
private:
	std::string getStringValue()
	{
		std::cout << "������� ���� ���������: ";
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
				std::cout << "����� �� ������ ������! ";
			}	
			else
			return number;
		}		
	}	
	//������� �����.txt
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
						//����������� ������� ������ ��������� � ������ ��������						
					}
					else
						continue;
				}
			}
			else
				continue;
		}
	}
	
	std::vector<std::string> oldMessage;
};
