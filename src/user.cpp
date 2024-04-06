#include "user.h"

std::vector<Persons> m_data;

 UserRegistration1::UserRegistration1()
	{
		std::cout << "¬ведите логин: ";
		m_user.m_login = getValue();
		cinClear();
		std::cout << "\n";
		std::cout << "¬ведите пароль: ";
		m_user.m_password = getValue();
		cinClear();
		std::cout << "\n";
		std::cout << "¬ведите им€: ";
		m_user.m_nickName = getValue();
		cinClear();
		std::cout << "\n";
				
		m_data.push_back(m_user);
	}

UserRegistration1::UserRegistration1(const std::string& name, const std::string& password, const std::string nick)
	{
		m_user.m_login = name;
		m_user.m_password = password;
		m_user.m_nickName = nick;

		m_data.push_back(m_user);
	}

std::string UserRegistration1::getName()
{
	return m_user.m_nickName;
}

std::string UserRegistration1::getValue()
	{	
		std::string str = "";
		std::cin >> str;
		return str;		
	}

	void UserRegistration1::cinClear()
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}
