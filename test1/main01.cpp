#include "User01.h"
#include "Mail.h"
#include "Chat.h"
#include "Functions.h"

int main()
{
	Menu();
	shared_ptr<User> newUser = make_shared<User>();
	return 0;
}