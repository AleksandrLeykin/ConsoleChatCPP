#pragma once
#include "User01.h"
#include "Mail.h"

class Chat : public User
{
	string _login;
	string _password;

public:
	Chat() {};
	~Chat() {};

};