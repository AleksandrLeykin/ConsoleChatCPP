#pragma once

#include <string>
#include <vector>

class myChat
{
public:
	//����������� ���� � ���(registration enter chat)
	void enterChat();
	//����� ��������� (typing message)
	std::string writeMessage();
	//����� ������������ (user selection)
	void user_selection();
	//���� �������� (��������/���������) action menu (write/read)
	void MenuChoice();

private:
	std::vector<std::string> oldMessage;
	std::string getStringValue();
	int getValue();
	//������� ����� (login function)
	bool sign_in();

};

