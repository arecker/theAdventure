#include <string>
#include "screen.h"
#include "iterator.h"

ScreenIterator::ScreenIterator()
{
	std::string myString = "Hello.";
	Screen myScreen (myString);
	CurrentScreen = myScreen;
}