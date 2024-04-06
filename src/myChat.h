#pragma once

#include <string>
#include <vector>

class myChat
{
public:
	//регистрация вход в чат(registration enter chat)
	void enterChat();
	//набор сообщения (typing message)
	std::string writeMessage();
	//выбор пользователя (user selection)
	void user_selection();
	//меню действий (написать/прочитать) action menu (write/read)
	void MenuChoice();

private:
	std::vector<std::string> oldMessage;
	std::string getStringValue();
	int getValue();
	//функция входа (login function)
	bool sign_in();

};

