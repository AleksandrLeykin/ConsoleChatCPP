#include "myFunctions.h"


int main(int argc, char* argv)
{
	setlocale(LC_ALL, "ru");

	std::cout << "Консольное приложение!! Console application!!" << std::endl;	
	
		UserRegistration1 sasha("Sasha", "123", "Sasha");
		UserRegistration1 masha("Masha", "12", "Masha");
		
		startMessengerChat();
	
	return 0;
}

