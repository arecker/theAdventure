#include <iostream>
#include <string>
#include "iterator.h"

int main()
{
	ScreenIterator it;
	do {

		std::cout << it.CurrentScreen.getMessage() << std::endl;
		it.getNext();
		
	} while (it.HasNext);
}