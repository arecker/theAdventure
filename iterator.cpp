#include <string>
#include "screen.h"
#include "iterator.h"

ScreenIterator::ScreenIterator()
{
	CurrentScreen = ScreenIterator::getScreenByID(1);
	HasNext = true;
}

Screen ScreenIterator::getScreenByID(int id)
{
	// Get from Database
	
	// Return new screen
	return Screen ("Hello.");
}

void ScreenIterator::getNext()
{
	HasNext = false;
}