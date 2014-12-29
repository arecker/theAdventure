#include <iostream>
#include <string>
#include "iterator.h"

int main()
{
	ScreenIterator it;
	std::cout << it.CurrentScreen.getMessage() << std::endl;
}