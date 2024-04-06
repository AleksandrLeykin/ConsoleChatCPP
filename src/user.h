#pragma once

#include <iostream>
#include <string>
#include <vector>

struct Persons
{
	std::string m_login;
	std::string m_password;
	std::string m_nickName;

	std::vector<std::string> m_mail;
};

//хранение пользователей только объявление переменной!!(storing users is only a variable declaration!!)
extern std::vector<Persons> m_data;

	//класс регистрации пользователей (user registration class)
	class UserRegistration1
	{
	public:
		
		//конструктор constructor
		UserRegistration1();
		//конструктор для теста (test constructor)
		UserRegistration1(const std::string& name, const std::string& password, const std::string nick);

		UserRegistration1(const UserRegistration1& other) = delete;
		UserRegistration1(const UserRegistration1&& other) = delete;
		UserRegistration1& operator=(const UserRegistration1& other) = delete;

		~UserRegistration1() {}
		std::string getName();

	private:
		 Persons m_user;

		 std::string getValue();

		 void cinClear();
	};

