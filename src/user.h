#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <vector>

#include "myFunctions.h"


struct Persons
{
	Persons() { }	

	std::string m_login;
	std::string m_password;
	std::string m_nickName;	

	std::vector<std::string> m_mail;	
};

//хранение пользователей
std::vector<Persons> m_data;

//класс регистрации пользователей
class UserRegistration1 
{
public:	
	UserRegistration1()
	{				
		std::cout << "¬ведите логин: ";
		m_user.m_login = getValue();
		std::cout << "\n";
		std::cout << "¬ведите пароль: ";
		m_user.m_password = getValue();
		std::cout << "\n";	
		std::cout << "¬ведите им€: ";
		m_user.m_nickName = getValue();
		std::cout << "\n";
	
		m_data.push_back(m_user);
	}
	UserRegistration1(const std::string& name, const std::string& password, const std::string nick)
	{
		m_user.m_login = name;
		m_user.m_password = password;
		m_user.m_nickName = nick;
	
		m_data.push_back(m_user);
	}

	UserRegistration1(const UserRegistration1& other) = delete;
	UserRegistration1(const UserRegistration1&& other) = delete;
	UserRegistration1& operator=(const UserRegistration1& other) = delete;
		
	~UserRegistration1() {}

	std::string getName()
	{
		return m_user.m_nickName;
	}	

private:	
	Persons m_user;

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
};

