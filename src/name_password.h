#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <vector>


struct Persons
{
	Persons() { }
		
	std::string m_name;
	std::string m_password;	
	~Persons() {}
};

//хранение пользователей
std::vector<Persons> m_data;
//вывод имен пользователей
void getPersons()
	{	
	std::cout << "«арегестрированных пользователей: " << m_data.size() << std::endl;
		for (int i = 0; i < m_data.size(); i++)
		{
			std::cout << m_data[i].m_name << " ";
		}
	}

//класс регистрации пользователей
class NamePassword
{
public:
	NamePassword()		
	{				
		std::cout << "¬ведите им€: ";
		m_user.m_name = getValue();
		std::cout << "\n";
		std::cout << "¬ведите пароль: ";
		m_user.m_password = getValue();
		std::cout << "\n";		

		m_data.push_back(m_user);
	}
	NamePassword(const std::string& name, const std::string& password)		
	{
		m_user.m_name = name;
		m_user.m_password = password;
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
		return m_user.m_name;
	}	

private:
	Persons m_user;		
};

