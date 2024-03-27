#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <vector>


struct Persons
{
	Persons() { }
		
	std::string m_login;
	std::string m_password;
	std::string m_nickName;	
	~Persons() {}
	std::vector<std::string> m_mail;	
};

//�������� �������������
std::vector<Persons> m_data;
//����� ���� �������������
void getPersons()
	{	
	std::cout << "������������������ �������������: " << m_data.size() << std::endl;
		for (int i = 0; i < m_data.size(); i++)
		{
			std::cout << (i + 1) << ")." << m_data[i].m_nickName << " ";
		}
		std::cout << "\n";
	}

//����� ����������� �������������
class NamePassword
{
public:
	NamePassword()		
	{				
		std::cout << "������� �����: ";
		m_user.m_login = getValue();
		std::cout << "\n";
		std::cout << "������� ������: ";
		m_user.m_password = getValue();
		std::cout << "\n";	
		std::cout << "������� ���: ";
		m_user.m_nickName = getValue();
		std::cout << "\n";
	
		m_data.push_back(m_user);
	}
	NamePassword(const std::string& name, const std::string& password, const std::string nick)
	{
		m_user.m_login = name;
		m_user.m_password = password;
		m_user.m_nickName = nick;
	
		m_data.push_back(m_user);
	}

	NamePassword(const NamePassword& other) = delete;
	NamePassword(const NamePassword&& other) = delete;
	NamePassword& operator=(const NamePassword& other) = delete;
	

	const Persons& operator[](int index) const { return m_data[index]; }
	
	~NamePassword() {}

	std::string getValue()
	{
		while (true)
		{
			std::string str = "";			
			std::cin >> str;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
			}
			else
				return str;
		}
	}

	std::string getName()
	{
		return m_user.m_nickName;
	}	

private:
	
	Persons m_user;
};

