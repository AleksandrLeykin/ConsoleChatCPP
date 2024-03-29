#include "User.h"


int main() {
	showmenu();
	auto choice = 0;
	cin >> choice;
	while (choice != 3)
	{
		switch (choice)
		{
		case 1:
		{
			shared_ptr<UserRegistration> newUser = make_shared<UserRegistration>();
			break;
		}
		case 2:
		{
			sign_in();
			break;
		}
		}
		showmenu();
		cin >> choice;
	}
	getUser();
	return 0;
}