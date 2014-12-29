#include <iostream>
#include <string>
#include "db.h"
#include "screen.h"

int main()
{
	std::string myString = "Hello.";
	Screen myScreen (myString);
	std::cout << myScreen.getMessage() << std::endl;
}