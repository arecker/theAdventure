#include <string>
#include "screen.h"

Screen::Screen(std::string message)
{
	Message = message;
}

std::string Screen::getMessage()
{
	return Message;
}