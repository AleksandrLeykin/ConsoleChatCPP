#pragma once
#include "User01.h"

class Mail : public User
{
	string m_text;

	Mail() {};
	~Mail() {};

	//�������� ��������� � �������� ��� � �������� ���� User
	void sendMessage()
	{
		cout << "Enter a message:" << endl;
		m_text = getValue();
		m_mail.push_back(m_text);
	}
};